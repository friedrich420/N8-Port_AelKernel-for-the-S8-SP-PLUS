/*
 * linux/fs/ext4/crypto_key.c
 *
 * Copyright (C) 2015, Google, Inc.
 *
 * This contains encryption key functions for ext4
 *
 * Written by Michael Halcrow, Ildar Muslukhov, and Uday Savagaonkar, 2015.
 */

#include <keys/encrypted-type.h>
#include <keys/user-type.h>
#include <linux/random.h>
#include <linux/scatterlist.h>
#include <uapi/linux/keyctl.h>
#include <crypto/fmp.h>

#include "ext4.h"
#include "xattr.h"

static void derive_crypt_complete(struct crypto_async_request *req, int rc)
{
	struct ext4_completion_result *ecr = req->data;

	if (rc == -EINPROGRESS)
		return;

	ecr->res = rc;
	complete(&ecr->completion);
}

/**
 * ext4_derive_key_aes() - Derive a key using AES-128-ECB
 * @deriving_key: Encryption key used for derivation.
 * @source_key:   Source key to which to apply derivation.
 * @derived_key:  Derived key.
 *
 * Return: Zero on success; non-zero otherwise.
 */
int ext4_derive_key_aes(char deriving_key[EXT4_AES_128_ECB_KEY_SIZE],
			char source_key[EXT4_AES_256_XTS_KEY_SIZE],
			char derived_key[EXT4_AES_256_XTS_KEY_SIZE])
{
	int res = 0;
	struct ablkcipher_request *req = NULL;
	DECLARE_EXT4_COMPLETION_RESULT(ecr);
	struct scatterlist src_sg, dst_sg;
	struct crypto_ablkcipher *tfm = crypto_alloc_ablkcipher("ecb(aes)", 0,
								0);

	if (IS_ERR(tfm)) {
		res = PTR_ERR(tfm);
		tfm = NULL;
		goto out;
	}
	crypto_ablkcipher_set_flags(tfm, CRYPTO_TFM_REQ_WEAK_KEY);
	req = ablkcipher_request_alloc(tfm, GFP_NOFS);
	if (!req) {
		res = -ENOMEM;
		goto out;
	}
	ablkcipher_request_set_callback(req,
			CRYPTO_TFM_REQ_MAY_BACKLOG | CRYPTO_TFM_REQ_MAY_SLEEP,
			derive_crypt_complete, &ecr);
	res = crypto_ablkcipher_setkey(tfm, deriving_key,
				       EXT4_AES_128_ECB_KEY_SIZE);
	if (res < 0)
		goto out;
	sg_init_one(&src_sg, source_key, EXT4_AES_256_XTS_KEY_SIZE);
	sg_init_one(&dst_sg, derived_key, EXT4_AES_256_XTS_KEY_SIZE);
	ablkcipher_request_set_crypt(req, &src_sg, &dst_sg,
				     EXT4_AES_256_XTS_KEY_SIZE, NULL);
	res = crypto_ablkcipher_encrypt(req);
	if (res == -EINPROGRESS || res == -EBUSY) {
		wait_for_completion(&ecr.completion);
		res = ecr.res;
	}

out:
	if (req)
		ablkcipher_request_free(req);
	if (tfm)
		crypto_free_ablkcipher(tfm);
	return res;
}

void ext4_free_crypt_info(struct ext4_crypt_info *ci)
{
	if (!ci)
		return;

	if (ci->ci_keyring_key)
		key_put(ci->ci_keyring_key);
	if (!ci->private_enc_mode)
		crypto_free_ablkcipher(ci->ci_ctfm);
	kmem_cache_free(ext4_crypt_info_cachep, ci);
}

void ext4_free_encryption_info(struct inode *inode,
			       struct ext4_crypt_info *ci)
{
	struct ext4_inode_info *ei = EXT4_I(inode);
	struct ext4_crypt_info *prev;

	if (ci == NULL)
		ci = ACCESS_ONCE(ei->i_crypt_info);
	if (ci == NULL)
		return;
	prev = cmpxchg(&ei->i_crypt_info, ci, NULL);
	if (prev != ci)
		return;

	ext4_free_crypt_info(ci);
}

static inline int __ext4_get_fek(char *nonce, char *src_key, char *fe_key)
{
#ifdef CONFIG_EXT4_SEC_CRYPTO_EXTENSION
	return ext4_sec_get_key_aes(nonce, src_key, fe_key);
#else
	return ext4_derive_key_aes(nonce, src_key, fe_key);
#endif
}

int _ext4_get_encryption_info(struct inode *inode)
{
	struct ext4_inode_info *ei = EXT4_I(inode);
	struct ext4_crypt_info *crypt_info;
	char full_key_descriptor[EXT4_KEY_DESC_PREFIX_SIZE +
				 (EXT4_KEY_DESCRIPTOR_SIZE * 2) + 1];
	struct key *keyring_key = NULL;
	struct ext4_encryption_key *master_key;
	struct ext4_encryption_context ctx;
	const struct user_key_payload *ukp;
	struct ext4_sb_info *sbi = EXT4_SB(inode->i_sb);
	struct crypto_ablkcipher *ctfm;
	const char *cipher_str;
	char raw_key[EXT4_MAX_KEY_SIZE];
	char mode;
	int res;

	res = ext4_init_crypto();
	if (res)
		return res;

retry:
	crypt_info = ACCESS_ONCE(ei->i_crypt_info);
	if (crypt_info) {
		if (!crypt_info->ci_keyring_key ||
		    key_validate(crypt_info->ci_keyring_key) == 0)
			return 0;
		ext4_free_encryption_info(inode, crypt_info);
		goto retry;
	}

	res = ext4_xattr_get(inode, EXT4_XATTR_INDEX_ENCRYPTION,
				 EXT4_XATTR_NAME_ENCRYPTION_CONTEXT,
				 &ctx, sizeof(ctx));
	if (res < 0) {
		if (!DUMMY_ENCRYPTION_ENABLED(sbi))
			return res;
		ctx.contents_encryption_mode = EXT4_ENCRYPTION_MODE_AES_256_XTS;
		ctx.filenames_encryption_mode =
			EXT4_ENCRYPTION_MODE_AES_256_CTS;
		ctx.flags = 0;
	} else if (res != sizeof(ctx))
		return -EINVAL;
	res = 0;

	crypt_info = kmem_cache_alloc(ext4_crypt_info_cachep, GFP_KERNEL);
	if (!crypt_info)
		return -ENOMEM;

	crypt_info->ci_flags = ctx.flags;
	crypt_info->ci_data_mode = ctx.contents_encryption_mode;
	crypt_info->ci_filename_mode = ctx.filenames_encryption_mode;
#ifdef CONFIG_FMP_EXT4CRYPT_FS
	if (ctx.filenames_encryption_mode == FMP_ENCRYPTION_MODE_AES_256_XTS ||
			ctx.filenames_encryption_mode == FMP_ENCRYPTION_MODE_AES_256_CBC) {
		printk(KERN_WARNING "FMP doesn't support filename encryption mode. \
				Forcely, change it to AES_256_CTS mode\n");
		ctx.filenames_encryption_mode = EXT4_ENCRYPTION_MODE_AES_256_CTS;
	}
#endif /* ifdef CONFIG_FMP_EXT4CRYPT_FS */
	crypt_info->ci_ctfm = NULL;
	crypt_info->ci_keyring_key = NULL;
	memcpy(crypt_info->ci_master_key, ctx.master_key_descriptor,
	       sizeof(crypt_info->ci_master_key));
	if (S_ISREG(inode->i_mode))
		mode = crypt_info->ci_data_mode;
	else if (S_ISDIR(inode->i_mode) || S_ISLNK(inode->i_mode))
		mode = crypt_info->ci_filename_mode;
	else
		BUG();
	switch (mode) {
	case EXT4_ENCRYPTION_MODE_AES_256_XTS:
		cipher_str = "xts(aes)";
		inode->i_mapping->alg = "xts(aes)";
		break;
	case EXT4_ENCRYPTION_MODE_AES_256_CTS:
		cipher_str = "cts(cbc(aes))";
		inode->i_mapping->alg = "cts(cbc(aes))";
		break;
#ifdef CONFIG_FMP_EXT4CRYPT_FS
	case FMP_ENCRYPTION_MODE_AES_256_XTS:
		cipher_str = "xts(fmp)";
		inode->i_mapping->private_algo_mode = FMP_XTS_ALGO_MODE;
		break;
	case FMP_ENCRYPTION_MODE_AES_256_CBC:
		cipher_str = "cbc(fmp)";
		inode->i_mapping->private_algo_mode = FMP_CBC_ALGO_MODE;
		break;
#endif /* ifdef CONFIG_FMP_EXT4CRYPT_FS */
	default:
		printk_once(KERN_WARNING
			    "ext4: unsupported key mode %d (ino %u)\n",
			    mode, (unsigned) inode->i_ino);
		res = -ENOKEY;
		goto out;
	}
	if (DUMMY_ENCRYPTION_ENABLED(sbi)) {
		memset(raw_key, 0x42, EXT4_AES_256_XTS_KEY_SIZE);
		goto got_key;
	}
	memcpy(full_key_descriptor, EXT4_KEY_DESC_PREFIX,
	       EXT4_KEY_DESC_PREFIX_SIZE);
	sprintf(full_key_descriptor + EXT4_KEY_DESC_PREFIX_SIZE,
		"%*phN", EXT4_KEY_DESCRIPTOR_SIZE,
		ctx.master_key_descriptor);
	full_key_descriptor[EXT4_KEY_DESC_PREFIX_SIZE +
			    (2 * EXT4_KEY_DESCRIPTOR_SIZE)] = '\0';
	keyring_key = request_key(&key_type_logon, full_key_descriptor, NULL);
	if (IS_ERR(keyring_key)) {
		static unsigned long int rate = 0;
		/* print error message per one sec */
		if (printk_timed_ratelimit(&rate, 1000))
			printk(KERN_WARNING "ext4: error get keyring! (%s)\n",
			full_key_descriptor);
		res = PTR_ERR(keyring_key);
		keyring_key = NULL;
		goto out;
	}
	crypt_info->ci_keyring_key = keyring_key;
	if (keyring_key->type != &key_type_logon) {
		printk_once(KERN_WARNING
			     "ext4: key type must be logon\n");
		res = -ENOKEY;
		goto out;
	}
	down_read(&keyring_key->sem);
	ukp = user_key_payload(keyring_key);
	if (!ukp) {
		/* key was revoked before we acquired its semaphore */
		res = -EKEYREVOKED;
		up_read(&keyring_key->sem);
		goto out;
	}
	if (ukp->datalen != sizeof(struct ext4_encryption_key)) {
		res = -EINVAL;
		up_read(&keyring_key->sem);
		goto out;
	}
	master_key = (struct ext4_encryption_key *)ukp->data;
	BUILD_BUG_ON(EXT4_ESTIMATED_NONCE_SIZE !=
		     EXT4_KEY_DERIVATION_NONCE_SIZE);
	if (master_key->size != EXT4_AES_256_XTS_KEY_SIZE) {
		printk_once(KERN_WARNING
			    "ext4: key size incorrect: %d\n",
			    master_key->size);
		res = -ENOKEY;
		up_read(&keyring_key->sem);
		goto out;
	}
	res = __ext4_get_fek(ctx.nonce, master_key->raw, raw_key);
	up_read(&keyring_key->sem);
	if (res)
		goto out;
got_key:
	memset(crypt_info->raw_key, 0, EXT4_MAX_KEY_SIZE);
	if (mode == FMP_ENCRYPTION_MODE_AES_256_XTS ||
			mode == FMP_ENCRYPTION_MODE_AES_256_CBC) {
		crypt_info->private_enc_mode = FMP_FILE_ENC_MODE;
		memcpy(crypt_info->raw_key, raw_key, ext4_encryption_key_size(mode));
		memset(inode->i_mapping->key, 0, KEY_MAX_SIZE);
		memcpy(inode->i_mapping->key, crypt_info->raw_key, ext4_encryption_key_size(mode));
		inode->i_mapping->key_length = ext4_encryption_key_size(mode);
	} else {
		crypt_info->private_enc_mode = FMP_BYPASS_MODE;
		ctfm = crypto_alloc_ablkcipher(cipher_str, 0, 0);
		if (!ctfm || IS_ERR(ctfm)) {
			res = ctfm ? PTR_ERR(ctfm) : -ENOMEM;
			printk(KERN_DEBUG
			       "%s: error %d (inode %u) allocating crypto tfm\n",
			       __func__, res, (unsigned) inode->i_ino);
			goto out;
		}
		crypt_info->ci_ctfm = ctfm;
		crypto_ablkcipher_clear_flags(ctfm, ~0);
		crypto_tfm_set_flags(crypto_ablkcipher_tfm(ctfm),
				     CRYPTO_TFM_REQ_WEAK_KEY);
		res = crypto_ablkcipher_setkey(ctfm, raw_key,
					       ext4_encryption_key_size(mode));
		if (res)
			goto out;
	}
	inode->i_mapping->private_enc_mode = crypt_info->private_enc_mode;
	memzero_explicit(raw_key, sizeof(raw_key));
	if (cmpxchg(&ei->i_crypt_info, NULL, crypt_info) != NULL) {
		ext4_free_crypt_info(crypt_info);
		goto retry;
	}
	return 0;

out:
	if (res == -ENOKEY)
		res = 0;
	ext4_free_crypt_info(crypt_info);
	memzero_explicit(raw_key, sizeof(raw_key));
	return res;
}

int ext4_has_encryption_key(struct inode *inode)
{
	struct ext4_inode_info *ei = EXT4_I(inode);

	return (ei->i_crypt_info != NULL);
}

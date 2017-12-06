/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_IMX320_SET_A_H
#define FIMC_IS_CIS_IMX320_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-imx320.h"

const u32 sensor_imx320_setfile_A_Global[] = { /* Fixed*/
	0x0136,	0x1A, 0x01,
	0x0137,	0x00, 0x01,
	0x0808,	0x02, 0x01,
	0x4421,	0x04, 0x01,
	0x5300,	0x00, 0x01,
	0x5C0C,	0x00, 0x01,
	0x5D8A,	0x00, 0x01,
	0x5D8D,	0x00, 0x01,
	0x5D90,	0x00, 0x01,
	0x5D93,	0x00, 0x01,
	0x5F04,	0x01, 0x01,
	0x600A,	0x02, 0x01,
	0x600C,	0x07, 0x01,
	0x6105,	0x40, 0x01,
	0x6106,	0xC7, 0x01,
	0x610E,	0x8C, 0x01,
	0x6110,	0x46, 0x01,
	0x6E25,	0xD4, 0x01,
	0x6E28,	0x01, 0x01,
	0x6F19,	0x00, 0x01,
	0x6F27,	0x00, 0x01,
	0x6F4B,	0x01, 0x01,
	0x6F51,	0x02, 0x01,
	0x9008,	0x01, 0x01,
	0xE07A,	0x01, 0x01,
};

/* 0: 3264 x 2448 @30  MIPI lane: 2, MIPI data rate(Mbps/lane): 1358.5, MIPI Mclk(Mhz): 26 */
/* 1: 2448 x 2448 @30  MIPI lane: 2, MIPI data rate(Mbps/lane): 1358.5, MIPI Mclk(Mhz): 26 */
/* 2: 3264 x 1836 @30  MIPI lane: 2, MIPI data rate(Mbps/lane): 1358.5, MIPI Mclk(Mhz): 26 */
/* 3: 1632 x  918 @60  MIPI lane: 2, MIPI data rate(Mbps/lane):  718.3, MIPI Mclk(Mhz): 26 */
/* 4: 1632 x  918 @30  MIPI lane: 2, MIPI data rate(Mbps/lane):  718.3, MIPI MClk(Mhz): 26 */
/* 5: 1632 x 1224 @30  MIPI lane: 2, MIPI data rate(Mbps/lane):  718.3, MIPI MClk(Mhz): 26 */
/* 6: 1224 x 1224 @30  MIPI lane: 2, MIPI data rate(Mbps/lane):  718.3, MIPI MClk(Mhz): 26 */
/* 7:  800 x  600 @120 MIPI lane: 2, MIPI data rate(Mbps/lane):  718.3, MIPI MClk(Mhz): 26 */
/* 8:  752 x 1328 @15  MIPI lane: 2, MIPI data rate(Mbps/lane): 1358.5, MIPI MClk(Mhz): 26 */
/* 9:  376 x  664 @110 MIPI lane: 2, MIPI data rate(Mbps/lane): 1358.5, MIPI MClk(Mhz): 26 */

const u32 sensor_imx320_setfile_A_3264x2448_30fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x61, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x0A, 0x01,
	0x0341,	0x1A, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0x20, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x00, 0x01,
	0x0901,	0x11, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x01, 0x01,
	0x5C8E,	0x0E, 0x01,
	0x5DDD,	0x0E, 0x01,
	0x5E0E,	0x0E, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x28, 0x01,
	0x3420,	0x01, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x00, 0x01,
	0x0347,	0x08, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x09, 0x01,
	0x034B,	0x97, 0x01,
	0x034C,	0x0C, 0x01,
	0x034D,	0xC0, 0x01,
	0x034E,	0x09, 0x01,
	0x034F,	0x90, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x08, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x0C, 0x01,
	0x040D,	0xC0, 0x01,
	0x040E,	0x09, 0x01,
	0x040F,	0x90, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xA2, 0x01,
	0x030B,	0x02, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x8F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x57, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x8F, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x67, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x67, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x57, 0x01,
	0x0816,	0x01, 0x01,
	0x0817,	0x5F, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x47, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x8F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x0A, 0x01,
	0x0203,	0x10, 0x01,
	0x0224,	0x00, 0x01,
	0x0225,	0xA1, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};

const u32 sensor_imx320_setfile_A_2448x2448_30fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x61, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x0A, 0x01,
	0x0341,	0x1A, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0x20, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x00, 0x01,
	0x0901,	0x11, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x01, 0x01,
	0x5C8E,	0x0E, 0x01,
	0x5DDD,	0x0E, 0x01,
	0x5E0E,	0x0E, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x00, 0x01,
	0x3420,	0x01, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x00, 0x01,
	0x0347,	0x08, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x09, 0x01,
	0x034B,	0x97, 0x01,
	0x034C,	0x09, 0x01,
	0x034D,	0x90, 0x01,
	0x034E,	0x09, 0x01,
	0x034F,	0x90, 0x01,
	0x0408,	0x01, 0x01,
	0x0409,	0xA0, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x09, 0x01,
	0x040D,	0x90, 0x01,
	0x040E,	0x09, 0x01,
	0x040F,	0x90, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xA2, 0x01,
	0x030B,	0x02, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x8F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x57, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x8F, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x67, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x67, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x57, 0x01,
	0x0816,	0x01, 0x01,
	0x0817,	0x5F, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x47, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x8F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x0A, 0x01,
	0x0203,	0x10, 0x01,
	0x0224,	0x00, 0x01,
	0x0225,	0xA1, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};
const u32 sensor_imx320_setfile_A_3264x1836_30fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x61, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x0A, 0x01,
	0x0341,	0x1A, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0x20, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x00, 0x01,
	0x0901,	0x11, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x01, 0x01,
	0x5C8E,	0x0E, 0x01,
	0x5DDD,	0x0E, 0x01,
	0x5E0E,	0x0E, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x28, 0x01,
	0x3420,	0x01, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x01, 0x01,
	0x0347,	0x38, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x08, 0x01,
	0x034B,	0x63, 0x01,
	0x034C,	0x0C, 0x01,
	0x034D,	0xC0, 0x01,
	0x034E,	0x07, 0x01,
	0x034F,	0x2C, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x08, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x0C, 0x01,
	0x040D,	0xC0, 0x01,
	0x040E,	0x07, 0x01,
	0x040F,	0x2C, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xA2, 0x01,
	0x030B,	0x02, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x8F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x57, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x8F, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x67, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x67, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x57, 0x01,
	0x0816,	0x01, 0x01,
	0x0817,	0x5F, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x47, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x8F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x0A, 0x01,
	0x0203,	0x10, 0x01,
	0x0224,	0x00, 0x01,
	0x0225,	0xA1, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};
const u32 sensor_imx320_setfile_A_1632x918_60fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x05, 0x01,
	0x0341,	0x12, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0xF0, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x01, 0x01,
	0x0901,	0x22, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x03, 0x01,
	0x5C8E,	0x0D, 0x01,
	0x5DDD,	0x0D, 0x01,
	0x5E0E,	0x0D, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x2D, 0x01,
	0x3420,	0x01, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x01, 0x01,
	0x0347,	0x38, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x08, 0x01,
	0x034B,	0x63, 0x01,
	0x034C,	0x06, 0x01,
	0x034D,	0x60, 0x01,
	0x034E,	0x03, 0x01,
	0x034F,	0x96, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x04, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x06, 0x01,
	0x040D,	0x60, 0x01,
	0x040E,	0x03, 0x01,
	0x040F,	0x96, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xBA, 0x01,
	0x030B,	0x04, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x5F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x2F, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x47, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x3F, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x3F, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x2F, 0x01,
	0x0816,	0x00, 0x01,
	0x0817,	0xAF, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x27, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x4F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x05, 0x01,
	0x0203,	0x08, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};
const u32 sensor_imx320_setfile_A_1632x918_30fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x03, 0x01,
	0x0341,	0xBA, 0x01,
	0x0342,	0x2B, 0x01,
	0x0343,	0x70, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x01, 0x01,
	0x0901,	0x22, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x03, 0x01,
	0x5C8E,	0x0D, 0x01,
	0x5DDD,	0x0D, 0x01,
	0x5E0E,	0x0D, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x00, 0x01,
	0x3420,	0x02, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x01, 0x01,
	0x0347,	0x38, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x08, 0x01,
	0x034B,	0x63, 0x01,
	0x034C,	0x06, 0x01,
	0x034D,	0x60, 0x01,
	0x034E,	0x03, 0x01,
	0x034F,	0x96, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x04, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x06, 0x01,
	0x040D,	0x60, 0x01,
	0x040E,	0x03, 0x01,
	0x040F,	0x96, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xBA, 0x01,
	0x030B,	0x04, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x5F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x2F, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x47, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x3F, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x3F, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x2F, 0x01,
	0x0816,	0x00, 0x01,
	0x0817,	0xAF, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x27, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x4F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x03, 0x01,
	0x0203,	0xB0, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};
const u32 sensor_imx320_setfile_A_1632x1224_30fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x04, 0x01,
	0x0341,	0xF6, 0x01,
	0x0342,	0x20, 0x01,
	0x0343,	0xA8, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x01, 0x01,
	0x0901,	0x22, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x03, 0x01,
	0x5C8E,	0x0D, 0x01,
	0x5DDD,	0x0D, 0x01,
	0x5E0E,	0x0D, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x00, 0x01,
	0x3420,	0x02, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x00, 0x01,
	0x0347,	0x08, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x09, 0x01,
	0x034B,	0x97, 0x01,
	0x034C,	0x06, 0x01,
	0x034D,	0x60, 0x01,
	0x034E,	0x04, 0x01,
	0x034F,	0xC8, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x04, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x06, 0x01,
	0x040D,	0x60, 0x01,
	0x040E,	0x04, 0x01,
	0x040F,	0xC8, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xBA, 0x01,
	0x030B,	0x04, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x5F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x2F, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x47, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x3F, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x3F, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x2F, 0x01,
	0x0816,	0x00, 0x01,
	0x0817,	0xAF, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x27, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x4F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x04, 0x01,
	0x0203,	0xEC, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};
const u32 sensor_imx320_setfile_A_1224x1224_30fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x04, 0x01,
	0x0341,	0xF6, 0x01,
	0x0342,	0x20, 0x01,
	0x0343,	0xA8, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x01, 0x01,
	0x0901,	0x22, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x03, 0x01,
	0x5C8E,	0x0D, 0x01,
	0x5DDD,	0x0D, 0x01,
	0x5E0E,	0x0D, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x00, 0x01,
	0x3420,	0x02, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x00, 0x01,
	0x0347,	0x08, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x09, 0x01,
	0x034B,	0x97, 0x01,
	0x034C,	0x04, 0x01,
	0x034D,	0xC8, 0x01,
	0x034E,	0x04, 0x01,
	0x034F,	0xC8, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0xD0, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x04, 0x01,
	0x040D,	0xC8, 0x01,
	0x040E,	0x04, 0x01,
	0x040F,	0xC8, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xBA, 0x01,
	0x030B,	0x04, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x5F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x2F, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x47, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x3F, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x3F, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x2F, 0x01,
	0x0816,	0x00, 0x01,
	0x0817,	0xAF, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x27, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x4F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x04, 0x01,
	0x0203,	0xEC, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};
const u32 sensor_imx320_setfile_A_800x600_120fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x02, 0x01,
	0x0341,	0x8C, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0xF0, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x01, 0x01,
	0x0901,	0x44, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x03, 0x01,
	0x5C8E,	0x19, 0x01,
	0x5DDD,	0x19, 0x01,
	0x5E0E,	0x19, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x01, 0x01,
	0x3420,	0x01, 0x01,
	0x0344,	0x00, 0x01,
	0x0345,	0x00, 0x01,
	0x0346,	0x00, 0x01,
	0x0347,	0x20, 0x01,
	0x0348,	0x0C, 0x01,
	0x0349,	0xCF, 0x01,
	0x034A,	0x09, 0x01,
	0x034B,	0x7F, 0x01,
	0x034C,	0x03, 0x01,
	0x034D,	0x20, 0x01,
	0x034E,	0x02, 0x01,
	0x034F,	0x58, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x0A, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x03, 0x01,
	0x040D,	0x20, 0x01,
	0x040E,	0x02, 0x01,
	0x040F,	0x58, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xBA, 0x01,
	0x030B,	0x04, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x5F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x2F, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x47, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x3F, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x3F, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x2F, 0x01,
	0x0816,	0x00, 0x01,
	0x0817,	0xAF, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x27, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x4F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x02, 0x01,
	0x0203,	0x82, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};

const u32 sensor_imx320_setfile_A_752x1328_15fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x14, 0x01,
	0x0341,	0x34, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0x20, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x00, 0x01,
	0x0901,	0x11, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x01, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x00, 0x01,
	0x5C8E,	0x0E, 0x01,
	0x5DDD,	0x0E, 0x01,
	0x5E0E,	0x0E, 0x01,
	0x3420,	0x02, 0x01,
	0x0344,	0x04, 0x01,
	0x0345,	0xF0, 0x01,
	0x0346,	0x02, 0x01,
	0x0347,	0x5C, 0x01,
	0x0348,	0x07, 0x01,
	0x0349,	0xDF, 0x01,
	0x034A,	0x07, 0x01,
	0x034B,	0x8B, 0x01,
	0x034C,	0x02, 0x01,
	0x034D,	0xF0, 0x01,
	0x034E,	0x05, 0x01,
	0x034F,	0x30, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x00, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x02, 0x01,
	0x040D,	0xF0, 0x01,
	0x040E,	0x05, 0x01,
	0x040F,	0x30, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xA2, 0x01,
	0x030B,	0x02, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x8F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x57, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x8F, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x67, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x67, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x57, 0x01,
	0x0816,	0x01, 0x01,
	0x0817,	0x5F, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x47, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x8F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x14, 0x01,
	0x0203,	0x2A, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};

const u32 sensor_imx320_setfile_A_376x664_110fps[] = {
	0x0112,	0x0A, 0x01,
	0x0113,	0x0A, 0x01,
	0x0114,	0x01, 0x01,
	0x0220,	0x00, 0x01,
	0x0221,	0x11, 0x01,
	0x0340,	0x02, 0x01,
	0x0341,	0xC4, 0x01,
	0x0342,	0x0F, 0x01,
	0x0343,	0x20, 0x01,
	0x0381,	0x01, 0x01,
	0x0383,	0x01, 0x01,
	0x0385,	0x01, 0x01,
	0x0387,	0x01, 0x01,
	0x0900,	0x01, 0x01,
	0x0901,	0x22, 0x01,
	0x0902,	0x00, 0x01,
	0x3E6A,	0x01, 0x01,
	0x3F4C,	0x01, 0x01,
	0x3F4D,	0x03, 0x01,
	0x3F7C,	0x00, 0x01,
	0x3F7D,	0x00, 0x01,
	0x5C8E,	0x0D, 0x01,
	0x5DDD,	0x0D, 0x01,
	0x5E0E,	0x0D, 0x01,
	0x3420,	0x02, 0x01,
	0x0344,	0x04, 0x01,
	0x0345,	0xF0, 0x01,
	0x0346,	0x02, 0x01,
	0x0347,	0x5C, 0x01,
	0x0348,	0x07, 0x01,
	0x0349,	0xDF, 0x01,
	0x034A,	0x07, 0x01,
	0x034B,	0x8B, 0x01,
	0x034C,	0x01, 0x01,
	0x034D,	0x78, 0x01,
	0x034E,	0x02, 0x01,
	0x034F,	0x98, 0x01,
	0x0408,	0x00, 0x01,
	0x0409,	0x00, 0x01,
	0x040A,	0x00, 0x01,
	0x040B,	0x00, 0x01,
	0x040C,	0x01, 0x01,
	0x040D,	0x78, 0x01,
	0x040E,	0x02, 0x01,
	0x040F,	0x98, 0x01,
	0x0301,	0x09, 0x01,
	0x0303,	0x04, 0x01,
	0x0305,	0x04, 0x01,
	0x0306,	0x01, 0x01,
	0x0307,	0xA2, 0x01,
	0x030B,	0x02, 0x01,
	0x030D,	0x04, 0x01,
	0x030E,	0x00, 0x01,
	0x030F,	0xE6, 0x01,
	0x0310,	0x00, 0x01,
	0x080A,	0x00, 0x01,
	0x080B,	0x8F, 0x01,
	0x080C,	0x00, 0x01,
	0x080D,	0x57, 0x01,
	0x080E,	0x00, 0x01,
	0x080F,	0x8F, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x67, 0x01,
	0x0812,	0x00, 0x01,
	0x0813,	0x67, 0x01,
	0x0814,	0x00, 0x01,
	0x0815,	0x57, 0x01,
	0x0816,	0x01, 0x01,
	0x0817,	0x5F, 0x01,
	0x0818,	0x00, 0x01,
	0x0819,	0x47, 0x01,
	0xE04C,	0x00, 0x01,
	0xE04D,	0x8F, 0x01,
	0xE04E,	0x00, 0x01,
	0xE04F,	0x1F, 0x01,
	0x0202,	0x02, 0x01,
	0x0203,	0xBA, 0x01,
	0x0224,	0x01, 0x01,
	0x0225,	0xF4, 0x01,
	0x0204,	0x00, 0x01,
	0x0205,	0x00, 0x01,
	0x020E,	0x01, 0x01,
	0x020F,	0x00, 0x01,
	0x0218,	0x01, 0x01,
	0x0219,	0x00, 0x01,
};

const u32 sensor_imx320_setfile_A_3264x1592_30fps[] = {
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x01, 0x01,
	0x0220, 0x61, 0x01,
	0x0221, 0x11, 0x01,
	0x0340, 0x0A, 0x01,
	0x0341, 0x1A, 0x01,
	0x0342, 0x0F, 0x01,
	0x0343, 0x20, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x01, 0x01,
	0x0900, 0x00, 0x01,
	0x0901, 0x11, 0x01,
	0x0902, 0x00, 0x01,
	0x3E6A, 0x01, 0x01,
	0x3F4C, 0x01, 0x01,
	0x3F4D, 0x01, 0x01,
	0x3F7C, 0x00, 0x01,
	0x3F7D, 0x28, 0x01,
	0x5C8E, 0x0E, 0x01,
	0x5DDD, 0x0E, 0x01,
	0x5E0E, 0x0E, 0x01,
	0x3420, 0x01, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x01, 0x01,
	0x0347, 0x38, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xCF, 0x01,
	0x034A, 0x08, 0x01,
	0x034B, 0x63, 0x01,
	0x034C, 0x0C, 0x01,
	0x034D, 0xC0, 0x01,
	0x034E, 0x06, 0x01,
	0x034F, 0x38, 0x01,
	0x0408, 0x00, 0x01,
	0x0409, 0x08, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x7A, 0x01,
	0x040C, 0x0C, 0x01,
	0x040D, 0xC0, 0x01,
	0x040E, 0x06, 0x01,
	0x040F, 0x38, 0x01,
	0x0301, 0x09, 0x01,
	0x0303, 0x04, 0x01,
	0x0305, 0x04, 0x01,
	0x0306, 0x01, 0x01,
	0x0307, 0xA2, 0x01,
	0x030B, 0x02, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xE6, 0x01,
	0x0310, 0x00, 0x01,
	0x080A, 0x00, 0x01,
	0x080B, 0x8F, 0x01,
	0x080C, 0x00, 0x01,
	0x080D, 0x57, 0x01,
	0x080E, 0x00, 0x01,
	0x080F, 0x8F, 0x01,
	0x0810, 0x00, 0x01,
	0x0811, 0x67, 0x01,
	0x0812, 0x00, 0x01,
	0x0813, 0x67, 0x01,
	0x0814, 0x00, 0x01,
	0x0815, 0x57, 0x01,
	0x0816, 0x01, 0x01,
	0x0817, 0x5F, 0x01,
	0x0818, 0x00, 0x01,
	0x0819, 0x47, 0x01,
	0xE04C, 0x00, 0x01,
	0xE04D, 0x8F, 0x01,
	0xE04E, 0x00, 0x01,
	0xE04F, 0x1F, 0x01,
	0x0202, 0x0A, 0x01,
	0x0203, 0x10, 0x01,
	0x0224, 0x00, 0x01,
	0x0225, 0xA1, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	0x0218, 0x01, 0x01,
	0x0219, 0x00, 0x01,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_3264x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1358500000,
	301890000,
	2586,
	3872,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_2448x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1358500000,
	301890000,
	2586,
	3872,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_3264x1836_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1358500000,
	301890000,
	2586,
	3872,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_1632x918_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	718250000,
	319220000,
	1298,
	4080,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_1632x918_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	718250000,
	319220000,
	954,
	11120,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_1632x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	718250000,
	319220000,
	1270,
	8360,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_1224x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	718250000,
	319220000,
	1270,
	8360,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_800x600_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	718250000,
	319220000,
	652,
	4080,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_752x1328_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1358500000,
	301890000,
	5172,
	3872,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_376x664_110fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1358500000,
	301890000,
	708,
	3872,
};

const struct sensor_pll_info_compact sensor_imx320_pllinfo_A_3264x1592_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1358500000,
	301890000,
	2586,
	3872,
};

static const u32 *sensor_imx320_setfiles_A[] = {
        sensor_imx320_setfile_A_3264x2448_30fps,
        sensor_imx320_setfile_A_2448x2448_30fps,
        sensor_imx320_setfile_A_3264x1836_30fps,
        sensor_imx320_setfile_A_1632x918_60fps,
        sensor_imx320_setfile_A_1632x918_30fps,
        sensor_imx320_setfile_A_1632x1224_30fps,
        sensor_imx320_setfile_A_1224x1224_30fps,
        sensor_imx320_setfile_A_800x600_120fps,
        sensor_imx320_setfile_A_752x1328_15fps,
        sensor_imx320_setfile_A_376x664_110fps,
        sensor_imx320_setfile_A_3264x1592_30fps
};

static const u32 sensor_imx320_setfile_A_sizes[] = {
	sizeof(sensor_imx320_setfile_A_3264x2448_30fps) / sizeof(sensor_imx320_setfile_A_3264x2448_30fps[0]),
	sizeof(sensor_imx320_setfile_A_2448x2448_30fps) / sizeof(sensor_imx320_setfile_A_2448x2448_30fps[0]),
	sizeof(sensor_imx320_setfile_A_3264x1836_30fps) / sizeof(sensor_imx320_setfile_A_3264x1836_30fps[0]),
	sizeof(sensor_imx320_setfile_A_1632x918_60fps) / sizeof(sensor_imx320_setfile_A_1632x918_60fps[0]),
	sizeof(sensor_imx320_setfile_A_1632x918_30fps) / sizeof(sensor_imx320_setfile_A_1632x918_30fps[0]),
	sizeof(sensor_imx320_setfile_A_1632x1224_30fps) / sizeof(sensor_imx320_setfile_A_1632x1224_30fps[0]),
	sizeof(sensor_imx320_setfile_A_1224x1224_30fps) / sizeof(sensor_imx320_setfile_A_1224x1224_30fps[0]),
	sizeof(sensor_imx320_setfile_A_800x600_120fps) / sizeof(sensor_imx320_setfile_A_800x600_120fps[0]),
	sizeof(sensor_imx320_setfile_A_752x1328_15fps) / sizeof(sensor_imx320_setfile_A_752x1328_15fps[0]),
	sizeof(sensor_imx320_setfile_A_376x664_110fps) / sizeof(sensor_imx320_setfile_A_376x664_110fps[0]),
	sizeof(sensor_imx320_setfile_A_3264x1592_30fps) / sizeof(sensor_imx320_setfile_A_3264x1592_30fps[0])
};

static const struct sensor_pll_info_compact *sensor_imx320_pllinfos_A[] = {
	&sensor_imx320_pllinfo_A_3264x2448_30fps,
	&sensor_imx320_pllinfo_A_2448x2448_30fps,
	&sensor_imx320_pllinfo_A_3264x1836_30fps,
	&sensor_imx320_pllinfo_A_1632x918_60fps,
	&sensor_imx320_pllinfo_A_1632x918_30fps,
	&sensor_imx320_pllinfo_A_1632x1224_30fps,
	&sensor_imx320_pllinfo_A_1224x1224_30fps,
	&sensor_imx320_pllinfo_A_800x600_120fps,
	&sensor_imx320_pllinfo_A_752x1328_15fps,
	&sensor_imx320_pllinfo_A_376x664_110fps,
	&sensor_imx320_pllinfo_A_3264x1592_30fps
};

#endif

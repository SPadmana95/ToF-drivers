// SPDX-License-Identifier: GPL-2.0
/*
 * Driver for the Analog Devices ADSD3500 chip.
 *
 * Copyright (C) 2022 Analog Devices, All Rights Reserved.
 *
 */

#ifndef _ADI_ADSD3500_REGS_H_
#define _ADI_ADSD3500_REGS_H_

#include <linux/bitfield.h>

#define GET_CHIP_ID_CMD                     0x0112

#define STREAM_ON_CMD                       0x00AD
#define STREAM_ON_VAL                       0x00C5

#define STREAM_OFF_CMD                      0x000C
#define STREAM_OFF_VAL                      0x0002

#define SET_IMAGER_MODE_CMD                 0xDA00
#define SET_IMAGER_MODE_MSK                 GENMASK(7, 0)
#define SET_IMAGER_MODE(x)                  FIELD_PREP(SET_IMAGER_MODE_MSK, x)
#define SET_IMAGER_MODE_DEPTH_EN_MSK        BIT_MASK(0)
#define SET_IMAGER_MODE_DEPTH_EN(x)         FIELD_PREP(SET_IMAGER_MODE_DEPTH_EN_MSK, x)
#define SET_IMAGER_MODE_VC_EN_MSK           BIT_MASK(1)
#define SET_IMAGER_MODE_VC_EN(x)            FIELD_PREP(SET_IMAGER_MODE_VC_EN_MSK, x)
#define SET_IMAGER_MODE_AB_EN_MSK           BIT_MASK(2)
#define SET_IMAGER_MODE_AB_EN(x)            FIELD_PREP(SET_IMAGER_MODE_AB_EN_MSK, x)
#define SET_IMAGER_MODE_AB_AVG_EN_MSK       BIT_MASK(3)
#define SET_IMAGER_MODE_AB_AVG_EN(x)        FIELD_PREP(SET_IMAGER_MODE_AB_AVG_EN_MSK, x)
#define SET_IMAGER_MODE_DEPTH_BITS_MSK      GENMASK(6, 4)
#define SET_IMAGER_MODE_DEPTH_BITS(x)       FIELD_PREP(SET_IMAGER_MODE_DEPTH_BITS_MSK, x)
#define SET_IMAGER_MODE_AB_BITS_MSK         GENMASK(9, 7)
#define SET_IMAGER_MODE_AB_BITS(x)          FIELD_PREP(SET_IMAGER_MODE_AB_BITS_MSK, x)
#define SET_IMAGER_MODE_CONF_BITS_MSK       GENMASK(11, 10)
#define SET_IMAGER_MODE_CONF_BITS(x)        FIELD_PREP(SET_IMAGER_MODE_CONF_BITS_MSK, x)
#define SET_IMAGER_MODE_MIPI_LANES_NR_MSK   GENMASK(13, 12)
#define SET_IMAGER_MODE_MIPI_LANES_NR(x)    FIELD_PREP(SET_IMAGER_MODE_MIPI_LANES_NR_MSK, x)

#define GET_IMAGER_MODE_CMD                 0x0012
#define GET_IMAGER_AB_INVLD_TRSHLD          0x0015
#define GET_IMAGER_CONFIDENCE_TRSHLD        0x0016
#define GET_IMAGER_JBLF_STATE               0x0017
#define GET_IMAGER_JBLF_FILT_SIZE           0x0018

#define SET_FRAMERATE_CMD                   0x0022
#define GET_FRAMERATE_CMD                   0x0023

#define GET_STATUS_CMD                      0x0020

#define READ_REGISTER_CMD                   0xFFFF
#define WRITE_REGISTER_CMD                  0xFFFF

#define READ_IMAGER_REGISTER_CMD(x)         (0xD000 | (0xFFF & x))
#define WRITE_IMAGER_REGISTER_CMD(x)        (0xE000 | (0xFFF & x))

#define SWITCH_TO_BURST_CMD                 0x0019
#define SWITCH_TO_STANDARD_CMD              0xFFFF

#define ADSD3500_CHIP_ID                    0x5931

#endif /* _ADI_ADSD3500_REGS_H_ */

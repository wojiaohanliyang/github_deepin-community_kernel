/*
 * Copyright © 2021 Glenfly Tech Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 */

#ifndef _CBIOS_DIU_VIP_H_
#define _CBIOS_DIU_VIP_H_


#include "../../Device/CBiosDeviceShare.h"

#define VIPI2C_FUNCTION_ENABLE          0x00000100
#define VIPI2C_START_REQUEST            0x00000001
#define VIPI2C_STOP_REQUEST             0x00000002
#define VIPI2C_WDAV                     0x00000004
#define VIPI2C_READ_FINISHED            0x00000008

#define VIP_FMT_RAW_8BIT                0x00 //
#define VIP_FMT_RAW_10BIT               0x00 // 0b0100000
#define VIP_FMT_RAW_16BIT               0x00 // 0b1000000
#define VIP_FMT_RGB444_24BIT_SDR        0x01 // 0b0000001
#define VIP_FMT_RGB444_15BIT_DDR        0x31 // 0b0110001
#define VIP_FMT_RGB444_12BIT_DDR        0x11 // 0b0010001
#define VIP_FMT_YCBCR444_24BIT_SDR      0x02 // 0b0000010
#define VIP_FMT_YCBCR444_15BIT_DDR      0x32 // 0b0110010
#define VIP_FMT_YCBCR444_12BIT_DDR      0x12 // 0b0010010
#define VIP_FMT_YCBCR422_20BIT_SDR_ES   0x2B // 0b0101011
#define VIP_FMT_YCBCR422_20BIT_SDR_SS   0x23 // 0b0100011
#define VIP_FMT_YCBCR422_20BIT_DDR_ES   0x3B // 0b0111011
#define VIP_FMT_YCBCR422_20BIT_DDR_SS   0x33 // 0b0110011
#define VIP_FMT_YCBCR422_16BIT_SDR_ES   0x0B // 0b0001011
#define VIP_FMT_YCBCR422_16BIT_SDR_SS   0x03 // 0b0000011
#define VIP_FMT_YCBCR422_16BIT_DDR_ES   0x1B // 0b0011011
#define VIP_FMT_YCBCR422_16BIT_DDR_SS   0x13 // 0b0010011
#define VIP_FMT_YCBCR422_10BIT_SDR_ES   0x2C // 0b0101100
#define VIP_FMT_YCBCR422_10BIT_SDR_SS   0x24 // 0b0100100
#define VIP_FMT_YCBCR422_8BIT_SDR_ES    0x0C // 0b0001100
#define VIP_FMT_YCBCR422_8BIT_SDR_SS    0x04 // 0b0000100
#define VIP_FMT_YCBCR422_8BIT_DDR_ES    0x1C // 0b0011100
#define VIP_FMT_YCBCR422_8BIT_DDR_SS    0x14 // 0b0010100

typedef struct _CBIOS_PARAM_VIPI2C_DATA {
    CBIOS_U32               Size;
    CBIOS_UCHAR             PortNumber;     // vip i2c port number
    CBIOS_UCHAR             SlaveAddress;   // daughter card's slave address
    CBIOS_UCHAR             Offset;
    CBIOS_UCHAR*            Buffer;
    CBIOS_U32               BufferLen;      // vip i2c buffer size
} CBIOS_PARAM_VIPI2C_DATA, *PCBIOS_PARAM_VIPI2C_DATA;

typedef struct _CBIOS_PARAM_VIPSETCARD_DATA {
    CBIOS_U32             Size;
    CBIOS_U8              PortNumber;     // vip i2c port number
    CBIOS_U32             XRes;
    CBIOS_U32             YRes;
    CBIOS_U32             RefreshRate;
    CBIOS_VIP_FORMAT      VIPFormat;
    //CBIOS_U8              DaughterCard;  // =1, ADV7611 card
} CBIOS_PARAM_VIPSETCARD_DATA, *PCBIOS_PARAM_VIPSETCARD_DATA;

CBIOS_STATUS cbVIPCtl(PCBIOS_VOID pvcbe, PCBIOS_VIP_CTRL_DATA pCbiosVIPCtlData);

#endif

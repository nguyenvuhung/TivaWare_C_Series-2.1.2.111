//*****************************************************************************
//
// fontcmss18i.c - Font definition for the 18pt Cmss italic font.
//
// Copyright (c) 2011-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.2.111 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmss
//     Size: 18 point
//     Bold: no
//     Italic: yes
//     Memory usage: 2260 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 18 point Cmss italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmss18iData[2060] =
{
      5,   7,   0,  17,  64,  15,   5, 194,  50,  49,  65,  65,
     65,  50,  49,  65,  65, 210, 240, 208,  13,   7, 241,  49,
     33,  49,  17,  49,  33,  49,   0,  12,  64,  35,  14,   0,
      6,  17,  49, 129,  49, 145,  49, 129,  49, 145,  49,  92,
     81,  49, 145,  49, 129,  49, 108,  81,  49, 129,  49, 145,
     49, 129,  49, 145,  49, 240, 240,  96,  30,   9,  81, 115,
     85,  65,  17,  17,  49,  33,  81,  33,  81,  17,  99, 115,
    115,  97,  17,  81,  33,  81,  33,  34,  17,  17,  68,   0,
      6,  16,  46,  12, 226,  97,  33,  33,  65,  49,  33,  49,
     49,  49,  49,  49,  49,  33,  65,  33,  33,  81,  33,  33,
     98,  33, 161,  50,  81,  49,  33,  65,  34,  33,  49,  49,
     49,  33,  65,  34,  17,  81,  33,  33,  98,   0,   6,  48,
     32,  12, 240, 227, 145,  17, 129,  33, 129,  33, 129,  17,
    146, 161,  81,  66,  65,  50,  18,  34,  33,  65,  33,  49,
     67,  65,  66, 100,  35,   0,   7,  96,   9,   3, 113,  33,
     17,  33, 240, 240, 224,  22,   7,  81,  81,  81,  82,  81,
     82,  81,  97,  97,  81,  97,  97,  97,  97,  97,  97,  97,
    113,  97, 192,  22,   7,  65,  97, 113,  97,  97,  97,  97,
     97,  97,  97,  81,  97,  97,  81,  97,  97,  81,  81,  81,
    208,  17,   8,  65, 113,  97,  81,  17,  18,  52,  67,  50,
     19,  66,  97,   0,  11,  80,  19,  12,   0,   6,  97, 177,
    177, 161, 177, 177, 107,  97, 161, 177, 177, 177,   0,   6,
    112,   8,   3, 240, 240, 194,  17,  33, 176,   8,   6,   0,
      7,  69,   0,   6, 112,   5,   2, 240, 209, 176,  23,  11,
    145, 145, 161, 145, 161, 145, 161, 145, 161, 145, 161, 145,
    161, 145, 161, 145, 161, 145, 161, 240,  96,  28,   8, 240,
    195,  65,  49,  33,  65,  33,  65,  33,  65,  17,  81,  17,
     66,  17,  65,  33,  65,  33,  50,  33,  49,  67, 240, 240,
    224,  18,   7, 240, 177,  52,  81,  97,  97,  82,  82,  81,
     97,  97,  82,  54, 240, 240,  96,  21,   9, 240, 240,  19,
     66,  34,  49,  65, 129, 129, 113, 113, 113, 113, 113,  98,
    119,   0,   5, 112,  23,   9, 240, 240,  19,  66,  34,  49,
     65, 113, 114,  83, 145, 129, 129,  33,  81,  34,  49,  68,
      0,   6,  16,  23,   9, 240, 240,  50,  99,  83,  97,  17,
     81,  33,  66,  18,  50,  34,  34,  49,  56,  82, 114, 114,
      0,   6,  20,   9, 240, 245,  50, 114, 113, 132,  81,  49,
    129, 129, 129, 113,  50,  34,  68,   0,   6,  16,  25,   8,
    240, 211,  50,  97,  97, 113,  18,  51,  33,  34,  49,  33,
     65,  33,  65,  33,  49,  49,  49,  67, 240, 240, 224,  18,
      9, 240, 215, 113, 114,  98,  98, 113, 114, 113, 114, 113,
    114, 114,   0,   6,  64,  27,   9, 240, 244,  66,  34,  34,
     65,  34,  65,  34,  49,  83,  66,  34,  34,  65,  33,  81,
     33,  81,  33,  65,  68,   0,   6,  16,  26,   9, 240, 240,
     19,  81,  49,  49,  65,  33,  81,  33,  81,  33,  66,  33,
     51,  51,  17, 129, 113, 113,  68,   0,   6,  32,   8,   4,
    240, 226, 240, 162, 240, 112,  12,   5, 240, 240, 114, 240,
    240,  18,  65,  49, 240,  64,  17,   5, 240, 240,  34, 129,
     65,  65,  50,  49,  65,  65,  65,  50,  50,  49, 144,  11,
     13,   0,  13,  27, 240, 240, 171,   0,  11,  80,  18,   6,
    240, 240, 161, 161,  81,  81,  66,  65,  66,  65,  65,  81,
     81,  49,  36, 112,  18,   7, 244,  49,  49,  97,  97,  81,
     81,  81,  97,  81,  97, 240,  66, 240, 240, 160,  37,  10,
    240, 163,  82,  49,  49,  36,  33,  34,  18,  33,  33,  49,
     17,  33,  65,  17,  33,  65,  17,  33,  50,  17,  33,  49,
     33,  33,  34,  34,  35,  66,  65,  69,   0,   6,  80,  28,
     11, 240, 210, 146, 129,  17, 129,  18,  97,  34,  97,  34,
     81,  50,  66,  50,  71,  50,  81,  49,  97,  34,  98,  17,
    114,   0,   7,  29,  11, 240, 165,  82,  65,  66,  66,  49,
     97,  49,  81,  50,  66,  54,  82,  65,  65,  97,  49,  97,
     34,  97,  34,  66,  55,   0,   7,  48,  21,  10, 240, 149,
     65,  65,  49, 129, 145, 129, 145, 145, 145, 145, 146, 145,
     65,  84,   0,   6,  96,  30,  12, 240, 198,  97,  81,  81,
     82,  50,  97,  50,  97,  49, 113,  49, 113,  34, 113,  34,
     97,  50,  97,  49,  97,  65,  81,  71,   0,   8,  16,  19,
     11, 240, 152,  49, 161, 161, 146, 146, 151,  65, 146, 146,
    146, 145, 168,   0,   7,  32,  19,  10, 240, 119,  49, 145,
    145, 130, 130, 135,  49, 130, 130, 130, 129, 145,   0,   7,
     48,  24,  10, 240, 149,  66,  49,  49, 130, 129, 145, 129,
    145, 145,  67,  33,  97,  33,  97,  49,  66,  69,   0,   6,
     80,  30,  12, 240, 178,  82,  49,  98,  49,  97,  65,  97,
     50,  97,  50,  82,  57,  49,  97,  65,  97,  50,  97,  50,
     82,  49,  98,  49,  97,   0,   8,  17,   5, 194,  50,  50,
     49,  65,  50,  50,  50,  49,  65,  50,  50,  50, 240, 208,
     20,   9, 240, 161, 114, 114, 113, 129, 129, 114, 114, 113,
    129, 129,  49,  50,  52,   0,   6,  32,  33,  12, 240, 178,
     82,  49,  82,  65,  66,  81,  50,  82,  34,  98,  18, 113,
     17,  17, 114,  34,  97,  65,  82,  66,  66,  66,  65,  97,
     65,  98,   0,   7, 112,  19,   8, 240,  50,  97, 113, 113,
     98,  98,  97, 113, 113,  98,  98,  97, 119, 240, 240, 176,
     49,  15, 240, 240,  34, 115,  51,  98,  67,  83,  65,  17,
     81,  17,  50,  17,  68,  50,  17,  65,  18,  49,  33,  50,
     17,  65,  33,  49,  33,  65,  33,  33,  49,  50,  34,  17,
     34,  50,  35,  50,  49,  66,  49,  65,  65,  65,   0,   9,
    112,  39,  12, 240, 179,  66,  51,  66,  49,  17,  65,  65,
     17,  65,  50,  18,  49,  50,  18,  34,  49,  49,  34,  49,
     49,  33,  65,  50,  17,  50,  50,  17,  49,  83,  49,  83,
     49,  82,   0,   8,  30,  12, 240, 228,  98,  50,  65,  98,
     33, 129,  33, 129,  17, 145,  17, 145,  17, 130,  17, 129,
     33, 114,  34,  82,  66,  50, 100,   0,   8,  32,  24,  11,
    240, 166,  81,  66,  50,  81,  50,  81,  50,  81,  49,  81,
     65,  66,  54,  82, 146, 145, 161, 146,   0,   8,  34,  12,
    240, 228,  98,  50,  65,  98,  34, 113,  33, 129,  17, 145,
     17, 145,  17, 145,  17, 129,  33,  50,  34,  34,  49,  33,
     66,  35, 101, 178, 178, 240, 240, 144,  30,  11, 240, 166,
     66,  66,  50,  81,  50,  81,  49,  97,  49,  66,  55,  66,
     49,  81,  65,  81,  66,  65,  81,  50,  81,  50,  82,   0,
      7,  16,  21,  10, 240, 149,  65,  65,  49, 145, 145, 147,
    147, 146, 145, 145, 129,  50,  50,  68,   0,   6, 112,  19,
     11, 240, 122,  82, 146, 145, 161, 146, 146, 146, 145, 161,
    146, 146, 146,   0,   7,  96,  31,  11, 240, 130,  82,  34,
     81,  49,  97,  49,  97,  49,  82,  49,  82,  34,  81,  49,
     97,  49,  97,  49,  82,  49,  81,  66,  49, 100,   0,   7,
     80,  30,  11, 240, 114, 113,  18,  98,  18,  97,  34,  82,
     49,  81,  65,  66,  65,  65,  82,  33,  98,  33,  98,  17,
    114,  17, 130, 146,   0,   7,  96,  50,  16, 240, 240,  33,
     97,  97,  18,  67,  66,  18,  67,  65,  34,  49,  18,  50,
     34,  49,  18,  49,  50,  34,  18,  34,  50,  33,  34,  33,
     66,  18,  34,  33,  66,  17,  50,  17,  82,  17,  65,  17,
     98,  82, 114,  82, 113,  98,   0,  10,  96,  29,  13, 240,
    210,  98,  66,  66,  82,  50, 114,  18, 132, 162, 178, 161,
     17, 146,  18, 114,  49,  98,  66,  81,  97,  65, 114,   0,
      8,  64,  25,  11, 240, 114, 113,  18,  98,  33,  82,  50,
     50,  81,  49,  98,  17, 115, 146, 145, 161, 146, 146, 145,
      0,   7, 112,  19,  12, 240, 200, 161, 162, 146, 146, 146,
    161, 162, 146, 146, 161, 161, 169,   0,   7, 112,  22,   7,
    163,  66,  81,  97,  97,  82,  82,  81,  97,  97,  82,  82,
     81,  97,  97,  82,  82,  81,  99,  64,  13,   6, 209,  33,
     33,  33,  17,  33,  34,  18,   0,  10,  80,  22,   7, 163,
     82,  82,  81,  97,  97,  82,  82,  81,  97,  97,  82,  82,
     81,  97,  97,  82,  82,  66,  80,  10,   6, 226,  49,  17,
     33,  49,   0,  11,  48,   7,   2,  97,  17, 240, 240,  16,
      9,   3, 113,  33,  17,  34, 240, 240, 208,  20,   8,   0,
      7,  36,  49,  65, 113,  53,  33,  50,  17,  66,  17,  50,
     36,  17, 240, 240, 192,  26,   8, 240,  50,  97, 113, 113,
     98, 101,  50,  34,  33,  65,  33,  65,  18,  65,  18,  49,
     34,  34,  33,  19, 240, 240, 208,  16,   8,   0,   7,  52,
     34,  97,  97, 113, 113, 114,  49,  52, 240, 240, 208,  25,
      9, 240, 161, 129, 114, 114, 113,  67,  17,  50,  34,  49,
     50,  33,  66,  33,  65,  49,  65,  49,  50,  69,   0,   6,
     17,   8,   0,   7,  51,  50,  49,  33,  65,  23,  17, 113,
    114, 116, 240, 240, 208,  19,   8, 240,  83,  65,  98,  97,
    113,  85,  66,  98,  97, 113, 113,  98,  97,   0,   5, 112,
     26,  11,   0,  10,  19,  18,  65,  49,  81,  65,  81,  65,
     81,  49,  85,  97, 181,  81,  81,  49,  97,  50,  65,  85,
    240,  16,  27,   8, 240,  65, 113,  98,  97, 113, 113,  19,
     35,  33,  34,  49,  33,  65,  33,  65,  33,  50,  18,  49,
     34,  49, 240, 240, 192,  15,   5, 240,  34,  50, 209,  50,
     50,  49,  65,  65,  50,  49, 240, 224,  20,   8, 240, 226,
     98, 240, 113, 113,  98,  97, 113, 113, 113,  98,  98,  97,
     65,  33,  67, 208,  26,   9, 240,  97, 129, 129, 114, 113,
    129,  50,  49,  34,  50,  17,  84,  82,  17,  81,  34,  65,
     49,  50,  50,   0,   5, 112,  17,   5, 209,  50,  49,  65,
     65,  65,  50,  49,  65,  65,  65,  50,  49, 240, 224,  31,
     12,   0,  10,  81,  19,  35,  34,  35,  33,  33,  50,  49,
     18,  49,  65,  18,  49,  65,  17,  65,  50,  17,  50,  49,
     33,  50,  49,   0,   7,  96,  23,   8,   0,   7,  33,  19,
     50,  33,  34,  49,  33,  65,  33,  65,  33,  50,  18,  49,
     34,  49, 240, 240, 192,  21,   9,   0,   8,  36,  65,  50,
     33,  81,  17,  97,  17,  97,  17,  81,  34,  49,  68,   0,
      6,  16,  25,   9,   0,   8,  21,  66,  34,  49,  65,  49,
     65,  34,  65,  34,  49,  50,  34,  49,  19,  65, 114, 114,
    113, 240,  32,  24,   8,   0,   7,  35,  17,  34,  34,  33,
     50,  17,  66,  17,  65,  33,  65,  34,  34,  53,  98,  97,
    113, 113, 176,  16,   7,   0,   6,  49,  18,  50,  66,  82,
     81,  97,  97,  82, 240, 240, 160,  16,   7,   0,   6,  52,
     33,  97,  99,  83,  97,  33,  49,  36, 240, 240, 128,  16,
      5, 240,  98,  49,  65,  52,  33,  65,  49,  65,  65,  65,
     67, 240, 192,  22,   8,   0,   7,  17,  50,  33,  50,  33,
     49,  33,  65,  33,  65,  33,  50,  33,  50,  37, 240, 240,
    208,  21,   8,   0,   7,   1,  81,  18,  49,  34,  34,  34,
     33,  65,  18,  65,  17,  83,  82, 240, 240, 240,  32,  12,
      0,  10,  65,  50,  50,  17,  50,  49,  33,  50,  34,  34,
     17,  17,  33,  50,  17,  17,  18,  51,  33,  17,  67,  33,
     17,  81,  50,   0,   8,  16,  20,  10,   0,   9,   2,  50,
     65,  34,  84, 114, 115,  98,  17,  82,  34,  50,  65,   0,
      6,  80,  25,  10,   0,   9,   1,  81,  50,  49,  66,  34,
     81,  33,  97,  18,  97,  17, 113,  17, 114, 129, 145, 129,
    114, 240,  48,  15,   8,   0,   7,  22,  97,  98,  82,  82,
     82,  82, 102, 240, 240, 192,   8,  10,   0,  12,  73,   0,
     11,  48,   9,  18,   0,  22,  79,   2,   0,  20,  48,  11,
      7, 242,  18,  33,  33,  33,  33,   0,  13,  64,  10,   7,
    240, 114,  33,  17,  34,   0,  13,  48,
};

//*****************************************************************************
//
// The font definition for the 18 point Cmss italic font.
//
//*****************************************************************************
const tFont g_sFontCmss18i =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    16,

    //
    // The height of the font.
    //
    20,

    //
    // The baseline of the font.
    //
    15,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   20,   33,   68,   98,  144,  176,
         185,  207,  229,  246,  265,  273,  281,  286,
         309,  337,  355,  376,  399,  422,  442,  467,
         485,  512,  538,  546,  558,  575,  586,  604,
         622,  659,  687,  716,  737,  767,  786,  805,
         829,  859,  876,  896,  929,  948,  997, 1036,
        1066, 1090, 1124, 1154, 1175, 1194, 1225, 1255,
        1305, 1334, 1359, 1378, 1400, 1413, 1435, 1445,
        1452, 1461, 1481, 1507, 1523, 1548, 1565, 1584,
        1610, 1637, 1652, 1672, 1698, 1715, 1746, 1769,
        1790, 1815, 1839, 1855, 1871, 1887, 1909, 1930,
        1962, 1982, 2007, 2022, 2030, 2039, 2050,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmss18iData
};

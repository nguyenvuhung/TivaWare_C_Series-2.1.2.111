//*****************************************************************************
//
// fontcm14b.c - Font definition for the 14pt Cm bold font.
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
//     Style: cm
//     Size: 14 point
//     Bold: yes
//     Italic: no
//     Memory usage: 1768 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 14 point Cm bold font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm14bData[1566] =
{
      5,   6,   0,  10,  64,  11,   3,  50,  18,  18,  18,  18,
     17, 130,  18, 160,  11,   6, 194,  18,  18,  18,  33,  33,
      0,   6, 112,  24,  11, 240, 240, 113,  33, 113,  33, 113,
     33,  58,  65,  33, 113,  33,  74,  49,  33, 113,  33, 113,
     33, 240,  16,  25,   6,  33,  81,  53,  17,  17,  17,  17,
     17,  17,  20,  67,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  35,  65, 240,  34,  11,  18, 129,  33,  49,  49,  36,
     65,  33,  33,  65,  33,  17,  81,  33,  17,  98,  17, 145,
     36,  65,  33,  33,  49,  49,  33,  33,  65,  33,  33,  82,
    240, 144,  25,  10, 194, 113,  33,  97,  33,  97,  17, 114,
     51,  34,  65,  33,  18,  33,  49,  35,  65,  50,  68,  35,
    240, 240,  16,   7,   3,  98,  18,  33, 240, 208,  16,   4,
     33,  33,  49,  33,  49,  49,  49,  49,  49,  49,  49,  65,
     49,  65,  17,   4,   1,  65,  49,  65,  49,  49,  49,  49,
     49,  49,  49,  33,  49,  33,  48,  16,   6,  33,  81,  49,
     17,  17,  35,  51,  33,  17,  17,  49, 240, 240, 240,  15,
     10, 240, 145, 145, 145, 145, 145,  89,  81, 145, 145, 145,
    240, 160,   9,   3, 240, 194,  18,  33,  33,  17,  32,   7,
      5, 240, 240, 164, 240, 176,   6,   3, 240, 194,  18, 160,
     17,   6,  65,  81,  65,  81,  81,  65,  81,  81,  65,  81,
     81,  65,  81,  81,  80,  20,   6, 211,  33,  49,  17,  49,
     17,  49,  17,  49,  17,  49,  17,  49,  17,  49,  35, 240,
     80,  13,   6, 225,  51,  81,  81,  81,  81,  81,  81,  53,
    240,  64,  15,   5, 178,  33,  33,  17,  33,  65,  49,  49,
     49,  83,  20, 240,  16,  17,   5, 178,  33,  33,  17,  33,
     65,  34,  81,  17,  33,  17,  33,  34, 240,  32,  16,   6,
    241,  81,  66,  49,  17,  33,  33,  33,  33,  37,  65,  67,
    240,  64,  16,   5, 164,  19,  33,  67,  33,  33,  65,  17,
     33,  17,  33,  19, 240,  32,  19,   5, 194,  33,  17,  17,
     33,  19,  33,  33,  17,  33,  17,  33,  17,  33,  34, 240,
     32,  13,   6, 197,  20,  65,  81,  65,  81,  81,  81,  81,
    240, 112,  18,   6, 211,  33,  49,  17,  49,  20,  51,  33,
     34,  17,  49,  17,  49,  35, 240,  80,  19,   5, 178,  33,
     33,  17,  33,  17,  33,  17,  33,  35,  17,  33,  17,  17,
     35, 240,  32,   7,   3, 242,  18, 114,  18, 160,  10,   3,
    242,  18, 114,  18,  33,  33,  17,  32,  11,   3, 194,  18,
     65,  34,  18,  18,  18,  18,  18,  10,  10,   0,   7,  73,
    240, 105, 240, 240, 176,  16,   5, 240,  98,  50,  65,  65,
     65,  49,  49,  65,  33,  17,  33,  34,  32,  15,   5,  98,
     33,  33,  17,  33,  65,  49,  65,  65, 130,  50, 240,  32,
     32,  10, 197,  66,  50,  49,  19,  18,  17,  17,  33,  33,
     17,  17,  49,  17,  17,  17,  49,  17,  17,  17,  49,  17,
     18,  21,  50,  81,  54, 240, 240,  32,  20,  11, 240, 193,
    146, 147, 113,  18, 113,  18,  97,  50,  86,  81,  51,  36,
     36, 240, 240,  64,  20,   8, 240,  22,  49,  65,  33,  65,
     37,  49,  65,  33,  65,  33,  65,  33,  65,  22, 240, 176,
     19,   8, 240,  51,  17,  33,  50,  17,  81,  17, 113, 113,
    113,  81,  33,  65,  52, 240, 176,  21,   9, 240,  54,  65,
     65,  49,  81,  33,  81,  33,  81,  33,  81,  33,  81,  33,
     65,  38, 240, 240,  19,   8, 240,  23,  33,  65,  33,  65,
     33,  33,  68,  65,  33,  65, 113,  65,  23, 240, 160,  18,
      8, 240,  23,  33,  65,  33,  65,  33,  33,  68,  65,  33,
     65, 113, 100, 240, 208,  19,   9, 240,  84,  65,  65,  33,
     81,  33, 129, 129,  52,  17,  81,  49,  65,  68, 240, 240,
     20,   9, 240,  56,  33,  65,  49,  65,  49,  65,  54,  49,
     65,  49,  65,  49,  65,  40, 240, 208,  12,   4, 131,  33,
     49,  49,  49,  49,  49,  49,  35, 208,  15,   7, 245,  81,
     97,  97,  97,  97,  33,  49,  33,  49,  51, 240, 144,  22,
      9, 240,  51,  35,  33,  65,  49,  34,  65,  17, 100,  81,
     34,  65,  34,  65,  50,  35,  20, 240, 208,  17,   7, 228,
     65,  97,  97,  97,  49,  33,  49,  33,  49,  33,  34,  22,
    240, 112,  34,  12, 240, 147,  83,  35,  66,  49,  17,  49,
     17,  49,  18,  33,  17,  49,  18,  33,  17,  49,  35,  33,
     49,  35,  33,  49,  49,  49,  35,  33,  35, 240, 240, 112,
     27,  10, 240,  83,  51,  35,  49,  49,  18,  33,  49,  18,
     33,  49,  34,  17,  49,  51,  49,  51,  49,  66,  35,  65,
    240, 240,  32,  21,   8, 240,  51,  65,  49,  33,  81,  17,
     81,  17,  81,  17,  81,  17,  81,  33,  49,  67, 240, 192,
     17,   8, 240,  22,  49,  65,  33,  65,  33,  65,  37,  49,
    113, 113, 100, 240, 208,  23,   9, 240,  84,  65,  65,  33,
     97,  17,  97,  17,  97,  17,  97,  18,  19,  17,  35,  33,
     69, 130, 114, 114,  23,  10, 240,  86,  81,  65,  65,  65,
     69,  81,  35,  65,  35,  65,  35,  65,  35,  17,  20,  19,
    240, 240,  32,  18,   7, 243,  17,  17,  50,  17,  65,  19,
     84,  98,  17,  65,  17,  65,  21, 240, 128,  18,   8, 240,
     23,  17,  33,  33,  17,  33,  33,  65, 113, 113, 113, 113,
     85, 240, 176,  23,  10, 240,  83,  51,  33,  81,  49,  81,
     49,  81,  49,  81,  49,  81,  49,  81,  50,  50,  68, 240,
    240,  64,  21,  11, 240, 117,  35,  50,  65,  66,  49,  82,
     49,  98,  17, 114,  17, 131, 130, 161, 240, 240, 128,  29,
     15, 240, 244,  20,  35,  34,  50,  65,  66,  50,  33,  82,
     35,  33,  98,  19,  33,  99,  35, 115,  35, 130,  49, 145,
     65,   0,   6,  32,  21,  11, 240, 132,  19,  66,  49,  98,
     17, 130, 146, 147, 113,  34,  81,  50,  52,  36, 240, 240,
     64,  19,  10, 240,  84,  35,  35,  49,  66,  33,  97,  17,
    115, 129, 145, 145, 131, 240, 240,  64,  18,   8, 240,  23,
     17,  50,  33,  50,  82,  82,  98,  82,  49,  18,  65,  23,
    240, 160,  15,   3,  50,  17,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  34,  12,   7, 240,  97,  49,  34,  34,
     18,  34,   0,   7,  16,  15,   3,  50,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  18,   8,   5, 178,  33,
     33,   0,   6,  48,   7,   3,  98,  18, 240, 240,  16,   7,
      3, 145,  34,  18, 240, 160,  15,   7, 240, 240,  84,  49,
     49,  52,  34,  33,  33,  49,  38, 240, 112,  17,   7, 226,
     97,  97, 100,  49,  49,  33,  49,  33,  49,  33,  49,  36,
    240, 128,  13,   5, 240, 179,  17,  33,  17,  65,  65,  33,
     34, 240,  32,  18,   7, 240,  34,  97,  97,  52,  33,  49,
     33,  49,  33,  49,  33,  49,  53, 240, 112,  14,   7, 240,
    240, 100,  33,  65,  22,  17,  98,  49,  36, 240, 128,  16,
      6, 131,  33,  33,  33,  33,  33,  68,  49,  81,  81,  81,
     68, 240,  80,  19,   7, 240, 240,  99,  17,  17,  50,  17,
     49,  36,  49, 101,  33,  65,  17,  65,  36,  32,  20,   8,
    240,  18, 113, 113, 113,  19,  50,  33,  49,  49,  49,  49,
     49,  49,  35,  19, 240, 160,  11,   4, 145,  49,  98,  49,
     49,  49,  49,  35, 208,  15,   5, 194,  50, 115,  65,  65,
     65,  65,  65,  65,  17,  33,  19,  32,  17,   7, 226,  97,
     97,  97,  19,  33,  33,  51,  65,  17,  65,  33,  38, 240,
    112,  12,   4, 130,  49,  49,  49,  49,  49,  49,  49,  35,
    208,  25,  12,   0,   7,  66,  19,  19,  50,  34,  33,  49,
     49,  49,  49,  49,  49,  49,  49,  49,  35,  19,  19, 240,
    240, 112,  18,   8, 240, 240, 162,  19,  50,  33,  49,  49,
     49,  49,  49,  49,  35,  19, 240, 160,  16,   7, 240, 240,
    100,  33,  65,  17,  65,  17,  65,  17,  65,  36, 240, 128,
     18,   7, 240, 240,  85,  49,  49,  33,  49,  33,  49,  33,
     49,  36,  49,  97,  83,  64,  17,   7, 240, 240, 100,  33,
     49,  33,  49,  33,  49,  33,  49,  52,  97,  97,  83,  13,
      6, 240, 242,  18,  34,  17,  33,  81,  81,  68, 240,  80,
     14,   6, 240, 240,  20,  17,  49,  20,  82,  17,  49,  20,
    240,  80,  15,   6, 240,  65,  81,  69,  33,  81,  81,  33,
     33,  33,  35, 240,  80,  17,   8, 240, 240, 162,  34,  49,
     49,  49,  49,  49,  49,  49,  49,  54, 240, 160,  15,   8,
    240, 240, 164,  18,  34,  33,  65,  17,  83,  98,  97, 240,
    208,  21,  11,   0,   6, 115,  18,  19,  34,  18,  33,  65,
     18,  17,  86,  82,  33, 113,  33, 240, 240, 112,  16,   8,
    240, 240, 163,  19,  49,  17,  82, 114,  81,  18,  35,  19,
    240, 160,  18,   7, 240, 240,  83,  18,  33,  33,  50,  17,
     66,  82,  82,  81,  65,  17,  66,  80,  15,   6, 240, 245,
     17,  33,  33,  18,  50,  17,  33,  33,  21, 240,  64,   8,
      8,   0,   6,   7,   0,   7,  16,   8,  15,   0,  11,  46,
      0,  13,  32,   9,   4,  65,  17,  17,  17, 240, 240, 240,
      6,   6, 197,   0,   8,  48,
};

//*****************************************************************************
//
// The font definition for the 14 point Cm bold font.
//
//*****************************************************************************
const tFont g_sFontCm14b =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    13,

    //
    // The height of the font.
    //
    14,

    //
    // The baseline of the font.
    //
    11,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   16,   27,   51,   76,  110,  135,
         142,  158,  175,  191,  206,  215,  222,  228,
         245,  265,  278,  293,  310,  326,  342,  361,
         374,  392,  411,  418,  428,  439,  449,  465,
         480,  512,  532,  552,  571,  592,  611,  629,
         648,  668,  680,  695,  717,  734,  768,  795,
         816,  833,  856,  879,  897,  915,  938,  959,
         988, 1009, 1028, 1046, 1061, 1073, 1088, 1096,
        1103, 1110, 1125, 1142, 1155, 1173, 1187, 1203,
        1222, 1242, 1253, 1268, 1285, 1297, 1322, 1340,
        1356, 1374, 1391, 1404, 1418, 1433, 1450, 1465,
        1486, 1502, 1520, 1535, 1543, 1551, 1560,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm14bData
};

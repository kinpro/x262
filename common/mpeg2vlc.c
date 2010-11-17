/*****************************************************************************
 * mpeg2vlc.c : mpeg-2 vlc tables
 *****************************************************************************
 * Copyright (C) 2003-2010 x264 project
 *
 * Authors: Kieran Kunhya <kieran@kunhya.com>
 *          Phillip Blucas <pblucas@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 *
 * This program is also available under a commercial proprietary license.
 * For more information, contact us at licensing@x264.com.
 *****************************************************************************/

#include "common.h"

const vlc_t x262_mb_addr_inc[34] =
{
    { 0x1, 1 },   /* str=1 */
    { 0x3, 3 },   /* str=011 */
    { 0x2, 3 },   /* str=010 */
    { 0x3, 4 },   /* str=0011 */
    { 0x2, 4 },   /* str=0010 */
    { 0x3, 5 },   /* str=00011 */
    { 0x2, 5 },   /* str=00010 */
    { 0x7, 7 },   /* str=0000111 */
    { 0x6, 7 },   /* str=0000110 */
    { 0xb, 8 },   /* str=00001011 */
    { 0xa, 8 },   /* str=00001010 */
    { 0x9, 8 },   /* str=00001001 */
    { 0x8, 8 },   /* str=00001000 */
    { 0x7, 8 },   /* str=00000111 */
    { 0x6, 8 },   /* str=00000110 */
    { 0x17, 10 }, /* str=0000010111 */
    { 0x16, 10 }, /* str=0000010110 */
    { 0x15, 10 }, /* str=0000010101 */
    { 0x14, 10 }, /* str=0000010100 */
    { 0x13, 10 }, /* str=0000010011 */
    { 0x12, 10 }, /* str=0000010010 */
    { 0x23, 11 }, /* str=00000100011 */
    { 0x22, 11 }, /* str=00000100010 */
    { 0x21, 11 }, /* str=00000100001 */
    { 0x20, 11 }, /* str=00000100000 */
    { 0x1f, 11 }, /* str=00000011111 */
    { 0x1e, 11 }, /* str=00000001110 */
    { 0x1d, 11 }, /* str=00000011101 */
    { 0x1c, 11 }, /* str=00000011100 */
    { 0x1b, 11 }, /* str=00000011011 */
    { 0x1a, 11 }, /* str=00000011010 */
    { 0x19, 11 }, /* str=00000011001 */
    { 0x18, 11 }, /* str=00000011000 */
    { 0x8, 11 },  /* escape */
};

const vlc_t x262_cbp[64] =
{
    { 0x1, 9 },  /* str=000000001 */
    { 0xb, 5 },  /* str=01011 */
    { 0x9, 5 },  /* str=01001 */
    { 0xd, 6 },  /* str=001101 */
    { 0xd, 4 },  /* str=1101 */
    { 0x17, 7 }, /* str=0010111 */
    { 0x13, 7 }, /* str=0010011 */
    { 0x1f, 8 }, /* str=00011111 */
    { 0xc, 4 },  /* str=1100 */
    { 0x16, 7 }, /* str=0010110 */
    { 0x12, 7 }, /* str=0010010 */
    { 0x1e, 8 }, /* str=00011110 */
    { 0x13, 5 }, /* str=10011 */
    { 0x1b, 8 }, /* str=00011011 */
    { 0x17, 8 }, /* str=00010111 */
    { 0x13, 8 }, /* str=00010011 */
    { 0xb, 4 },  /* str=1011 */
    { 0x15, 7 }, /* str=0010101 */
    { 0x11, 7 }, /* str=0010001 */
    { 0x1d, 8 }, /* str=00011101 */
    { 0x11, 5 }, /* str=1000 1 */
    { 0x19, 8 }, /* str=00011001 */
    { 0x15, 8 }, /* str=00010101 */
    { 0x11, 8 }, /* str=00010001 */
    { 0xf, 6 },  /* str=001111 */
    { 0xf, 8 },  /* str=00001111 */
    { 0xd, 8 },  /* str=00001101 */
    { 0x3, 9 },  /* str=000000011 */
    { 0xf, 5 },  /* str=01111 */
    { 0xb, 8 },  /* str=00001011 */
    { 0x7, 8 },  /* str=00000111 */
    { 0x7, 9 },  /* str=000000111 */
    { 0xa, 4 },  /* str=1010 */
    { 0x14, 7 }, /* str=0010100 */
    { 0x10, 7 }, /* str=0010000 */
    { 0x1c, 8 }, /* str=00011100 */
    { 0xe, 6 },  /* str=001110 */
    { 0xe, 8 },  /* str=00001110 */
    { 0xc, 8 },  /* str=00001100 */
    { 0x2, 9 },  /* str=000000010 */
    { 0x10, 5 }, /* str=10000 */
    { 0x18, 8 }, /* str=00011000 */
    { 0x14, 8 }, /* str=00010100 */
    { 0x10, 8 }, /* str=00010000 */
    { 0xe, 5 },  /* str=01110 */
    { 0xa, 8 },  /* str=00001010 */
    { 0x6, 8 },  /* str=00000110 */
    { 0x6, 9 },  /* str=000000110 */
    { 0x12, 5 }, /* str=10010 */
    { 0x1a, 8 }, /* str=00011010 */
    { 0x16, 8 }, /* str=00010110 */
    { 0x12, 8 }, /* str=00010010 */
    { 0xd, 5 },  /* str=01101 */
    { 0x9, 8 },  /* str=00001001 */
    { 0x5, 8 },  /* str=00000101 */
    { 0x5, 9 },  /* str=000000101 */
    { 0xc, 5 },  /* str=01100 */
    { 0x8, 8 },  /* str=00001000 */
    { 0x4, 8 },  /* str=00000100 */
    { 0x4, 9 },  /* str=000000100 */
    { 0x7, 3 },  /* str=111 */
    { 0xa, 5 },  /* str=01010 */
    { 0x8, 5 },  /* str=01000 */
    { 0xc, 6 },  /* str=001100 */
};

/* [frame_type][quant] */
const vlc_t x262_i_mb_type[3][2] =
{
    {
        { 0x3, 5 }, /* str=00011 */
        { 0x1, 6 }, /* str=000001 */
    },
    {
        { 0x3, 5 }, /* str=00011 */
        { 0x1, 6 }, /* str=000001 */
    },
    {
        { 0x1, 1 }, /* str=1 */
        { 0x1, 2 }, /* str=01 */
    },
};

/* [mc][coded][quant] */
const vlc_t x262_p_mb_type[2][2][2] =
{
    {
        {},
        {
            { 0x1, 2 }, /* str=01 */
            { 0x1, 5 }, /* str=00001 */
        },
    },
    {
        {
            { 0x1, 3 }, /* str=001 */
        },
        {
            { 0x1, 1 }, /* str=1 */
            { 0x2, 5 }, /* str=00010 */
        },
    },
};

/* [fwd/bwd/interp][coded][quant] */
const vlc_t x262_b_mb_type[3][2][2] =
{
    {
        {
            { 0x2, 4 }, /* str=0010 */
        },
        {
            { 0x3, 4 }, /* str=0011 */
            { 0x2, 6 }, /* str=000010 */
        },
    },
    {
        {
            { 0x2, 3 }, /* str=010 */
        },
        {
            { 0x3, 3 }, /* str=011 */
            { 0x3, 6 }, /* str=000011 */
        },
    },
    {
        {
            { 0x2, 2 }, /* str=10 */
        },
        {
            { 0x3, 2 }, /* str=11 */
            { 0x2, 5 }, /* str=00010 */
        },
    },
};

/* [code] */
const vlc_large_t x262_dc_luma_code[12] =
{
    { 0x4, 3 }, /* str=100 */
    { 0x0, 2 }, /* str=00 */
    { 0x1, 2 }, /* str=01 */
    { 0x5, 3 }, /* str=101 */
    { 0x6, 3 }, /* str=110 */
    { 0xe, 4 }, /* str=1110 */
    { 0x1e, 5 }, /* str=11110 */
    { 0x3e, 6 }, /* str=111110 */
    { 0x7e, 7 }, /* str=1111110 */
    { 0xfe, 8 }, /* str=11111110 */
    { 0x1fe, 9 }, /* str=111111110 */
    { 0x1ff, 9 }, /* str=111111111 */
};

/* [code] */
const vlc_large_t x262_dc_chroma_code[12] =
{
    { 0x0, 2 }, /* str=00 */
    { 0x1, 2 }, /* str=01 */
    { 0x2, 2 }, /* str=10 */
    { 0x6, 3 }, /* str=110 */
    { 0xe, 4 }, /* str=1110 */
    { 0x1e, 5 }, /* str=11110 */
    { 0x3e, 6 }, /* str=111110 */
    { 0x7e, 7 }, /* str=1111110 */
    { 0xfe, 8 }, /* str=11111110 */
    { 0x1fe, 9 }, /* str=111111110 */
    { 0x3fe, 10 }, /* str=1111111110 */
    { 0x3ff, 10 }, /* str=1111111111 */
};

/* [motion_code+16] */
const vlc_large_t x262_motion_code[33] =
{
    { 0x19, 11 }, /* str=00000011001 */
    { 0x1b, 11 }, /* str=00000011011 */
    { 0x1d, 11 }, /* str=00000011101 */
    { 0x1f, 11 }, /* str=00000011111 */
    { 0x21, 11 }, /* str=00000100001 */
    { 0x23, 11 }, /* str=00000100011 */
    { 0x13, 10 }, /* str=0000010011 */
    { 0x15, 10 }, /* str=0000010101 */
    { 0x17, 10 }, /* str=0000010111 */
    { 0x7, 8 }, /* str=00000111 */
    { 0x9, 8 }, /* str=00001001 */
    { 0xb, 8 }, /* str=00001011 */
    { 0x7, 7 }, /* str=0000111 */
    { 0x3, 5 }, /* str=00011 */
    { 0x3, 4 }, /* str=0011 */
    { 0x3, 3 }, /* str=011 */
    { 0x1, 1 }, /* str=1 */
    { 0x2, 3 }, /* str=010 */
    { 0x2, 4 }, /* str=0010 */
    { 0x2, 5 }, /* str=00010 */
    { 0x6, 7 }, /* str=0000110 */
    { 0xa, 8 }, /* str=00001010 */
    { 0x8, 8 }, /* str=00001000 */
    { 0x6, 8 }, /* str=00000110 */
    { 0x16, 10 }, /* str=0000010110 */
    { 0x14, 10 }, /* str=0000010100 */
    { 0x12, 10 }, /* str=0000010010 */
    { 0x22, 11 }, /* str=00000100010 */
    { 0x20, 11 }, /* str=00000100000 */
    { 0x1e, 11 }, /* str=00000011110 */
    { 0x1c, 11 }, /* str=00000011100 */
    { 0x1a, 11 }, /* str=00000011010 */
    { 0x18, 11 }, /* str=00000011000 */
};

/* [dmvector+1] */
const vlc_t x262_dmvector[3] =
{
    { 0x3, 2 }, /* str=11 */
    { 0x0, 1 }, /* str=0 */
    { 0x2, 2 }, /* str=10 */
};

/* [table][level][run]*/
const vlc_large_t dct_vlcs[2][41][32] =
{
    /* table zero */
    {
        /* misc */
        {
            /* end of block */
            { 0x2, 2 }, /* str=10 */
            /* escape */
            { 0x1, 6 }, /* str=000001 */
        },
        /* level=1 */
        {
            { 0x3, 2 }, /* str=11 */
            { 0x3, 3 }, /* str=011 */
            { 0x5, 4 }, /* str=0101 */
            { 0x7, 5 }, /* str=00111 */
            { 0x6, 5 }, /* str=00110 */
            { 0x7, 6 }, /* str=000111 */
            { 0x5, 6 }, /* str=000101 */
            { 0x4, 6 }, /* str=000100 */
            { 0x7, 7 }, /* str=0000111 */
            { 0x5, 7 }, /* str=0000101 */
            { 0x27, 8 }, /* str=00100111 */
            { 0x23, 8 }, /* str=00100011 */
            { 0x22, 8 }, /* str=00100010 */
            { 0x20, 8 }, /* str=00100000 */
            { 0xe, 10 }, /* str=0000001110 */
            { 0xd, 10 }, /* str=0000001101 */
            { 0x8, 10 }, /* str=0000001000 */
            { 0x1f, 12 }, /* str=000000011111 */
            { 0x1a, 12 }, /* str=000000011010 */
            { 0x19, 12 }, /* str=000000011001 */
            { 0x17, 12 }, /* str=000000010111 */
            { 0x16, 12 }, /* str=000000010110 */
            { 0x1f, 13 }, /* str=0000000011111 */
            { 0x1e, 13 }, /* str=0000000011110 */
            { 0x1d, 13 }, /* str=0000000011101 */
            { 0x1c, 13 }, /* str=0000000011100 */
            { 0x1b, 13 }, /* str=0000000011011 */
            { 0x1f, 16 }, /* str=0000000000011111 */
            { 0x1e, 16 }, /* str=0000000000011110 */
            { 0x1d, 16 }, /* str=0000000000011101 */
            { 0x1c, 16 }, /* str=0000000000011100 */
            { 0x1b, 16 }, /* str=0000000000011011 */
        },
        /* level=2 */
        {
            { 0x4, 4 }, /* str=0100 */
            { 0x6, 6 }, /* str=000110 */
            { 0x4, 7 }, /* str=0000100 */
            { 0x24, 8 }, /* str=00100100 */
            { 0xf, 10 }, /* str=0000001111 */
            { 0x9, 10 }, /* str=0000001001 */
            { 0x1e, 12 }, /* str=000000011110 */
            { 0x15, 12 }, /* str=000000010101 */
            { 0x11, 12 }, /* str=000000010001 */
            { 0x11, 13 }, /* str=0000000010001 */
            { 0x10, 13 }, /* str=0000000010000 */
            { 0x1a, 16 }, /* str=0000000000011010 */
            { 0x19, 16 }, /* str=0000000000011001 */
            { 0x18, 16 }, /* str=0000000000011000 */
            { 0x17, 16 }, /* str=0000000000010111 */
            { 0x16, 16 }, /* str=0000000000010110 */
            { 0x15, 16 }, /* str=0000000000010101 */
        },
        /* level=3 */
        {
            { 0x5, 5 }, /* str=00101 */
            { 0x25, 8 }, /* str=00100101 */
            { 0xb, 10 }, /* str=0000001011 */
            { 0x1c, 12 }, /* str=000000011100 */
            { 0x12, 12 }, /* str=000000010010 */
            { 0x12, 13 }, /* str=0000000010010 */
            { 0x14, 16 }, /* str=0000000000010100 */
        },
        /* level=4 */
        {
            { 0x6, 7 }, /* str=0000110 */
            { 0xc, 10 }, /* str=0000001100 */
            { 0x14, 12 }, /* str=000000010100 */
            { 0x13, 13 }, /* str=0000000010011 */
        },
        /* level=5 */
        {
            { 0x26, 8 }, /* str=00100110 */
            { 0x1b, 12 }, /* str=000000011011 */
            { 0x14, 13 }, /* str=0000000010100 */
        },
        /* level=6 */
        {
            { 0x21, 8 }, /* str=00100001 */
            { 0x16, 13 }, /* str=0000000010110 */
        },
        /* level=7 */
        {
            { 0xa, 10 }, /* str=0000001010 */
            { 0x15, 13 }, /* str=0000000010101 */
        },
        /* level=8 */
        {
            { 0x1d, 12 }, /* str=000000011101 */
            { 0x1f, 15 }, /* str=000000000011111 */
        },
        /* level=9 */
        {
            { 0x18, 12 }, /* str=000000011000 */
            { 0x1e, 15 }, /* str=000000000011110 */
        },
        /* level=10 */
        {
            { 0x13, 12 }, /* str=000000010011 */
            { 0x1d, 15 }, /* str=000000000011101 */
        },
        /* level=11 */
        {
            { 0x10, 12 }, /* str=000000010000 */
            { 0x1c, 15 }, /* str=000000000011100 */
        },
        /* level=12 */
        {
            { 0x1a, 13 }, /* str=0000000011010 */
            { 0x1b, 15 }, /* str=000000000011011 */
        },
        /* level=13 */
        {
            { 0x19, 13 }, /* str=0000000011001 */
            { 0x1a, 15 }, /* str=000000000011010 */
        },
        /* level=14 */
        {
            { 0x18, 13 }, /* str=0000000011000 */
            { 0x19, 15 }, /* str=000000000011001 */
        },
        /* level=15 */
        {
            { 0x17, 13 }, /* str=0000000010111 */
            { 0x13, 16 }, /* str=0000000000010011 */
        },
        /* level=16 */
        {
            { 0x1f, 14 }, /* str=00000000011111 */
            { 0x12, 16 }, /* str=0000000000010010 */
        },
        /* level=17 */
        {
            { 0x1e, 14 }, /* str=00000000011110 */
            { 0x11, 16 }, /* str=0000000000010001 */
        },
        /* level=18 */
        {
            { 0x1d, 14 }, /* str=00000000011101 */
            { 0x10, 16 }, /* str=0000000000010000 */
        },
        /* level=19 */
        {
            { 0x1c, 14 }, /* str=00000000011100 */
        },
        /* level=20 */
        {
            { 0x1b, 14 }, /* str=00000000011011 */
        },
        /* level=21 */
        {
            { 0x1a, 14 }, /* str=00000000011010 */
        },
        /* level=22 */
        {
            { 0x19, 14 }, /* str=00000000011001 */
        },
        /* level=23 */
        {
            { 0x18, 14 }, /* str=00000000011000 */
        },
        /* level=24 */
        {
            { 0x17, 14 }, /* str=00000000010111 */
        },
        /* level=25 */
        {
            { 0x16, 14 }, /* str=00000000010110 */
        },
        /* level=26 */
        {
            { 0x15, 14 }, /* str=00000000010101 */
        },
        /* level=27 */
        {
            { 0x14, 14 }, /* str=00000000010100 */
        },
        /* level=28 */
        {
            { 0x13, 14 }, /* str=00000000010011 */
        },
        /* level=29 */
        {
            { 0x12, 14 }, /* str=00000000010010 */
        },
        /* level=30 */
        {
            { 0x11, 14 }, /* str=00000000010001 */
        },
        /* level=31 */
        {
            { 0x10, 14 }, /* str=00000000010000 */
        },
        /* level=32 */
        {
            { 0x18, 15 }, /* str=000000000011000 */
        },
        /* level=33 */
        {
            { 0x17, 15 }, /* str=000000000010111 */
        },
        /* level=34 */
        {
            { 0x16, 15 }, /* str=000000000010110 */
        },
        /* level=35 */
        {
            { 0x15, 15 }, /* str=000000000010101 */
        },
        /* level=36 */
        {
            { 0x14, 15 }, /* str=000000000010100 */
        },
        /* level=37 */
        {
            { 0x13, 15 }, /* str=000000000010011 */
        },
        /* level=38 */
        {
            { 0x12, 15 }, /* str=000000000010010 */
        },
        /* level=39 */
        {
            { 0x11, 15 }, /* str=000000000010001 */
        },
        /* level=40 */
        {
            { 0x10, 15 }, /* str=000000000010000 */
        },
    },
    /* table one */
    {
        /* misc */
        {
            /* end of block */
            { 0x6, 4 }, /* str=0110 */
            /* escape */
            { 0x1, 6 }, /* str=000001 */
        },
        /* level=1 */
        {
            { 0x2, 2 }, /* str=10 */
            { 0x2, 3 }, /* str=010 */
            { 0x5, 5 }, /* str=00101 */
            { 0x7, 5 }, /* str=00111 */
            { 0x6, 6 }, /* str=000110 */
            { 0x7, 6 }, /* str=000111 */
            { 0x6, 7 }, /* str=0000110 */
            { 0x4, 7 }, /* str=0000100 */
            { 0x5, 7 }, /* str=0000101 */
            { 0x78, 7 }, /* str=1111000 */
            { 0x7a, 7 }, /* str=1111010 */
            { 0x21, 8 }, /* str=00100001 */
            { 0x25, 8 }, /* str=00100101 */
            { 0x24, 8 }, /* str=00100100 */
            { 0x5, 9 }, /* str=000000101 */
            { 0x7, 9 }, /* str=000000111 */
            { 0xd, 10 }, /* str=0000001101 */
            { 0x1f, 12 }, /* str=000000011111 */
            { 0x1a, 12 }, /* str=000000011010 */
            { 0x19, 12 }, /* str=000000011001 */
            { 0x17, 12 }, /* str=000000010111 */
            { 0x16, 12 }, /* str=000000010110 */
            { 0x1f, 13 }, /* str=0000000011111 */
            { 0x1e, 13 }, /* str=0000000011110 */
            { 0x1d, 13 }, /* str=0000000011101 */
            { 0x1c, 13 }, /* str=0000000011100 */
            { 0x1b, 13 }, /* str=0000000011011 */
            { 0x1f, 16 }, /* str=0000000000011111 */
            { 0x1e, 16 }, /* str=0000000000011110 */
            { 0x1d, 16 }, /* str=0000000000011101 */
            { 0x1c, 16 }, /* str=0000000000011100 */
            { 0x1b, 16 }, /* str=0000000000011011 */
        },
        /* level=2 */
        {
            { 0x6, 3 }, /* str=110 */
            { 0x6, 5 }, /* str=00110 */
            { 0x7, 7 }, /* str=0000111 */
            { 0x26, 8 }, /* str=00100110 */
            { 0xfd, 8 }, /* str=11111101 */
            { 0x4, 9 }, /* str=000000100 */
            { 0x1e, 12 }, /* str=000000011110 */
            { 0x15, 12 }, /* str=000000010101 */
            { 0x11, 12 }, /* str=000000010001 */
            { 0x11, 13 }, /* str=0000000010001 */
            { 0x10, 13 }, /* str=0000000010000 */
            { 0x1a, 16 }, /* str=0000000000011010 */
            { 0x19, 16 }, /* str=0000000000011001 */
            { 0x18, 16 }, /* str=0000000000011000 */
            { 0x17, 16 }, /* str=0000000000010111 */
            { 0x16, 16 }, /* str=0000000000010110 */
            { 0x15, 16 }, /* str=0000000000010101 */
        },
        /* level=3 */
        {
            { 0x7, 4 }, /* str=0111 */
            { 0x79, 7 }, /* str=1111001 */
            { 0xfc, 8 }, /* str=11111100 */
            { 0x1c, 12 }, /* str=000000011100 */
            { 0x12, 12 }, /* str=000000010010 */
            { 0x12, 13 }, /* str=0000000010010 */
            { 0x14, 16 }, /* str=0000000000010100 */
        },
        /* level=4 */
        {
            { 0x1c, 5 }, /* str=11100 */
            { 0x27, 8 }, /* str=00100111 */
            { 0xc, 10 }, /* str=0000001100 */
            { 0x13, 13 }, /* str=0000000010011 */
        },
        /* level=5 */
        {
            { 0x1d, 5 }, /* str=11101 */
            { 0x20, 8 }, /* str=00100000 */
            { 0x14, 13 }, /* str=0000000010100 */
        },
        /* level=6 */
        {
            { 0x5, 6 }, /* str=000101 */
            { 0x16, 13 }, /* str=0000000010110 */
        },
        /* level=7 */
        {
            { 0x4, 6 }, /* str=000100 */
            { 0x15, 13 }, /* str=0000000010101 */
        },
        /* level=8 */
        {
            { 0x7b, 7 }, /* str=1111011 */
            { 0x1f, 15 }, /* str=000000000011111 */
        },
        /* level=9 */
        {
            { 0x7c, 7 }, /* str=1111100 */
            { 0x1e, 15 }, /* str=000000000011110 */
        },
        /* level=10 */
        {
            { 0x23, 8 }, /* str=00100011 */
            { 0x1d, 15 }, /* str=000000000011101 */
        },
        /* level=11 */
        {
            { 0x22, 8 }, /* str=00100010 */
            { 0x1c, 15 }, /* str=000000000011100 */
        },
        /* level=12 */
        {
            { 0xfa, 8 }, /* str=11111010 */
            { 0x1b, 15 }, /* str=000000000011011 */
        },
        /* level=13 */
        {
            { 0xfb, 8 }, /* str=11111011 */
            { 0x1a, 15 }, /* str=000000000011010 */
        },
        /* level=14 */
        {
            { 0xfe, 8 }, /* str=11111110 */
            { 0x19, 15 }, /* str=000000000011001 */
        },
        /* level=15 */
        {
            { 0xff, 8 }, /* str=11111111 */
            { 0x13, 16 }, /* str=0000000000010011 */
        },
        /* level=16 */
        {
            { 0x1f, 14 }, /* str=00000000011111 */
            { 0x12, 16 }, /* str=0000000000010010 */
        },
        /* level=17 */
        {
            { 0x1e, 14 }, /* str=00000000011110 */
            { 0x11, 16 }, /* str=0000000000010001 */
        },
        /* level=18 */
        {
            { 0x1d, 14 }, /* str=00000000011101 */
            { 0x10, 16 }, /* str=0000000000010000 */
        },
        /* level=19 */
        {
            { 0x1c, 14 }, /* str=00000000011100 */
        },
        /* level=20 */
        {
            { 0x1b, 14 }, /* str=00000000011011 */
        },
        /* level=21 */
        {
            { 0x1a, 14 }, /* str=00000000011010 */
        },
        /* level=22 */
        {
            { 0x19, 14 }, /* str=00000000011001 */
        },
        /* level=23 */
        {
            { 0x18, 14 }, /* str=00000000011000 */
        },
        /* level=24 */
        {
            { 0x17, 14 }, /* str=00000000010111 */
        },
        /* level=25 */
        {
            { 0x16, 14 }, /* str=00000000010110 */
        },
        /* level=26 */
        {
            { 0x15, 14 }, /* str=00000000010101 */
        },
        /* level=27 */
        {
            { 0x14, 14 }, /* str=00000000010100 */
        },
        /* level=28 */
        {
            { 0x13, 14 }, /* str=00000000010011 */
        },
        /* level=29 */
        {
            { 0x12, 14 }, /* str=00000000010010 */
        },
        /* level=30 */
        {
            { 0x11, 14 }, /* str=00000000010001 */
        },
        /* level=31 */
        {
            { 0x10, 14 }, /* str=00000000010000 */
        },
        /* level=32 */
        {
            { 0x18, 15 }, /* str=000000000011000 */
        },
        /* level=33 */
        {
            { 0x17, 15 }, /* str=000000000010111 */
        },
        /* level=34 */
        {
            { 0x16, 15 }, /* str=000000000010110 */
        },
        /* level=35 */
        {
            { 0x15, 15 }, /* str=000000000010101 */
        },
        /* level=36 */
        {
            { 0x14, 15 }, /* str=000000000010100 */
        },
        /* level=37 */
        {
            { 0x13, 15 }, /* str=000000000010011 */
        },
        /* level=38 */
        {
            { 0x12, 15 }, /* str=000000000010010 */
        },
        /* level=39 */
        {
            { 0x11, 15 }, /* str=000000000010001 */
        },
        /* level=40 */
        {
            { 0x10, 15 }, /* str=000000000010000 */
        },
    },
};

/* [level] */
const uint8_t dct_vlc_largest_run[41] =
{
    /* Both tables */
    0, 31, 16, 6, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

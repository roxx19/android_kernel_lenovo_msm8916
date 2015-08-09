/////////////////////////////////////////////////////////////////////////////
// File Name	: OIS_prog.h
// Function		: Header file for OIS controller firmware
// Rule         : Use TAB 4
//
// Copyright(c)	Rohm Co.,Ltd. All rights reserved 
// 
/***** ROHM Confidential ***************************************************/
#ifndef OIS_PROG_H
#define OIS_PROG_H

const	OIS_UBYTE	DOWNLOAD_BIN[] = {	// DOWNLOAD2502d_LK7m.bin
    0x00,
    0x64,
    0x5B,
    0x00,
    0x03,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x03,
    0x00,
    0x10,
    0x7E,
    0x84,
    0x50,
    0x00,
    0x08,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x03,
    0x00,
    0x10,
    0x7E,
    0x84,
    0x60,
    0x00,
    0x08,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x03,
    0x00,
    0x10,
    0x73,
    0x84,
    0x00,
    0x10,
    0x08,
    0x40,
    0x73,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x14,
    0x90,
    0x40,
    0x87,
    0xA0,
    0x10,
    0x71,
    0x84,
    0x00,
    0x10,
    0x08,
    0x40,
    0x71,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x14,
    0x90,
    0x40,
    0x07,
    0xA0,
    0x10,
    0x14,
    0x84,
    0x00,
    0x20,
    0x08,
    0x40,
    0x15,
    0x90,
    0x20,
    0x1F,
    0x08,
    0x40,
    0x12,
    0xA0,
    0x10,
    0x00,
    0x08,
    0x40,
    0x11,
    0x90,
    0x7F,
    0xFF,
    0x21,
    0x00,
    0x03,
    0x00,
    0x90,
    0x17,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x80,
    0x47,
    0xA0,
    0x8D,
    0x04,
    0x07,
    0x00,
    0x00,
    0x11,
    0x30,
    0x03,
    0x07,
    0x80,
    0x41,
    0x90,
    0x50,
    0x00,
    0x08,
    0x40,
    0xFC,
    0x90,
    0x88,
    0x2F,
    0x84,
    0x00,
    0x00,
    0x11,
    0x30,
    0x02,
    0x07,
    0x40,
    0xFF,
    0x90,
    0x50,
    0x00,
    0x08,
    0x40,
    0xFD,
    0x90,
    0x40,
    0x7F,
    0xA0,
    0x10,
    0xFF,
    0x84,
    0x20,
    0x2C,
    0x08,
    0x7F,
    0xFF,
    0x11,
    0x20,
    0x0D,
    0x08,
    0x80,
    0x0F,
    0x90,
    0x80,
    0x26,
    0xA0,
    0x90,
    0x2E,
    0x84,
    0x00,
    0x10,
    0x08,
    0x90,
    0x26,
    0x84,
    0x00,
    0x10,
    0x08,
    0x80,
    0x1F,
    0xA0,
    0x20,
    0x2E,
    0x08,
    0x40,
    0xED,
    0x90,
    0x20,
    0x0F,
    0x08,
    0x80,
    0x0E,
    0x90,
    0x00,
    0x00,
    0x21,
    0x30,
    0x02,
    0x07,
    0x40,
    0xEB,
    0xA0,
    0x50,
    0x00,
    0x08,
    0x40,
    0xFE,
    0x90,
    0x40,
    0x7F,
    0xA0,
    0x04,
    0xEB,
    0x84,
    0x10,
    0x00,
    0x20,
    0x20,
    0x0F,
    0x08,
    0x80,
    0x00,
    0x21,
    0x60,
    0x04,
    0x07,
    0x40,
    0xFF,
    0xA0,
    0x10,
    0x00,
    0x08,
    0x40,
    0xEA,
    0x90,
    0x10,
    0x00,
    0x20,
    0x20,
    0x0F,
    0x08,
    0x80,
    0x00,
    0x11,
    0x00,
    0x0B,
    0x07,
    0x08,
    0x00,
    0x20,
    0x60,
    0x0D,
    0x07,
    0x10,
    0x00,
    0x08,
    0x40,
    0xEA,
    0x90,
    0x8F,
    0x06,
    0x07,
    0x04,
    0xFF,
    0x84,
    0x20,
    0x09,
    0x60,
    0x10,
    0xFC,
    0x84,
    0x08,
    0xFD,
    0x84,
    0x04,
    0xFE,
    0x84,
    0x00,
    0x03,
    0x00,
    0x00,
    0x10,
    0x08,
    0x80,
    0x37,
    0xA0,
    0x90,
    0x69,
    0x84,
    0x00,
    0x10,
    0x08,
    0x80,
    0x69,
    0xA0,
    0x20,
    0x1A,
    0x08,
    0x40,
    0x64,
    0xA0,
    0x10,
    0x10,
    0x08,
    0x80,
    0x4F,
    0xA0,
    0x20,
    0x1D,
    0x08,
    0x40,
    0x5F,
    0xA0,
    0x20,
    0x1E,
    0x08,
    0x40,
    0x5D,
    0xA0,
    0x10,
    0x00,
    0x08,
    0x80,
    0x68,
    0x90,
    0x40,
    0xFE,
    0xA0,
    0x20,
    0x0E,
    0x07,
    0x50,
    0x00,
    0x08,
    0x40,
    0x7F,
    0xA0,
    0x04,
    0xFE,
    0x84,
    0x00,
    0x04,
    0x00,
    0x10,
    0xF0,
    0x44,
    0x50,
    0x00,
    0x08,
    0x00,
    0x7F,
    0x11,
    0x20,
    0xF0,
    0x60,
    0x04,
    0x5C,
    0x84,
    0x04,
    0x61,
    0x84,
    0x04,
    0x57,
    0x84,
    0x00,
    0x00,
    0x21,
    0x04,
    0x74,
    0x84,
    0x00,
    0x40,
    0x21,
    0x00,
    0x0B,
    0x07,
    0x04,
    0x74,
    0x84,
    0x00,
    0x00,
    0x21,
    0x10,
    0x57,
    0x84,
    0x30,
    0x20,
    0x08,
    0x00,
    0x04,
    0x11,
    0x50,
    0x00,
    0x08,
    0x03,
    0xFF,
    0x11,
    0x20,
    0xFA,
    0x60,
    0x10,
    0xF0,
    0x44,
    0x50,
    0x20,
    0x08,
    0x00,
    0x7F,
    0x11,
    0x60,
    0x20,
    0x08,
    0x40,
    0x00,
    0x08,
    0x00,
    0x08,
    0x11,
    0x30,
    0x1A,
    0x07,
    0x50,
    0x00,
    0x08,
    0x07,
    0x00,
    0x11,
    0x9F,
    0x1D,
    0x07,
    0x8B,
    0x1E,
    0x07,
    0x9C,
    0x15,
    0x07,
    0x20,
    0xF8,
    0x60,
    0x10,
    0x28,
    0x44,
    0x60,
    0x00,
    0x08,
    0x01,
    0x00,
    0x11,
    0x20,
    0x28,
    0x60,
    0x87,
    0x1B,
    0x07,
    0x40,
    0xF7,
    0xA0,
    0x81,
    0x27,
    0x07,
    0x20,
    0x48,
    0x60,
    0x10,
    0x0A,
    0x44,
    0x10,
    0xF4,
    0x84,
    0x3B,
    0x8C,
    0x00,
    0xE0,
    0x14,
    0x43,
    0x08,
    0x00,
    0x20,
    0x00,
    0x06,
    0x07,
    0x89,
    0x02,
    0x07,
    0x40,
    0xAE,
    0x90,
    0x81,
    0x04,
    0x07,
    0x40,
    0x2E,
    0x90,
    0x40,
    0x7F,
    0xA0,
    0x10,
    0x2E,
    0x44,
    0x20,
    0x2E,
    0x08,
    0x7F,
    0xFF,
    0x11,
    0x10,
    0x20,
    0x08,
    0x40,
    0x00,
    0x11,
    0x92,
    0x05,
    0x07,
    0x20,
    0x72,
    0x60,
    0x00,
    0x00,
    0x08,
    0x40,
    0x67,
    0xA0,
    0x00,
    0x00,
    0x11,
    0x84,
    0x02,
    0x07,
    0x20,
    0xF0,
    0x60,
    0x9F,
    0x03,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x40,
    0x65,
    0x90,
    0x10,
    0x62,
    0x84,
    0x10,
    0x10,
    0x08,
    0x40,
    0x61,
    0xA0,
    0x20,
    0x1D,
    0x08,
    0x40,
    0x5F,
    0xA0,
    0x20,
    0x1E,
    0x08,
    0x40,
    0x5D,
    0xA0,
    0x10,
    0x00,
    0x08,
    0x40,
    0x5E,
    0x90,
    0x20,
    0x30,
    0x60,
    0x10,
    0xCF,
    0x84,
    0x20,
    0x1C,
    0x08,
    0x7F,
    0xFF,
    0x21,
    0x3B,
    0xB1,
    0x00,
    0xC8,
    0x14,
    0x43,
    0x10,
    0x00,
    0x20,
    0x00,
    0x00,
    0x08,
    0x40,
    0xB5,
    0x90,
    0x40,
    0xAD,
    0xA0,
    0x00,
    0x0A,
    0x07,
    0x10,
    0x4F,
    0x84,
    0x20,
    0x1C,
    0x08,
    0x7F,
    0xFF,
    0x21,
    0x3B,
    0xBB,
    0x00,
    0x48,
    0x14,
    0x43,
    0x10,
    0x00,
    0x20,
    0x00,
    0x00,
    0x08,
    0x40,
    0x35,
    0x90,
    0x40,
    0x2D,
    0xA0,
    0x00,
    0x14,
    0x07,
    0x80,
    0x0C,
    0x07,
    0x82,
    0x03,
    0x07,
    0x04,
    0x50,
    0x84,
    0x10,
    0x00,
    0x20,
    0x20,
    0x02,
    0x07,
    0x00,
    0x08,
    0x21,
    0x40,
    0x00,
    0x08,
    0x00,
    0x01,
    0x11,
    0x40,
    0x50,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x20,
    0x81,
    0x00,
    0x80,
    0x14,
    0x43,
    0x01,
    0x00,
    0x01,
    0x04,
    0x00,
    0x11,
    0x02,
    0x00,
    0x21,
    0x10,
    0x9F,
    0x84,
    0x10,
    0x20,
    0x08,
    0x40,
    0x97,
    0x90,
    0x10,
    0xBF,
    0x84,
    0x20,
    0x1D,
    0x08,
    0x40,
    0xC6,
    0xA0,
    0x20,
    0x8E,
    0x08,
    0x40,
    0x72,
    0x90,
    0x40,
    0x16,
    0xA0,
    0x10,
    0x96,
    0x84,
    0x10,
    0x00,
    0x08,
    0x40,
    0x9E,
    0x90,
    0x20,
    0x36,
    0x60,
    0x20,
    0x93,
    0x00,
    0x00,
    0x14,
    0x43,
    0x00,
    0x01,
    0x01,
    0x00,
    0x04,
    0x11,
    0x00,
    0x02,
    0x21,
    0x10,
    0x1F,
    0x84,
    0x10,
    0x20,
    0x08,
    0x40,
    0x17,
    0x90,
    0x10,
    0x3F,
    0x84,
    0x20,
    0x1D,
    0x08,
    0x40,
    0x46,
    0xA0,
    0x20,
    0x8E,
    0x08,
    0x40,
    0x70,
    0x90,
    0x40,
    0x96,
    0xA0,
    0x10,
    0x16,
    0x84,
    0x10,
    0x00,
    0x08,
    0x40,
    0x1E,
    0x90,
    0x20,
    0x34,
    0x60,
    0x10,
    0x65,
    0x84,
    0x50,
    0x10,
    0x08,
    0x00,
    0x00,
    0x21,
    0x84,
    0x03,
    0x07,
    0x20,
    0xF0,
    0x60,
    0x9F,
    0x03,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x10,
    0x08,
    0x40,
    0x65,
    0xA0,
    0x20,
    0x0D,
    0x08,
    0x40,
    0x64,
    0x90,
    0x40,
    0x62,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x04,
    0x1C,
    0x44,
    0x04,
    0x1B,
    0x44,
    0xC3,
    0xFF,
    0x21,
    0x87,
    0x04,
    0x07,
    0x40,
    0x7F,
    0xA0,
    0x21,
    0x0C,
    0x00,
    0xFF,
    0xF7,
    0x11,
    0x00,
    0x06,
    0x07,
    0xC1,
    0xFF,
    0x21,
    0x87,
    0x0A,
    0x07,
    0x40,
    0x7F,
    0xA0,
    0x10,
    0x42,
    0x84,
    0x20,
    0x1F,
    0x08,
    0x40,
    0x11,
    0xA0,
    0x20,
    0x1E,
    0x08,
    0x40,
    0x63,
    0xA0,
    0x10,
    0x07,
    0x84,
    0x10,
    0x10,
    0x08,
    0x40,
    0x55,
    0xA0,
    0x00,
    0x20,
    0x08,
    0x40,
    0x06,
    0x90,
    0x20,
    0x0F,
    0x08,
    0x10,
    0x00,
    0x11,
    0x40,
    0x71,
    0xA0,
    0x10,
    0xC2,
    0x84,
    0x20,
    0x1F,
    0x08,
    0x40,
    0x11,
    0xA0,
    0x20,
    0x1E,
    0x08,
    0x40,
    0x66,
    0xA0,
    0x10,
    0x87,
    0x84,
    0x10,
    0x10,
    0x08,
    0x40,
    0x56,
    0xA0,
    0x00,
    0x20,
    0x08,
    0x40,
    0x86,
    0x90,
    0x20,
    0x0F,
    0x08,
    0x10,
    0x00,
    0x11,
    0x40,
    0x73,
    0xA0,
    0x10,
    0x56,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x7B,
    0x90,
    0x22,
    0x00,
    0x60,
    0x40,
    0x00,
    0x08,
    0x40,
    0x79,
    0xA0,
    0x00,
    0x08,
    0x11,
    0x10,
    0x55,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x7A,
    0x90,
    0x22,
    0x00,
    0x60,
    0x50,
    0x00,
    0x08,
    0x40,
    0x79,
    0xA0,
    0x00,
    0xFF,
    0x11,
    0x21,
    0x36,
    0x00,
    0x00,
    0x08,
    0x11,
    0x83,
    0x2F,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x04,
    0x6F,
    0x84,
    0x00,
    0x08,
    0x21,
    0x21,
    0x3C,
    0x00,
    0x04,
    0x00,
    0x11,
    0x10,
    0xC1,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x70,
    0x07,
    0x07,
    0x10,
    0x10,
    0x08,
    0x40,
    0xC0,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x7F,
    0xFF,
    0x11,
    0x8F,
    0x02,
    0x07,
    0x80,
    0x00,
    0x11,
    0x08,
    0x00,
    0x20,
    0x08,
    0xC1,
    0x84,
    0x40,
    0xBD,
    0x90,
    0x9E,
    0x02,
    0x07,
    0x40,
    0x7F,
    0xA0,
    0x40,
    0xEC,
    0x90,
    0x04,
    0x6E,
    0x84,
    0x00,
    0x08,
    0x21,
    0x21,
    0x4F,
    0x00,
    0x00,
    0x04,
    0x11,
    0x10,
    0x41,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x70,
    0x07,
    0x07,
    0x10,
    0x10,
    0x08,
    0x40,
    0x40,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x7F,
    0xFF,
    0x11,
    0x8F,
    0x02,
    0x07,
    0x80,
    0x00,
    0x11,
    0x08,
    0x00,
    0x20,
    0x08,
    0x41,
    0x84,
    0x40,
    0x3D,
    0x90,
    0x9E,
    0x02,
    0x07,
    0x40,
    0x7F,
    0xA0,
    0x40,
    0x6D,
    0x90,
    0x10,
    0x2D,
    0x44,
    0x20,
    0xFB,
    0x00,
    0x08,
    0x00,
    0x11,
    0x20,
    0x32,
    0x60,
    0x80,
    0x14,
    0x43,
    0x10,
    0x2C,
    0x44,
    0x21,
    0x00,
    0x00,
    0x00,
    0x08,
    0x11,
    0x20,
    0x31,
    0x60,
    0x00,
    0x14,
    0x43,
    0x04,
    0x34,
    0x44,
    0x40,
    0x5B,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x21,
    0x6D,
    0x00,
    0x80,
    0x00,
    0x11,
    0x21,
    0x73,
    0x00,
    0x3F,
    0xFF,
    0x11,
    0x08,
    0xE8,
    0x84,
    0x20,
    0x32,
    0x50,
    0x08,
    0x68,
    0x84,
    0x20,
    0x31,
    0x50,
    0x08,
    0x5E,
    0x84,
    0x20,
    0x30,
    0x50,
    0x0F,
    0xC4,
    0x07,
    0x10,
    0x34,
    0x44,
    0x10,
    0x5B,
    0x84,
    0x6F,
    0xF3,
    0x07,
    0x00,
    0x00,
    0x08,
    0x02,
    0x00,
    0x21,
    0x40,
    0xFC,
    0x90,
    0x3D,
    0xA0,
    0x00,
    0x04,
    0xFC,
    0x84,
    0x00,
    0x00,
    0x21,
    0x04,
    0xFD,
    0x84,
    0x00,
    0x08,
    0x21,
    0x00,
    0x04,
    0x00,
    0x21,
    0x84,
    0x00,
    0xC0,
    0x00,
    0x11,
    0x04,
    0x5B,
    0x84,
    0x02,
    0x00,
    0x21,
    0x70,
    0x06,
    0x07,
    0x10,
    0xFE,
    0x84,
    0x30,
    0x20,
    0x08,
    0x00,
    0x03,
    0x11,
    0x10,
    0x00,
    0x08,
    0x40,
    0x59,
    0x90,
    0x04,
    0xFF,
    0x84,
    0x40,
    0x58,
    0xA0,
    0x10,
    0x59,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x59,
    0xA0,
    0x20,
    0x00,
    0x11,
    0x70,
    0x1E,
    0x07,
    0x10,
    0x00,
    0x08,
    0x00,
    0x0B,
    0x11,
    0x0F,
    0xE4,
    0x07,
    0x10,
    0x59,
    0x84,
    0x00,
    0x00,
    0x08,
    0x20,
    0x30,
    0x50,
    0x40,
    0x59,
    0xA0,
    0x70,
    0x06,
    0x07,
    0x10,
    0x00,
    0x08,
    0x00,
    0x0A,
    0x11,
    0x0F,
    0xEC,
    0x07,
    0x08,
    0x34,
    0x44,
    0x02,
    0x10,
    0x11,
    0x10,
    0x58,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x58,
    0xA0,
    0x20,
    0x00,
    0x11,
    0x30,
    0x08,
    0x07,
    0x0F,
    0xF4,
    0x07,
    0x10,
    0x58,
    0x84,
    0x00,
    0x00,
    0x08,
    0x20,
    0x30,
    0x50,
    0x40,
    0x58,
    0xA0,
    0x70,
    0x06,
    0x07,
    0x10,
    0x00,
    0x08,
    0x00,
    0x05,
    0x11,
    0x00,
    0x04,
    0x00,
    0x10,
    0x5A,
    0x84,
    0x00,
    0x00,
    0x08,
    0x00,
    0x01,
    0x11,
    0x40,
    0x5A,
    0xA0,
    0x08,
    0x34,
    0x44,
    0x02,
    0x00,
    0x11,
    0x30,
    0x08,
    0x07,
    0x60,
    0x00,
    0x08,
    0x00,
    0x00,
    0x11,
    0x40,
    0x5A,
    0xA0,
    0x8F,
    0x4F,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x3C,
    0xA9,
    0x00,
    0x10,
    0x00,
    0x20,
    0xA8,
    0x14,
    0x43,
    0x04,
    0xA7,
    0x84,
    0x20,
    0x8E,
    0x08,
    0x40,
    0xC4,
    0x90,
    0x40,
    0xAF,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0xC5,
    0x90,
    0x40,
    0xA7,
    0xA0,
    0x3C,
    0xB3,
    0x00,
    0x10,
    0x00,
    0x20,
    0x28,
    0x14,
    0x43,
    0x04,
    0x27,
    0x84,
    0x20,
    0x8E,
    0x08,
    0x40,
    0x44,
    0x90,
    0x40,
    0x2F,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x45,
    0x90,
    0x40,
    0x27,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x10,
    0xF0,
    0x44,
    0x50,
    0x00,
    0x08,
    0xFF,
    0xF7,
    0x11,
    0x93,
    0x04,
    0x07,
    0x20,
    0xF0,
    0x60,
    0x04,
    0x61,
    0x84,
    0x04,
    0x5C,
    0x84,
    0x40,
    0x57,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x10,
    0x61,
    0x84,
    0x00,
    0x20,
    0x08,
    0x20,
    0x1F,
    0x08,
    0x40,
    0xFF,
    0xA0,
    0x10,
    0x00,
    0x08,
    0x40,
    0x5C,
    0x90,
    0x40,
    0x57,
    0xA0,
    0x04,
    0x74,
    0x84,
    0x10,
    0x00,
    0x20,
    0x00,
    0x00,
    0x08,
    0x40,
    0x74,
    0xA0,
    0x00,
    0x01,
    0x11,
    0x20,
    0x05,
    0x07,
    0x00,
    0x40,
    0x21,
    0x70,
    0x00,
    0x08,
    0x7F,
    0xFF,
    0x21,
    0x08,
    0xFF,
    0x84,
    0x42,
    0x00,
    0x90,
    0x85,
    0x02,
    0x07,
    0x20,
    0xF0,
    0x60,
    0x7F,
    0xFF,
    0x11,
    0x60,
    0x20,
    0x08,
    0x00,
    0xD0,
    0x11,
    0x40,
    0x00,
    0x08,
    0x00,
    0x02,
    0x11,
    0x86,
    0x1B,
    0x07,
    0x40,
    0x74,
    0xA0,
    0x08,
    0x66,
    0x84,
    0x7F,
    0xFF,
    0x11,
    0x8A,
    0x02,
    0x07,
    0x89,
    0x03,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x00,
    0x11,
    0x08,
    0x6F,
    0x84,
    0x00,
    0x00,
    0x11,
    0x04,
    0xF1,
    0x84,
    0x00,
    0x40,
    0x21,
    0x22,
    0x00,
    0x00,
    0x02,
    0x00,
    0x11,
    0x60,
    0x07,
    0x07,
    0x10,
    0x20,
    0x08,
    0x40,
    0xC3,
    0x90,
    0x20,
    0x2F,
    0x08,
    0x80,
    0x00,
    0x11,
    0x70,
    0x02,
    0x07,
    0x7F,
    0xFF,
    0x11,
    0x10,
    0x00,
    0x08,
    0x40,
    0x9D,
    0x90,
    0x40,
    0x87,
    0xA0,
    0x08,
    0x63,
    0x84,
    0x7F,
    0xFF,
    0x11,
    0x82,
    0x02,
    0x07,
    0x81,
    0x03,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x00,
    0x11,
    0x08,
    0x6E,
    0x84,
    0x00,
    0x00,
    0x11,
    0x04,
    0xF0,
    0x84,
    0x00,
    0x40,
    0x21,
    0x22,
    0x16,
    0x00,
    0x00,
    0x02,
    0x11,
    0x60,
    0x07,
    0x07,
    0x10,
    0x20,
    0x08,
    0x40,
    0x43,
    0x90,
    0x20,
    0x2F,
    0x08,
    0x80,
    0x00,
    0x11,
    0x70,
    0x02,
    0x07,
    0x7F,
    0xFF,
    0x11,
    0x10,
    0x00,
    0x08,
    0x40,
    0x1D,
    0x90,
    0x40,
    0x07,
    0xA0,
    0x10,
    0xEC,
    0x84,
    0x00,
    0x10,
    0x08,
    0x10,
    0xE7,
    0x84,
    0x40,
    0xE7,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0xEF,
    0xA0,
    0x10,
    0x6D,
    0x84,
    0x00,
    0x10,
    0x08,
    0x10,
    0x6C,
    0x84,
    0x40,
    0x6C,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x7D,
    0xA0,
    0x7F,
    0xFF,
    0x11,
    0x00,
    0x04,
    0x00,
    0x10,
    0xEF,
    0x84,
    0x00,
    0x10,
    0x08,
    0x10,
    0xEE,
    0x84,
    0x40,
    0xEE,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0xBD,
    0xA0,
    0x10,
    0x7D,
    0x84,
    0x00,
    0x10,
    0x08,
    0x10,
    0x7C,
    0x84,
    0x40,
    0x7C,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x3D,
    0xA0,
    0x40,
    0x00,
    0x11,
    0x3E,
    0x73,
    0x00,
    0xFB,
    0xFF,
    0x21,
    0x6F,
    0x14,
    0x43,
    0x3E,
    0x76,
    0x00,
    0xFF,
    0xFB,
    0x21,
    0x6E,
    0x14,
    0x43,
    0x3E,
    0x79,
    0x00,
    0xFF,
    0xFF,
    0x21,
    0x51,
    0x14,
    0x43,
    0x3D,
    0x32,
    0x00,
    0x40,
    0xAF,
    0xA0,
    0xA0,
    0x14,
    0x43,
    0x3D,
    0x35,
    0x00,
    0x40,
    0x2F,
    0xA0,
    0x20,
    0x14,
    0x43,
    0x00,
    0x04,
    0x00,
    0x3D,
    0x39,
    0x00,
    0x40,
    0xA5,
    0xA0,
    0xB0,
    0x14,
    0x43,
    0x3D,
    0x3C,
    0x00,
    0x40,
    0x25,
    0xA0,
    0x30,
    0x14,
    0x43,
    0x3E,
    0x53,
    0x00,
    0xB8,
    0x14,
    0x43,
    0x40,
    0xC2,
    0xA0,
    0x3E,
    0x56,
    0x00,
    0x38,
    0x14,
    0x43,
    0x40,
    0x42,
    0xA0,
    0x08,
    0xBB,
    0x84,
    0x08,
    0x3B,
    0x84,
    0xCB,
    0x90,
    0x11,
    0x9E,
    0x02,
    0x07,
    0xC7,
    0x00,
    0x11,
    0x40,
    0x7F,
    0xA0,
    0x08,
    0xBA,
    0x84,
    0x08,
    0x3A,
    0x84,
    0x74,
    0x70,
    0x11,
    0x9E,
    0x02,
    0x07,
    0x59,
    0x00,
    0x11,
    0x40,
    0x7F,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x10,
    0x11,
    0x84,
    0x00,
    0x00,
    0x08,
    0x40,
    0x13,
    0x90,
    0x40,
    0x11,
    0xA0,
    0x3E,
    0xA0,
    0x00,
    0xFD,
    0xFF,
    0x21,
    0xF1,
    0x14,
    0x43,
    0x3E,
    0xA3,
    0x00,
    0xFF,
    0xFD,
    0x21,
    0xF0,
    0x14,
    0x43,
    0x00,
    0x04,
    0x00,
    0x10,
    0xB9,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0xBE,
    0xA0,
    0x40,
    0xB6,
    0x90,
    0x08,
    0xBE,
    0x84,
    0x70,
    0x02,
    0x07,
    0x10,
    0x20,
    0x08,
    0x7F,
    0xFF,
    0x11,
    0x10,
    0xBE,
    0x84,
    0x00,
    0x00,
    0x08,
    0x40,
    0x53,
    0xA0,
    0x7F,
    0xFF,
    0x11,
    0x99,
    0x02,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x40,
    0xBE,
    0x90,
    0x10,
    0x53,
    0x84,
    0x60,
    0x00,
    0x08,
    0xFF,
    0x00,
    0x21,
    0x40,
    0xF5,
    0x90,
    0x89,
    0x01,
    0x07,
    0x9A,
    0x08,
    0x07,
    0x40,
    0xBE,
    0x90,
    0x08,
    0x53,
    0x84,
    0x00,
    0x01,
    0x11,
    0x40,
    0x7E,
    0xA0,
    0x10,
    0x39,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0x3E,
    0xA0,
    0x40,
    0x36,
    0x90,
    0x08,
    0x3E,
    0x84,
    0x70,
    0x02,
    0x07,
    0x10,
    0x20,
    0x08,
    0x7F,
    0xFF,
    0x11,
    0x10,
    0x3E,
    0x84,
    0x00,
    0x00,
    0x08,
    0x40,
    0x52,
    0xA0,
    0x7F,
    0xFF,
    0x11,
    0x91,
    0x02,
    0x07,
    0x40,
    0x7E,
    0xA0,
    0x40,
    0x3E,
    0x90,
    0x10,
    0x52,
    0x84,
    0x60,
    0x00,
    0x08,
    0xFF,
    0x00,
    0x21,
    0x40,
    0xF5,
    0x90,
    0x81,
    0x01,
    0x07,
    0x92,
    0x08,
    0x07,
    0x40,
    0x3E,
    0x90,
    0x08,
    0x52,
    0x84,
    0x00,
    0x01,
    0x11,
    0x40,
    0x7E,
    0xA0,
    0x00,
    0x04,
    0x00,
    0x22,
    0x8F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x10,
    0x73,
    0x84,
    0x00,
    0x10,
    0x08,
    0x40,
    0x73,
    0xA0,
    0x20,
    0x0F,
    0x08,
    0x40,
    0xFF,
    0x90,
    0x40,
    0x8D,
    0xA0,
    0x10,
    0x71,
    0x84,
    0x00,
    0x10,
    0x08,
    0x40,
    0x71,
    0xA0,
    0x20,
    0x1F,
    0x08,
    0x40,
    0x0D,
    0xA0,
    0x10,
    0xFF,
    0x84,
    0x20,
    0x0F,
    0x08,
    0x40,
    0xF5,
    0x90,
    0x40,
    0x51,
    0xA0,
    0x04,
    0xBC,
    0x84,
    0x04,
    0x3C,
    0x84,
    0x00,
    0x00,
    0x21,
    0x04,
    0xF1,
    0x84,
    0x04,
    0xF0,
    0x84,
    0x00,
    0x40,
    0x21,
    0x22,
    0xBB,
    0x00,
    0x02,
    0x02,
    0x11,
    0x60,
    0x09,
    0x07,
    0x10,
    0x00,
    0x08,
    0x40,
    0xF3,
    0x90,
    0x20,
    0x1B,
    0x07,
    0x60,
    0x00,
    0x08,
    0x00,
    0x00,
    0x11,
    0x40,
    0x51,
    0xA0,
    0x3E,
    0xC4,
    0x00,
    0x40,
    0x87,
    0xA0,
    0x80,
    0x14,
    0x43,
    0x3E,
    0xC7,
    0x00,
    0x40,
    0x07,
    0xA0,
    0x00,
    0x14,
    0x43,
    0x00,
    0x04,
    0x00,
    0x3E,
    0xCB,
    0x00,
    0x40,
    0x85,
    0xA0,
    0x88,
    0x14,
    0x43,
    0x3E,
    0xCE,
    0x00,
    0x40,
    0x05,
    0xA0,
    0x08,
    0x14,
    0x43,
    0x00,
    0x04,
    0x00,
    0x3E,
    0xD2,
    0x00,
    0x40,
    0x8D,
    0xA0,
    0x98,
    0x14,
    0x43,
    0x3E,
    0xD5,
    0x00,
    0x40,
    0x0D,
    0xA0,
    0x18,
    0x14,
    0x43,
    0x00,
    0x04,
    0x00,
    0x00,
    0x01,
    0x07,
    0x00,
    0x02,
    0x07,
    0x00,
    0x03,
    0x07,
    0x00,
    0x05,
    0x07,
    0x00,
    0x0D,
    0x07,
    0x00,
    0x15,
    0x07,
    0x00,
    0x3D,
    0x07,
    0x00,
    0x71,
    0x07,
    0x00,
    0x7D,
    0x07,
    0x00,
    0x97,
    0x07,
    0x00,
    0xB5,
    0x07,
    0x01,
    0x14,
    0x07,
    0x01,
    0x2A,
    0x07,
    0x01,
    0xE5,
    0x07,
    0x02,
    0x17,
    0x07,
    0x00,
    0x10,
    0x07,
    0x1F,
    0xFF,
    0x07,
    0x20,
    0x03,
    0x60,
    0x0F,
    0x61,
    0x07,
    0x08,
    0xFA,
    0x84,
    0x04,
    0x11,
    0x44,
    0xFF,
    0x00,
    0x11,
    0x2F,
    0x65,
    0x07,
    0x70,
    0x10,
    0x08,
    0x00,
    0xF0,
    0x21,
    0x50,
    0x00,
    0x08,
    0x00,
    0xF0,
    0x21,
    0x40,
    0xF9,
    0x90,
    0x00,
    0x08,
    0x07,
    0x3E,
    0x79,
    0x00,
    0x0F,
    0x6D,
    0x07,
    0x04,
    0xBC,
    0x84,
    0x04,
    0x3C,
    0x84,
    0x04,
    0xC2,
    0x84,
    0x04,
    0x42,
    0x84,
    0x04,
    0x11,
    0x84,
    0x00,
    0x00,
    0x21,
    0x04,
    0x51,
    0x84,
    0x40,
    0xF2,
    0xA0,
    0x90,
    0x09,
    0x07,
    0x40,
    0xF9,
    0xA0,
    0x3F,
    0x78,
    0x07,
    0x70,
    0x00,
    0x08,
    0x00,
    0x7F,
    0x11,
    0x40,
    0xF8,
    0xA0,
    0x9D,
    0x0F,
    0x07,
    0x20,
    0x12,
    0x60,
    0x08,
    0xFA,
    0x84,
    0x04,
    0x11,
    0x44,
    0x3E,
    0x5C,
    0x00,
    0x00,
    0x1E,
    0x07,
    0x48,
    0x80,
    0x11,
    0x08,
    0x09,
    0x44,
    0x40,
    0x75,
    0x90,
    0x7F,
    0xEF,
    0x07,
    0x10,
    0x00,
    0x20,
    0x00,
    0x10,
    0x08,
    0xFF,
    0xFF,
    0x21,
    0x06,
    0x00,
    0x84,
    0x40,
    0xFB,
    0xA0,
    0x60,
    0x00,
    0x08,
    0x00,
    0x00,
    0x21,
    0x40,
    0xFF,
    0x90,
    0x10,
    0xFB,
    0x84,
    0x60,
    0x20,
    0x08,
    0x40,
    0xFB,
    0x90,
    0x30,
    0x00,
    0x08,
    0x00,
    0x08,
    0x11,
    0x3D,
    0xF2,
    0x00,
    0x04,
    0xFB,
    0x84,
    0x3D,
    0xF4,
    0x00,
    0x04,
    0xFF,
    0x84,
    0x40,
    0xF8,
    0xA0,
    0x04,
    0x11,
    0x44,
    0x8F,
    0xFF,
    0x07,
    0x20,
    0x19,
    0x60,
    0x3E,
    0xDA,
    0x00,
    0x00,
    0x39,
    0x07,
    0x00,
    0x01,
    0x00,
    0x00,
    0x3B,
    0x07,
    0x00,
    0x02,
    0x00,
    0x27,
    0x18,
    0x43,
    0x75,
    0x00,
    0x43,
    0x8F,
    0xFF,
    0x07,
    0x20,
    0x19,
    0x60,
    0x04,
    0x72,
    0x44,
    0x07,
    0x37,
    0x21,
    0x3F,
    0xFA,
    0x07,
    0x70,
    0x20,
    0x08,
    0x00,
    0x00,
    0x11,
    0x10,
    0x2D,
    0x44,
    0x10,
    0x2C,
    0x44,
    0x00,
    0x20,
    0x08,
    0x10,
    0x00,
    0x11,
    0x00,
    0x00,
    0x08,
    0x00,
    0x00,
    0x11,
    0x80,
    0x00,
    0x21,
    0x04,
    0x73,
    0x44,
    0x07,
    0x07,
    0x21,
    0x04,
    0x72,
    0x44,
    0x00,
    0x07,
    0x21,
    0x04,
    0x73,
    0x44,
    0x07,
    0x77,
    0x21,
    0x04,
    0x73,
    0x44,
    0x00,
    0x70,
    0x21,
    0x04,
    0x2E,
    0x44,
    0x04,
    0x2D,
    0x44,
    0x04,
    0x2C,
    0x44,
    0x80,
    0x00,
    0x21,
    0x04,
    0x1C,
    0x44,
    0x04,
    0x1B,
    0x44,
    0x1B,
    0x18,
    0x21,
    0x0F,
    0x18,
    0x43,
    0x08,
    0x28,
    0x44,
    0x01,
    0x11,
    0x11,
    0x08,
    0x5D,
    0x84,
    0x10,
    0x00,
    0x10,
    0x10,
    0x00,
    0x08,
    0x40,
    0x00,
    0x21,
    0x30,
    0x04,
    0x07,
    0x40,
    0xFF,
    0x90,
    0x50,
    0x20,
    0x08,
    0xC0,
    0x00,
    0x11,
    0x10,
    0xFF,
    0x84,
    0x00,
    0x20,
    0x08,
    0x00,
    0x40,
    0x11,
    0x40,
    0x00,
    0x08,
    0x00,
    0x01,
    0x11,
    0x20,
    0x51,
    0x60,
    0x04,
    0x15,
    0x84,
    0x08,
    0x00,
    0x21,
    0x04,
    0x13,
    0x84,
    0x00,
    0x1C,
    0x21,
    0x04,
    0x12,
    0x84,
    0x20,
    0x00,
    0x21,
    0x10,
    0x00,
    0x44,
    0x60,
    0x00,
    0x08,
    0x40,
    0x54,
    0x90,
    0x20,
    0x00,
    0x60,
    0x00,
    0x77,
    0x07,
    0x81,
    0x3E,
    0x07,
    0x80,
    0x03,
    0x07,
    0x40,
    0xF8,
    0xA0,
    0x48,
    0xC0,
    0x11,
    0x00,
    0x75,
    0x07,
    0x00,
    0x76,
    0x07,
    0x00,
    0x77,
    0x07,
    0x00,
    0x04,
    0x07,
    0x00,
    0x79,
    0x07,
    0x00,
    0x7A,
    0x07,
    0x00,
    0x7B,
    0x07,
    0x00,
    0x4B,
    0x07,
    0x00,
    0x7D,
    0x07,
    0x00,
    0x7E,
    0x07,
    0x00,
    0x7F,
    0x07,
    0x00,
    0x6A,
    0x07,
    0x00,
    0x81,
    0x07,
    0x00,
    0x80,
    0x07,
    0x00,
    0x83,
    0x07,
    0x00,
    0x84,
    0x07,
    0x0F,
    0xEF,
    0x07,
    0x1F,
    0xFF,
    0x07,
    0xFF,
    0x00,
    0x11,
    0x10,
    0x00,
    0x20,
    0x30,
    0x10,
    0x08,
    0x00,
    0x01,
    0x21,
    0x50,
    0x00,
    0x08,
    0x00,
    0x0F,
    0x21,
    0x40,
    0xF9,
    0x90,
    0x30,
    0x8E,
    0x07,
    0x70,
    0x10,
    0x08,
    0x00,
    0x80,
    0x21,
    0x50,
    0x00,
    0x08,
    0x00,
    0xF0,
    0x21,
    0x08,
    0xF9,
    0x84,
    0x04,
    0xF8,
    0x84,
    0x2F,
    0xFF,
    0x07,
    0x3E,
    0x57,
    0x00,
    0x04,
    0xF5,
    0x84,
    0x30,
    0xFF,
    0x21,
    0x04,
    0xF3,
    0x84,
    0x02,
    0x00,
    0x21,
    0x04,
    0xF2,
    0x84,
    0x04,
    0x00,
    0x21,
    0x04,
    0xF1,
    0x84,
    0x04,
    0xF0,
    0x84,
    0x04,
    0x5A,
    0x84,
    0x00,
    0x00,
    0x21,
    0x04,
    0xF6,
    0x84,
    0x09,
    0xC6,
    0x21,
    0x04,
    0xFA,
    0x84,
    0x40,
    0x00,
    0x21,
    0x04,
    0xF7,
    0x84,
    0x01,
    0x04,
    0x21,
    0x04,
    0x70,
    0x44,
    0x06,
    0x66,
    0x21,
    0x04,
    0x3B,
    0x44,
    0x04,
    0x39,
    0x44,
    0x00,
    0x80,
    0x21,
    0x04,
    0x3C,
    0x44,
    0x2A,
    0x0F,
    0x21,
    0x04,
    0x2F,
    0x44,
    0x00,
    0x44,
    0x21,
    0x04,
    0x29,
    0x44,
    0x00,
    0x00,
    0x21,
    0x03,
    0x19,
    0x42,
    0x4E,
    0x19,
    0x43,
    0x0C,
    0x59,
    0x43,
    0x27,
    0x18,
    0x43,
    0x15,
    0x00,
    0x43,
    0x04,
    0x22,
    0x44,
    0x03,
    0x07,
    0x21,
    0x04,
    0x21,
    0x44,
    0x11,
    0x11,
    0x21,
    0x04,
    0x20,
    0x44,
    0x33,
    0x33,
    0x21,
    0x00,
    0x00,
    0x42,
    0xC0,
    0x3D,
    0x42,
    0x80,
    0x3D,
    0x43,
    0x04,
    0x35,
    0x44,
    0x00,
    0x00,
    0x21,
    0x04,
    0x05,
    0x43,
    0x42,
    0xCD,
    0x00,
};

const	OIS_UWORD	DOWNLOAD_BIN_LEN = sizeof( DOWNLOAD_BIN );
#endif // OIS_PROG_H
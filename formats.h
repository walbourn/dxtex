// formats.h header file

#ifndef _FORMATS_H_
#define _FORMATS_H_

#include "stdafx.h"
#include "dxtex.h"

struct FMTINFO
{
    D3DFORMAT fmt;
    const TCHAR* strName;
    const TCHAR* strType;
    int   nBitsPerTexel;
    BOOL  bHasAlpha;
    UINT  idsFmtDesc;
};

static const TCHAR* TYPE_UNSIGNED = TEXT("Unsigned");
static const TCHAR* TYPE_SIGNED   = TEXT("Signed");
static const TCHAR* TYPE_MIXED    = TEXT("Mixed");
static const TCHAR* TYPE_FOUR_CC  = TEXT("Four CC");
static const TCHAR* TYPE_FLOAT    = TEXT("Floating-Point");
static const TCHAR* TYPE_IEEE     = TEXT("IEEE Floating-Point");

const FMTINFO fmtInfoArray[] = 
{
    D3DFMT_A4L4,            TEXT("A4L4"),           TYPE_UNSIGNED,   8,     TRUE,   IDS_FMTDESC_A4L4,
    D3DFMT_A8,              TEXT("A8"),             TYPE_UNSIGNED,   8,     TRUE,   IDS_FMTDESC_A8,
    D3DFMT_L8,              TEXT("L8"),             TYPE_UNSIGNED,   8,     FALSE,  IDS_FMTDESC_L8,
    D3DFMT_P8,              TEXT("P8"),             TYPE_UNSIGNED,   8,     FALSE,  IDS_FMTDESC_P8,
    D3DFMT_R3G3B2,          TEXT("R3G3B2"),         TYPE_UNSIGNED,   8,     FALSE,  IDS_FMTDESC_R3G3B2, 
    D3DFMT_A1R5G5B5,        TEXT("A1R5G5B5"),       TYPE_UNSIGNED,   16,    TRUE,   IDS_FMTDESC_A1R5G5B5, 
    D3DFMT_A4R4G4B4,        TEXT("A4R4G4B4"),       TYPE_UNSIGNED,   16,    TRUE,   IDS_FMTDESC_A4R4G4B4, 
    D3DFMT_A8L8,            TEXT("A8L8"),           TYPE_UNSIGNED,   16,    TRUE,   IDS_FMTDESC_A8L8,
    D3DFMT_A8P8,            TEXT("A8P8"),           TYPE_UNSIGNED,   16,    TRUE,   IDS_FMTDESC_A8P8,
    D3DFMT_A8R3G3B2,        TEXT("A8R3G3B2"),       TYPE_UNSIGNED,   16,    TRUE,   IDS_FMTDESC_A8R3G3B2, 
    D3DFMT_L16,             TEXT("L16"),            TYPE_UNSIGNED,   16,    FALSE,  IDS_FMTDESC_L16,
    D3DFMT_R5G6B5,          TEXT("R5G6B5"),         TYPE_UNSIGNED,   16,    FALSE,  IDS_FMTDESC_R5G6B5, 
    D3DFMT_X1R5G5B5,        TEXT("X1R5G5B5"),       TYPE_UNSIGNED,   16,    FALSE,  IDS_FMTDESC_X1R5G5B5, 
    D3DFMT_X4R4G4B4,        TEXT("X4R4G4B4"),       TYPE_UNSIGNED,   16,    FALSE,  IDS_FMTDESC_X4R4G4B4, 
    D3DFMT_R8G8B8,          TEXT("R8G8B8"),         TYPE_UNSIGNED,   24,    FALSE,  IDS_FMTDESC_R8G8B8, 
    D3DFMT_A2B10G10R10,     TEXT("A2B10G10R10"),    TYPE_UNSIGNED,   32,    TRUE,   IDS_FMTDESC_A2B10G10R10,
    D3DFMT_A2R10G10B10,     TEXT("A2R10G10B10"),    TYPE_UNSIGNED,   32,    TRUE,   IDS_FMTDESC_A2R10G10B10, 
    D3DFMT_A8B8G8R8,        TEXT("A8B8G8R8"),       TYPE_UNSIGNED,   32,    TRUE,   IDS_FMTDESC_A8B8G8R8,
    D3DFMT_A8R8G8B8,        TEXT("A8R8G8B8"),       TYPE_UNSIGNED,   32,    TRUE,   IDS_FMTDESC_A8R8G8B8, 
    D3DFMT_G16R16,          TEXT("G16R16"),         TYPE_UNSIGNED,   32,    FALSE,  IDS_FMTDESC_G16R16,
    D3DFMT_X8B8G8R8,        TEXT("X8B8G8R8"),       TYPE_UNSIGNED,   32,    FALSE,  IDS_FMTDESC_X8B8G8R8,
    D3DFMT_X8R8G8B8,        TEXT("X8R8G8B8"),       TYPE_UNSIGNED,   32,    FALSE,  IDS_FMTDESC_X8R8G8B8, 
    D3DFMT_A16B16G16R16,    TEXT("A16B16G16R16"),   TYPE_UNSIGNED,   64,    TRUE,   IDS_FMTDESC_A16B16G16R16, 
    
    D3DFMT_CxV8U8,          TEXT("CxV8U8"),         TYPE_SIGNED,     16,    FALSE,  IDS_FMTDESC_CxV8U8,
    D3DFMT_V8U8,            TEXT("V8U8"),           TYPE_SIGNED,     16,    FALSE,  IDS_FMTDESC_V8U8,
    D3DFMT_Q8W8V8U8,        TEXT("Q8W8V8U8"),       TYPE_SIGNED,     32,    TRUE,   IDS_FMTDESC_Q8W8V8U8,
    D3DFMT_V16U16,          TEXT("V16U16"),         TYPE_SIGNED,     32,    FALSE,  IDS_FMTDESC_V16U16,
    D3DFMT_Q16W16V16U16,    TEXT("Q16W16V16U16"),   TYPE_SIGNED,     64,    TRUE,   IDS_FMTDESC_Q16W16V16U16,
    
    D3DFMT_L6V5U5,          TEXT("L6V5U5"),         TYPE_MIXED,      16,    FALSE,  IDS_FMTDESC_L6V5U5,
    D3DFMT_A2W10V10U10,     TEXT("A2W10V10U10"),    TYPE_MIXED,      32,    FALSE,  IDS_FMTDESC_A2W10V10U10,
    D3DFMT_X8L8V8U8,        TEXT("X8L8V8U8"),       TYPE_MIXED,      32,    FALSE,  IDS_FMTDESC_X8L8V8U8,
    
    D3DFMT_DXT1,            TEXT("DXT1"),           TYPE_FOUR_CC,    4,     TRUE,   IDS_FMTDESC_DXT1, 
    D3DFMT_DXT2,            TEXT("DXT2"),           TYPE_FOUR_CC,    8,     FALSE,  IDS_FMTDESC_DXT2, 
    D3DFMT_DXT3,            TEXT("DXT3"),           TYPE_FOUR_CC,    8,     TRUE,   IDS_FMTDESC_DXT3, 
    D3DFMT_DXT4,            TEXT("DXT4"),           TYPE_FOUR_CC,    8,     FALSE,  IDS_FMTDESC_DXT4, 
    D3DFMT_DXT5,            TEXT("DXT5"),           TYPE_FOUR_CC,    8,     TRUE,   IDS_FMTDESC_DXT5, 
    D3DFMT_G8R8_G8B8,       TEXT("G8R8_G8B8"),      TYPE_FOUR_CC,    16,    FALSE,  IDS_FMTDESC_G8R8_G8B8,
    D3DFMT_R8G8_B8G8,       TEXT("R8G8_B8G8"),      TYPE_FOUR_CC,    16,    FALSE,  IDS_FMTDESC_R8G8_B8G8,
    D3DFMT_UYVY,            TEXT("UYVY"),           TYPE_FOUR_CC,    16,    FALSE,  IDS_FMTDESC_UYVY,
    D3DFMT_YUY2,            TEXT("YUY2"),           TYPE_FOUR_CC,    16,    FALSE,  IDS_FMTDESC_YUY2,   

    D3DFMT_R16F,            TEXT("R16F"),           TYPE_FLOAT,      16,    FALSE,  IDS_FMTDESC_R16F,
    D3DFMT_G16R16F,         TEXT("G16R16F"),        TYPE_FLOAT,      32,    FALSE,  IDS_FMTDESC_G16R16F,  
    D3DFMT_A16B16G16R16F,   TEXT("A16B16G16R16F"),  TYPE_FLOAT,      64,    TRUE,   IDS_FMTDESC_A16B16G16R16F,

    D3DFMT_R32F,            TEXT("R32F"),           TYPE_IEEE,       32,    FALSE,  IDS_FMTDESC_R32F,
    D3DFMT_G32R32F,         TEXT("G32R32F"),        TYPE_IEEE,       64,    FALSE,  IDS_FMTDESC_G32R32F,
    D3DFMT_A32B32G32R32F,   TEXT("A32B32G32R32F"),  TYPE_IEEE,       128,   TRUE,   IDS_FMTDESC_A32B32G32R32F, 
};
const int fmtInfoArraySize = sizeof(fmtInfoArray) / sizeof(fmtInfoArray[0]);

#endif // _FORMATS_H_
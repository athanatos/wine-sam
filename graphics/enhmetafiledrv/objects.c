/*
 * Enhanced MetaFile objects
 *
 * Copyright 1999 Huw D M Davies
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "bitmap.h"
#include "brush.h"
#include "font.h"
#include "enhmetafiledrv.h"
#include "pen.h"
#include "debugtools.h"
#include "heap.h"

DEFAULT_DEBUG_CHANNEL(enhmetafile);

/***********************************************************************
 *           EMFDRV_BITMAP_SelectObject
 */
static HBITMAP EMFDRV_BITMAP_SelectObject( DC * dc, HBITMAP hbitmap )
{
    return 0;
}


/***********************************************************************
 *           EMFDRV_CreateBrushIndirect
 */
DWORD EMFDRV_CreateBrushIndirect( DC *dc, HBRUSH hBrush )
{
    DWORD index = 0;
    BRUSHOBJ *brushObj = (BRUSHOBJ *)GDI_GetObjPtr( hBrush, BRUSH_MAGIC );

    switch (brushObj->logbrush.lbStyle) {
    case BS_SOLID:
    case BS_HATCHED:
    case BS_NULL:
      {
	EMRCREATEBRUSHINDIRECT emr;
	emr.emr.iType = EMR_CREATEBRUSHINDIRECT;
	emr.emr.nSize = sizeof(emr);
	emr.ihBrush = index = EMFDRV_AddHandleDC( dc );
	emr.lb = brushObj->logbrush;

	if(!EMFDRV_WriteRecord( dc, &emr.emr ))
	    index = 0;
      }
      break;
    case BS_DIBPATTERN:
      {
	EMRCREATEDIBPATTERNBRUSHPT *emr;
	DWORD bmSize, biSize, size;
	BITMAPINFO *info = GlobalLock16(brushObj->logbrush.lbHatch);

	if (info->bmiHeader.biCompression)
            bmSize = info->bmiHeader.biSizeImage;
        else
	    bmSize = DIB_GetDIBImageBytes(info->bmiHeader.biWidth,
					  info->bmiHeader.biHeight,
					  info->bmiHeader.biBitCount);
	biSize = DIB_BitmapInfoSize(info, LOWORD(brushObj->logbrush.lbColor)); 
	size = sizeof(EMRCREATEDIBPATTERNBRUSHPT) + biSize + bmSize;
	emr = HeapAlloc( GetProcessHeap(), 0, size );
	if(!emr) break;
	emr->emr.iType = EMR_CREATEDIBPATTERNBRUSHPT;
	emr->emr.nSize = size;
	emr->ihBrush = index = EMFDRV_AddHandleDC( dc );
	emr->iUsage = LOWORD(brushObj->logbrush.lbColor);
	emr->offBmi = sizeof(EMRCREATEDIBPATTERNBRUSHPT);
	emr->cbBmi = biSize;
	emr->offBits = sizeof(EMRCREATEDIBPATTERNBRUSHPT) + biSize;
	memcpy((char *)emr + sizeof(EMRCREATEDIBPATTERNBRUSHPT), info,
	       biSize + bmSize ); 

	if(!EMFDRV_WriteRecord( dc, &emr->emr ))
	    index = 0;
	HeapFree( GetProcessHeap(), 0, emr );
	GlobalUnlock16(brushObj->logbrush.lbHatch);
      }
      break;

    case BS_PATTERN:
        FIXME("Unsupported style %x\n",
	      brushObj->logbrush.lbStyle);
        break;
    default:
        FIXME("Unknown style %x\n", brushObj->logbrush.lbStyle);
	break;
    }
    GDI_ReleaseObj( hBrush );
    return index;
}


/***********************************************************************
 *           EMFDRV_BRUSH_SelectObject
 */
static HBRUSH EMFDRV_BRUSH_SelectObject(DC *dc, HBRUSH hBrush )
{
    EMRSELECTOBJECT emr;
    DWORD index;
    HBRUSH hOldBrush;
    
    /* If the object is a stock brush object, do not need to create it.
     * See definitions in  wingdi.h for range of stock brushes.
     * We do however have to handle setting the higher order bit to
     * designate that this is a stock object.
     */
    if (hBrush >= FIRST_STOCK_HANDLE &&
        hBrush <= FIRST_STOCK_HANDLE+HOLLOW_BRUSH )
    {
        DWORD brush_index = hBrush - FIRST_STOCK_HANDLE;
        index = brush_index | 0x80000000;
    }
    else
    {
        index = EMFDRV_CreateBrushIndirect(dc, hBrush );
    }
    
    if(!index) return FALSE;

    emr.emr.iType = EMR_SELECTOBJECT;
    emr.emr.nSize = sizeof(emr);
    emr.ihObject = index;
    if(!EMFDRV_WriteRecord( dc, &emr.emr ))
        return FALSE;

    hOldBrush = dc->hBrush;
    dc->hBrush = hBrush;
    return hOldBrush;
}


/******************************************************************
 *         EMFDRV_CreateFontIndirect
 */
static BOOL EMFDRV_CreateFontIndirect(DC *dc, HFONT hFont )
{
    DWORD index = 0;
    FONTOBJ *fontObj = (FONTOBJ *)GDI_GetObjPtr( hFont, FONT_MAGIC );
    EMREXTCREATEFONTINDIRECTW emr;
    int i;
    emr.emr.iType = EMR_EXTCREATEFONTINDIRECTW;
    emr.emr.nSize = (sizeof(emr) + 3) / 4 * 4;
    emr.ihFont = index = EMFDRV_AddHandleDC( dc );
    FONT_LogFont16To32W( &(fontObj->logfont), &(emr.elfw.elfLogFont) );
    emr.elfw.elfFullName[0] = '\0';
    emr.elfw.elfStyle[0]    = '\0';
    emr.elfw.elfVersion     = 0;
    emr.elfw.elfStyleSize   = 0;
    emr.elfw.elfMatch       = 0;
    emr.elfw.elfReserved    = 0;
    for(i = 0; i < ELF_VENDOR_SIZE; i++)
        emr.elfw.elfVendorId[i] = 0;
    emr.elfw.elfCulture                 = PAN_CULTURE_LATIN;
    emr.elfw.elfPanose.bFamilyType      = PAN_NO_FIT;
    emr.elfw.elfPanose.bSerifStyle      = PAN_NO_FIT;
    emr.elfw.elfPanose.bWeight          = PAN_NO_FIT;
    emr.elfw.elfPanose.bProportion      = PAN_NO_FIT;
    emr.elfw.elfPanose.bContrast        = PAN_NO_FIT;
    emr.elfw.elfPanose.bStrokeVariation = PAN_NO_FIT;
    emr.elfw.elfPanose.bArmStyle        = PAN_NO_FIT;
    emr.elfw.elfPanose.bLetterform      = PAN_NO_FIT;
    emr.elfw.elfPanose.bMidline         = PAN_NO_FIT;
    emr.elfw.elfPanose.bXHeight         = PAN_NO_FIT;

    if(!EMFDRV_WriteRecord( dc, &emr.emr ))
        index = 0;
    GDI_ReleaseObj( hFont );
    return index;
}


/***********************************************************************
 *           EMFDRV_FONT_SelectObject
 */
static HFONT EMFDRV_FONT_SelectObject( DC * dc, HFONT hFont )
{
    EMRSELECTOBJECT emr;
    DWORD index;
    HFONT hOldFont;

    /* If the object is a stock font object, do not need to create it.
     * See definitions in  wingdi.h for range of stock fonts.
     * We do however have to handle setting the higher order bit to
     * designate that this is a stock object.
     */

    if (hFont >= STOCK_OEM_FIXED_FONT &&
        hFont <= STOCK_DEFAULT_GUI_FONT &&
        hFont != STOCK_DEFAULT_PALETTE)
    {
        DWORD font_index = hFont - FIRST_STOCK_HANDLE;
        index = font_index | 0x80000000;
    }
    else
    {
        index = EMFDRV_CreateFontIndirect(dc, hFont );
    }

    if(!index) return FALSE;

    emr.emr.iType = EMR_SELECTOBJECT;
    emr.emr.nSize = sizeof(emr);
    emr.ihObject = index;
    if(!EMFDRV_WriteRecord( dc, &emr.emr ))
        return FALSE;

    hOldFont = dc->hFont;
    dc->hFont = hFont;
    return hOldFont;
}



/******************************************************************
 *         EMFDRV_CreatePenIndirect
 */
static HPEN EMFDRV_CreatePenIndirect(DC *dc, HPEN hPen )
{
    EMRCREATEPEN emr;
    PENOBJ *penObj = (PENOBJ *)GDI_GetObjPtr( hPen, PEN_MAGIC );
    DWORD index = 0;

    emr.emr.iType = EMR_CREATEPEN;
    emr.emr.nSize = sizeof(emr);
    emr.ihPen = index = EMFDRV_AddHandleDC( dc );
    emr.lopn = penObj->logpen;

    if(!EMFDRV_WriteRecord( dc, &emr.emr ))
        index = 0;
    GDI_ReleaseObj( hPen );
    return index;
}

/******************************************************************
 *         EMFDRV_PEN_SelectObject
 */
static HPEN EMFDRV_PEN_SelectObject(DC *dc, HPEN hPen )
{
    EMRSELECTOBJECT emr;
    DWORD index;
    HFONT hOldPen;

    /* If the object is a stock pen object, do not need to create it.
     * See definitions in  wingdi.h for range of stock pens.
     * We do however have to handle setting the higher order bit to
     * designate that this is a stock object.
     */

    if (hPen >= STOCK_WHITE_PEN &&
        hPen <= STOCK_NULL_PEN )
    {
        DWORD pen_index = hPen - FIRST_STOCK_HANDLE; 
        index = pen_index | 0x80000000;
    }
    else
    {
        index = EMFDRV_CreatePenIndirect(dc, hPen );
    }
 
    if(!index) return FALSE;
    
    emr.emr.iType = EMR_SELECTOBJECT;
    emr.emr.nSize = sizeof(emr);
    emr.ihObject = index;
    if(!EMFDRV_WriteRecord( dc, &emr.emr ))
        return FALSE;

    hOldPen = dc->hPen;
    dc->hPen = hPen;
    return hOldPen; 
}


/***********************************************************************
 *           EMFDRV_SelectObject
 */
HGDIOBJ EMFDRV_SelectObject( DC *dc, HGDIOBJ handle )
{
    GDIOBJHDR * ptr = GDI_GetObjPtr( handle, MAGIC_DONTCARE );
    HGDIOBJ ret = 0;

    if (!ptr) return 0;
    TRACE("hdc=%04x %04x\n", dc->hSelf, handle );
    
    switch(GDIMAGIC(ptr->wMagic))
    {
      case PEN_MAGIC:
	  ret = EMFDRV_PEN_SelectObject( dc, handle );
	  break;
      case BRUSH_MAGIC:
	  ret = EMFDRV_BRUSH_SelectObject( dc, handle );
	  break;
      case FONT_MAGIC:
	  ret = EMFDRV_FONT_SelectObject( dc, handle );
	  break;
      case BITMAP_MAGIC:
	  ret = EMFDRV_BITMAP_SelectObject( dc, handle );
	  break;
    }
    GDI_ReleaseObj( handle );
    return ret;
}



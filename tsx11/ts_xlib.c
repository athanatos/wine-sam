/*
 * Thread safe wrappers around Xlib calls.
 * This file was generated automatically by tools/make_X11wrappers
 * DO NOT EDIT!
 */

#include "config.h"


#include <X11/Xlib.h>

#include "debugtools.h"
#include "ts_xlib.h"
#include "x11drv.h"

DEFAULT_DEBUG_CHANNEL(x11);

XFontStruct * TSXLoadQueryFont(Display* a0, const  char* a1)
{
  XFontStruct * r;
  TRACE("Call XLoadQueryFont\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XLoadQueryFont(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XLoadQueryFont\n");
  return r;
}

XModifierKeymap	* TSXGetModifierMapping(Display* a0)
{
  XModifierKeymap	* r;
  TRACE("Call XGetModifierMapping\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetModifierMapping(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetModifierMapping\n");
  return r;
}

XImage * TSXCreateImage(Display* a0, Visual* a1, unsigned int a2, int a3, int a4, char* a5, unsigned int a6, unsigned int a7, int a8, int a9)
{
  XImage * r;
  TRACE("Call XCreateImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreateImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreateImage\n");
  return r;
}

XImage * TSXGetImage(Display* a0, Drawable a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned long a6, int a7)
{
  XImage * r;
  TRACE("Call XGetImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetImage(a0, a1, a2, a3, a4, a5, a6, a7);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetImage\n");
  return r;
}

XImage * TSXGetSubImage(Display* a0, Drawable a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned long a6, int a7, XImage* a8, int a9, int a10)
{
  XImage * r;
  TRACE("Call XGetSubImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetSubImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetSubImage\n");
  return r;
}

Display * TSXOpenDisplay(const  char* a0)
{
  Display * r;
  TRACE("Call XOpenDisplay\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XOpenDisplay(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XOpenDisplay\n");
  return r;
}

void  TSXrmInitialize(void)
{
  TRACE("Call XrmInitialize\n");
  EnterCriticalSection( &X11DRV_CritSection );
  XrmInitialize();
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XrmInitialize\n");
}

char * TSXGetAtomName(Display* a0, Atom a1)
{
  char * r;
  TRACE("Call XGetAtomName\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetAtomName(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetAtomName\n");
  return r;
}

char * TSXKeysymToString(KeySym a0)
{
  char * r;
  TRACE("Call XKeysymToString\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XKeysymToString(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XKeysymToString\n");
  return r;
}

Atom  TSXInternAtom(Display* a0, const  char* a1, int a2)
{
  Atom  r;
  TRACE("Call XInternAtom\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XInternAtom(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XInternAtom\n");
  return r;
}

Colormap  TSXCopyColormapAndFree(Display* a0, Colormap a1)
{
  Colormap  r;
  TRACE("Call XCopyColormapAndFree\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCopyColormapAndFree(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCopyColormapAndFree\n");
  return r;
}

Colormap  TSXCreateColormap(Display* a0, Window a1, Visual* a2, int a3)
{
  Colormap  r;
  TRACE("Call XCreateColormap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreateColormap(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreateColormap\n");
  return r;
}

Cursor  TSXCreatePixmapCursor(Display* a0, Pixmap a1, Pixmap a2, XColor* a3, XColor* a4, unsigned int a5, unsigned int a6)
{
  Cursor  r;
  TRACE("Call XCreatePixmapCursor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreatePixmapCursor(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreatePixmapCursor\n");
  return r;
}

Cursor  TSXCreateFontCursor(Display* a0, unsigned int a1)
{
  Cursor  r;
  TRACE("Call XCreateFontCursor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreateFontCursor(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreateFontCursor\n");
  return r;
}

GC  TSXCreateGC(Display* a0, Drawable a1, unsigned long a2, XGCValues* a3)
{
  GC  r;
  TRACE("Call XCreateGC\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreateGC(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreateGC\n");
  return r;
}

Pixmap  TSXCreatePixmap(Display* a0, Drawable a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  Pixmap  r;
  TRACE("Call XCreatePixmap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreatePixmap(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreatePixmap\n");
  return r;
}

Pixmap  TSXCreateBitmapFromData(Display* a0, Drawable a1, const  char* a2, unsigned int a3, unsigned int a4)
{
  Pixmap  r;
  TRACE("Call XCreateBitmapFromData\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreateBitmapFromData(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreateBitmapFromData\n");
  return r;
}

Window  TSXGetSelectionOwner(Display* a0, Atom a1)
{
  Window  r;
  TRACE("Call XGetSelectionOwner\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetSelectionOwner(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetSelectionOwner\n");
  return r;
}

Window  TSXCreateWindow(Display* a0, Window a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7, unsigned int a8, Visual* a9, unsigned long a10, XSetWindowAttributes* a11)
{
  Window  r;
  TRACE("Call XCreateWindow\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCreateWindow(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCreateWindow\n");
  return r;
}

char ** TSXListFonts(Display* a0, const  char* a1, int a2, int* a3)
{
  char ** r;
  TRACE("Call XListFonts\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XListFonts(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XListFonts\n");
  return r;
}

KeySym  TSXKeycodeToKeysym(Display* a0, unsigned int a1, int a2)
{
  KeySym  r;
  TRACE("Call XKeycodeToKeysym\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XKeycodeToKeysym(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XKeycodeToKeysym\n");
  return r;
}

KeySym  TSXLookupKeysym(XKeyEvent* a0, int a1)
{
  KeySym  r;
  TRACE("Call XLookupKeysym\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XLookupKeysym(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XLookupKeysym\n");
  return r;
}

KeySym * TSXGetKeyboardMapping(Display* a0, unsigned int a1, int a2, int* a3)
{
  KeySym * r;
  TRACE("Call XGetKeyboardMapping\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetKeyboardMapping(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetKeyboardMapping\n");
  return r;
}

char * TSXResourceManagerString(Display* a0)
{
  char * r;
  TRACE("Call XResourceManagerString\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XResourceManagerString(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XResourceManagerString\n");
  return r;
}

int   TSXInitThreads(void)
{
  int   r;
  TRACE("Call XInitThreads\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XInitThreads();
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XInitThreads\n");
  return r;
}

XPixmapFormatValues * TSXListPixmapFormats(Display* a0, int* a1)
{
  XPixmapFormatValues * r;
  TRACE("Call XListPixmapFormats\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XListPixmapFormats(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XListPixmapFormats\n");
  return r;
}

int * TSXListDepths(Display* a0, int a1, int* a2)
{
  int * r;
  TRACE("Call XListDepths\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XListDepths(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XListDepths\n");
  return r;
}

int   TSXReconfigureWMWindow(Display* a0, Window a1, int a2, unsigned int a3, XWindowChanges* a4)
{
  int   r;
  TRACE("Call XReconfigureWMWindow\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XReconfigureWMWindow(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XReconfigureWMWindow\n");
  return r;
}

int   TSXSetWMProtocols(Display* a0, Window a1, Atom* a2, int a3)
{
  int   r;
  TRACE("Call XSetWMProtocols\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetWMProtocols(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetWMProtocols\n");
  return r;
}

int   TSXIconifyWindow(Display* a0, Window a1, int a2)
{
  int   r;
  TRACE("Call XIconifyWindow\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XIconifyWindow(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XIconifyWindow\n");
  return r;
}

int  TSXSetTransientForHint(Display* a0, Window a1, Window a2)
{
  int  r;
  TRACE("Call XSetTransientForHint\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetTransientForHint(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetTransientForHint\n");
  return r;
}

int  TSXActivateScreenSaver(Display* a0)
{
  int  r;
  TRACE("Call XActivateScreenSaver\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XActivateScreenSaver(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XActivateScreenSaver\n");
  return r;
}

int   TSXAllocColor(Display* a0, Colormap a1, XColor* a2)
{
  int   r;
  TRACE("Call XAllocColor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XAllocColor(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XAllocColor\n");
  return r;
}

int   TSXAllocColorCells(Display* a0, Colormap a1, int a2, unsigned long* a3, unsigned int a4, unsigned long* a5, unsigned int a6)
{
  int   r;
  TRACE("Call XAllocColorCells\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XAllocColorCells(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XAllocColorCells\n");
  return r;
}

int  TSXBell(Display* a0, int a1)
{
  int  r;
  TRACE("Call XBell\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XBell(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XBell\n");
  return r;
}

int  TSXChangeGC(Display* a0, GC a1, unsigned long a2, XGCValues* a3)
{
  int  r;
  TRACE("Call XChangeGC\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XChangeGC(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XChangeGC\n");
  return r;
}

int  TSXChangeKeyboardControl(Display* a0, unsigned long a1, XKeyboardControl* a2)
{
  int  r;
  TRACE("Call XChangeKeyboardControl\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XChangeKeyboardControl(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XChangeKeyboardControl\n");
  return r;
}

int  TSXChangeProperty(Display* a0, Window a1, Atom a2, Atom a3, int a4, int a5, const  unsigned char* a6, int a7)
{
  int  r;
  TRACE("Call XChangeProperty\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XChangeProperty(a0, a1, a2, a3, a4, a5, a6, a7);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XChangeProperty\n");
  return r;
}

int  TSXChangeWindowAttributes(Display* a0, Window a1, unsigned long a2, XSetWindowAttributes* a3)
{
  int  r;
  TRACE("Call XChangeWindowAttributes\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XChangeWindowAttributes(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XChangeWindowAttributes\n");
  return r;
}

int   TSXCheckTypedEvent(Display* a0, int a1, XEvent* a2)
{
  int   r;
  TRACE("Call XCheckTypedEvent\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCheckTypedEvent(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCheckTypedEvent\n");
  return r;
}

int   TSXCheckTypedWindowEvent(Display* a0, Window a1, int a2, XEvent* a3)
{
  int   r;
  TRACE("Call XCheckTypedWindowEvent\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCheckTypedWindowEvent(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCheckTypedWindowEvent\n");
  return r;
}

int   TSXCheckWindowEvent(Display* a0, Window a1, long a2, XEvent* a3)
{
  int   r;
  TRACE("Call XCheckWindowEvent\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCheckWindowEvent(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCheckWindowEvent\n");
  return r;
}

int  TSXConvertSelection(Display* a0, Atom a1, Atom a2, Atom a3, Window a4, Time a5)
{
  int  r;
  TRACE("Call XConvertSelection\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XConvertSelection(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XConvertSelection\n");
  return r;
}

int  TSXCopyArea(Display* a0, Drawable a1, Drawable a2, GC a3, int a4, int a5, unsigned int a6, unsigned int a7, int a8, int a9)
{
  int  r;
  TRACE("Call XCopyArea\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCopyArea(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCopyArea\n");
  return r;
}

int  TSXCopyPlane(Display* a0, Drawable a1, Drawable a2, GC a3, int a4, int a5, unsigned int a6, unsigned int a7, int a8, int a9, unsigned long a10)
{
  int  r;
  TRACE("Call XCopyPlane\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XCopyPlane(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XCopyPlane\n");
  return r;
}

int  TSXDefineCursor(Display* a0, Window a1, Cursor a2)
{
  int  r;
  TRACE("Call XDefineCursor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDefineCursor(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDefineCursor\n");
  return r;
}

int  TSXDeleteProperty(Display* a0, Window a1, Atom a2)
{
  int  r;
  TRACE("Call XDeleteProperty\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDeleteProperty(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDeleteProperty\n");
  return r;
}

int  TSXDestroyWindow(Display* a0, Window a1)
{
  int  r;
  TRACE("Call XDestroyWindow\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDestroyWindow(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDestroyWindow\n");
  return r;
}

int  TSXDisplayKeycodes(Display* a0, int* a1, int* a2)
{
  int  r;
  TRACE("Call XDisplayKeycodes\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDisplayKeycodes(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDisplayKeycodes\n");
  return r;
}

int  TSXDrawArc(Display* a0, Drawable a1, GC a2, int a3, int a4, unsigned int a5, unsigned int a6, int a7, int a8)
{
  int  r;
  TRACE("Call XDrawArc\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawArc(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawArc\n");
  return r;
}

int  TSXDrawLine(Display* a0, Drawable a1, GC a2, int a3, int a4, int a5, int a6)
{
  int  r;
  TRACE("Call XDrawLine\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawLine(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawLine\n");
  return r;
}

int  TSXDrawLines(Display* a0, Drawable a1, GC a2, XPoint* a3, int a4, int a5)
{
  int  r;
  TRACE("Call XDrawLines\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawLines(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawLines\n");
  return r;
}

int  TSXDrawPoint(Display* a0, Drawable a1, GC a2, int a3, int a4)
{
  int  r;
  TRACE("Call XDrawPoint\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawPoint(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawPoint\n");
  return r;
}

int  TSXDrawRectangle(Display* a0, Drawable a1, GC a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int  r;
  TRACE("Call XDrawRectangle\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawRectangle(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawRectangle\n");
  return r;
}

int  TSXDrawSegments(Display* a0, Drawable a1, GC a2, XSegment* a3, int a4)
{
  int  r;
  TRACE("Call XDrawSegments\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawSegments(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawSegments\n");
  return r;
}

int  TSXDrawString16(Display* a0, Drawable a1, GC a2, int a3, int a4, const  XChar2b* a5, int a6)
{
  int  r;
  TRACE("Call XDrawString16\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawString16(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawString16\n");
  return r;
}

int  TSXDrawText16(Display* a0, Drawable a1, GC a2, int a3, int a4, XTextItem16* a5, int a6)
{
  int  r;
  TRACE("Call XDrawText16\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XDrawText16(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XDrawText16\n");
  return r;
}

int  TSXFillArc(Display* a0, Drawable a1, GC a2, int a3, int a4, unsigned int a5, unsigned int a6, int a7, int a8)
{
  int  r;
  TRACE("Call XFillArc\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFillArc(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFillArc\n");
  return r;
}

int  TSXFillPolygon(Display* a0, Drawable a1, GC a2, XPoint* a3, int a4, int a5, int a6)
{
  int  r;
  TRACE("Call XFillPolygon\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFillPolygon(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFillPolygon\n");
  return r;
}

int  TSXFillRectangle(Display* a0, Drawable a1, GC a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int  r;
  TRACE("Call XFillRectangle\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFillRectangle(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFillRectangle\n");
  return r;
}

int  TSXFlush(Display* a0)
{
  int  r;
  TRACE("Call XFlush\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFlush(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFlush\n");
  return r;
}

int  TSXFree(void* a0)
{
  int  r;
  TRACE("Call XFree\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFree(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFree\n");
  return r;
}

int  TSXFreeColormap(Display* a0, Colormap a1)
{
  int  r;
  TRACE("Call XFreeColormap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeColormap(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeColormap\n");
  return r;
}

int  TSXFreeColors(Display* a0, Colormap a1, unsigned long* a2, int a3, unsigned long a4)
{
  int  r;
  TRACE("Call XFreeColors\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeColors(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeColors\n");
  return r;
}

int  TSXFreeCursor(Display* a0, Cursor a1)
{
  int  r;
  TRACE("Call XFreeCursor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeCursor(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeCursor\n");
  return r;
}

int  TSXFreeFont(Display* a0, XFontStruct* a1)
{
  int  r;
  TRACE("Call XFreeFont\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeFont(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeFont\n");
  return r;
}

int  TSXFreeFontNames(char** a0)
{
  int  r;
  TRACE("Call XFreeFontNames\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeFontNames(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeFontNames\n");
  return r;
}

int  TSXFreeGC(Display* a0, GC a1)
{
  int  r;
  TRACE("Call XFreeGC\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeGC(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeGC\n");
  return r;
}

int  TSXFreeModifiermap(XModifierKeymap* a0)
{
  int  r;
  TRACE("Call XFreeModifiermap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreeModifiermap(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreeModifiermap\n");
  return r;
}

int  TSXFreePixmap(Display* a0, Pixmap a1)
{
  int  r;
  TRACE("Call XFreePixmap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XFreePixmap(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XFreePixmap\n");
  return r;
}

int   TSXGetFontProperty(XFontStruct* a0, Atom a1, unsigned long* a2)
{
  int   r;
  TRACE("Call XGetFontProperty\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetFontProperty(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetFontProperty\n");
  return r;
}

int   TSXGetGeometry(Display* a0, Drawable a1, Window* a2, int* a3, int* a4, unsigned int* a5, unsigned int* a6, unsigned int* a7, unsigned int* a8)
{
  int   r;
  TRACE("Call XGetGeometry\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetGeometry(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetGeometry\n");
  return r;
}

int  TSXGetInputFocus(Display* a0, Window* a1, int* a2)
{
  int  r;
  TRACE("Call XGetInputFocus\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetInputFocus(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetInputFocus\n");
  return r;
}

int  TSXGetKeyboardControl(Display* a0, XKeyboardState* a1)
{
  int  r;
  TRACE("Call XGetKeyboardControl\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetKeyboardControl(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetKeyboardControl\n");
  return r;
}

int  TSXGetScreenSaver(Display* a0, int* a1, int* a2, int* a3, int* a4)
{
  int  r;
  TRACE("Call XGetScreenSaver\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetScreenSaver(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetScreenSaver\n");
  return r;
}

int  TSXGetWindowProperty(Display* a0, Window a1, Atom a2, long a3, long a4, int a5, Atom a6, Atom* a7, int* a8, unsigned long* a9, unsigned long* a10, unsigned char** a11)
{
  int  r;
  TRACE("Call XGetWindowProperty\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetWindowProperty(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetWindowProperty\n");
  return r;
}

int   TSXGetWindowAttributes(Display* a0, Window a1, XWindowAttributes* a2)
{
  int   r;
  TRACE("Call XGetWindowAttributes\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGetWindowAttributes(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGetWindowAttributes\n");
  return r;
}

int  TSXGrabKeyboard(Display* a0, Window a1, int a2, int a3, int a4, Time a5)
{
  int  r;
  TRACE("Call XGrabKeyboard\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGrabKeyboard(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGrabKeyboard\n");
  return r;
}

int  TSXGrabPointer(Display* a0, Window a1, int a2, unsigned int a3, int a4, int a5, Window a6, Cursor a7, Time a8)
{
  int  r;
  TRACE("Call XGrabPointer\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGrabPointer(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGrabPointer\n");
  return r;
}

int  TSXGrabServer(Display* a0)
{
  int  r;
  TRACE("Call XGrabServer\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XGrabServer(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XGrabServer\n");
  return r;
}

int  TSXInstallColormap(Display* a0, Colormap a1)
{
  int  r;
  TRACE("Call XInstallColormap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XInstallColormap(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XInstallColormap\n");
  return r;
}

KeyCode  TSXKeysymToKeycode(Display* a0, KeySym a1)
{
  KeyCode  r;
  TRACE("Call XKeysymToKeycode\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XKeysymToKeycode(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XKeysymToKeycode\n");
  return r;
}

int  TSXMapWindow(Display* a0, Window a1)
{
  int  r;
  TRACE("Call XMapWindow\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XMapWindow(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XMapWindow\n");
  return r;
}

int  TSXNextEvent(Display* a0, XEvent* a1)
{
  int  r;
  TRACE("Call XNextEvent\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XNextEvent(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XNextEvent\n");
  return r;
}

int  TSXParseGeometry(const  char* a0, int* a1, int* a2, unsigned int* a3, unsigned int* a4)
{
  int  r;
  TRACE("Call XParseGeometry\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XParseGeometry(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XParseGeometry\n");
  return r;
}

int  TSXPending(Display* a0)
{
  int  r;
  TRACE("Call XPending\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XPending(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XPending\n");
  return r;
}

int  TSXPutBackEvent(Display* a0, XEvent* a1)
{
  int  r;
  TRACE("Call XPutBackEvent\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XPutBackEvent(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XPutBackEvent\n");
  return r;
}

int  TSXPutImage(Display* a0, Drawable a1, GC a2, XImage* a3, int a4, int a5, int a6, int a7, unsigned int a8, unsigned int a9)
{
  int  r;
  TRACE("Call XPutImage\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XPutImage(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XPutImage\n");
  return r;
}

int  TSXQueryColor(Display* a0, Colormap a1, XColor* a2)
{
  int  r;
  TRACE("Call XQueryColor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XQueryColor(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XQueryColor\n");
  return r;
}

int  TSXQueryKeymap(Display* a0, char* a1)
{
  int  r;
  TRACE("Call XQueryKeymap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XQueryKeymap(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XQueryKeymap\n");
  return r;
}

int   TSXQueryPointer(Display* a0, Window a1, Window* a2, Window* a3, int* a4, int* a5, int* a6, int* a7, unsigned int* a8)
{
  int   r;
  TRACE("Call XQueryPointer\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XQueryPointer(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XQueryPointer\n");
  return r;
}

int   TSXQueryTree(Display* a0, Window a1, Window* a2, Window* a3, Window** a4, unsigned int* a5)
{
  int   r;
  TRACE("Call XQueryTree\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XQueryTree(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XQueryTree\n");
  return r;
}

int  TSXRefreshKeyboardMapping(XMappingEvent* a0)
{
  int  r;
  TRACE("Call XRefreshKeyboardMapping\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XRefreshKeyboardMapping(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XRefreshKeyboardMapping\n");
  return r;
}

int  TSXResetScreenSaver(Display* a0)
{
  int  r;
  TRACE("Call XResetScreenSaver\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XResetScreenSaver(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XResetScreenSaver\n");
  return r;
}

int  TSXRestackWindows(Display* a0, Window* a1, int a2)
{
  int  r;
  TRACE("Call XRestackWindows\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XRestackWindows(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XRestackWindows\n");
  return r;
}

int   TSXSendEvent(Display* a0, Window a1, int a2, long a3, XEvent* a4)
{
  int   r;
  TRACE("Call XSendEvent\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSendEvent(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSendEvent\n");
  return r;
}

int  TSXSetArcMode(Display* a0, GC a1, int a2)
{
  int  r;
  TRACE("Call XSetArcMode\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetArcMode(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetArcMode\n");
  return r;
}

int  TSXSetBackground(Display* a0, GC a1, unsigned long a2)
{
  int  r;
  TRACE("Call XSetBackground\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetBackground(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetBackground\n");
  return r;
}

int  TSXSetClipMask(Display* a0, GC a1, Pixmap a2)
{
  int  r;
  TRACE("Call XSetClipMask\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetClipMask(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetClipMask\n");
  return r;
}

int  TSXSetClipOrigin(Display* a0, GC a1, int a2, int a3)
{
  int  r;
  TRACE("Call XSetClipOrigin\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetClipOrigin(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetClipOrigin\n");
  return r;
}

int  TSXSetClipRectangles(Display* a0, GC a1, int a2, int a3, XRectangle* a4, int a5, int a6)
{
  int  r;
  TRACE("Call XSetClipRectangles\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetClipRectangles(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetClipRectangles\n");
  return r;
}

int  TSXSetDashes(Display* a0, GC a1, int a2, const  char* a3, int a4)
{
  int  r;
  TRACE("Call XSetDashes\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetDashes(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetDashes\n");
  return r;
}

int  TSXSetFillStyle(Display* a0, GC a1, int a2)
{
  int  r;
  TRACE("Call XSetFillStyle\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetFillStyle(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetFillStyle\n");
  return r;
}

int  TSXSetFont(Display* a0, GC a1, Font a2)
{
  int  r;
  TRACE("Call XSetFont\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetFont(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetFont\n");
  return r;
}

int  TSXSetForeground(Display* a0, GC a1, unsigned long a2)
{
  int  r;
  TRACE("Call XSetForeground\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetForeground(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetForeground\n");
  return r;
}

int  TSXSetFunction(Display* a0, GC a1, int a2)
{
  int  r;
  TRACE("Call XSetFunction\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetFunction(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetFunction\n");
  return r;
}

int  TSXSetGraphicsExposures(Display* a0, GC a1, int a2)
{
  int  r;
  TRACE("Call XSetGraphicsExposures\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetGraphicsExposures(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetGraphicsExposures\n");
  return r;
}

int  TSXSetIconName(Display* a0, Window a1, const  char* a2)
{
  int  r;
  TRACE("Call XSetIconName\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetIconName(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetIconName\n");
  return r;
}

int  TSXSetInputFocus(Display* a0, Window a1, int a2, Time a3)
{
  int  r;
  TRACE("Call XSetInputFocus\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetInputFocus(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetInputFocus\n");
  return r;
}

int  TSXSetLineAttributes(Display* a0, GC a1, unsigned int a2, int a3, int a4, int a5)
{
  int  r;
  TRACE("Call XSetLineAttributes\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetLineAttributes(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetLineAttributes\n");
  return r;
}

int  TSXSetScreenSaver(Display* a0, int a1, int a2, int a3, int a4)
{
  int  r;
  TRACE("Call XSetScreenSaver\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetScreenSaver(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetScreenSaver\n");
  return r;
}

int  TSXSetSelectionOwner(Display* a0, Atom a1, Window a2, Time a3)
{
  int  r;
  TRACE("Call XSetSelectionOwner\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetSelectionOwner(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetSelectionOwner\n");
  return r;
}

int  TSXSetSubwindowMode(Display* a0, GC a1, int a2)
{
  int  r;
  TRACE("Call XSetSubwindowMode\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetSubwindowMode(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetSubwindowMode\n");
  return r;
}

int  TSXSetWindowColormap(Display* a0, Window a1, Colormap a2)
{
  int  r;
  TRACE("Call XSetWindowColormap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSetWindowColormap(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSetWindowColormap\n");
  return r;
}

int  TSXStoreColor(Display* a0, Colormap a1, XColor* a2)
{
  int  r;
  TRACE("Call XStoreColor\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XStoreColor(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XStoreColor\n");
  return r;
}

int  TSXStoreName(Display* a0, Window a1, const  char* a2)
{
  int  r;
  TRACE("Call XStoreName\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XStoreName(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XStoreName\n");
  return r;
}

int  TSXSync(Display* a0, int a1)
{
  int  r;
  TRACE("Call XSync\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSync(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSync\n");
  return r;
}

int  TSXTextExtents16(XFontStruct* a0, const  XChar2b* a1, int a2, int* a3, int* a4, int* a5, XCharStruct* a6)
{
  int  r;
  TRACE("Call XTextExtents16\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XTextExtents16(a0, a1, a2, a3, a4, a5, a6);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XTextExtents16\n");
  return r;
}

int  TSXTextWidth16(XFontStruct* a0, const  XChar2b* a1, int a2)
{
  int  r;
  TRACE("Call XTextWidth16\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XTextWidth16(a0, a1, a2);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XTextWidth16\n");
  return r;
}

int  TSXUngrabKeyboard(Display* a0, Time a1)
{
  int  r;
  TRACE("Call XUngrabKeyboard\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XUngrabKeyboard(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XUngrabKeyboard\n");
  return r;
}

int  TSXUngrabPointer(Display* a0, Time a1)
{
  int  r;
  TRACE("Call XUngrabPointer\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XUngrabPointer(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XUngrabPointer\n");
  return r;
}

int  TSXUngrabServer(Display* a0)
{
  int  r;
  TRACE("Call XUngrabServer\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XUngrabServer(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XUngrabServer\n");
  return r;
}

int  TSXUninstallColormap(Display* a0, Colormap a1)
{
  int  r;
  TRACE("Call XUninstallColormap\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XUninstallColormap(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XUninstallColormap\n");
  return r;
}

int  TSXUnmapWindow(Display* a0, Window a1)
{
  int  r;
  TRACE("Call XUnmapWindow\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XUnmapWindow(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XUnmapWindow\n");
  return r;
}

int  TSXWarpPointer(Display* a0, Window a1, Window a2, int a3, int a4, unsigned int a5, unsigned int a6, int a7, int a8)
{
  int  r;
  TRACE("Call XWarpPointer\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XWarpPointer(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XWarpPointer\n");
  return r;
}

XIM  TSXOpenIM(Display* a0, struct _XrmHashBucketRec* a1, char* a2, char* a3)
{
  XIM  r;
  TRACE("Call XOpenIM\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XOpenIM(a0, a1, a2, a3);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XOpenIM\n");
  return r;
}

int (*TSXSynchronize(Display *a0, Bool a1))(Display *)
{
  int (*r)(Display *);
  TRACE("Call XSynchronize\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XSynchronize(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret XSynchronize\n");
  return r;
}

extern void _XInitImageFuncPtrs(XImage *);

void TS_XInitImageFuncPtrs(XImage *a0)
{
  TRACE("Call _XInitImageFuncPtrs\n");
  EnterCriticalSection( &X11DRV_CritSection );
  _XInitImageFuncPtrs(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  TRACE("Ret _XInitImageFuncPtrs\n");
}



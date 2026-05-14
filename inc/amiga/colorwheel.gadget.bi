' FreeBASIC header for colorwheel.gadget
' Auto-generated from NDK 3.2 SFD - 2 functions

#ifndef __AMIGA_COLORWHEEL.GADGET_BI__
#define __AMIGA_COLORWHEEL.GADGET_BI__

Declare Sub ConvertHSBToRGB(ByVal hsb As ColorWheelHSB Ptr, ByVal rgb As ColorWheelRGB Ptr)
Declare Sub ConvertRGBToHSB(ByVal rgb As ColorWheelRGB Ptr, ByVal hsb As ColorWheelHSB Ptr)

#endif

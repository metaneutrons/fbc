' FreeBASIC header for timer.device
' Auto-generated from NDK 3.2 SFD - 5 functions

#ifndef __AMIGA_TIMER_BI__
#define __AMIGA_TIMER_BI__

Declare Sub AddTime(ByVal dest As TimeVal_Type Ptr, ByVal src As TimeVal_Type Ptr)
Declare Sub SubTime(ByVal dest As TimeVal_Type Ptr, ByVal src As TimeVal_Type Ptr)
Declare Function CmpTime(ByVal dest As TimeVal_Type Ptr, ByVal src As TimeVal_Type Ptr) As Long
Declare Function ReadEClock(ByVal dest As EClockVal Ptr) As ULong
Declare Sub GetSysTime(ByVal dest As TimeVal_Type Ptr)

#endif

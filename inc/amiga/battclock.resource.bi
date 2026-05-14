' FreeBASIC header for battclock.resource
' Auto-generated from NDK 3.2 SFD - 3 functions

#ifndef __AMIGA_BATTCLOCK.RESOURCE_BI__
#define __AMIGA_BATTCLOCK.RESOURCE_BI__

Declare Sub ResetBattClock()
Declare Function ReadBattClock() As ULong
Declare Sub WriteBattClock(ByVal time As ULong)

#endif

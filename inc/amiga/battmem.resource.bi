' FreeBASIC header for battmem.resource
' Auto-generated from NDK 3.2 SFD - 4 functions

#ifndef __AMIGA_BATTMEM.RESOURCE_BI__
#define __AMIGA_BATTMEM.RESOURCE_BI__

Declare Sub ObtainBattSemaphore()
Declare Sub ReleaseBattSemaphore()
Declare Function ReadBattMem(ByVal buffer As Any Ptr, ByVal offset As ULong, ByVal length As ULong) As ULong
Declare Function WriteBattMem(ByVal buffer As Any Ptr, ByVal offset As ULong, ByVal length As ULong) As ULong

#endif

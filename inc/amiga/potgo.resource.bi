' FreeBASIC header for potgo.resource
' Auto-generated from NDK 3.2 SFD - 3 functions

#ifndef __AMIGA_POTGO.RESOURCE_BI__
#define __AMIGA_POTGO.RESOURCE_BI__

Declare Function AllocPotBits(ByVal bits As UShort) As UShort
Declare Sub FreePotBits(ByVal bits As UShort)
Declare Sub WritePotgo(ByVal word As UShort, ByVal mask As UShort)

#endif

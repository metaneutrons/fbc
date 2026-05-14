' FreeBASIC header for disk.resource
' Auto-generated from NDK 3.2 SFD - 5 functions

#ifndef __AMIGA_DISK.RESOURCE_BI__
#define __AMIGA_DISK.RESOURCE_BI__

Declare Function AllocUnit(ByVal unitNum As Long) As Short
Declare Sub FreeUnit(ByVal unitNum As Long)
Declare Sub GiveUnit()
Declare Function GetUnitID(ByVal unitNum As Long) As Long
Declare Function ReadUnitID(ByVal unitNum As Long) As Long

#endif

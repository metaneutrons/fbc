' FreeBASIC header for card.resource
' Auto-generated from NDK 3.2 SFD - 14 functions

#ifndef __AMIGA_CARD.RESOURCE_BI__
#define __AMIGA_CARD.RESOURCE_BI__

Declare Sub ReleaseCard(ByVal handle As CardHandle Ptr, ByVal flags As ULong)
Declare Function BeginCardAccess(ByVal handle As CardHandle Ptr) As Short
Declare Function EndCardAccess(ByVal handle As CardHandle Ptr) As Short
Declare Function ReadCardStatus() As UByte
Declare Function CardResetRemove(ByVal handle As CardHandle Ptr, ByVal flag As ULong) As Short
Declare Function CardMiscControl(ByVal handle As CardHandle Ptr, ByVal control_bits As UByte) As UByte
Declare Function CardAccessSpeed(ByVal handle As CardHandle Ptr, ByVal nanoseconds As ULong) As ULong
Declare Function CardProgramVoltage(ByVal handle As CardHandle Ptr, ByVal voltage As ULong) As Long
Declare Function CardResetCard(ByVal handle As CardHandle Ptr) As Short
Declare Function CopyTuple(ByVal handle As CardHandle Ptr, ByVal buffer As UByte Ptr, ByVal tuplecode As ULong, ByVal size As ULong) As Short
Declare Function DeviceTuple(ByVal tuple_data As UByte Ptr, ByVal storage As DeviceTData Ptr) As ULong
Declare Function CardForceChange() As Short
Declare Function CardChangeCount() As ULong
Declare Function CardInterface() As ULong

#endif

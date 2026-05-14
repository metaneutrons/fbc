' FreeBASIC header for expansion.library
' Auto-generated from NDK 3.2 SFD - 13 functions

#ifndef __AMIGA_EXPANSION_BI__
#define __AMIGA_EXPANSION_BI__

Declare Sub AddConfigDev(ByVal configDev As ConfigDev Ptr)
Declare Sub AllocBoardMem(ByVal slotSpec As ULong)
Declare Sub ConfigBoard(ByVal board As Any Ptr, ByVal configDev As ConfigDev Ptr)
Declare Sub ConfigChain(ByVal baseAddr As Any Ptr)
Declare Sub FreeBoardMem(ByVal startSlot As ULong, ByVal slotSpec As ULong)
Declare Sub FreeConfigDev(ByVal configDev As ConfigDev Ptr)
Declare Sub FreeExpansionMem(ByVal startSlot As ULong, ByVal numSlots As ULong)
Declare Function ReadExpansionByte(ByVal board As Any Ptr, ByVal offset As ULong) As UByte
Declare Sub ReadExpansionRom(ByVal board As Any Ptr, ByVal configDev As ConfigDev Ptr)
Declare Sub RemConfigDev(ByVal configDev As ConfigDev Ptr)
Declare Sub WriteExpansionByte(ByVal board As Any Ptr, ByVal offset As ULong, ByVal byte As UByte)
Declare Sub ObtainConfigBinding()
Declare Sub ReleaseConfigBinding()

#endif

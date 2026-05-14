' FreeBASIC header for lowlevel.library
' Auto-generated from NDK 3.2 SFD - 13 functions

#ifndef __AMIGA_LOWLEVEL_BI__
#define __AMIGA_LOWLEVEL_BI__

Declare Function ReadJoyPort(ByVal port As ULong) As ULong
Declare Function GetLanguageSelection() As UByte
Declare Function GetKey() As ULong
Declare Sub QueryKeys(ByVal queryArray As KeyQuery Ptr, ByVal arraySize As Long)
Declare Function AddKBInt(ByVal intRoutine As Any Ptr, ByVal intData As Any Ptr) As Any Ptr
Declare Sub RemKBInt(ByVal intHandle As Any Ptr)
Declare Function SystemControlA(ByVal tagList As TagItem Ptr) As ULong
Declare Function SystemControl(ByVal firstTag As Tag, ByVal arg As ...) As ULong
Declare Function ElapsedTime(ByVal context As EClockVal Ptr) As ULong
Declare Function AddVBlankInt(ByVal intRoutine As Any Ptr, ByVal intData As Any Ptr) As Any Ptr
Declare Sub RemVBlankInt(ByVal intHandle As Any Ptr)
Declare Function SetJoyPortAttrsA(ByVal portNumber As ULong, ByVal tagList As TagItem Ptr) As Short
Declare Function SetJoyPortAttrs(ByVal portNumber As ULong, ByVal arg As ...) As Short

#endif

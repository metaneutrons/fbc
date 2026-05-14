' FreeBASIC header for realtime.library
' Auto-generated from NDK 3.2 SFD - 9 functions

#ifndef __AMIGA_REALTIME_BI__
#define __AMIGA_REALTIME_BI__

Declare Function LockRealTime(ByVal lockType As ULong) As Any Ptr
Declare Sub UnlockRealTime(ByVal lock As Any Ptr)
Declare Sub DeletePlayer(ByVal player As Player Ptr)
Declare Function SetPlayerAttrsA(ByVal player As Player Ptr, ByVal tagList As TagItem Ptr) As Short
Declare Function SetPlayerAttrs(ByVal player As Player Ptr, ByVal arg As ...) As Short
Declare Function SetConductorState(ByVal player As Player Ptr, ByVal state As ULong, ByVal time As Long) As Long
Declare Function ExternalSync(ByVal player As Player Ptr, ByVal minTime As Long, ByVal maxTime As Long) As Short
Declare Function GetPlayerAttrsA(ByVal player As Player Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function GetPlayerAttrs(ByVal player As Player Ptr, ByVal arg As ...) As ULong

#endif

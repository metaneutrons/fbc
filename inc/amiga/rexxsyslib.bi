' FreeBASIC header for rexxsyslib.library
' Auto-generated from NDK 3.2 SFD - 13 functions

#ifndef __AMIGA_REXXSYSLIB_BI__
#define __AMIGA_REXXSYSLIB_BI__

Declare Sub DeleteArgstring(ByVal argstring As UByte Ptr)
Declare Function LengthArgstring(ByVal argstring As UByte Ptr) As ULong
Declare Sub DeleteRexxMsg(ByVal packet As RexxMsg Ptr)
Declare Sub ClearRexxMsg(ByVal msgptr As RexxMsg Ptr, ByVal count As ULong)
Declare Function FillRexxMsg(ByVal msgptr As RexxMsg Ptr, ByVal count As ULong, ByVal mask As ULong) As Short
Declare Function IsRexxMsg(ByVal msgptr As RexxMsg Ptr) As Short
Declare Sub LockRexxBase(ByVal resource As ULong)
Declare Sub UnlockRexxBase(ByVal resource As ULong)
Declare Sub DeleteRexxHostPort(ByVal port As MsgPort Ptr)
Declare Function GetRexxVarFromMsg(ByVal var As Const ZString Ptr, ByVal msgptr As RexxMsg Ptr, ByVal value As ZString Ptr) As Long
Declare Function SetRexxVarFromMsg(ByVal var As Const ZString Ptr, ByVal msgptr As RexxMsg Ptr, ByVal value As Const ZString Ptr) As Long
Declare Sub FreeRexxMsg(ByVal msgptr As RexxMsg Ptr)
Declare Function GetRexxBufferFromMsg(ByVal var As Const ZString Ptr, ByVal msgptr As RexxMsg Ptr, ByVal buffer As ZString Ptr, ByVal buffer_size As ULong) As Long

#endif

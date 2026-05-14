' FreeBASIC header for icon.library
' Auto-generated from NDK 3.2 SFD - 24 functions

#ifndef __AMIGA_ICON_BI__
#define __AMIGA_ICON_BI__

Declare Sub FreeFreeList(ByVal freelist As FreeList Ptr)
Declare Function AddFreeList(ByVal freelist As FreeList Ptr, ByVal mem As Any Ptr, ByVal size As ULong) As Short
Declare Function PutDiskObject(ByVal name As Const ZString Ptr, ByVal diskobj As DiskObject Ptr) As Short
Declare Sub FreeDiskObject(ByVal diskobj As DiskObject Ptr)
Declare Function MatchToolValue(ByVal typeString As Const ZString Ptr, ByVal value As Const ZString Ptr) As Short
Declare Function BumpRevision(ByVal newname As ZString Ptr, ByVal oldname As Const ZString Ptr) As ZString Ptr
Declare Function FreeAlloc(ByVal free As FreeList Ptr, ByVal len As ULong, ByVal type As ULong) As Any Ptr
Declare Function PutDefDiskObject(ByVal diskObject As DiskObject Ptr) As Short
Declare Function DeleteDiskObject(ByVal name As Const ZString Ptr) As Short
Declare Sub FreeFree(ByVal fl As FreeList Ptr, ByVal address As Any Ptr)
Declare Function DupDiskObjectA(ByVal diskObject As DiskObject Ptr, ByVal tags As TagItem Ptr) As DiskObject Ptr
Declare Function DupDiskObject(ByVal diskObject As DiskObject Ptr, ByVal arg As ...) As DiskObject Ptr
Declare Function IconControlA(ByVal icon As DiskObject Ptr, ByVal tags As TagItem Ptr) As ULong
Declare Function IconControl(ByVal icon As DiskObject Ptr, ByVal arg As ...) As ULong
Declare Sub DrawIconStateA(ByVal rp As RastPort Ptr, ByVal icon As DiskObject Ptr, ByVal label As Const ZString Ptr, ByVal leftOffset As Long, ByVal topOffset As Long, ByVal state As ULong, ByVal tags As TagItem Ptr)
Declare Sub DrawIconState(ByVal rp As RastPort Ptr, ByVal icon As DiskObject Ptr, ByVal label As Const ZString Ptr, ByVal leftOffset As Long, ByVal topOffset As Long, ByVal state As ULong, ByVal arg As ...)
Declare Function GetIconRectangleA(ByVal rp As RastPort Ptr, ByVal icon As DiskObject Ptr, ByVal label As Const ZString Ptr, ByVal rect As Rectangle Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function GetIconRectangle(ByVal rp As RastPort Ptr, ByVal icon As DiskObject Ptr, ByVal label As Const ZString Ptr, ByVal rect As Rectangle Ptr, ByVal arg As ...) As Short
Declare Function PutIconTagList(ByVal name As Const ZString Ptr, ByVal icon As DiskObject Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function PutIconTags(ByVal name As Const ZString Ptr, ByVal icon As DiskObject Ptr, ByVal arg As ...) As Short
Declare Function LayoutIconA(ByVal icon As DiskObject Ptr, ByVal screen As Screen Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function LayoutIcon(ByVal icon As DiskObject Ptr, ByVal screen As Screen Ptr, ByVal arg As ...) As Short
Declare Sub ChangeToSelectedIconColor(ByVal cr As ColorRegister Ptr)
Declare Function BumpRevisionLength(ByVal newname As ZString Ptr, ByVal oldname As Const ZString Ptr, ByVal maxLength As ULong) As ZString Ptr

#endif

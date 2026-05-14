' FreeBASIC header for workbench.library
' Auto-generated from NDK 3.2 SFD - 20 functions

#ifndef __AMIGA_WORKBENCH_BI__
#define __AMIGA_WORKBENCH_BI__

Declare Sub UpdateWorkbench(ByVal name As Const ZString Ptr, ByVal lock As Long, ByVal action As Long)
Declare Function RemoveAppWindow(ByVal appWindow As AppWindow Ptr) As Short
Declare Function RemoveAppIcon(ByVal appIcon As AppIcon Ptr) As Short
Declare Function RemoveAppMenuItem(ByVal appMenuItem As AppMenuItem Ptr) As Short
Declare Function WBInfo(ByVal lock As Long, ByVal name As Const ZString Ptr, ByVal screen As Screen Ptr) As ULong
Declare Function OpenWorkbenchObjectA(ByVal name As Const ZString Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function OpenWorkbenchObject(ByVal name As Const ZString Ptr, ByVal arg As ...) As Short
Declare Function CloseWorkbenchObjectA(ByVal name As Const ZString Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function CloseWorkbenchObject(ByVal name As Const ZString Ptr, ByVal arg As ...) As Short
Declare Function WorkbenchControlA(ByVal name As Const ZString Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function WorkbenchControl(ByVal name As Const ZString Ptr, ByVal arg As ...) As Short
Declare Function AddAppWindowDropZoneA(ByVal aw As AppWindow Ptr, ByVal id As ULong, ByVal userdata As ULong, ByVal tags As TagItem Ptr) As AppWindowDropZone Ptr
Declare Function AddAppWindowDropZone(ByVal aw As AppWindow Ptr, ByVal id As ULong, ByVal userdata As ULong, ByVal arg As ...) As AppWindowDropZone Ptr
Declare Function RemoveAppWindowDropZone(ByVal aw As AppWindow Ptr, ByVal dropZone As AppWindowDropZone Ptr) As Short
Declare Function ChangeWorkbenchSelectionA(ByVal name As Const ZString Ptr, ByVal hook As Hook Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function ChangeWorkbenchSelection(ByVal name As Const ZString Ptr, ByVal hook As Hook Ptr, ByVal arg As ...) As Short
Declare Function MakeWorkbenchObjectVisibleA(ByVal name As Const ZString Ptr, ByVal tags As TagItem Ptr) As Short
Declare Function MakeWorkbenchObjectVisible(ByVal name As Const ZString Ptr, ByVal arg As ...) As Short
Declare Function WhichWorkbenchObjectA(ByVal window As Window Ptr, ByVal x As Long, ByVal y As Long, ByVal tags As TagItem Ptr) As ULong
Declare Function WhichWorkbenchObject(ByVal window As Window Ptr, ByVal x As Long, ByVal y As Long, ByVal arg As ...) As ULong

#endif

' FreeBASIC header for intuition.library
' Auto-generated from NDK 3.2 SFD - 78 functions

#ifndef __AMIGA_INTUITION_BI__
#define __AMIGA_INTUITION_BI__

Declare Sub OpenIntuition()
Declare Sub Intuition(ByVal iEvent As InputEvent Ptr)
Declare Function ClearDMRequest(ByVal window As Window Ptr) As Short
Declare Sub ClearMenuStrip(ByVal window As Window Ptr)
Declare Sub ClearPointer(ByVal window As Window Ptr)
Declare Function CloseScreen(ByVal screen As Screen Ptr) As Short
Declare Sub CloseWindow(ByVal window As Window Ptr)
Declare Function CloseWorkBench() As Long
Declare Sub CurrentTime(ByVal seconds As ULong Ptr, ByVal micros As ULong Ptr)
Declare Function DisplayAlert(ByVal alertNumber As ULong, ByVal string As Const ZString Ptr, ByVal height As UShort) As Short
Declare Sub DisplayBeep(ByVal screen As Screen Ptr)
Declare Sub EndRequest(ByVal requester As Requester Ptr, ByVal window As Window Ptr)
Declare Sub InitRequester(ByVal requester As Requester Ptr)
Declare Function ModifyIDCMP(ByVal window As Window Ptr, ByVal flags As ULong) As Short
Declare Sub MoveScreen(ByVal screen As Screen Ptr, ByVal dx As Short, ByVal dy As Short)
Declare Sub MoveWindow(ByVal window As Window Ptr, ByVal dx As Short, ByVal dy As Short)
Declare Sub OffMenu(ByVal window As Window Ptr, ByVal menuNumber As UShort)
Declare Sub OnMenu(ByVal window As Window Ptr, ByVal menuNumber As UShort)
Declare Function OpenWorkBench() As ULong
Declare Function RemoveGadget(ByVal window As Window Ptr, ByVal gadget As Gadget Ptr) As UShort
Declare Sub ReportMouse(ByVal flag As Short, ByVal window As Window Ptr)
Declare Sub ReportMouse1(ByVal window As Window Ptr, ByVal flag As Short)
Declare Function Request(ByVal requester As Requester Ptr, ByVal window As Window Ptr) As Short
Declare Sub ScreenToBack(ByVal screen As Screen Ptr)
Declare Sub ScreenToFront(ByVal screen As Screen Ptr)
Declare Function SetDMRequest(ByVal window As Window Ptr, ByVal requester As Requester Ptr) As Short
Declare Function SetMenuStrip(ByVal window As Window Ptr, ByVal menu As Menu Ptr) As Short
Declare Sub ShowTitle(ByVal screen As Screen Ptr, ByVal showIt As Short)
Declare Sub SizeWindow(ByVal window As Window Ptr, ByVal dx As Short, ByVal dy As Short)
Declare Sub WindowToBack(ByVal window As Window Ptr)
Declare Sub WindowToFront(ByVal window As Window Ptr)
Declare Function IntuiTextLength(ByVal iText As IntuiText Ptr) As Long
Declare Function WBenchToBack() As Short
Declare Function WBenchToFront() As Short
Declare Sub BeginRefresh(ByVal window As Window Ptr)
Declare Sub EndRefresh(ByVal window As Window Ptr, ByVal complete As Long)
Declare Sub FreeSysRequest(ByVal window As Window Ptr)
Declare Function MakeScreen(ByVal screen As Screen Ptr) As Long
Declare Function RemakeDisplay() As Long
Declare Function RethinkDisplay() As Long
Declare Sub AlohaWorkbench(ByVal wbport As Long)
Declare Sub FreeRemember(ByVal rememberKey As Remember Ptr, ByVal reallyForget As Short)
Declare Function LockIBase(ByVal dontknow As ULong) As ULong
Declare Sub UnlockIBase(ByVal ibLock As ULong)
Declare Sub ActivateWindow(ByVal window As Window Ptr)
Declare Sub RefreshWindowFrame(ByVal window As Window Ptr)
Declare Function SetMouseQueue(ByVal window As Window Ptr, ByVal queueLength As UShort) As Long
Declare Sub ZipWindow(ByVal window As Window Ptr)
Declare Sub UnlockPubScreen(ByVal name As Const ZString Ptr, ByVal screen As Screen Ptr)
Declare Sub UnlockPubScreenList()
Declare Function NextPubScreen(ByVal screen As Screen Ptr, ByVal namebuf As ZString Ptr) As ZString Ptr
Declare Sub SetDefaultPubScreen(ByVal name As Const ZString Ptr)
Declare Function SetPubScreenModes(ByVal modes As UShort) As UShort
Declare Function PubScreenStatus(ByVal screen As Screen Ptr, ByVal statusFlags As UShort) As UShort
Declare Sub ReleaseGIRPort(ByVal rp As RastPort Ptr)
Declare Sub GetDefaultPubScreen(ByVal nameBuffer As ZString Ptr)
Declare Function PointInImage(ByVal point As ULong, ByVal image As Image Ptr) As Short
Declare Sub DisposeObject(ByVal object As Any Ptr)
Declare Function SetAttrsA(ByVal object As Any Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function SetAttrs(ByVal object As Any Ptr, ByVal tag1 As ULong, ByVal arg As ...) As ULong
Declare Function GetAttr(ByVal attrID As ULong, ByVal object As Any Ptr, ByVal storagePtr As ULong Ptr) As ULong
Declare Function NextObject(ByVal objectPtrPtr As Any Ptr) As Any Ptr
Declare Sub AddClass(ByVal classPtr As IClass Ptr)
Declare Function ResetMenuStrip(ByVal window As Window Ptr, ByVal menu As Menu Ptr) As Short
Declare Sub RemoveClass(ByVal classPtr As IClass Ptr)
Declare Function FreeClass(ByVal classPtr As IClass Ptr) As Short
Declare Sub FreeScreenBuffer(ByVal sc As Screen Ptr, ByVal sb As ScreenBuffer Ptr)
Declare Function ChangeScreenBuffer(ByVal sc As Screen Ptr, ByVal sb As ScreenBuffer Ptr) As ULong
Declare Sub ScreenDepth(ByVal screen As Screen Ptr, ByVal flags As ULong, ByVal reserved As Any Ptr)
Declare Sub LendMenus(ByVal fromwindow As Window Ptr, ByVal towindow As Window Ptr)
Declare Sub SetWindowPointerA(ByVal win As Window Ptr, ByVal taglist As TagItem Ptr)
Declare Sub SetWindowPointer(ByVal win As Window Ptr, ByVal tag1 As ULong, ByVal arg As ...)
Declare Function TimedDisplayAlert(ByVal alertNumber As ULong, ByVal string As Const ZString Ptr, ByVal height As UShort, ByVal time As ULong) As Short
Declare Sub HelpControl(ByVal win As Window Ptr, ByVal flags As ULong)
Declare Function ShowWindow(ByVal window As Window Ptr, ByVal other As Window Ptr) As Short
Declare Function HideWindow(ByVal window As Window Ptr) As Short
Declare Function IntuitionControlA(ByVal object As Any Ptr, ByVal taglist As TagItem Ptr) As ULong
Declare Function IntuitionControl(ByVal object As Any Ptr, ByVal arg As ...) As ULong

#endif

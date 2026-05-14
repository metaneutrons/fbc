' FreeBASIC header for gadtools.library
' Auto-generated from NDK 3.2 SFD - 23 functions

#ifndef __AMIGA_GADTOOLS_BI__
#define __AMIGA_GADTOOLS_BI__

Declare Sub FreeGadgets(ByVal gad As Gadget Ptr)
Declare Sub GT_SetGadgetAttrsA(ByVal gad As Gadget Ptr, ByVal win As Window Ptr, ByVal req As Requester Ptr, ByVal taglist As TagItem Ptr)
Declare Sub GT_SetGadgetAttrs(ByVal gad As Gadget Ptr, ByVal win As Window Ptr, ByVal req As Requester Ptr, ByVal arg As ...)
Declare Sub FreeMenus(ByVal menu As Menu Ptr)
Declare Function LayoutMenuItemsA(ByVal firstitem As MenuItem Ptr, ByVal vi As Any Ptr, ByVal taglist As TagItem Ptr) As Short
Declare Function LayoutMenuItems(ByVal firstitem As MenuItem Ptr, ByVal vi As Any Ptr, ByVal arg As ...) As Short
Declare Function LayoutMenusA(ByVal firstmenu As Menu Ptr, ByVal vi As Any Ptr, ByVal taglist As TagItem Ptr) As Short
Declare Function LayoutMenus(ByVal firstmenu As Menu Ptr, ByVal vi As Any Ptr, ByVal arg As ...) As Short
Declare Sub GT_ReplyIMsg(ByVal imsg As IntuiMessage Ptr)
Declare Sub GT_RefreshWindow(ByVal win As Window Ptr, ByVal req As Requester Ptr)
Declare Sub GT_BeginRefresh(ByVal win As Window Ptr)
Declare Sub GT_EndRefresh(ByVal win As Window Ptr, ByVal complete As Short)
Declare Sub DrawBevelBoxA(ByVal rport As RastPort Ptr, ByVal left As Short, ByVal top As Short, ByVal width As Short, ByVal height As Short, ByVal taglist As TagItem Ptr)
Declare Sub DrawBevelBox(ByVal rport As RastPort Ptr, ByVal left As Short, ByVal top As Short, ByVal width As Short, ByVal height As Short, ByVal arg As ...)
Declare Function GetVisualInfoA(ByVal screen As Screen Ptr, ByVal taglist As TagItem Ptr) As Any Ptr
Declare Function GetVisualInfo(ByVal screen As Screen Ptr, ByVal arg As ...) As Any Ptr
Declare Sub FreeVisualInfo(ByVal vi As Any Ptr)
Declare Function SetDesignFontA(ByVal vi As Any Ptr, ByVal tattr As TextAttr Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function SetDesignFont(ByVal vi As Any Ptr, ByVal tattr As TextAttr Ptr, ByVal arg As ...) As Long
Declare Function ScaleGadgetRectA(ByVal ng As NewGadget Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function ScaleGadgetRect(ByVal ng As NewGadget Ptr, ByVal arg As ...) As Long
Declare Function GT_GetGadgetAttrsA(ByVal gad As Gadget Ptr, ByVal win As Window Ptr, ByVal req As Requester Ptr, ByVal taglist As TagItem Ptr) As Long
Declare Function GT_GetGadgetAttrs(ByVal gad As Gadget Ptr, ByVal win As Window Ptr, ByVal req As Requester Ptr, ByVal arg As ...) As Long

#endif

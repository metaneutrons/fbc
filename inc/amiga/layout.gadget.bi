' FreeBASIC header for layout.gadget
' Auto-generated from NDK 3.2 SFD - 7 functions

#ifndef __AMIGA_LAYOUT.GADGET_BI__
#define __AMIGA_LAYOUT.GADGET_BI__

Declare Function ActivateLayoutGadget(ByVal gadget As Gadget Ptr, ByVal window As Window Ptr, ByVal requester As Requester Ptr, ByVal object As ULong) As Short
Declare Sub FlushLayoutDomainCache(ByVal gadget As Gadget Ptr)
Declare Function RethinkLayout(ByVal gadget As Gadget Ptr, ByVal window As Window Ptr, ByVal requester As Requester Ptr, ByVal refresh As Long) As Short
Declare Sub LayoutLimits(ByVal gadget As Gadget Ptr, ByVal limits As LayoutLimits Ptr, ByVal font As TextFont Ptr, ByVal screen As Screen Ptr)
Declare Function SetPageGadgetAttrsA(ByVal gadget As Gadget Ptr, ByVal object As Object Ptr, ByVal window As Window Ptr, ByVal requester As Requester Ptr, ByVal tags As TagItem Ptr) As ULong
Declare Function SetPageGadgetAttrs(ByVal gadget As Gadget Ptr, ByVal object As Object Ptr, ByVal window As Window Ptr, ByVal requester As Requester Ptr, ByVal arg As ...) As ULong
Declare Sub RefreshPageGadget(ByVal gadget As Gadget Ptr, ByVal object As Object Ptr, ByVal window As Window Ptr, ByVal requester As Requester Ptr)

#endif

' FreeBASIC header for chooser.gadget
' Auto-generated from NDK 3.2 SFD - 7 functions

#ifndef __AMIGA_CHOOSER.GADGET_BI__
#define __AMIGA_CHOOSER.GADGET_BI__

Declare Sub FreeChooserNode(ByVal node As Node Ptr)
Declare Sub SetChooserNodeAttrsA(ByVal node As Node Ptr, ByVal tags As TagItem Ptr)
Declare Sub SetChooserNodeAttrs(ByVal node As Node Ptr, ByVal arg As ...)
Declare Sub GetChooserNodeAttrsA(ByVal node As Node Ptr, ByVal tags As TagItem Ptr)
Declare Sub GetChooserNodeAttrs(ByVal node As Node Ptr, ByVal arg As ...)
Declare Function ShowChooser(ByVal o As Object Ptr, ByVal w As Window Ptr, ByVal xpos As ULong, ByVal ypos As ULong) As ULong
Declare Sub HideChooser(ByVal o As Object Ptr, ByVal w As Window Ptr)

#endif

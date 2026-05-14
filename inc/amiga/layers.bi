' FreeBASIC header for layers.library
' Auto-generated from NDK 3.2 SFD - 27 functions

#ifndef __AMIGA_LAYERS_BI__
#define __AMIGA_LAYERS_BI__

Declare Sub InitLayers(ByVal li As Layer_Info Ptr)
Declare Function UpfrontLayer(ByVal dummy As Long, ByVal layer As Layer Ptr) As Long
Declare Function BehindLayer(ByVal dummy As Long, ByVal layer As Layer Ptr) As Long
Declare Function MoveLayer(ByVal dummy As Long, ByVal layer As Layer Ptr, ByVal dx As Long, ByVal dy As Long) As Long
Declare Function SizeLayer(ByVal dummy As Long, ByVal layer As Layer Ptr, ByVal dx As Long, ByVal dy As Long) As Long
Declare Sub ScrollLayer(ByVal dummy As Long, ByVal layer As Layer Ptr, ByVal dx As Long, ByVal dy As Long)
Declare Function BeginUpdate(ByVal l As Layer Ptr) As Long
Declare Sub EndUpdate(ByVal layer As Layer Ptr, ByVal flag As UShort)
Declare Function DeleteLayer(ByVal dummy As Long, ByVal layer As Layer Ptr) As Long
Declare Sub LockLayer(ByVal dummy As Long, ByVal layer As Layer Ptr)
Declare Sub UnlockLayer(ByVal layer As Layer Ptr)
Declare Sub LockLayers(ByVal li As Layer_Info Ptr)
Declare Sub UnlockLayers(ByVal li As Layer_Info Ptr)
Declare Sub LockLayerInfo(ByVal li As Layer_Info Ptr)
Declare Sub SwapBitsRastPortClipRect(ByVal rp As RastPort Ptr, ByVal cr As ClipRect Ptr)
Declare Sub UnlockLayerInfo(ByVal li As Layer_Info Ptr)
Declare Sub DisposeLayerInfo(ByVal li As Layer_Info Ptr)
Declare Function FattenLayerInfo(ByVal li As Layer_Info Ptr) As Long
Declare Sub ThinLayerInfo(ByVal li As Layer_Info Ptr)
Declare Function MoveLayerInFrontOf(ByVal layer_to_move As Layer Ptr, ByVal other_layer As Layer Ptr) As Long
Declare Function MoveSizeLayer(ByVal layer As Layer Ptr, ByVal dx As Long, ByVal dy As Long, ByVal dw As Long, ByVal dh As Long) As Long
Declare Sub SortLayerCR(ByVal layer As Layer Ptr, ByVal dx As Short, ByVal dy As Short)
Declare Sub DoHookClipRects(ByVal hook As Hook Ptr, ByVal rport As RastPort Ptr, ByVal rect As Rectangle Ptr)
Declare Function LayerOccluded(ByVal layer As Layer Ptr) As Short
Declare Function HideLayer(ByVal layer As Layer Ptr) As Long
Declare Function ShowLayer(ByVal layer As Layer Ptr, ByVal in_front_of As Layer Ptr) As Long
Declare Function SetLayerInfoBounds(ByVal li As Layer_Info Ptr, ByVal bounds As Rectangle Ptr) As Short

#endif

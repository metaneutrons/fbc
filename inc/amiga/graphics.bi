' FreeBASIC header for graphics.library
' Auto-generated from NDK 3.2 SFD - 117 functions

#ifndef __AMIGA_GRAPHICS_BI__
#define __AMIGA_GRAPHICS_BI__

Declare Sub ClearEOL(ByVal rp As RastPort Ptr)
Declare Sub ClearScreen(ByVal rp As RastPort Ptr)
Declare Function Text(ByVal rp As RastPort Ptr, ByVal string As Const ZString Ptr, ByVal count As UShort) As Long
Declare Function SetFont(ByVal rp As RastPort Ptr, ByVal textFont As TextFont Ptr) As Long
Declare Sub CloseFont(ByVal textFont As TextFont Ptr)
Declare Function AskSoftStyle(ByVal rp As RastPort Ptr) As ULong
Declare Sub AddBob(ByVal bob As Bob Ptr, ByVal rp As RastPort Ptr)
Declare Sub AddVSprite(ByVal vSprite As VSprite Ptr, ByVal rp As RastPort Ptr)
Declare Sub DoCollision(ByVal rp As RastPort Ptr)
Declare Sub DrawGList(ByVal rp As RastPort Ptr, ByVal vp As ViewPort Ptr)
Declare Sub InitMasks(ByVal vSprite As VSprite Ptr)
Declare Sub RemVSprite(ByVal vSprite As VSprite Ptr)
Declare Sub SetCollision(ByVal num As ULong, ByVal proc As Any Ptr)
Declare Sub SortGList(ByVal rp As RastPort Ptr)
Declare Sub Animate(ByVal anKey As AnimOb Ptr, ByVal rp As RastPort Ptr)
Declare Sub InitGMasks(ByVal anOb As AnimOb Ptr)
Declare Sub LoadRGB4(ByVal vp As ViewPort Ptr, ByVal colors As UShort Ptr, ByVal count As Short)
Declare Sub InitRastPort(ByVal rp As RastPort Ptr)
Declare Sub InitVPort(ByVal vp As ViewPort Ptr)
Declare Function MrgCop(ByVal view As View Ptr) As ULong
Declare Function MakeVPort(ByVal view As View Ptr, ByVal vp As ViewPort Ptr) As ULong
Declare Sub LoadView(ByVal view As View Ptr)
Declare Sub WaitBlit()
Declare Sub SetRast(ByVal rp As RastPort Ptr, ByVal pen As UByte)
Declare Sub Move(ByVal rp As RastPort Ptr, ByVal x As Short, ByVal y As Short)
Declare Sub Draw(ByVal rp As RastPort Ptr, ByVal x As Short, ByVal y As Short)
Declare Function AreaMove(ByVal rp As RastPort Ptr, ByVal x As Short, ByVal y As Short) As Long
Declare Function AreaDraw(ByVal rp As RastPort Ptr, ByVal x As Short, ByVal y As Short) As Long
Declare Function AreaEnd(ByVal rp As RastPort Ptr) As Long
Declare Sub WaitTOF()
Declare Sub QBlit(ByVal blit As bltnode Ptr)
Declare Sub QBSBlit(ByVal blit As bltnode Ptr)
Declare Sub BltClear(ByVal memBlock As PLANEPTR, ByVal byteCount As ULong, ByVal flags As ULong)
Declare Function ReadPixel(ByVal rp As RastPort Ptr, ByVal x As Short, ByVal y As Short) As ULong
Declare Function WritePixel(ByVal rp As RastPort Ptr, ByVal x As Short, ByVal y As Short) As Long
Declare Function Flood(ByVal rp As RastPort Ptr, ByVal mode As ULong, ByVal x As Short, ByVal y As Short) As Short
Declare Sub PolyDraw(ByVal rp As RastPort Ptr, ByVal count As Short, ByVal polyTable As Short Ptr)
Declare Sub SetAPen(ByVal rp As RastPort Ptr, ByVal pen As UByte)
Declare Sub SetBPen(ByVal rp As RastPort Ptr, ByVal pen As UByte)
Declare Sub SetDrMd(ByVal rp As RastPort Ptr, ByVal drawMode As UByte)
Declare Sub InitView(ByVal view As View Ptr)
Declare Sub CBump(ByVal copList As UCopList Ptr)
Declare Function CWait(ByVal copList As UCopList Ptr, ByVal v As Short, ByVal h As Short) As Long
Declare Function VBeamPos() As Long
Declare Sub WaitBOVP(ByVal vp As ViewPort Ptr)
Declare Function GetSprite(ByVal sprite As SimpleSprite Ptr, ByVal num As Short) As Short
Declare Sub FreeSprite(ByVal num As Short)
Declare Sub LockLayerRom(ByVal layer As Layer Ptr)
Declare Sub UnlockLayerRom(ByVal layer As Layer Ptr)
Declare Sub SyncSBitMap(ByVal layer As Layer Ptr)
Declare Sub CopySBitMap(ByVal layer As Layer Ptr)
Declare Sub OwnBlitter()
Declare Sub DisownBlitter()
Declare Sub AskFont(ByVal rp As RastPort Ptr, ByVal textAttr As TextAttr Ptr)
Declare Sub AddFont(ByVal textFont As TextFont Ptr)
Declare Sub RemFont(ByVal textFont As TextFont Ptr)
Declare Function AllocRaster(ByVal width As UShort, ByVal height As UShort) As PLANEPTR
Declare Sub FreeRaster(ByVal p As PLANEPTR, ByVal width As UShort, ByVal height As UShort)
Declare Sub ClearRegion(ByVal region As Region Ptr)
Declare Sub DisposeRegion(ByVal region As Region Ptr)
Declare Sub FreeVPortCopLists(ByVal vp As ViewPort Ptr)
Declare Sub FreeCopList(ByVal copList As CopList Ptr)
Declare Sub FreeCprList(ByVal cprList As cprlist Ptr)
Declare Sub FreeColorMap(ByVal colorMap As ColorMap Ptr)
Declare Function GetRGB4(ByVal colorMap As ColorMap Ptr, ByVal entry As Long) As ULong
Declare Sub ScrollVPort(ByVal vp As ViewPort Ptr)
Declare Function AttemptLockLayerRom(ByVal layer As Layer Ptr) As Short
Declare Function GfxNew(ByVal gfxNodeType As ULong) As Any Ptr
Declare Sub GfxFree(ByVal gfxNodePtr As Any Ptr)
Declare Sub GfxAssociate(ByVal associateNode As Any Ptr, ByVal gfxNodePtr As Any Ptr)
Declare Sub BitMapScale(ByVal bitScaleArgs As BitScaleArgs Ptr)
Declare Function ScalerDiv(ByVal factor As UShort, ByVal numerator As UShort, ByVal denominator As UShort) As UShort
Declare Function GfxLookUp(ByVal associateNode As Any Ptr) As Any Ptr
Declare Function CloseMonitor(ByVal monitorSpec As MonitorSpec Ptr) As Short
Declare Function FindDisplayInfo(ByVal displayID As ULong) As DisplayInfoHandle
Declare Function NextDisplayInfo(ByVal displayID As ULong) As ULong
Declare Function GetVPModeID(ByVal vp As ViewPort Ptr) As Long
Declare Function ModeNotAvailable(ByVal modeID As ULong) As Long
Declare Function ExtendFont(ByVal font As TextFont Ptr, ByVal fontTags As TagItem Ptr) As ULong
Declare Function ExtendFontTags(ByVal font As TextFont Ptr, ByVal tag1Type As ULong, ByVal arg As ...) As ULong
Declare Sub StripFont(ByVal font As TextFont Ptr)
Declare Function CalcIVG(ByVal v As View Ptr, ByVal vp As ViewPort Ptr) As UShort
Declare Function AttachPalExtra(ByVal cm As ColorMap Ptr, ByVal vp As ViewPort Ptr) As Long
Declare Function ObtainBestPenA(ByVal cm As ColorMap Ptr, ByVal r As ULong, ByVal g As ULong, ByVal b As ULong, ByVal tags As TagItem Ptr) As Long
Declare Function ObtainBestPen(ByVal cm As ColorMap Ptr, ByVal r As ULong, ByVal g As ULong, ByVal b As ULong, ByVal tag1Type As ULong, ByVal arg As ...) As Long
Declare Sub SetRGB32(ByVal vp As ViewPort Ptr, ByVal n As ULong, ByVal r As ULong, ByVal g As ULong, ByVal b As ULong)
Declare Function GetAPen(ByVal rp As RastPort Ptr) As ULong
Declare Function GetBPen(ByVal rp As RastPort Ptr) As ULong
Declare Function GetDrMd(ByVal rp As RastPort Ptr) As ULong
Declare Function GetOutlinePen(ByVal rp As RastPort Ptr) As ULong
Declare Sub LoadRGB32(ByVal vp As ViewPort Ptr, ByVal table As ULong Ptr)
Declare Function SetChipRev(ByVal want As ULong) As ULong
Declare Sub SetABPenDrMd(ByVal rp As RastPort Ptr, ByVal apen As ULong, ByVal bpen As ULong, ByVal drawmode As ULong)
Declare Sub GetRGB32(ByVal cm As ColorMap Ptr, ByVal firstcolor As ULong, ByVal ncolors As ULong, ByVal table As ULong Ptr)
Declare Sub FreeBitMap(ByVal bm As BitMap Ptr)
Declare Function GetExtSpriteA(ByVal ss As ExtSprite Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function GetExtSprite(ByVal ss As ExtSprite Ptr, ByVal tag1Type As ULong, ByVal arg As ...) As Long
Declare Function CoerceMode(ByVal vp As ViewPort Ptr, ByVal monitorid As ULong, ByVal flags As ULong) As ULong
Declare Sub ChangeVPBitMap(ByVal vp As ViewPort Ptr, ByVal bm As BitMap Ptr, ByVal db As DBufInfo Ptr)
Declare Sub ReleasePen(ByVal cm As ColorMap Ptr, ByVal n As ULong)
Declare Function ObtainPen(ByVal cm As ColorMap Ptr, ByVal n As ULong, ByVal r As ULong, ByVal g As ULong, ByVal b As ULong, ByVal f As Long) As ULong
Declare Function GetBitMapAttr(ByVal bm As BitMap Ptr, ByVal attrnum As ULong) As ULong
Declare Sub FreeDBufInfo(ByVal dbi As DBufInfo Ptr)
Declare Function SetOutlinePen(ByVal rp As RastPort Ptr, ByVal pen As ULong) As ULong
Declare Function SetWriteMask(ByVal rp As RastPort Ptr, ByVal msk As ULong) As ULong
Declare Sub SetMaxPen(ByVal rp As RastPort Ptr, ByVal maxpen As ULong)
Declare Sub SetRGB32CM(ByVal cm As ColorMap Ptr, ByVal n As ULong, ByVal r As ULong, ByVal g As ULong, ByVal b As ULong)
Declare Function FindColor(ByVal cm As ColorMap Ptr, ByVal r As ULong, ByVal g As ULong, ByVal b As ULong, ByVal maxcolor As Long) As Long
Declare Function ChangeExtSpriteA(ByVal vp As ViewPort Ptr, ByVal oldsprite As ExtSprite Ptr, ByVal newsprite As ExtSprite Ptr, ByVal tags As TagItem Ptr) As Long
Declare Function ChangeExtSprite(ByVal vp As ViewPort Ptr, ByVal oldsprite As ExtSprite Ptr, ByVal newsprite As ExtSprite Ptr, ByVal tag1Type As ULong, ByVal arg As ...) As Long
Declare Sub FreeSpriteData(ByVal sp As ExtSprite Ptr)
Declare Sub SetRPAttrsA(ByVal rp As RastPort Ptr, ByVal tags As TagItem Ptr)
Declare Sub SetRPAttrs(ByVal rp As RastPort Ptr, ByVal tag1Type As ULong, ByVal arg As ...)
Declare Sub GetRPAttrsA(ByVal rp As RastPort Ptr, ByVal tags As TagItem Ptr)
Declare Sub GetRPAttrs(ByVal rp As RastPort Ptr, ByVal tag1Type As ULong, ByVal arg As ...)
Declare Function BestModeIDA(ByVal tags As TagItem Ptr) As ULong
Declare Function BestModeID(ByVal tag1Type As ULong, ByVal arg As ...) As ULong

#endif

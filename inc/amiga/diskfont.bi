' FreeBASIC header for diskfont.library
' Auto-generated from NDK 3.2 SFD - 18 functions

#ifndef __AMIGA_DISKFONT_BI__
#define __AMIGA_DISKFONT_BI__

Declare Function AvailFonts(ByVal buffer As AvailFontsHeader Ptr, ByVal bufBytes As Long, ByVal flags As ULong) As Long
Declare Sub DisposeFontContents(ByVal fontContentsHeader As FontContentsHeader Ptr)
Declare Function GetDiskFontCtrl(ByVal tagid As Long) As Long
Declare Sub SetDiskFontCtrlA(ByVal taglist As TagItem Ptr)
Declare Sub SetDiskFontCtrl(ByVal tag1 As Tag, ByVal arg As ...)
Declare Function EOpenEngine(ByVal EEngine As EGlyphEngine Ptr) As Long
Declare Sub ECloseEngine(ByVal EEngine As EGlyphEngine Ptr)
Declare Function ESetInfoA(ByVal EEngine As EGlyphEngine Ptr, ByVal taglist As TagItem Ptr) As ULong
Declare Function ESetInfo(ByVal EEngine As EGlyphEngine Ptr, ByVal arg As ...) As ULong
Declare Function EObtainInfoA(ByVal EEngine As EGlyphEngine Ptr, ByVal taglist As TagItem Ptr) As ULong
Declare Function EObtainInfo(ByVal EEngine As EGlyphEngine Ptr, ByVal arg As ...) As ULong
Declare Function EReleaseInfoA(ByVal EEngine As EGlyphEngine Ptr, ByVal taglist As TagItem Ptr) As ULong
Declare Function EReleaseInfo(ByVal EEngine As EGlyphEngine Ptr, ByVal arg As ...) As ULong
Declare Sub CloseOutlineFont(ByVal olf As OutlineFont Ptr, ByVal list As List Ptr)
Declare Function WriteFontContents(ByVal fontsLock As Long, ByVal fontName As Const ZString Ptr, ByVal fontContentsHeader As FontContentsHeader Ptr) As Long
Declare Function WriteDiskFontHeaderA(ByVal font As TextFont Ptr, ByVal fileName As Const ZString Ptr, ByVal tagList As TagItem Ptr) As Long
Declare Function WriteDiskFontHeader(ByVal font As TextFont Ptr, ByVal fileName As Const ZString Ptr, ByVal arg As ...) As Long
Declare Function ObtainCharsetInfo(ByVal knownTag As ULong, ByVal knownValue As ULong, ByVal wantedTag As ULong) As ULong

#endif

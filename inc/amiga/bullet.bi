' FreeBASIC header for bullet.library
' Auto-generated from NDK 3.2 SFD - 7 functions

#ifndef __AMIGA_BULLET_BI__
#define __AMIGA_BULLET_BI__

Declare Sub CloseEngine(ByVal glyphEngine As GlyphEngine Ptr)
Declare Function SetInfoA(ByVal glyphEngine As GlyphEngine Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function SetInfo(ByVal glyphEngine As GlyphEngine Ptr, ByVal arg As ...) As ULong
Declare Function ObtainInfoA(ByVal glyphEngine As GlyphEngine Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function ObtainInfo(ByVal glyphEngine As GlyphEngine Ptr, ByVal arg As ...) As ULong
Declare Function ReleaseInfoA(ByVal glyphEngine As GlyphEngine Ptr, ByVal tagList As TagItem Ptr) As ULong
Declare Function ReleaseInfo(ByVal glyphEngine As GlyphEngine Ptr, ByVal arg As ...) As ULong

#endif

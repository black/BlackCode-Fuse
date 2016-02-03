// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_CPP_FONT_FACE_H__
#define __APP_UNO_CONTENT_FONTS_CPP_FONT_FACE_H__

#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph; } } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct Float2; } }
namespace Xli { class FontFace; }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct CppFontFace;

struct CppFontFace__uType : ::app::Uno::Content::Fonts::FontFace__uType
{
};

CppFontFace__uType* CppFontFace__typeof();

void CppFontFace___ObjInit_1(CppFontFace* __this, ::uArray* data, int offset, int length);
void CppFontFace___ObjInit_2(CppFontFace* __this, ::app::Uno::BundleFile* file);
bool CppFontFace__ContainsGlyph(CppFontFace* __this, float size_, ::uChar glyph_);
void CppFontFace__Dispose(CppFontFace* __this);
::uString* CppFontFace__get_FamilyName(CppFontFace* __this);
::uString* CppFontFace__get_StyleName(CppFontFace* __this);
float CppFontFace__GetAscender(CppFontFace* __this, float size_);
float CppFontFace__GetDescender(CppFontFace* __this, float size_);
float CppFontFace__GetLineHeight(CppFontFace* __this, float size_);
::Xli::FontFace* CppFontFace__LoadFontFaceHandle(::uStatic* __this, ::uArray* data_, int offset_, int length_);
::Xli::FontFace* CppFontFace__LoadFontFaceHandle_1(::uStatic* __this, ::uString* filename_);
CppFontFace* CppFontFace__New_1(::uStatic* __this, ::uArray* data, int offset, int length);
CppFontFace* CppFontFace__New_2(::uStatic* __this, ::app::Uno::BundleFile* file);
::app::Uno::Content::Fonts::RenderedGlyph CppFontFace__RenderGlyph(CppFontFace* __this, float size_, ::uChar glyph_);
bool CppFontFace__TryGetKerning(CppFontFace* __this, float size_, ::uChar left_, ::uChar right_, ::app::Uno::Float2* result_);

struct CppFontFace : ::app::Uno::Content::Fonts::FontFace
{
    ::Xli::FontFace* _handle;

    void _ObjInit_1(::uArray* data, int offset, int length) { CppFontFace___ObjInit_1(this, data, offset, length); }
    void _ObjInit_2(::app::Uno::BundleFile* file) { CppFontFace___ObjInit_2(this, file); }
};

}}}}


#endif

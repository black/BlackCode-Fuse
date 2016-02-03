// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct CppFontFace;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct RenderedGlyph;}}}}
namespace g{namespace Uno{struct BundleFile;}}
namespace g{namespace Uno{struct Float2;}}
namespace Xli { class FontFace; }

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// internal sealed extern class CppFontFace :182
// {
::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof();
void CppFontFace__ctor_1_fn(CppFontFace* __this, uArray* data, int* offset, int* length);
void CppFontFace__ctor_2_fn(CppFontFace* __this, ::g::Uno::BundleFile* file);
void CppFontFace__ContainsGlyph_fn(CppFontFace* __this, float* size_, uChar* glyph_, bool* __retval);
void CppFontFace__Dispose_fn(CppFontFace* __this);
void CppFontFace__get_FamilyName_fn(CppFontFace* __this, uString** __retval);
void CppFontFace__GetAscender_fn(CppFontFace* __this, float* size_, float* __retval);
void CppFontFace__GetDescender_fn(CppFontFace* __this, float* size_, float* __retval);
void CppFontFace__GetLineHeight_fn(CppFontFace* __this, float* size_, float* __retval);
void CppFontFace__LoadFontFaceHandle_fn(uArray* data_, int* offset_, int* length_, ::Xli::FontFace** __retval);
void CppFontFace__LoadFontFaceHandle1_fn(uString* filename_, ::Xli::FontFace** __retval);
void CppFontFace__New1_fn(uArray* data, int* offset, int* length, CppFontFace** __retval);
void CppFontFace__New2_fn(::g::Uno::BundleFile* file, CppFontFace** __retval);
void CppFontFace__RenderGlyph_fn(CppFontFace* __this, float* size_, uChar* glyph_, ::g::Uno::Content::Fonts::RenderedGlyph* __retval);
void CppFontFace__get_StyleName_fn(CppFontFace* __this, uString** __retval);
void CppFontFace__TryGetKerning_fn(CppFontFace* __this, float* size_, uChar* left_, uChar* right_, ::g::Uno::Float2* result_, bool* __retval);

struct CppFontFace : ::g::Uno::Content::Fonts::FontFace
{
    ::Xli::FontFace* _handle;

    void ctor_1(uArray* data, int offset, int length);
    void ctor_2(::g::Uno::BundleFile* file);
    static ::Xli::FontFace* LoadFontFaceHandle(uArray* data_, int offset_, int length_);
    static ::Xli::FontFace* LoadFontFaceHandle1(uString* filename_);
    static CppFontFace* New1(uArray* data, int offset, int length);
    static CppFontFace* New2(::g::Uno::BundleFile* file);
};
// }

}}}} // ::g::Uno::Content::Fonts

// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UnoCore_bundle.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Content.Fonts.BitmapFont.CharPair.h>
#include <Uno.Content.Fonts.BitmapFont.GlyphInfo.h>
#include <Uno.Content.Fonts.BitmapFont.h>
#include <Uno.Content.Fonts.CppFontFace.h>
#include <Uno.Content.Fonts.CppFontFaceHandle.h>
#include <Uno.Content.Fonts.DefaultTextTransform.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Content.Fonts.FontFaceHelpers.h>
#include <Uno.Content.Fonts.RenderedGlyph.h>
#include <Uno.Content.Fonts.SdfFontShader.h>
#include <Uno.Content.Fonts.SpriteFontShader.h>
#include <Uno.Content.Fonts.TextRenderer.h>
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Content.Fonts.TextShaderData.h>
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno/XliInterop.h>
#include <Xli/BufferStream.h>
#include <Xli/Bundle.h>
static uString* STRINGS[2];
static uType* TYPES[36];

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(8)
// ----------------------------------------------------------------------------

// public sealed class BitmapFont :8
// {
uType* BitmapFont_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(BitmapFont);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.BitmapFont", options);
    type->fp_ctor_ = (void*)BitmapFont__New1_fn;
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), BitmapFont__GlyphInfo_typeof());
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Float_typeof()), offsetof(::g::Uno::Content::Fonts::BitmapFont, Advances), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, Ascent), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, Descent), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, FamilyName), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, FontFace), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), BitmapFont__GlyphInfo_typeof()), offsetof(::g::Uno::Content::Fonts::BitmapFont, Glyphs), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof()), offsetof(::g::Uno::Content::Fonts::BitmapFont, Kernings), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, LineHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, PixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, PixelSpread), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, StyleName), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, Texture), 0);
    return type;
}

// internal BitmapFont() :55
void BitmapFont__ctor__fn(BitmapFont* __this)
{
    __this->ctor_();
}

// internal BitmapFont New() :55
void BitmapFont__New1_fn(BitmapFont** __retval)
{
    *__retval = BitmapFont::New1();
}

// internal BitmapFont() [instance] :55
void BitmapFont::ctor_()
{
    Glyphs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.BitmapFont.GlyphInfo>*/]));
    Advances = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<char, float>*/]));
    Kernings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<Uno.Content.Fonts.BitmapFont.CharPair, float>*/]));
}

// internal BitmapFont New() [static] :55
BitmapFont* BitmapFont::New1()
{
    BitmapFont* obj1 = (BitmapFont*)uNew(BitmapFont_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(19)
// -----------------------------------------------------------------------------

// public struct BitmapFont.CharPair :19
// {
uStructType* BitmapFont__CharPair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(BitmapFont__CharPair);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.BitmapFont.CharPair", options);
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))BitmapFont__CharPair__GetHashCode_fn;
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Char_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__CharPair, Left), 0,
        ::g::Uno::Char_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__CharPair, Right), 0);
    return type;
}

// public CharPair(char left, char right) :23
void BitmapFont__CharPair__ctor__fn(BitmapFont__CharPair* __this, uChar* left, uChar* right)
{
    __this->ctor_(*left, *right);
}

// public override sealed int GetHashCode() :29
void BitmapFont__CharPair__GetHashCode_fn(BitmapFont__CharPair* __this, uType* __type, int* __retval)
{
    int hash = 27;
    hash = (hash * 13) + (int)__this->Left;
    hash = (hash * 13) + (int)__this->Right;
    return *__retval = hash, void();
}

// public CharPair New(char left, char right) :23
void BitmapFont__CharPair__New1_fn(uChar* left, uChar* right, BitmapFont__CharPair* __retval)
{
    *__retval = BitmapFont__CharPair__New1(*left, *right);
}

// public CharPair(char left, char right) [instance] :23
void BitmapFont__CharPair::ctor_(uChar left, uChar right)
{
    Left = left;
    Right = right;
}

// public CharPair New(char left, char right) [static] :23
BitmapFont__CharPair BitmapFont__CharPair__New1(uChar left, uChar right)
{
    BitmapFont__CharPair obj1;
    obj1.ctor_(left, right);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(182)
// ------------------------------------------------------------------------------

// internal sealed extern class CppFontFace :182
// {
::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppFontFace);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::FontFace_type);
    type = (::g::Uno::Content::Fonts::FontFace_type*)uClassType::New("Uno.Content.Fonts.CppFontFace", options);
    type->SetBase(::g::Uno::Content::Fonts::FontFace_typeof());
    type->fp_ContainsGlyph = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, uChar*, bool*))CppFontFace__ContainsGlyph_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Content::Fonts::FontFace*))CppFontFace__Dispose_fn;
    type->fp_get_FamilyName = (void(*)(::g::Uno::Content::Fonts::FontFace*, uString**))CppFontFace__get_FamilyName_fn;
    type->fp_GetAscender = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetAscender_fn;
    type->fp_GetDescender = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetDescender_fn;
    type->fp_GetLineHeight = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetLineHeight_fn;
    type->fp_RenderGlyph = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, uChar*, ::g::Uno::Content::Fonts::RenderedGlyph*))CppFontFace__RenderGlyph_fn;
    type->fp_get_StyleName = (void(*)(::g::Uno::Content::Fonts::FontFace*, uString**))CppFontFace__get_StyleName_fn;
    type->fp_TryGetKerning = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, uChar*, uChar*, ::g::Uno::Float2*, bool*))CppFontFace__TryGetKerning_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CppFontFace__Dispose_fn;
    ::TYPES[4] = ::g::Uno::BundleFile_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Content::Fonts::FontFace_type, interface0));
    type->SetFields(0,
        ::g::Uno::Content::Fonts::CppFontFaceHandle_typeof(), offsetof(::g::Uno::Content::Fonts::CppFontFace, _handle), 0);
    return type;
}

// public CppFontFace(byte[] data, int offset, int length) :197
void CppFontFace__ctor_1_fn(CppFontFace* __this, uArray* data, int* offset, int* length)
{
    __this->ctor_1(data, *offset, *length);
}

// public CppFontFace(Uno.BundleFile file) :192
void CppFontFace__ctor_2_fn(CppFontFace* __this, ::g::Uno::BundleFile* file)
{
    __this->ctor_2(file);
}

// public override sealed extern bool ContainsGlyph(float size, char glyph) :221
void CppFontFace__ContainsGlyph_fn(CppFontFace* __this, float* size_, uChar* glyph_, bool* __retval)
{
    float size__ = *size_;
    uChar glyph__ = *glyph_;
    return *__retval = __this->_handle->ContainsGlyph(size__, glyph__), void();
}

// public override sealed extern void Dispose() :203
void CppFontFace__Dispose_fn(CppFontFace* __this)
{
    __this->_handle->Release();
    __this->_handle = 0;
}

// public override sealed extern string get_FamilyName() :206
void CppFontFace__get_FamilyName_fn(CppFontFace* __this, uString** __retval)
{
    return *__retval = uStringFromXliString(__this->_handle->GetFamilyName()), void();
}

// public override sealed extern float GetAscender(float size) :212
void CppFontFace__GetAscender_fn(CppFontFace* __this, float* size_, float* __retval)
{
    float size__ = *size_;
    return *__retval = __this->_handle->GetAscender(size__), void();
}

// public override sealed extern float GetDescender(float size) :215
void CppFontFace__GetDescender_fn(CppFontFace* __this, float* size_, float* __retval)
{
    float size__ = *size_;
    return *__retval = __this->_handle->GetDescender(size__), void();
}

// public override sealed extern float GetLineHeight(float size) :218
void CppFontFace__GetLineHeight_fn(CppFontFace* __this, float* size_, float* __retval)
{
    float size__ = *size_;
    return *__retval = __this->_handle->GetLineHeight(size__), void();
}

// private static extern Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) :188
void CppFontFace__LoadFontFaceHandle_fn(uArray* data_, int* offset_, int* length_, ::Xli::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle(data_, *offset_, *length_);
}

// private static extern Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(string filename) :185
void CppFontFace__LoadFontFaceHandle1_fn(uString* filename_, ::Xli::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle1(filename_);
}

// public CppFontFace New(byte[] data, int offset, int length) :197
void CppFontFace__New1_fn(uArray* data, int* offset, int* length, CppFontFace** __retval)
{
    *__retval = CppFontFace::New1(data, *offset, *length);
}

// public CppFontFace New(Uno.BundleFile file) :192
void CppFontFace__New2_fn(::g::Uno::BundleFile* file, CppFontFace** __retval)
{
    *__retval = CppFontFace::New2(file);
}

// public override sealed extern Uno.Content.Fonts.RenderedGlyph RenderGlyph(float size, char glyph) :224
void CppFontFace__RenderGlyph_fn(CppFontFace* __this, float* size_, uChar* glyph_, ::g::Uno::Content::Fonts::RenderedGlyph* __retval)
{
    float size__ = *size_;
    uChar glyph__ = *glyph_;
    Xli::Vector2 advance, bearing;
    Xli::Managed<Xli::Bitmap> bitmap = __this->_handle->RenderGlyph(size__, glyph__, Xli::FontRenderModeNormal, &advance, &bearing);
    
    ::g::Uno::Buffer* resultBuffer = uBufferFromXliDataAccessor(bitmap);
    ::g::Uno::Content::Images::Bitmap* resultBitmap = ::g::Uno::Content::Images::Bitmap::New1(::g::Uno::Int2__New2(bitmap->GetWidth(), bitmap->GetHeight()), 1, resultBuffer);
    
    return *__retval = ::g::Uno::Content::Fonts::RenderedGlyph__New1(::g::Uno::Float2__New2(advance.X, advance.Y), ::g::Uno::Float2__New2(bearing.X, bearing.Y), resultBitmap), void();
}

// public override sealed extern string get_StyleName() :209
void CppFontFace__get_StyleName_fn(CppFontFace* __this, uString** __retval)
{
    return *__retval = uStringFromXliString(__this->_handle->GetStyleName()), void();
}

// public override sealed extern bool TryGetKerning(float size, char left, char right, float2& result) :227
void CppFontFace__TryGetKerning_fn(CppFontFace* __this, float* size_, uChar* left_, uChar* right_, ::g::Uno::Float2* result_, bool* __retval)
{
    float size__ = *size_;
    uChar left__ = *left_;
    uChar right__ = *right_;
    Xli::Vector2 kerning;
    if (__this->_handle->TryGetKerning(size__, left__, right__, &kerning))
    {
        result_->X = kerning.X;
        result_->Y = kerning.Y;
        return *__retval = true, void();
    }
    
    result_->X = result_->Y = 0;
    return *__retval = false, void();
}

// public CppFontFace(byte[] data, int offset, int length) [instance] :197
void CppFontFace::ctor_1(uArray* data, int offset, int length)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle(data, offset, length);
}

// public CppFontFace(Uno.BundleFile file) [instance] :192
void CppFontFace::ctor_2(::g::Uno::BundleFile* file)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle1(uPtr(file)->Name());
}

// private static extern Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) [static] :188
::Xli::FontFace* CppFontFace::LoadFontFaceHandle(uArray* data_, int offset_, int length_)
{
    Xli::BufferStream stream(new Xli::BufferPtr((char*)data_->Ptr() + offset_, length_, false), true, false);                
    return Xli::FreeType::LoadFontFace(&stream);
}

// private static extern Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(string filename) [static] :185
::Xli::FontFace* CppFontFace::LoadFontFaceHandle1(uString* filename_)
{
    Xli::Managed<Xli::Stream> f = Xli::Bundle->OpenFile(uStringToXliString(filename_));
    return Xli::FreeType::LoadFontFace(f);
}

// public CppFontFace New(byte[] data, int offset, int length) [static] :197
CppFontFace* CppFontFace::New1(uArray* data, int offset, int length)
{
    CppFontFace* obj2 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj2->ctor_1(data, offset, length);
    return obj2;
}

// public CppFontFace New(Uno.BundleFile file) [static] :192
CppFontFace* CppFontFace::New2(::g::Uno::BundleFile* file)
{
    CppFontFace* obj1 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj1->ctor_2(file);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(177)
// ------------------------------------------------------------------------------

// internal extern struct CppFontFaceHandle :177
// {
uStructType* CppFontFaceHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::Xli::FontFace*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.CppFontFaceHandle", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(237)
// ------------------------------------------------------------------------------

// public sealed class DefaultTextTransform :237
// {
::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DefaultTextTransform);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextTransform_type);
    type = (::g::Uno::Content::Fonts::TextTransform_type*)uClassType::New("Uno.Content.Fonts.DefaultTextTransform", options);
    type->SetBase(::g::Uno::Content::Fonts::TextTransform_typeof());
    type->fp_ctor_ = (void*)DefaultTextTransform__New1_fn;
    type->fp_get_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__get_Matrix_fn;
    type->fp_set_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__set_Matrix_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__ResolveClipSpaceMatrix_fn;
    ::TYPES[5] = ::g::Uno::Float4x4_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[7] = ::g::Uno::Graphics::GraphicsContext_typeof();
    ::TYPES[8] = ::g::Uno::Application_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Uno::Content::Fonts::DefaultTextTransform, _matrix), 0);
    return type;
}

// public generated DefaultTextTransform() :237
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this)
{
    __this->ctor_1();
}

// public override sealed float4x4 get_Matrix() :243
void DefaultTextTransform__get_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = __this->_matrix, void();
}

// public override sealed void set_Matrix(float4x4 value) :244
void DefaultTextTransform__set_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->_matrix = value_;
}

// public generated DefaultTextTransform New() :237
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval)
{
    *__retval = DefaultTextTransform::New1();
}

// public override sealed float4x4 ResolveClipSpaceMatrix() :247
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    ::g::Uno::Float2 csScale = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New2(2.0f, -2.0f), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(::g::Uno::Application::Current())->GraphicsContext())->Viewport().Size()));
    ::g::Uno::Float2 csOffset = ::g::Uno::Float2__New2(-1.0f, 1.0f);
    ::g::Uno::Float4x4 csMatrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New4(csScale, 1.0f)), ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(csOffset, 0.0f)));
    return *__retval = ::g::Uno::Matrix::Mul8(__this->Matrix(), csMatrix), void();
}

// public generated DefaultTextTransform() [instance] :237
void DefaultTextTransform::ctor_1()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    ctor_();
}

// public generated DefaultTextTransform New() [static] :237
DefaultTextTransform* DefaultTextTransform::New1()
{
    DefaultTextTransform* obj1 = (DefaultTextTransform*)uNew(DefaultTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(266)
// ------------------------------------------------------------------------------

// public abstract class FontFace :266
// {
FontFace_type* FontFace_typeof()
{
    static uSStrong<FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FontFace);
    options.TypeSize = sizeof(FontFace_type);
    type = (FontFace_type*)uClassType::New("Uno.Content.Fonts.FontFace", options);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FontFace_type, interface0));
    return type;
}

// protected generated FontFace() :266
void FontFace__ctor__fn(FontFace* __this)
{
    __this->ctor_();
}

// public static Uno.Content.Fonts.FontFace Load(string name, byte[] data, int offset, int length) :280
void FontFace__Load_fn(uString* name, uArray* data, int* offset, int* length, FontFace** __retval)
{
    *__retval = FontFace::Load(name, data, *offset, *length);
}

// public static Uno.Content.Fonts.FontFace Load(Uno.BundleFile file) :269
void FontFace__Load1_fn(::g::Uno::BundleFile* file, FontFace** __retval)
{
    *__retval = FontFace::Load1(file);
}

// protected generated FontFace() [instance] :266
void FontFace::ctor_()
{
}

// public static Uno.Content.Fonts.FontFace Load(string name, byte[] data, int offset, int length) [static] :280
FontFace* FontFace::Load(uString* name, uArray* data, int offset, int length)
{
    return ::g::Uno::Content::Fonts::CppFontFace::New1(data, offset, length);
}

// public static Uno.Content.Fonts.FontFace Load(Uno.BundleFile file) [static] :269
FontFace* FontFace::Load1(::g::Uno::BundleFile* file)
{
    return ::g::Uno::Content::Fonts::CppFontFace::New2(file);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(320)
// ------------------------------------------------------------------------------

// public static class FontFaceHelpers :320
// {
uClassType* FontFaceHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Content.Fonts.FontFaceHelpers", options);
    ::STRINGS[0] = uString::Const(" \300\200");
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof());
    ::TYPES[10] = ::g::Uno::String_typeof();
    ::TYPES[11] = ::g::Uno::Content::Fonts::RenderedGlyph_typeof();
    ::TYPES[12] = ::g::Uno::Int2_typeof();
    ::TYPES[13] = ::g::Uno::Content::Images::Bitmap_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[14] = ::g::Uno::Float_typeof();
    ::TYPES[15] = ::g::Uno::Content::Fonts::BitmapFont_typeof();
    ::TYPES[16] = ::g::Uno::Content::Fonts::FontFace_typeof();
    ::TYPES[17] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof());
    ::TYPES[18] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof());
    ::TYPES[19] = ::g::Uno::Buffer_typeof();
    ::TYPES[20] = ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo_typeof();
    ::TYPES[21] = ::g::Uno::Float2_typeof();
    ::TYPES[22] = ::g::Uno::UShort2_typeof();
    ::TYPES[23] = ::g::Uno::UShort_typeof();
    ::TYPES[24] = ::g::Uno::Double_typeof();
    ::TYPES[25] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Content::Fonts::BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof());
    return type;
}

// public static Uno.Content.Fonts.BitmapFont RenderSpriteFont(Uno.Content.Fonts.FontFace font, float size, string charset) :322
void FontFaceHelpers__RenderSpriteFont_fn(::g::Uno::Content::Fonts::FontFace* font, float* size, uString* charset, ::g::Uno::Content::Fonts::BitmapFont** __retval)
{
    *__retval = FontFaceHelpers::RenderSpriteFont(font, *size, charset);
}

// public static Uno.Content.Fonts.BitmapFont RenderSpriteFont(Uno.Content.Fonts.FontFace font, float size, string charset) [static] :322
::g::Uno::Content::Fonts::BitmapFont* FontFaceHelpers::RenderSpriteFont(::g::Uno::Content::Fonts::FontFace* font, float size, uString* charset)
{
    ::g::Uno::Content::Fonts::BitmapFont* collection1;
    bool ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<uChar, ::g::Uno::Content::Fonts::RenderedGlyph> ret4;
    ::g::Uno::Collections::Dictionary* glyphs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>*/]);
    uString* charsetInclWs = ::g::Uno::String::op_Addition2(charset, ::STRINGS[0/*" \0"*/]);
    int maxSize = 0;

    for (int i = 0; i < uPtr(charsetInclWs)->Length(); i++)
    {
        uChar c = uPtr(charsetInclWs)->Item(i);

        if (uPtr(font)->ContainsGlyph(size, c))
        {
            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(glyphs), uCRef<uChar>(c), &ret3), ret3))
                continue;

            ::g::Uno::Content::Fonts::RenderedGlyph g = uPtr(font)->RenderGlyph(size, c);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(glyphs), uCRef<uChar>(c), uCRef(g));

            if (g.Bitmap != NULL)
            {
                maxSize = ::g::Uno::Math::Max8(maxSize, uPtr(g.Bitmap)->Size().X);
                maxSize = ::g::Uno::Math::Max8(maxSize, uPtr(g.Bitmap)->Size().Y);
            }
        }
    }

    int sideCount = (int)::g::Uno::Math::Ceil1(::g::Uno::Math::Sqrt1((float)glyphs->Count()));
    int sideSize = ::g::Uno::Math::NextPow2(sideCount * maxSize);
    ::g::Uno::Content::Images::Bitmap* dst = ::g::Uno::Content::Images::Bitmap::New1(::g::Uno::Int2__New2(sideSize, sideSize), 1, NULL);
    ::g::Uno::Graphics::Texture2D* tex = ::g::Uno::Graphics::Texture2D::New1(dst->Size(), dst->Format(), true);
    collection1 = ::g::Uno::Content::Fonts::BitmapFont::New1();
    uPtr(collection1)->Texture = tex;
    uPtr(collection1)->Ascent = ::g::Uno::Math::Round2(uPtr(font)->GetAscender(size));
    uPtr(collection1)->Descent = ::g::Uno::Math::Round2(uPtr(font)->GetDescender(size));
    uPtr(collection1)->LineHeight = ::g::Uno::Math::Round2(uPtr(font)->GetLineHeight(size));
    uPtr(collection1)->PixelSize = size;
    uPtr(collection1)->PixelSpread = 0.0f;
    uPtr(collection1)->FontFace = font;
    uPtr(collection1)->FamilyName = uPtr(font)->FamilyName();
    uPtr(collection1)->StyleName = uPtr(font)->StyleName();
    ::g::Uno::Content::Fonts::BitmapFont* result = collection1;
    int gi = 0;

    for (::g::Uno::Collections::Dictionary__Enumerator<uChar, ::g::Uno::Content::Fonts::RenderedGlyph> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(glyphs, &ret4), ret4); enum2.MoveNext(::TYPES[17/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uChar, ::g::Uno::Content::Fonts::RenderedGlyph> e = enum2.Current(::TYPES[17/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]);
        int dstX = (gi % sideCount) * (sideSize / sideCount);
        int dstY = ((gi / sideCount) % sideCount) * (sideSize / sideCount);
        gi++;
        ::g::Uno::Content::Images::Bitmap* src = e.Value(::TYPES[18/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Bitmap;
        ::g::Uno::Float2 srcSize = ::g::Uno::Float2__New2(0.0f, 0.0f);

        if (src != NULL)
        {
            srcSize = ::g::Uno::Float2__op_Implicit1(uPtr(src)->Size());
            int bpp = ::g::Uno::Graphics::FormatHelpers::GetStrideInBytes(src->Format());

            for (int srcY = 0; srcY < src->Size().Y; srcY++)

                for (int srcX = 0; srcX < src->Size().X; srcX++)
                    uPtr(uPtr(dst)->Buffer())->Item((((dstY + srcY) * uPtr(dst)->Size().X) + dstX) + srcX, uPtr(src->Buffer())->Item(((srcY * src->Size().X) + srcX) * bpp));
        }

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo g1;
        g1.Advance = ::g::Uno::Math::Round2(e.Value(::TYPES[18/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Advance.X);
        g1.Bearing = ::g::Uno::Math::Round4(e.Value(::TYPES[18/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Bearing);
        g1.Size = srcSize;
        g1.UpperLeft.X = (uint16_t)((65535.0 * (double)dstX) / (double)uPtr(dst)->Size().X);
        g1.UpperLeft.Y = (uint16_t)((65535.0 * (double)dstY) / (double)dst->Size().Y);
        g1.LowerRight.X = (uint16_t)((65535.0 * (double)((float)dstX + srcSize.X)) / (double)dst->Size().X);
        g1.LowerRight.Y = (uint16_t)((65535.0 * (double)((float)dstY + srcSize.Y)) / (double)dst->Size().Y);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(uPtr(result)->Glyphs), uCRef<uChar>(e.Key(::TYPES[18/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/])), uCRef(g1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(result->Advances), uCRef<uChar>(e.Key(::TYPES[18/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/])), uCRef(g1.Advance));
    }

    tex->Update1(dst->Buffer());

    if (tex->SupportsMipmap())
        tex->GenerateMipmap();

    for (int i1 = 0; i1 < uPtr(charsetInclWs)->Length(); i1++)
    {
        uChar left = uPtr(charsetInclWs)->Item(i1);

        for (int j = 0; j < charsetInclWs->Length(); j++)
        {
            uChar right = uPtr(charsetInclWs)->Item(j);
            ::g::Uno::Float2 kerning;

            if (uPtr(font)->TryGetKerning(size, left, right, &kerning) && (::g::Uno::Math::Abs1(kerning.X) > 0.0f))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(result)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(left, right)), uCRef(kerning.X));
        }
    }

    return result;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(10)
// -----------------------------------------------------------------------------

// public struct BitmapFont.GlyphInfo :10
// {
uStructType* BitmapFont__GlyphInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ValueSize = sizeof(BitmapFont__GlyphInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.BitmapFont.GlyphInfo", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, Bearing), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, Size), 0,
        ::g::Uno::UShort2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, UpperLeft), 0,
        ::g::Uno::UShort2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, LowerRight), 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(452)
// ------------------------------------------------------------------------------

// public struct RenderedGlyph :452
// {
uStructType* RenderedGlyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(RenderedGlyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.RenderedGlyph", options);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::RenderedGlyph, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::RenderedGlyph, Bearing), 0,
        ::g::Uno::Content::Images::Bitmap_typeof(), offsetof(::g::Uno::Content::Fonts::RenderedGlyph, Bitmap), 0);
    return type;
}

// public RenderedGlyph(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) :458
void RenderedGlyph__ctor__fn(RenderedGlyph* __this, ::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Content::Images::Bitmap* bitmap)
{
    __this->ctor_(*advance, *bearing, bitmap);
}

// public RenderedGlyph New(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) :458
void RenderedGlyph__New1_fn(::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Content::Images::Bitmap* bitmap, RenderedGlyph* __retval)
{
    *__retval = RenderedGlyph__New1(*advance, *bearing, bitmap);
}

// public RenderedGlyph(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) [instance] :458
void RenderedGlyph::ctor_(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Content::Images::Bitmap* bitmap)
{
    Advance = advance;
    Bearing = bearing;
    Bitmap = bitmap;
}

// public RenderedGlyph New(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) [static] :458
RenderedGlyph RenderedGlyph__New1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Content::Images::Bitmap* bitmap)
{
    RenderedGlyph obj1;
    obj1.ctor_(advance, bearing, bitmap);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(506)
// ------------------------------------------------------------------------------

// public sealed class SdfFontShader :506
// {
::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SdfFontShader);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextShader_type);
    type = (::g::Uno::Content::Fonts::TextShader_type*)uClassType::New("Uno.Content.Fonts.SdfFontShader", options);
    type->SetBase(::g::Uno::Content::Fonts::TextShader_typeof());
    type->fp_Draw = (void(*)(::g::Uno::Content::Fonts::TextShader*, ::g::Uno::Content::Fonts::TextShaderData*))SdfFontShader__Draw_fn;
    ::TYPES[26] = ::g::Uno::Content::Fonts::TextShaderData_typeof();
    ::TYPES[27] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[28] = ::g::Uno::Graphics::VertexAttributeInfo_typeof();
    ::TYPES[29] = ::g::Uno::Graphics::SamplerState_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Uno::Content::Fonts::SdfFontShader, _draw_526147dd), 0);
    return type;
}

// public override sealed void Draw(Uno.Content.Fonts.TextShaderData data) :508
void SdfFontShader__Draw_fn(SdfFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data)
{
    float FontSmoothing_526147dd_12_0_1 = 0.25f / ::g::Uno::Math::Max1(uPtr(data)->FontSpread * uPtr(data)->FontScale, 0.5f);
    __this->_draw_526147dd.BlendEnabled(true);
    __this->_draw_526147dd.DepthTestEnabled(false);
    __this->_draw_526147dd.CullFace(uPtr(data)->DataCullFace);
    __this->_draw_526147dd.BlendSrcRgb(2);
    __this->_draw_526147dd.BlendDstRgb(3);
    __this->_draw_526147dd.Use();
    __this->_draw_526147dd.Attrib1(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
    __this->_draw_526147dd.Attrib1(1, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
    __this->_draw_526147dd.Attrib1(2, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
    __this->_draw_526147dd.Uniform12(3, data->ClipSpaceMatrix);
    __this->_draw_526147dd.Uniform(4, 0.5f - FontSmoothing_526147dd_12_0_1);
    __this->_draw_526147dd.Uniform(5, 0.5f + FontSmoothing_526147dd_12_0_1);
    __this->_draw_526147dd.Sampler3(6, data->FontTexture, ::g::Uno::Graphics::SamplerState__TrilinearClamp());
    __this->_draw_526147dd.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(553)
// ------------------------------------------------------------------------------

// public sealed class SpriteFontShader :553
// {
::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SpriteFontShader);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextShader_type);
    type = (::g::Uno::Content::Fonts::TextShader_type*)uClassType::New("Uno.Content.Fonts.SpriteFontShader", options);
    type->SetBase(::g::Uno::Content::Fonts::TextShader_typeof());
    type->fp_ctor_ = (void*)SpriteFontShader__New1_fn;
    type->fp_Draw = (void(*)(::g::Uno::Content::Fonts::TextShader*, ::g::Uno::Content::Fonts::TextShaderData*))SpriteFontShader__Draw_fn;
    ::TYPES[27] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[26] = ::g::Uno::Content::Fonts::TextShaderData_typeof();
    ::TYPES[28] = ::g::Uno::Graphics::VertexAttributeInfo_typeof();
    ::TYPES[29] = ::g::Uno::Graphics::SamplerState_typeof();
    ::TYPES[30] = ::g::UnoCore_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Uno::Content::Fonts::SpriteFontShader, _draw_8a94ffef), 0);
    return type;
}

// public generated SpriteFontShader() :553
void SpriteFontShader__ctor_1_fn(SpriteFontShader* __this)
{
    __this->ctor_1();
}

// public override sealed void Draw(Uno.Content.Fonts.TextShaderData data) :555
void SpriteFontShader__Draw_fn(SpriteFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data)
{
    __this->_draw_8a94ffef.BlendEnabled(true);
    __this->_draw_8a94ffef.DepthTestEnabled(false);
    __this->_draw_8a94ffef.CullFace(uPtr(data)->DataCullFace);
    __this->_draw_8a94ffef.BlendSrcRgb(2);
    __this->_draw_8a94ffef.BlendDstRgb(3);
    __this->_draw_8a94ffef.BlendDstAlpha(3);
    __this->_draw_8a94ffef.Use();
    __this->_draw_8a94ffef.Attrib1(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
    __this->_draw_8a94ffef.Attrib1(1, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
    __this->_draw_8a94ffef.Attrib1(2, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
    __this->_draw_8a94ffef.Uniform12(3, data->ClipSpaceMatrix);
    __this->_draw_8a94ffef.Sampler3(4, data->FontTexture, ::g::Uno::Graphics::SamplerState__TrilinearClamp());
    __this->_draw_8a94ffef.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
}

// private generated void init_DrawCalls() :553
void SpriteFontShader__init_DrawCalls_fn(SpriteFontShader* __this)
{
    __this->init_DrawCalls();
}

// public generated SpriteFontShader New() :553
void SpriteFontShader__New1_fn(SpriteFontShader** __retval)
{
    *__retval = SpriteFontShader::New1();
}

// public generated SpriteFontShader() [instance] :553
void SpriteFontShader::ctor_1()
{
    ctor_();
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :553
void SpriteFontShader::init_DrawCalls()
{
    _draw_8a94ffef = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::UnoCore_bundle::SpriteFontShaderf6f3aa43());
}

// public generated SpriteFontShader New() [static] :553
SpriteFontShader* SpriteFontShader::New1()
{
    SpriteFontShader* obj1 = (SpriteFontShader*)uNew(SpriteFontShader_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(572)
// ------------------------------------------------------------------------------

// public sealed class TextRenderer :572
// {
uType* TextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.TextRenderer", options);
    ::STRINGS[1] = uString::Const("font");
    ::TYPES[23] = ::g::Uno::UShort_typeof();
    ::TYPES[31] = ::g::Uno::Content::Fonts::TextTransform_typeof();
    ::TYPES[26] = ::g::Uno::Content::Fonts::TextShaderData_typeof();
    ::TYPES[15] = ::g::Uno::Content::Fonts::BitmapFont_typeof();
    ::TYPES[10] = ::g::Uno::String_typeof();
    ::TYPES[20] = ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo_typeof();
    ::TYPES[21] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Uno::Content::Fonts::RenderedGlyph_typeof();
    ::TYPES[22] = ::g::Uno::UShort2_typeof();
    ::TYPES[32] = ::g::Uno::Char_typeof();
    ::TYPES[14] = ::g::Uno::Float_typeof();
    ::TYPES[33] = ::g::Uno::Byte4_typeof();
    ::TYPES[34] = ::g::Uno::Byte_typeof();
    ::TYPES[35] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _buffer), 0,
        ::g::Uno::Byte4_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _color), 0,
        ::g::Uno::Content::Fonts::TextShaderData_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _data), 0,
        ::g::Uno::Content::Fonts::BitmapFont_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _font), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _ibo), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _maxCharCount), 0,
        ::g::Uno::Content::Fonts::TextShader_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _shader), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _tracking), 0,
        ::g::Uno::Content::Fonts::TextTransform_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _transform), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _vbo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _HasBegun), 0);
    return type;
}

// public TextRenderer(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) :591
void TextRenderer__ctor__fn(TextRenderer* __this, int* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    __this->ctor_(*maxCharCount, shader, transform);
}

// public void Begin(Uno.Content.Fonts.BitmapFont font) :648
void TextRenderer__Begin_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont* font)
{
    __this->Begin(font);
}

// public float4 get_Color() :638
void TextRenderer__get_Color_fn(TextRenderer* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :639
void TextRenderer__set_Color_fn(TextRenderer* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public void End() :827
void TextRenderer__End_fn(TextRenderer* __this)
{
    __this->End();
}

// public generated bool get_HasBegun() :574
void TextRenderer__get_HasBegun_fn(TextRenderer* __this, bool* __retval)
{
    *__retval = __this->HasBegun();
}

// private generated void set_HasBegun(bool value) :574
void TextRenderer__set_HasBegun_fn(TextRenderer* __this, bool* value)
{
    __this->HasBegun(*value);
}

// public float2 MeasureString(string text) :659
void TextRenderer__MeasureString_fn(TextRenderer* __this, uString* text, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(text);
}

// public float2 MeasureString(string text, int startIndex, int length) :664
void TextRenderer__MeasureString1_fn(TextRenderer* __this, uString* text, int* startIndex, int* length, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString1(text, *startIndex, *length);
}

// public TextRenderer New(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) :591
void TextRenderer__New1_fn(int* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(*maxCharCount, shader, transform);
}

// public Uno.Content.Fonts.TextTransform get_Transform() :620
void TextRenderer__get_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Uno.Content.Fonts.TextTransform value) :621
void TextRenderer__set_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform* value)
{
    __this->Transform(value);
}

// private void WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo ci, float2 caret) :713
void TextRenderer__WriteGlyph_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo* ci, ::g::Uno::Float2* caret)
{
    __this->WriteGlyph(*ci, *caret);
}

// public void WriteString(float2 caret, string text) :708
void TextRenderer__WriteString_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text)
{
    __this->WriteString(*caret, text);
}

// public void WriteString(float2 caret, string text, int startIndex, int length) :755
void TextRenderer__WriteString1_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text, int* startIndex, int* length)
{
    __this->WriteString1(*caret, text, *startIndex, *length);
}

// public TextRenderer(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) [instance] :591
void TextRenderer::ctor_(int maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    _color = ::g::Uno::Byte4__New2(255, 255, 255, 255);
    _maxCharCount = maxCharCount;
    ::g::Uno::Buffer* indexBuffer = ::g::Uno::Buffer::New3((maxCharCount * 6) * 2);

    for (int i = 0; i < maxCharCount; i++)
    {
        uPtr(indexBuffer)->Set23(i * 12, (uint16_t)(i * 4), true);
        indexBuffer->Set23((i * 12) + 2, (uint16_t)((i * 4) + 1), true);
        indexBuffer->Set23((i * 12) + 4, (uint16_t)((i * 4) + 2), true);
        indexBuffer->Set23((i * 12) + 6, (uint16_t)(i * 4), true);
        indexBuffer->Set23((i * 12) + 8, (uint16_t)((i * 4) + 2), true);
        indexBuffer->Set23((i * 12) + 10, (uint16_t)((i * 4) + 3), true);
    }

    _ibo = ::g::Uno::Graphics::IndexBuffer::New2(indexBuffer, 0);
    _vbo = ::g::Uno::Graphics::VertexBuffer::New3(2);
    _buffer = ::g::Uno::Buffer::New3((maxCharCount * 4) * 16);
    _data = ::g::Uno::Content::Fonts::TextShaderData::New1(_ibo, _vbo);
    _shader = shader;
    _transform = ((transform != NULL) ? transform : (::g::Uno::Content::Fonts::DefaultTextTransform*)::g::Uno::Content::Fonts::DefaultTextTransform::New1());
}

// public void Begin(Uno.Content.Fonts.BitmapFont font) [instance] :648
void TextRenderer::Begin(::g::Uno::Content::Fonts::BitmapFont* font)
{
    if (font == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"font"*/]));

    _font = font;
    uPtr(_data)->CharCount = 0;
    HasBegun(true);
}

// public float4 get_Color() [instance] :638
::g::Uno::Float4 TextRenderer::Color()
{
    return ::g::Uno::Float4__New2((float)_color.X / 255.0f, (float)_color.Y / 255.0f, (float)_color.Z / 255.0f, (float)_color.W / 255.0f);
}

// public void set_Color(float4 value) [instance] :639
void TextRenderer::Color(::g::Uno::Float4 value)
{
    _color = ::g::Uno::Byte4__New2((uint8_t)(::g::Uno::Math::Saturate1(value.X) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Y) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Z) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.W) * 255.0f));
}

// public void End() [instance] :827
void TextRenderer::End()
{
    if (uPtr(_data)->CharCount > 0)
    {
        uPtr(_vbo)->Update(_buffer);
        uPtr(_data)->FontTexture = uPtr(_font)->Texture;
        uPtr(_data)->FontSpread = uPtr(_font)->PixelSpread;
        uPtr(_data)->ClipSpaceMatrix = uPtr(_transform)->ResolveClipSpaceMatrix();
        uPtr(_data)->DataCullFace = uPtr(_transform)->CullFace();
        uPtr(_shader)->Draw(_data);
        uPtr(_data)->CharCount = 0;
    }

    _font = NULL;
    HasBegun(false);
}

// public generated bool get_HasBegun() [instance] :574
bool TextRenderer::HasBegun()
{
    return _HasBegun;
}

// private generated void set_HasBegun(bool value) [instance] :574
void TextRenderer::HasBegun(bool value)
{
    _HasBegun = value;
}

// public float2 MeasureString(string text) [instance] :659
::g::Uno::Float2 TextRenderer::MeasureString(uString* text)
{
    return MeasureString1(text, 0, uPtr(text)->Length());
}

// public float2 MeasureString(string text, int startIndex, int length) [instance] :664
::g::Uno::Float2 TextRenderer::MeasureString1(uString* text, int startIndex, int length)
{
    bool ret2;
    bool ret3;

    if ((_font == NULL) || ::g::Uno::String::op_Equality(text, NULL))
        return ::g::Uno::Float2__New1(0.0f);

    float caret = 0.0f;
    uChar last = 0;

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        uChar c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<uChar>(c), &ci, &ret2), ret2))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning, &ret3), ret3))
                caret = caret + (kerning * uPtr(_data)->FontScale);

            caret = caret + ((ci.Advance * uPtr(_data)->FontScale) + _tracking);
        }
        else if ((uPtr(_font)->FontFace != NULL) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Content::Fonts::RenderedGlyph rg = uPtr(uPtr(_font)->FontFace)->RenderGlyph(uPtr(_font)->PixelSize, c);
            ::g::Uno::Float2 kerning1;

            if (uPtr(uPtr(_font)->FontFace)->TryGetKerning(uPtr(_font)->PixelSize, last, c, &kerning1))
                caret = caret + (kerning1.X * uPtr(_data)->FontScale);

            caret = caret + ((::g::Uno::Math::Round2(rg.Advance.X) * uPtr(_data)->FontScale) + _tracking);
        }

        last = c;
    }

    return ::g::Uno::Float2__New2(caret, uPtr(_font)->Ascent + uPtr(_font)->Descent);
}

// public Uno.Content.Fonts.TextTransform get_Transform() [instance] :620
::g::Uno::Content::Fonts::TextTransform* TextRenderer::Transform()
{
    return _transform;
}

// public void set_Transform(Uno.Content.Fonts.TextTransform value) [instance] :621
void TextRenderer::Transform(::g::Uno::Content::Fonts::TextTransform* value)
{
    _transform = value;
}

// private void WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo ci, float2 caret) [instance] :713
void TextRenderer::WriteGlyph(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci, ::g::Uno::Float2 caret)
{
    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
    {
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(caret, ::g::Uno::Float2__op_Multiply1(ci.Bearing, uPtr(_data)->FontScale));
        int o = uPtr(_data)->CharCount * 64;
        ::g::Uno::Float2 s = ::g::Uno::Float2__op_Multiply1(ci.Size, uPtr(_data)->FontScale);
        uPtr(_buffer)->Set4(o, p.X, true);
        uPtr(_buffer)->Set4(o + 4, p.Y + s.Y, true);
        uPtr(_buffer)->Set23(o + 8, ci.UpperLeft.X, true);
        uPtr(_buffer)->Set23(o + 10, ci.LowerRight.Y, true);
        uPtr(_buffer)->Set2(o + 12, _color);
        uPtr(_buffer)->Set4(o + 16, p.X + s.X, true);
        uPtr(_buffer)->Set4(o + 20, p.Y + s.Y, true);
        uPtr(_buffer)->Set23(o + 24, ci.LowerRight.X, true);
        uPtr(_buffer)->Set23(o + 26, ci.LowerRight.Y, true);
        uPtr(_buffer)->Set2(o + 28, _color);
        uPtr(_buffer)->Set4(o + 32, p.X + s.X, true);
        uPtr(_buffer)->Set4(o + 36, p.Y, true);
        uPtr(_buffer)->Set23(o + 40, ci.LowerRight.X, true);
        uPtr(_buffer)->Set23(o + 42, ci.UpperLeft.Y, true);
        uPtr(_buffer)->Set2(o + 44, _color);
        uPtr(_buffer)->Set4(o + 48, p.X, true);
        uPtr(_buffer)->Set4(o + 52, p.Y, true);
        uPtr(_buffer)->Set23(o + 56, ci.UpperLeft.X, true);
        uPtr(_buffer)->Set23(o + 58, ci.UpperLeft.Y, true);
        uPtr(_buffer)->Set2(o + 60, _color);
        uPtr(_data)->CharCount++;
    }
}

// public void WriteString(float2 caret, string text) [instance] :708
void TextRenderer::WriteString(::g::Uno::Float2 caret, uString* text)
{
    WriteString1(caret, text, 0, uPtr(text)->Length());
}

// public void WriteString(float2 caret, string text, int startIndex, int length) [instance] :755
void TextRenderer::WriteString1(::g::Uno::Float2 caret, uString* text, int startIndex, int length)
{
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    uChar last = 0;

    if (uPtr(_font)->PixelSpread > 0.0f)
        caret = ::g::Uno::Float2__op_Subtraction2(caret, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New1(uPtr(_font)->PixelSpread * uPtr(_data)->FontScale), ::g::Uno::Float2__New2(1.0f, 2.0f)));

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        uChar c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<uChar>(c), &ci, &ret4), ret4))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning, &ret5), ret5))
                caret.X = (caret.X + (kerning * uPtr(_data)->FontScale));

            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
            {
                WriteGlyph(ci, caret);

                if (uPtr(_data)->CharCount == _maxCharCount)
                {
                    ::g::Uno::Content::Fonts::BitmapFont* temp = _font;
                    End();
                    Begin(temp);
                }
            }

            caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
        }
        else if ((uPtr(_font)->FontFace != NULL) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Content::Fonts::BitmapFont* oldFont = _font;
            ::g::Uno::Content::Fonts::BitmapFont* tempFont = ::g::Uno::Content::Fonts::FontFaceHelpers::RenderSpriteFont(uPtr(oldFont)->FontFace, uPtr(oldFont)->PixelSize, ::g::Uno::Char::ToString(c, ::TYPES[32/*char*/]));

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Glyphs), uCRef<uChar>(c), &ci, &ret6), ret6))
            {
                float kerning1;

                if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning1, &ret7), ret7))
                    caret.X = (caret.X + (kerning1 * uPtr(_data)->FontScale));

                if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
                {
                    End();
                    Begin(tempFont);
                    WriteGlyph(ci, caret);
                    End();
                    Begin(oldFont);
                }

                caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
            }
        }

        last = c;
    }
}

// public TextRenderer New(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) [static] :591
TextRenderer* TextRenderer::New1(int maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(maxCharCount, shader, transform);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(906)
// ------------------------------------------------------------------------------

// public abstract class TextShader :906
// {
TextShader_type* TextShader_typeof()
{
    static uSStrong<TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextShader);
    options.TypeSize = sizeof(TextShader_type);
    type = (TextShader_type*)uClassType::New("Uno.Content.Fonts.TextShader", options);
    return type;
}

// protected generated TextShader() :906
void TextShader__ctor__fn(TextShader* __this)
{
    __this->ctor_();
}

// protected generated TextShader() [instance] :906
void TextShader::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(862)
// ------------------------------------------------------------------------------

// public sealed class TextShaderData :862
// {
uType* TextShaderData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TextShaderData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.TextShaderData", options);
    ::TYPES[5] = ::g::Uno::Float4x4_typeof();
    ::TYPES[28] = ::g::Uno::Graphics::VertexAttributeInfo_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, CharCount), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, ClipSpaceMatrix), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, ColorInfo), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, DataCullFace), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, FontScale), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, FontSpread), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, FontTexture), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, IndexBuffer), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, IndexType), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, PositionInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, TexCoordInfo), 0);
    return type;
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) :880
void TextShaderData__ctor__fn(TextShaderData* __this, ::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    __this->ctor_(ibo, vbo);
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) :880
void TextShaderData__New1_fn(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo, TextShaderData** __retval)
{
    *__retval = TextShaderData::New1(ibo, vbo);
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [instance] :880
void TextShaderData::ctor_(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    FontScale = 1.0f;
    ClipSpaceMatrix = ::g::Uno::Float4x4__Identity();
    DataCullFace = 0;
    IndexType = 2;
    IndexBuffer = ibo;
    PositionInfo.Buffer = vbo;
    PositionInfo.BufferOffset = 0;
    PositionInfo.BufferStride = 16;
    PositionInfo.Type = 2;
    TexCoordInfo.Buffer = vbo;
    TexCoordInfo.BufferOffset = 8;
    TexCoordInfo.BufferStride = 16;
    TexCoordInfo.Type = 14;
    ColorInfo.Buffer = vbo;
    ColorInfo.BufferOffset = 12;
    ColorInfo.BufferStride = 16;
    ColorInfo.Type = 20;
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [static] :880
TextShaderData* TextShaderData::New1(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    TextShaderData* obj1 = (TextShaderData*)uNew(TextShaderData_typeof());
    obj1->ctor_(ibo, vbo);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Content\Fonts\$.uno(937)
// ------------------------------------------------------------------------------

// public abstract class TextTransform :937
// {
TextTransform_type* TextTransform_typeof()
{
    static uSStrong<TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextTransform);
    options.TypeSize = sizeof(TextTransform_type);
    type = (TextTransform_type*)uClassType::New("Uno.Content.Fonts.TextTransform", options);
    type->fp_get_CullFace = TextTransform__get_CullFace_fn;
    return type;
}

// protected generated TextTransform() :937
void TextTransform__ctor__fn(TextTransform* __this)
{
    __this->ctor_();
}

// public virtual Uno.Graphics.PolygonFace get_CullFace() :947
void TextTransform__get_CullFace_fn(TextTransform* __this, int* __retval)
{
    return *__retval = 0, void();
}

// protected generated TextTransform() [instance] :937
void TextTransform::ctor_()
{
}
// }

}}}} // ::g::Uno::Content::Fonts

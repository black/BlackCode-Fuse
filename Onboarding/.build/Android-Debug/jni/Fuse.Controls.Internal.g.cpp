// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Internal.DefaultTextRenderer.FontKey.h>
#include <Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <Fuse.Controls.Internal.ProperTextTransform.h>
#include <Fuse.Controls.Internal.WordWrapInfo.h>
#include <Fuse.Controls.Internal.WordWrapper.h>
#include <Fuse.Controls.Internal.WordWrapperWord.h>
#include <Fuse.Controls.Internal.WrappedLine.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.IViewport.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Fonts.BitmapFont.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Content.Fonts.FontFaceHelpers.h>
#include <Uno.Content.Fonts.SpriteFontShader.h>
#include <Uno.Content.Fonts.TextRenderer.h>
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(11)
// -------------------------------------------------------------------

// internal sealed class DefaultTextRenderer :11
// {
uType* DefaultTextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(DefaultTextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Internal.DefaultTextRenderer", options);
    ::STRINGS[0] = uString::Const("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\303\206\303\230\303\205[\\]^_`abcdefghijklmnopqrstuvwxyz\303\246\303\270\303\245\302\250{|}~\302\260\342\200\242");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(DefaultTextRenderer__FontKey_typeof(), ::g::Uno::Content::Fonts::BitmapFont_typeof());
    ::TYPES[1] = ::g::Uno::Content::Fonts::TextRenderer_typeof();
    ::TYPES[2] = ::g::Uno::Content::Fonts::BitmapFont_typeof();
    ::TYPES[3] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[4] = ::g::Uno::Content::Fonts::TextTransform_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::Internal::ProperTextTransform_typeof();
    ::TYPES[6] = ::g::Uno::Content::Fonts::TextShader_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer, _absoluteZoom), 0,
        ::g::Uno::Content::Fonts::BitmapFont_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer, _bitmapFont), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer, _fontSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer, _transform), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer, _FontFace), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(DefaultTextRenderer__FontKey_typeof(), ::g::Uno::Content::Fonts::BitmapFont_typeof()), (uintptr_t)&::g::Fuse::Controls::Internal::DefaultTextRenderer::_bitmapFonts_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Controls::Internal::DefaultTextRenderer::_maxCharCount_, uFieldFlagsStatic,
        ::g::Uno::Content::Fonts::TextRenderer_typeof(), (uintptr_t)&::g::Fuse::Controls::Internal::DefaultTextRenderer::_renderer_, uFieldFlagsStatic);
    return type;
}

// public DefaultTextRenderer(Uno.Content.Fonts.FontFace fontFace) :60
void DefaultTextRenderer__ctor__fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* fontFace)
{
    __this->ctor_(fontFace);
}

// public void BeginRendering(float fontSize, float absoluteZoom, float4x4 transform, float2 bounds, float4 textColor, int maxTextLength) :115
void DefaultTextRenderer__BeginRendering_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* bounds, ::g::Uno::Float4* textColor, int* maxTextLength)
{
    __this->BeginRendering(*fontSize, *absoluteZoom, *transform, *bounds, *textColor, *maxTextLength);
}

// public void DrawLine(Fuse.DrawContext dc, float x, float y, string line) :136
void DefaultTextRenderer__DrawLine_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc, float* x, float* y, uString* line)
{
    __this->DrawLine(dc, *x, *y, line);
}

// public void EndRendering(Fuse.DrawContext dc) :130
void DefaultTextRenderer__EndRendering_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->EndRendering(dc);
}

// private static void EnsureRendererCapacity(int maxCharCount) :173
void DefaultTextRenderer__EnsureRendererCapacity_fn(int* maxCharCount)
{
    DefaultTextRenderer::EnsureRendererCapacity(*maxCharCount);
}

// public generated Uno.Content.Fonts.FontFace get_FontFace() :72
void DefaultTextRenderer__get_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->FontFace();
}

// public generated void set_FontFace(Uno.Content.Fonts.FontFace value) :72
void DefaultTextRenderer__set_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* value)
{
    __this->FontFace(value);
}

// private Uno.Content.Fonts.BitmapFont GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) :158
void DefaultTextRenderer__GetBitmapFont_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, bool* includeZoom, ::g::Uno::Content::Fonts::BitmapFont** __retval)
{
    *__retval = __this->GetBitmapFont(*fontSize, *absoluteZoom, *includeZoom);
}

// public float GetLineHeight(float fontSize) :74
void DefaultTextRenderer__GetLineHeight_fn(DefaultTextRenderer* __this, float* fontSize, float* __retval)
{
    *__retval = __this->GetLineHeight(*fontSize);
}

// public float2 MeasureString(float fontSize, float absoluteZoom, string s) :88
void DefaultTextRenderer__MeasureString_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(*fontSize, *absoluteZoom, s);
}

// public float2 MeasureStringVirtual(float fontSize, float absoluteZoom, string s) :105
void DefaultTextRenderer__MeasureStringVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureStringVirtual(*fontSize, *absoluteZoom, s);
}

// public DefaultTextRenderer New(Uno.Content.Fonts.FontFace fontFace) :60
void DefaultTextRenderer__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, DefaultTextRenderer** __retval)
{
    *__retval = DefaultTextRenderer::New1(fontFace);
}

// private static Uno.Content.Fonts.TextRenderer get_renderer() :49
void DefaultTextRenderer__get_renderer_fn(::g::Uno::Content::Fonts::TextRenderer** __retval)
{
    *__retval = DefaultTextRenderer::renderer();
}

uSStrong< ::g::Uno::Collections::Dictionary*> DefaultTextRenderer::_bitmapFonts_;
int DefaultTextRenderer::_maxCharCount_;
uSStrong< ::g::Uno::Content::Fonts::TextRenderer*> DefaultTextRenderer::_renderer_;

// public DefaultTextRenderer(Uno.Content.Fonts.FontFace fontFace) [instance] :60
void DefaultTextRenderer::ctor_(::g::Uno::Content::Fonts::FontFace* fontFace)
{
    if (DefaultTextRenderer::_bitmapFonts() == NULL)
    {
        DefaultTextRenderer::_maxCharCount() = 100;
        DefaultTextRenderer::_bitmapFonts() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Fuse.Controls.Internal.DefaultTextRenderer.FontKey, Uno.Content.Fonts.BitmapFont>*/]));
    }

    FontFace(fontFace);
}

// public void BeginRendering(float fontSize, float absoluteZoom, float4x4 transform, float2 bounds, float4 textColor, int maxTextLength) [instance] :115
void DefaultTextRenderer::BeginRendering(float fontSize, float absoluteZoom, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 bounds, ::g::Uno::Float4 textColor, int maxTextLength)
{
    _fontSize = fontSize;
    _absoluteZoom = absoluteZoom;
    _transform = transform;
    _bitmapFont = GetBitmapFont(_fontSize, _absoluteZoom, true);
    DefaultTextRenderer::EnsureRendererCapacity(maxTextLength);
    uPtr(DefaultTextRenderer::renderer())->Begin(_bitmapFont);
    uPtr(DefaultTextRenderer::renderer())->Color(textColor);
}

// public void DrawLine(Fuse.DrawContext dc, float x, float y, string line) [instance] :136
void DefaultTextRenderer::DrawLine(::g::Fuse::DrawContext* dc, float x, float y, uString* line)
{
    float lineHeight = uPtr(_bitmapFont)->LineHeight;
    float lineOffsetY = lineHeight - uPtr(_bitmapFont)->Descent;
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(x, y + lineOffsetY);

    if (uPtr(dc)->ViewportPointDensity() != 1.0f)
    {
        ::g::Uno::Float4x4 scale = ::g::Uno::Matrix::Scaling(1.0f / uPtr(dc)->ViewportPointDensity());
        uPtr(uPtr(DefaultTextRenderer::renderer())->Transform())->Matrix(::g::Uno::Matrix::Mul8(scale, _transform));
    }
    else
        uPtr(uPtr(DefaultTextRenderer::renderer())->Transform())->Matrix(_transform);

    uPtr(uAs< ::g::Fuse::Controls::Internal::ProperTextTransform*>(uPtr(DefaultTextRenderer::renderer())->Transform(), ::TYPES[5/*Fuse.Controls.Internal.ProperTextTransform*/]))->DrawContext = dc;
    uPtr(DefaultTextRenderer::renderer())->WriteString(p, line);
}

// public void EndRendering(Fuse.DrawContext dc) [instance] :130
void DefaultTextRenderer::EndRendering(::g::Fuse::DrawContext* dc)
{
    uPtr(DefaultTextRenderer::renderer())->End();
}

// public generated Uno.Content.Fonts.FontFace get_FontFace() [instance] :72
::g::Uno::Content::Fonts::FontFace* DefaultTextRenderer::FontFace()
{
    return _FontFace;
}

// public generated void set_FontFace(Uno.Content.Fonts.FontFace value) [instance] :72
void DefaultTextRenderer::FontFace(::g::Uno::Content::Fonts::FontFace* value)
{
    _FontFace = value;
}

// private Uno.Content.Fonts.BitmapFont GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) [instance] :158
::g::Uno::Content::Fonts::BitmapFont* DefaultTextRenderer::GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom)
{
    bool ret2;
    int size = (int)::g::Uno::Math::Floor1(::g::Uno::Math::Clamp1(fontSize * (includeZoom ? absoluteZoom : 1.0f), 4.0f, 400.0f));
    DefaultTextRenderer__FontKey* key = DefaultTextRenderer__FontKey::New1(FontFace(), size);
    ::g::Uno::Content::Fonts::BitmapFont* bmpfont;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(DefaultTextRenderer::_bitmapFonts()), key, (void**)(&bmpfont), &ret2), ret2))
    {
        bmpfont = ::g::Uno::Content::Fonts::FontFaceHelpers::RenderSpriteFont(FontFace(), (float)size, ::STRINGS[0/*"!\"#$%&'()*...*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(DefaultTextRenderer::_bitmapFonts()), key, bmpfont);
    }

    return bmpfont;
}

// public float GetLineHeight(float fontSize) [instance] :74
float DefaultTextRenderer::GetLineHeight(float fontSize)
{
    if (FontFace() == NULL)
        return 0.0f;

    float size = ::g::Uno::Math::Clamp1(fontSize, 4.0f, 400.0f);
    return uPtr(FontFace())->GetLineHeight(size);
}

// public float2 MeasureString(float fontSize, float absoluteZoom, string s) [instance] :88
::g::Uno::Float2 DefaultTextRenderer::MeasureString(float fontSize, float absoluteZoom, uString* s)
{
    if (::g::Uno::String::op_Equality(s, NULL))
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Content::Fonts::BitmapFont* bitmapFont = GetBitmapFont(fontSize, absoluteZoom, true);
    bool hasBegun = uPtr(DefaultTextRenderer::renderer())->HasBegun();

    if (!hasBegun)
        uPtr(DefaultTextRenderer::renderer())->Begin(bitmapFont);

    ::g::Uno::Float2 ret = uPtr(DefaultTextRenderer::renderer())->MeasureString(s);

    if (!hasBegun)
        uPtr(DefaultTextRenderer::renderer())->End();

    return ret;
}

// public float2 MeasureStringVirtual(float fontSize, float absoluteZoom, string s) [instance] :105
::g::Uno::Float2 DefaultTextRenderer::MeasureStringVirtual(float fontSize, float absoluteZoom, uString* s)
{
    return ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Division1(MeasureString(fontSize, absoluteZoom, s), absoluteZoom));
}

// private static void EnsureRendererCapacity(int maxCharCount) [static] :173
void DefaultTextRenderer::EnsureRendererCapacity(int maxCharCount)
{
    if (maxCharCount <= DefaultTextRenderer::_maxCharCount())
        return;

    DefaultTextRenderer::_maxCharCount() = ::g::Uno::Math::Max8(DefaultTextRenderer::_maxCharCount() * 2, maxCharCount);
    DefaultTextRenderer::_renderer() = ::g::Uno::Content::Fonts::TextRenderer::New1(DefaultTextRenderer::_maxCharCount(), ::g::Uno::Content::Fonts::SpriteFontShader::New1(), NULL);
    uPtr(DefaultTextRenderer::_renderer())->Transform(::g::Fuse::Controls::Internal::ProperTextTransform::New1());
}

// public DefaultTextRenderer New(Uno.Content.Fonts.FontFace fontFace) [static] :60
DefaultTextRenderer* DefaultTextRenderer::New1(::g::Uno::Content::Fonts::FontFace* fontFace)
{
    DefaultTextRenderer* obj1 = (DefaultTextRenderer*)uNew(DefaultTextRenderer_typeof());
    obj1->ctor_(fontFace);
    return obj1;
}

// private static Uno.Content.Fonts.TextRenderer get_renderer() [static] :49
::g::Uno::Content::Fonts::TextRenderer* DefaultTextRenderer::renderer()
{
    if (DefaultTextRenderer::_renderer() == NULL)
    {
        DefaultTextRenderer::_renderer() = ::g::Uno::Content::Fonts::TextRenderer::New1(100, ::g::Uno::Content::Fonts::SpriteFontShader::New1(), NULL);
        uPtr(DefaultTextRenderer::_renderer())->Transform(::g::Fuse::Controls::Internal::ProperTextTransform::New1());
    }

    return DefaultTextRenderer::_renderer();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(13)
// -------------------------------------------------------------------

// private sealed class DefaultTextRenderer.FontKey :13
// {
uType* DefaultTextRenderer__FontKey_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DefaultTextRenderer__FontKey);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Internal.DefaultTextRenderer.FontKey", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))DefaultTextRenderer__FontKey__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))DefaultTextRenderer__FontKey__GetHashCode_fn;
    type->SetFields(0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer__FontKey, FontFace), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Internal::DefaultTextRenderer__FontKey, Size), 0);
    return type;
}

// public FontKey(Uno.Content.Fonts.FontFace fontFace, int size) :33
void DefaultTextRenderer__FontKey__ctor__fn(DefaultTextRenderer__FontKey* __this, ::g::Uno::Content::Fonts::FontFace* fontFace, int* size)
{
    __this->ctor_(fontFace, *size);
}

// public override sealed bool Equals(object obj) :23
void DefaultTextRenderer__FontKey__Equals_fn(DefaultTextRenderer__FontKey* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, DefaultTextRenderer__FontKey_typeof()))
    {
        DefaultTextRenderer__FontKey* fk = uCast<DefaultTextRenderer__FontKey*>(obj, DefaultTextRenderer__FontKey_typeof());
        return *__retval = (uPtr(fk)->Size == __this->Size) && (uPtr(fk)->FontFace == __this->FontFace), void();
    }

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :18
void DefaultTextRenderer__FontKey__GetHashCode_fn(DefaultTextRenderer__FontKey* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->FontFace)) + __this->Size, void();
}

// public FontKey New(Uno.Content.Fonts.FontFace fontFace, int size) :33
void DefaultTextRenderer__FontKey__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, int* size, DefaultTextRenderer__FontKey** __retval)
{
    *__retval = DefaultTextRenderer__FontKey::New1(fontFace, *size);
}

// public FontKey(Uno.Content.Fonts.FontFace fontFace, int size) [instance] :33
void DefaultTextRenderer__FontKey::ctor_(::g::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    FontFace = fontFace;
    Size = size;
}

// public FontKey New(Uno.Content.Fonts.FontFace fontFace, int size) [static] :33
DefaultTextRenderer__FontKey* DefaultTextRenderer__FontKey::New1(::g::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    DefaultTextRenderer__FontKey* obj1 = (DefaultTextRenderer__FontKey*)uNew(DefaultTextRenderer__FontKey_typeof());
    obj1->ctor_(fontFace, size);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(184)
// --------------------------------------------------------------------

// internal sealed class ProperTextTransform :184
// {
::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProperTextTransform);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextTransform_type);
    type = (::g::Uno::Content::Fonts::TextTransform_type*)uClassType::New("Fuse.Controls.Internal.ProperTextTransform", options);
    type->SetBase(::g::Uno::Content::Fonts::TextTransform_typeof());
    type->fp_ctor_ = (void*)ProperTextTransform__New1_fn;
    type->fp_get_CullFace = (void(*)(::g::Uno::Content::Fonts::TextTransform*, int*))ProperTextTransform__get_CullFace_fn;
    type->fp_get_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__get_Matrix_fn;
    type->fp_set_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__set_Matrix_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__ResolveClipSpaceMatrix_fn;
    ::TYPES[10] = ::g::Uno::Float4x4_typeof();
    ::TYPES[11] = ::g::Fuse::IViewport_typeof();
    ::TYPES[3] = ::g::Fuse::DrawContext_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::Internal::ProperTextTransform, _matrix), 0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Controls::Internal::ProperTextTransform, DrawContext), 0);
    return type;
}

// public generated ProperTextTransform() :184
void ProperTextTransform__ctor_1_fn(ProperTextTransform* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Graphics.PolygonFace get_CullFace() :203
void ProperTextTransform__get_CullFace_fn(ProperTextTransform* __this, int* __retval)
{
    return *__retval = uPtr(__this->DrawContext)->CullFace(), void();
}

// public override sealed float4x4 get_Matrix() :192
void ProperTextTransform__get_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = __this->_matrix, void();
}

// public override sealed void set_Matrix(float4x4 value) :193
void ProperTextTransform__set_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->_matrix = value_;
}

// public generated ProperTextTransform New() :184
void ProperTextTransform__New1_fn(ProperTextTransform** __retval)
{
    *__retval = ProperTextTransform::New1();
}

// public override sealed float4x4 ResolveClipSpaceMatrix() :196
void ProperTextTransform__ResolveClipSpaceMatrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = ::g::Uno::Matrix::Mul8(__this->Matrix(), ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(__this->DrawContext)->Viewport()), ::TYPES[11/*Fuse.IViewport*/]))), void();
}

// public generated ProperTextTransform() [instance] :184
void ProperTextTransform::ctor_1()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    ctor_();
}

// public generated ProperTextTransform New() [static] :184
ProperTextTransform* ProperTextTransform::New1()
{
    ProperTextTransform* obj1 = (ProperTextTransform*)uNew(ProperTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(215)
// --------------------------------------------------------------------

// internal sealed class WordWrapInfo :215
// {
uType* WordWrapInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(WordWrapInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Internal.WordWrapInfo", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))WordWrapInfo__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))WordWrapInfo__GetHashCode_fn;
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapInfo, AbsoluteZoom), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapInfo, FontSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapInfo, IsEnabled), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapInfo, LineHeight), 0,
        ::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapInfo, TextRenderer), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapInfo, WrapWidth), 0);
    return type;
}

// public WordWrapInfo(Fuse.Controls.Internal.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) :224
void WordWrapInfo__ctor__fn(WordWrapInfo* __this, ::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom)
{
    __this->ctor_(textRenderer, *isEnabled, *wrapWidth, *fontSize, *lineHeight, *lineSpacing, *absoluteZoom);
}

// public override sealed bool Equals(object obj) :235
void WordWrapInfo__Equals_fn(WordWrapInfo* __this, uObject* obj, bool* __retval)
{
    if (!uIs(obj, WordWrapInfo_typeof()))
        return *__retval = false, void();

    WordWrapInfo* other = uCast<WordWrapInfo*>(obj, WordWrapInfo_typeof());
    return *__retval = (((((__this->TextRenderer == uPtr(other)->TextRenderer) && (__this->IsEnabled == uPtr(other)->IsEnabled)) && (__this->WrapWidth == uPtr(other)->WrapWidth)) && (__this->FontSize == uPtr(other)->FontSize)) && (__this->LineHeight == uPtr(other)->LineHeight)) && (__this->AbsoluteZoom == uPtr(other)->AbsoluteZoom), void();
}

// public override sealed int GetHashCode() :250
void WordWrapInfo__GetHashCode_fn(WordWrapInfo* __this, int* __retval)
{
    bool ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    return *__retval = ((((::g::Uno::Object::GetHashCode(uPtr(__this->TextRenderer)) ^ ::g::Uno::Bool::GetHashCode((ind1 = __this->IsEnabled, ind1), ::TYPES[8/*bool*/])) ^ ::g::Uno::Float::GetHashCode((ind2 = __this->WrapWidth, ind2), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind3 = __this->FontSize, ind3), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind4 = __this->LineHeight, ind4), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind5 = __this->AbsoluteZoom, ind5), ::TYPES[9/*float*/]), void();
}

// public WordWrapInfo New(Fuse.Controls.Internal.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) :224
void WordWrapInfo__New1_fn(::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom, WordWrapInfo** __retval)
{
    *__retval = WordWrapInfo::New1(textRenderer, *isEnabled, *wrapWidth, *fontSize, *lineHeight, *lineSpacing, *absoluteZoom);
}

// public WordWrapInfo(Fuse.Controls.Internal.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) [instance] :224
void WordWrapInfo::ctor_(::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    AbsoluteZoom = absoluteZoom;
    TextRenderer = textRenderer;
    IsEnabled = isEnabled;
    WrapWidth = wrapWidth;
    FontSize = fontSize;
    LineHeight = (::g::Uno::Math::Ceil1(lineHeight * absoluteZoom) / absoluteZoom);
    LineHeight = (LineHeight + (lineSpacing * absoluteZoom));
}

// public WordWrapInfo New(Fuse.Controls.Internal.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) [static] :224
WordWrapInfo* WordWrapInfo::New1(::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    WordWrapInfo* obj6 = (WordWrapInfo*)uNew(WordWrapInfo_typeof());
    obj6->ctor_(textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom);
    return obj6;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(292)
// --------------------------------------------------------------------

// internal static class WordWrapper :292
// {
uClassType* WordWrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Internal.WordWrapper", options);
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Internal::WordWrapperWord_typeof());
    ::TYPES[13] = ::g::Uno::String_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[15] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[16] = ::g::Fuse::Controls::Internal::WordWrapperWord_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    return type;
}

// private static Uno.Collections.List<Fuse.Controls.Internal.WordWrapperWord> GetWords(Fuse.Controls.Internal.WordWrapInfo wrapInfo, string text) :333
void WordWrapper__GetWords_fn(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = WordWrapper::GetWords(wrapInfo, text);
}

// private static Fuse.Controls.Internal.WordWrapperWord SplitWord(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Uno.Collections.List<Fuse.Controls.Internal.WrappedLine> wrappedLines, Fuse.Controls.Internal.WordWrapperWord word, int& lineStartIndex) :360
void WordWrapper__SplitWord_fn(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::Internal::WordWrapperWord* word, int* lineStartIndex, ::g::Fuse::Controls::Internal::WordWrapperWord** __retval)
{
    *__retval = WordWrapper::SplitWord(wrapInfo, wrappedLines, word, lineStartIndex);
}

// public static Fuse.Controls.Internal.WrappedLine[] WrapLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, string text) :294
void WordWrapper__WrapLine_fn(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text, uArray** __retval)
{
    *__retval = WordWrapper::WrapLine(wrapInfo, text);
}

// private static Uno.Collections.List<Fuse.Controls.Internal.WordWrapperWord> GetWords(Fuse.Controls.Internal.WordWrapInfo wrapInfo, string text) [static] :333
::g::Uno::Collections::List* WordWrapper::GetWords(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text)
{
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Controls.Internal.WordWrapperWord>*/]);

    for (int i = 0; i < uPtr(text)->Length(); )
    {
        int contentsIndex = i;
        int contentsLength = 0;

        for (; (i < uPtr(text)->Length()) && !::g::Uno::Char::IsWhiteSpace(uPtr(text)->Item(i)); i++)
            contentsLength++;

        uString* contents = ::g::Uno::String::Substring1(uPtr(text), contentsIndex, contentsLength);
        int whitespaceIndex = i;
        int whitespaceLength = 0;

        for (; (i < text->Length()) && ::g::Uno::Char::IsWhiteSpace(text->Item(i)); i++)
            whitespaceLength++;

        uString* whitespace = ::g::Uno::String::Substring1(text, whitespaceIndex, whitespaceLength);
        ::g::Uno::Collections::List__Add_fn(uPtr(ret), ::g::Fuse::Controls::Internal::WordWrapperWord::New1(contents, whitespace, contentsIndex, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, contents).X, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::op_Addition2(contents, whitespace)).X));
    }

    return ret;
}

// private static Fuse.Controls.Internal.WordWrapperWord SplitWord(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Uno.Collections.List<Fuse.Controls.Internal.WrappedLine> wrappedLines, Fuse.Controls.Internal.WordWrapperWord word, int& lineStartIndex) [static] :360
::g::Fuse::Controls::Internal::WordWrapperWord* WordWrapper::SplitWord(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::Internal::WordWrapperWord* word, int* lineStartIndex)
{
    while ((uPtr(uPtr(word)->Contents)->Length() > 1) && (uPtr(word)->ContentsWidth > uPtr(wrapInfo)->WrapWidth))
    {
        int c = 1;

        for (; c < uPtr(uPtr(word)->Contents)->Length(); c++)
        {
            uString* leftString = ::g::Uno::String::Substring1(uPtr(uPtr(word)->Contents), 0, c);
            float startX = uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, leftString).X;

            if (startX >= wrapInfo->WrapWidth)
                return word;

            float endX = startX + uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(word->Contents), c, 1)).X;

            if ((startX < wrapInfo->WrapWidth) && (endX >= wrapInfo->WrapWidth))
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), ::g::Fuse::Controls::Internal::WrappedLine::New1(leftString, uPtr(word)->StartIndex, (float)uPtr(wrappedLines)->Count() * uPtr(wrapInfo)->LineHeight, startX));
                uString* newWordContents = ::g::Uno::String::Substring(uPtr(word->Contents), c);
                *lineStartIndex = word->StartIndex + c;
                word = ::g::Fuse::Controls::Internal::WordWrapperWord::New1(newWordContents, word->Whitespace, *lineStartIndex, uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, newWordContents).X, uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::g::Uno::String::op_Addition2(newWordContents, word->Whitespace)).X);
                break;
            }
        }
    }

    return word;
}

// public static Fuse.Controls.Internal.WrappedLine[] WrapLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, string text) [static] :294
uArray* WordWrapper::WrapLine(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uString* text)
{
    ::g::Fuse::Controls::Internal::WordWrapperWord* ret1;
    ::g::Fuse::Controls::Internal::WordWrapperWord* ret2;
    ::g::Fuse::Controls::Internal::WordWrapperWord* ret3;
    ::g::Uno::Collections::List* words = WordWrapper::GetWords(wrapInfo, text);
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Fuse.Controls.Internal.WrappedLine>*/]);

    if (uPtr(words)->Count() == 0)
        return (uArray*)ret->ToArray();

    int lineStartIndex = 0;
    uString* lineText = ::g::Uno::String::Empty();
    float lineWidth = 0.0f;

    for (int i = 0; i < (uPtr(words)->Count() - 1); i++)
    {
        ::g::Fuse::Controls::Internal::WordWrapperWord* word = WordWrapper::SplitWord(wrapInfo, ret, (::g::Uno::Collections::List__get_Item_fn(uPtr(words), uCRef<int>(i), &ret1), ret1), &lineStartIndex);
        ::g::Fuse::Controls::Internal::WordWrapperWord* nextWord = (::g::Uno::Collections::List__get_Item_fn(words, uCRef<int>(i + 1), &ret2), ret2);

        if (((lineWidth + uPtr(word)->TotalContentsWidth) + uPtr(nextWord)->ContentsWidth) <= uPtr(wrapInfo)->WrapWidth)
        {
            lineText = ::g::Uno::String::op_Addition2(lineText, uPtr(word)->TotalContents);
            lineWidth = lineWidth + word->TotalContentsWidth;
        }
        else
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), ::g::Fuse::Controls::Internal::WrappedLine::New1(::g::Uno::String::op_Addition2(lineText, uPtr(word)->TotalContents), lineStartIndex, (float)uPtr(ret)->Count() * uPtr(wrapInfo)->LineHeight, lineWidth + uPtr(word)->ContentsWidth));
            lineStartIndex = uPtr(nextWord)->StartIndex;
            lineText = ::g::Uno::String::Empty();
            lineWidth = 0.0f;
        }
    }

    ::g::Fuse::Controls::Internal::WordWrapperWord* lastWord = WordWrapper::SplitWord(wrapInfo, ret, (::g::Uno::Collections::List__get_Item_fn(uPtr(words), uCRef<int>(uPtr(words)->Count() - 1), &ret3), ret3), &lineStartIndex);
    ::g::Uno::Collections::List__Add_fn(ret, ::g::Fuse::Controls::Internal::WrappedLine::New1(::g::Uno::String::op_Addition2(lineText, uPtr(lastWord)->TotalContents), lineStartIndex, (float)ret->Count() * uPtr(wrapInfo)->LineHeight, lineWidth + uPtr(lastWord)->TotalContentsWidth));
    return (uArray*)ret->ToArray();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(270)
// --------------------------------------------------------------------

// internal sealed class WordWrapperWord :270
// {
uType* WordWrapperWord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(WordWrapperWord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Internal.WordWrapperWord", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapperWord, Contents), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapperWord, ContentsWidth), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapperWord, StartIndex), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapperWord, TotalContents), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapperWord, TotalContentsWidth), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Internal::WordWrapperWord, Whitespace), 0);
    return type;
}

// public WordWrapperWord(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) :281
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth)
{
    __this->ctor_(contents, whitespace, *startIndex, *contentsWidth, *totalContentsWidth);
}

// public WordWrapperWord New(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) :281
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval)
{
    *__retval = WordWrapperWord::New1(contents, whitespace, *startIndex, *contentsWidth, *totalContentsWidth);
}

// public WordWrapperWord(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) [instance] :281
void WordWrapperWord::ctor_(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    Contents = contents;
    Whitespace = whitespace;
    TotalContents = ::g::Uno::String::op_Addition2(Contents, Whitespace);
    StartIndex = startIndex;
    ContentsWidth = contentsWidth;
    TotalContentsWidth = totalContentsWidth;
}

// public WordWrapperWord New(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) [static] :281
WordWrapperWord* WordWrapperWord::New1(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    WordWrapperWord* obj1 = (WordWrapperWord*)uNew(WordWrapperWord_typeof());
    obj1->ctor_(contents, whitespace, startIndex, contentsWidth, totalContentsWidth);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno(398)
// --------------------------------------------------------------------

// internal sealed class WrappedLine :398
// {
uType* WrappedLine_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(WrappedLine);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Internal.WrappedLine", options);
    ::STRINGS[1] = uString::Const("unsupported enum-value");
    ::STRINGS[2] = uString::Const("textAlignment");
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[15] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[13] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Internal::WrappedLine, LineTextStartOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WrappedLine, LineWidth), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Internal::WrappedLine, Text), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Internal::WrappedLine, YOffset), 0);
    return type;
}

// public WrappedLine(string text, int lineTextStartOffset, float yOffset, float lineWidth) :407
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth)
{
    __this->ctor_(text, *lineTextStartOffset, *yOffset, *lineWidth);
}

// public float GetXOffset(Fuse.Elements.TextAlignment textAlignment, float boundsWidth, float absoluteZoom) :415
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval)
{
    *__retval = __this->GetXOffset(*textAlignment, *boundsWidth, *absoluteZoom);
}

// public int get_LineTextEndOffset() :405
void WrappedLine__get_LineTextEndOffset_fn(WrappedLine* __this, int* __retval)
{
    *__retval = __this->LineTextEndOffset();
}

// public WrappedLine New(string text, int lineTextStartOffset, float yOffset, float lineWidth) :407
void WrappedLine__New1_fn(uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval)
{
    *__retval = WrappedLine::New1(text, *lineTextStartOffset, *yOffset, *lineWidth);
}

// public float PosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) :458
void WrappedLine__PosToBounds_fn(WrappedLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, float* __retval)
{
    *__retval = __this->PosToBounds(wrapInfo, *p);
}

// public WrappedLine(string text, int lineTextStartOffset, float yOffset, float lineWidth) [instance] :407
void WrappedLine::ctor_(uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    Text = text;
    LineTextStartOffset = lineTextStartOffset;
    YOffset = yOffset;
    LineWidth = lineWidth;
}

// public float GetXOffset(Fuse.Elements.TextAlignment textAlignment, float boundsWidth, float absoluteZoom) [instance] :415
float WrappedLine::GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom)
{
    switch (textAlignment)
    {
        case 0:
            return 0.0f;
        case 1:
            return ::g::Uno::Math::Round2(((boundsWidth - LineWidth) / 2.0f) * absoluteZoom) / absoluteZoom;
        case 2:
            return boundsWidth - LineWidth;
    }

    U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"unsupported...*/], ::STRINGS[2/*"textAlignment"*/]));
}

// public int get_LineTextEndOffset() [instance] :405
int WrappedLine::LineTextEndOffset()
{
    return LineTextStartOffset + uPtr(Text)->Length();
}

// public float PosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) [instance] :458
float WrappedLine::PosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    return uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(Text), 0, p)).X;
}

// public WrappedLine New(string text, int lineTextStartOffset, float yOffset, float lineWidth) [static] :407
WrappedLine* WrappedLine::New1(uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    WrappedLine* obj1 = (WrappedLine*)uNew(WrappedLine_typeof());
    obj1->ctor_(text, lineTextStartOffset, yOffset, lineWidth);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::Internal

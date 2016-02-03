#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer_FontKey.h>
#include <app/Fuse.Controls.Internal.ProperTextTransform.h>
#include <app/Fuse.Controls.Internal.WordWrapInfo.h>
#include <app/Fuse.Controls.Internal.WordWrapper.h>
#include <app/Fuse.Controls.Internal.WordWrapperWord.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.IViewport.h>
#include <app/Uno.ArgumentException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__Fuse_Controls_Internal_DefaultTextR-9aaaac6.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Fonts.FontFaceHelpers.h>
#include <app/Uno.Content.Fonts.SpriteFontShader.h>
#include <app/Uno.Content.Fonts.TextRenderer.h>
#include <app/Uno.Content.Fonts.TextShader.h>
#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*> DefaultTextRenderer___bitmapFonts;
int DefaultTextRenderer___maxCharCount;
::uStaticStrong< ::app::Uno::Content::Fonts::TextRenderer*> DefaultTextRenderer___renderer;

DefaultTextRenderer__uType* DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (DefaultTextRenderer__uType*)::uAllocClassType(sizeof(DefaultTextRenderer__uType), "Fuse.Controls.Internal.DefaultTextRenderer", false, 0, 2, 0);

    type->SetStrongRefs(
        "_bitmapFont", offsetof(DefaultTextRenderer, _bitmapFont),
        "_FontFace", offsetof(DefaultTextRenderer, _FontFace));

    type->SetFields(7,
        ::uNewField("_absoluteZoom", NULL, offsetof(DefaultTextRenderer, _absoluteZoom), ::app::Uno::Float__typeof()),
        ::uNewField("_bitmapFont", NULL, offsetof(DefaultTextRenderer, _bitmapFont), ::app::Uno::Content::Fonts::BitmapFont__typeof()),
        ::uNewField("_bitmapFonts", &DefaultTextRenderer___bitmapFonts, 0, ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()),
        ::uNewField("_fontSize", NULL, offsetof(DefaultTextRenderer, _fontSize), ::app::Uno::Float__typeof()),
        ::uNewField("_maxCharCount", &DefaultTextRenderer___maxCharCount, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_renderer", &DefaultTextRenderer___renderer, 0, ::app::Uno::Content::Fonts::TextRenderer__typeof()),
        ::uNewField("_transform", NULL, offsetof(DefaultTextRenderer, _transform), ::app::Uno::Float4x4__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("BeginRendering", DefaultTextRenderer__BeginRendering, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("DrawLine", DefaultTextRenderer__DrawLine, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("EndRendering", DefaultTextRenderer__EndRendering, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("EnsureRendererCapacity", DefaultTextRenderer__EnsureRendererCapacity, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_FontFace", DefaultTextRenderer__get_FontFace, 0, false, ::app::Uno::Content::Fonts::FontFace__typeof()),
        ::uNewFunction("get_renderer", DefaultTextRenderer__get_renderer, 0, true, ::app::Uno::Content::Fonts::TextRenderer__typeof()),
        ::uNewFunction("GetBitmapFont", DefaultTextRenderer__GetBitmapFont, 0, false, ::app::Uno::Content::Fonts::BitmapFont__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetLineHeight", DefaultTextRenderer__GetLineHeight, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("GetLineHeightVirtual", DefaultTextRenderer__GetLineHeightVirtual, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("MeasureString", DefaultTextRenderer__MeasureString, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("MeasureStringVirtual", DefaultTextRenderer__MeasureStringVirtual, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", DefaultTextRenderer__New_1, 0, true, DefaultTextRenderer__typeof(), ::app::Uno::Content::Fonts::FontFace__typeof()),
        ::uNewFunctionVoid("set_FontFace", DefaultTextRenderer__set_FontFace, 0, false, ::app::Uno::Content::Fonts::FontFace__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultTextRenderer___ObjInit(DefaultTextRenderer* __this, ::app::Uno::Content::Fonts::FontFace* fontFace)
{
    if (DefaultTextRenderer___bitmapFonts == NULL)
    {
        DefaultTextRenderer___maxCharCount = 100;
        DefaultTextRenderer___bitmapFonts = ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(NULL);
    }

    __this->FontFace(fontFace);
}

void DefaultTextRenderer__BeginRendering(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength)
{
    __this->_fontSize = fontSize;
    __this->_absoluteZoom = absoluteZoom;
    __this->_transform = transform;
    __this->_bitmapFont = __this->GetBitmapFont(__this->_fontSize, __this->_absoluteZoom, true);
    DefaultTextRenderer__EnsureRendererCapacity(NULL, maxTextLength);
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->Begin(__this->_bitmapFont);
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->Color(textColor);
}

void DefaultTextRenderer__DrawLine(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line)
{
    float lineHeight = ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_bitmapFont)->LineHeight;
    float lineOffsetY = lineHeight - ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_bitmapFont)->Descent;
    ::app::Uno::Float2 p = ::app::Uno::Float2__New_2(NULL, x, y + lineOffsetY);

    if (::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity() != 1.0f)
    {
        ::app::Uno::Float4x4 scale = ::app::Uno::Matrix__Scaling(NULL, 1.0f / ::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
        ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->Transform())->Matrix(::app::Uno::Matrix__Mul_8(NULL, scale, __this->_transform));
    }
    else
    {
        ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->Transform())->Matrix(__this->_transform);
    }

    ::uPtr< ::app::Fuse::Controls::Internal::ProperTextTransform*>(::uAs< ::app::Fuse::Controls::Internal::ProperTextTransform*>(::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->Transform(), ::app::Fuse::Controls::Internal::ProperTextTransform__typeof()))->DrawContext = dc;
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->WriteString(p, line);
}

void DefaultTextRenderer__EndRendering(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->End();
}

void DefaultTextRenderer__EnsureRendererCapacity(::uStatic* __this, int maxCharCount)
{
    if (maxCharCount <= DefaultTextRenderer___maxCharCount)
    {
        return;
    }

    DefaultTextRenderer___maxCharCount = ::app::Uno::Math__Max_8(NULL, DefaultTextRenderer___maxCharCount * 2, maxCharCount);
    DefaultTextRenderer___renderer = ::app::Uno::Content::Fonts::TextRenderer__New_1(NULL, DefaultTextRenderer___maxCharCount, (::app::Uno::Content::Fonts::TextShader*)::app::Uno::Content::Fonts::SpriteFontShader__New_1(NULL), NULL);
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer___renderer)->Transform((::app::Uno::Content::Fonts::TextTransform*)::app::Fuse::Controls::Internal::ProperTextTransform__New_1(NULL));
}

::app::Uno::Content::Fonts::FontFace* DefaultTextRenderer__get_FontFace(DefaultTextRenderer* __this)
{
    return __this->_FontFace;
}

::app::Uno::Content::Fonts::TextRenderer* DefaultTextRenderer__get_renderer(::uStatic* __this)
{
    if (DefaultTextRenderer___renderer == NULL)
    {
        DefaultTextRenderer___renderer = ::app::Uno::Content::Fonts::TextRenderer__New_1(NULL, 100, (::app::Uno::Content::Fonts::TextShader*)::app::Uno::Content::Fonts::SpriteFontShader__New_1(NULL), NULL);
        ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer___renderer)->Transform((::app::Uno::Content::Fonts::TextTransform*)::app::Fuse::Controls::Internal::ProperTextTransform__New_1(NULL));
    }

    return DefaultTextRenderer___renderer;
}

::app::Uno::Content::Fonts::BitmapFont* DefaultTextRenderer__GetBitmapFont(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, bool includeZoom)
{
    int size = (int)::app::Uno::Math__Floor_1(NULL, ::app::Uno::Math__Clamp_1(NULL, fontSize * (includeZoom ? absoluteZoom : 1.0f), 4.0f, 400.0f));
    ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key = ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey__New_1(NULL, __this->FontFace(), size);
    ::app::Uno::Content::Fonts::BitmapFont* bmpfont;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(DefaultTextRenderer___bitmapFonts)->TryGetValue(key, &bmpfont))
    {
        bmpfont = ::app::Uno::Content::Fonts::FontFaceHelpers__RenderSpriteFont(NULL, __this->FontFace(), (float)size, ::uGetConstString("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\303\206\303\230\303\205[\\]^_`abcdefghijklmnopqrstuvwxyz\303\246\303\270\303\245\302\250{|}~\302\260\342\200\242"));
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(DefaultTextRenderer___bitmapFonts)->Add(key, bmpfont);
    }

    return bmpfont;
}

float DefaultTextRenderer__GetLineHeight(DefaultTextRenderer* __this, float fontSize)
{
    if (__this->FontFace() == NULL)
    {
        return 0.0f;
    }

    float size = ::app::Uno::Math__Clamp_1(NULL, fontSize, 4.0f, 400.0f);
    return ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(__this->FontFace())->GetLineHeight(size);
}

float DefaultTextRenderer__GetLineHeightVirtual(DefaultTextRenderer* __this, float fontSize, float absoluteZoom)
{
    return __this->GetLineHeight(fontSize) / absoluteZoom;
}

::app::Uno::Float2 DefaultTextRenderer__MeasureString(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::uString* s)
{
    if (::app::Uno::String__op_Equality(NULL, s, NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Content::Fonts::BitmapFont* bitmapFont = __this->GetBitmapFont(fontSize, absoluteZoom, true);
    bool hasBegun = ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->HasBegun();

    if (!hasBegun)
    {
        ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->Begin(bitmapFont);
    }

    ::app::Uno::Float2 ret = ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->MeasureString(s);

    if (!hasBegun)
    {
        ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRenderer__get_renderer(NULL))->End();
    }

    return ret;
}

::app::Uno::Float2 DefaultTextRenderer__MeasureStringVirtual(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::uString* s)
{
    return ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, __this->MeasureString(fontSize, absoluteZoom, s), absoluteZoom));
}

DefaultTextRenderer* DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace)
{
    DefaultTextRenderer* inst = (DefaultTextRenderer*)::uAllocObject(sizeof(DefaultTextRenderer), DefaultTextRenderer__typeof());
    inst->_ObjInit(fontFace);
    return inst;
}

void DefaultTextRenderer__set_FontFace(DefaultTextRenderer* __this, ::app::Uno::Content::Fonts::FontFace* value)
{
    __this->_FontFace = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultTextRenderer_FontKey__uType* DefaultTextRenderer_FontKey__typeof()
{
    static ::uStaticStrong<DefaultTextRenderer_FontKey__uType*> type;
    if (type != NULL) return type;

    type = (DefaultTextRenderer_FontKey__uType*)::uAllocClassType(sizeof(DefaultTextRenderer_FontKey__uType), "Fuse.Controls.Internal.DefaultTextRenderer.FontKey", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))DefaultTextRenderer_FontKey__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))DefaultTextRenderer_FontKey__GetHashCode;

    type->SetStrongRefs(
        "FontFace", offsetof(DefaultTextRenderer_FontKey, FontFace));

    return type;
}

void DefaultTextRenderer_FontKey___ObjInit(DefaultTextRenderer_FontKey* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    __this->FontFace = fontFace;
    __this->Size = size;
}

bool DefaultTextRenderer_FontKey__Equals(DefaultTextRenderer_FontKey* __this, ::uObject* obj)
{
    if (::uIs(obj, DefaultTextRenderer_FontKey__typeof()))
    {
        DefaultTextRenderer_FontKey* fk = ::uCast< DefaultTextRenderer_FontKey*>(obj, DefaultTextRenderer_FontKey__typeof());
        return (::uPtr< DefaultTextRenderer_FontKey*>(fk)->Size == __this->Size) && (::uPtr< DefaultTextRenderer_FontKey*>(fk)->FontFace == __this->FontFace);
    }

    return false;
}

int DefaultTextRenderer_FontKey__GetHashCode(DefaultTextRenderer_FontKey* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Content::Fonts::FontFace*>(__this->FontFace)) + __this->Size;
}

DefaultTextRenderer_FontKey* DefaultTextRenderer_FontKey__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    DefaultTextRenderer_FontKey* inst = (DefaultTextRenderer_FontKey*)::uAllocObject(sizeof(DefaultTextRenderer_FontKey), DefaultTextRenderer_FontKey__typeof());
    inst->_ObjInit(fontFace, size);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProperTextTransform__uType* ProperTextTransform__typeof()
{
    static ::uStaticStrong<ProperTextTransform__uType*> type;
    if (type != NULL) return type;

    type = (ProperTextTransform__uType*)::uAllocClassType(sizeof(ProperTextTransform__uType), "Fuse.Controls.Internal.ProperTextTransform", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Fonts::TextTransform__typeof());
    type->__fp_get_CullFace = (int(*)(::app::Uno::Content::Fonts::TextTransform*))ProperTextTransform__get_CullFace;
    type->__fp_get_Matrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))ProperTextTransform__get_Matrix;
    type->__fp_ResolveClipSpaceMatrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))ProperTextTransform__ResolveClipSpaceMatrix;
    type->__fp_set_Matrix = (void(*)(::app::Uno::Content::Fonts::TextTransform*, ::app::Uno::Float4x4))ProperTextTransform__set_Matrix;

    type->SetStrongRefs(
        "DrawContext", offsetof(ProperTextTransform, DrawContext));

    type->SetFields(2,
        ::uNewField("_matrix", NULL, offsetof(ProperTextTransform, _matrix), ::app::Uno::Float4x4__typeof()),
        ::uNewField("DrawContext", NULL, offsetof(ProperTextTransform, DrawContext), ::app::Fuse::DrawContext__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ProperTextTransform__New_1, 0, true, ProperTextTransform__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProperTextTransform___ObjInit_1(ProperTextTransform* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
    ::app::Uno::Content::Fonts::TextTransform___ObjInit(__this);
}

int ProperTextTransform__get_CullFace(ProperTextTransform* __this)
{
    return ::uPtr< ::app::Fuse::DrawContext*>(__this->DrawContext)->CullFace();
}

::app::Uno::Float4x4 ProperTextTransform__get_Matrix(ProperTextTransform* __this)
{
    return __this->_matrix;
}

ProperTextTransform* ProperTextTransform__New_1(::uStatic* __this)
{
    ProperTextTransform* inst = (ProperTextTransform*)::uAllocObject(sizeof(ProperTextTransform), ProperTextTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float4x4 ProperTextTransform__ResolveClipSpaceMatrix(ProperTextTransform* __this)
{
    return ::app::Uno::Matrix__Mul_8(NULL, __this->Matrix(), ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(__this->DrawContext)->Viewport())));
}

void ProperTextTransform__set_Matrix(ProperTextTransform* __this, ::app::Uno::Float4x4 value)
{
    __this->_matrix = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WordWrapInfo__uType* WordWrapInfo__typeof()
{
    static ::uStaticStrong<WordWrapInfo__uType*> type;
    if (type != NULL) return type;

    type = (WordWrapInfo__uType*)::uAllocClassType(sizeof(WordWrapInfo__uType), "Fuse.Controls.Internal.WordWrapInfo", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))WordWrapInfo__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))WordWrapInfo__GetHashCode;

    type->SetStrongRefs(
        "TextRenderer", offsetof(WordWrapInfo, TextRenderer));

    type->SetFields(6,
        ::uNewField("AbsoluteZoom", NULL, offsetof(WordWrapInfo, AbsoluteZoom), ::app::Uno::Float__typeof()),
        ::uNewField("FontSize", NULL, offsetof(WordWrapInfo, FontSize), ::app::Uno::Float__typeof()),
        ::uNewField("IsEnabled", NULL, offsetof(WordWrapInfo, IsEnabled), ::app::Uno::Bool__typeof()),
        ::uNewField("LineHeight", NULL, offsetof(WordWrapInfo, LineHeight), ::app::Uno::Float__typeof()),
        ::uNewField("TextRenderer", NULL, offsetof(WordWrapInfo, TextRenderer), ::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof()),
        ::uNewField("WrapWidth", NULL, offsetof(WordWrapInfo, WrapWidth), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WordWrapInfo__New_1, 0, true, WordWrapInfo__typeof(), ::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void WordWrapInfo___ObjInit(WordWrapInfo* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    __this->AbsoluteZoom = absoluteZoom;
    __this->TextRenderer = textRenderer;
    __this->IsEnabled = isEnabled;
    __this->WrapWidth = wrapWidth;
    __this->FontSize = fontSize;
    __this->LineHeight = ::app::Uno::Math__Ceil_1(NULL, lineHeight * absoluteZoom) / absoluteZoom;
    __this->LineHeight = __this->LineHeight + (lineSpacing * absoluteZoom);
}

bool WordWrapInfo__Equals(WordWrapInfo* __this, ::uObject* obj)
{
    if (!::uIs(obj, WordWrapInfo__typeof()))
    {
        return false;
    }

    WordWrapInfo* other = ::uCast< WordWrapInfo*>(obj, WordWrapInfo__typeof());
    return (((((__this->TextRenderer == ::uPtr< WordWrapInfo*>(other)->TextRenderer) && (__this->IsEnabled == ::uPtr< WordWrapInfo*>(other)->IsEnabled)) && (__this->WrapWidth == ::uPtr< WordWrapInfo*>(other)->WrapWidth)) && (__this->FontSize == ::uPtr< WordWrapInfo*>(other)->FontSize)) && (__this->LineHeight == ::uPtr< WordWrapInfo*>(other)->LineHeight)) && (__this->AbsoluteZoom == ::uPtr< WordWrapInfo*>(other)->AbsoluteZoom);
}

int WordWrapInfo__GetHashCode(WordWrapInfo* __this)
{
    bool ind_123 = bool();
    float ind_124 = float();
    float ind_125 = float();
    float ind_126 = float();
    float ind_127 = float();
    return ((((::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(__this->TextRenderer)) ^ ::app::Uno::Bool::GetHashCode((ind_123 = __this->IsEnabled, ind_123))) ^ ::app::Uno::Float::GetHashCode((ind_124 = __this->WrapWidth, ind_124))) ^ ::app::Uno::Float::GetHashCode((ind_125 = __this->FontSize, ind_125))) ^ ::app::Uno::Float::GetHashCode((ind_126 = __this->LineHeight, ind_126))) ^ ::app::Uno::Float::GetHashCode((ind_127 = __this->AbsoluteZoom, ind_127));
}

WordWrapInfo* WordWrapInfo__New_1(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    WordWrapInfo* inst = (WordWrapInfo*)::uAllocObject(sizeof(WordWrapInfo), WordWrapInfo__typeof());
    inst->_ObjInit(textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WordWrapper__uType* WordWrapper__typeof()
{
    static ::uStaticStrong<WordWrapper__uType*> type;
    if (type != NULL) return type;

    type = (WordWrapper__uType*)::uAllocClassType(sizeof(WordWrapper__uType), "Fuse.Controls.Internal.WordWrapper");

    type->SetFunctions(3,
        ::uNewFunction("GetWords", WordWrapper__GetWords, 0, true, ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("SplitWord", WordWrapper__SplitWord, 0, true, ::app::Fuse::Controls::Internal::WordWrapperWord__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine__typeof(), ::app::Fuse::Controls::Internal::WordWrapperWord__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("WrapLine", WordWrapper__WrapLine, 0, true, ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof()), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* WordWrapper__GetWords(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::uString* text)
{
    ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* ret = ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord__New_1(NULL);

    for (int i = 0; i < ::uPtr< ::uString*>(text)->Length(); )
    {
        int contentsIndex = i;
        int contentsLength = 0;

        for (; (i < ::uPtr< ::uString*>(text)->Length()) && !::app::Uno::Char__IsWhiteSpace(NULL, ::uPtr< ::uString*>(text)->Item(i)); i++)
        {
            contentsLength++;
        }

        ::uString* contents = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(text), contentsIndex, contentsLength);
        int whitespaceIndex = i;
        int whitespaceLength = 0;

        for (; (i < text->Length()) && ::app::Uno::Char__IsWhiteSpace(NULL, text->Item(i)); i++)
        {
            whitespaceLength++;
        }

        ::uString* whitespace = ::app::Uno::String::Substring_1(text, whitespaceIndex, whitespaceLength);
        ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(ret)->Add(::app::Fuse::Controls::Internal::WordWrapperWord__New_1(NULL, contents, whitespace, contentsIndex, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, contents).X, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, ::app::Uno::String__op_Addition_2(NULL, contents, whitespace)).X));
    }

    return ret;
}

::app::Fuse::Controls::Internal::WordWrapperWord* WordWrapper__SplitWord(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* wrappedLines, ::app::Fuse::Controls::Internal::WordWrapperWord* word, int* lineStartIndex)
{
    while ((::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->Contents)->Length() > 1) && (::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->ContentsWidth > ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->WrapWidth))
    {
        int c = 1;

        for (; c < ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->Contents)->Length(); c++)
        {
            ::uString* leftString = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->Contents), 0, c);
            float startX = ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, leftString).X;

            if (startX >= wrapInfo->WrapWidth)
            {
                return word;
            }

            float endX = startX + ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(word->Contents), c, 1)).X;

            if ((startX < wrapInfo->WrapWidth) && (endX >= wrapInfo->WrapWidth))
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(wrappedLines)->Add(::app::Fuse::Controls::Internal::WrappedLine__New_1(NULL, leftString, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->StartIndex, (float)::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(wrappedLines)->Count() * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight, startX));
                ::uString* newWordContents = ::app::Uno::String::Substring(::uPtr< ::uString*>(word->Contents), c);
                *lineStartIndex = word->StartIndex + c;
                word = ::app::Fuse::Controls::Internal::WordWrapperWord__New_1(NULL, newWordContents, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->Whitespace, *lineStartIndex, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, newWordContents).X, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::app::Uno::String__op_Addition_2(NULL, newWordContents, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->Whitespace)).X);
                break;
            }
        }
    }

    return word;
}

::uArray* WordWrapper__WrapLine(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::uString* text)
{
    ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* words = WordWrapper__GetWords(NULL, wrapInfo, text);
    ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* ret = ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine__New_1(NULL);

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(words)->Count() == 0)
    {
        return ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(ret)->ToArray();
    }

    int lineStartIndex = 0;
    ::uString* lineText = ::app::Uno::String__Empty;
    float lineWidth = 0.0f;

    for (int i = 0; i < (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(words)->Count() - 1); i++)
    {
        ::app::Fuse::Controls::Internal::WordWrapperWord* word = WordWrapper__SplitWord(NULL, wrapInfo, ret, ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(words)->Item(i), &lineStartIndex);
        ::app::Fuse::Controls::Internal::WordWrapperWord* nextWord = words->Item(i + 1);

        if (((lineWidth + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->TotalContentsWidth) + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(nextWord)->ContentsWidth) <= ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->WrapWidth)
        {
            lineText = ::app::Uno::String__op_Addition_2(NULL, lineText, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->TotalContents);
            lineWidth = lineWidth + word->TotalContentsWidth;
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(ret)->Add(::app::Fuse::Controls::Internal::WrappedLine__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, lineText, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->TotalContents), lineStartIndex, (float)::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(ret)->Count() * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight, lineWidth + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(word)->ContentsWidth));
            lineStartIndex = ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(nextWord)->StartIndex;
            lineText = ::app::Uno::String__Empty;
            lineWidth = 0.0f;
        }
    }

    ::app::Fuse::Controls::Internal::WordWrapperWord* lastWord = WordWrapper__SplitWord(NULL, wrapInfo, ret, ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(words)->Item(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(words)->Count() - 1), &lineStartIndex);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(ret)->Add(::app::Fuse::Controls::Internal::WrappedLine__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, lineText, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(lastWord)->TotalContents), lineStartIndex, (float)::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(ret)->Count() * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight, lineWidth + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapperWord*>(lastWord)->TotalContentsWidth));
    return ret->ToArray();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WordWrapperWord__uType* WordWrapperWord__typeof()
{
    static ::uStaticStrong<WordWrapperWord__uType*> type;
    if (type != NULL) return type;

    type = (WordWrapperWord__uType*)::uAllocClassType(sizeof(WordWrapperWord__uType), "Fuse.Controls.Internal.WordWrapperWord", false, 0, 3, 0);

    type->SetStrongRefs(
        "Contents", offsetof(WordWrapperWord, Contents),
        "TotalContents", offsetof(WordWrapperWord, TotalContents),
        "Whitespace", offsetof(WordWrapperWord, Whitespace));

    type->SetFields(6,
        ::uNewField("Contents", NULL, offsetof(WordWrapperWord, Contents), ::app::Uno::String__typeof()),
        ::uNewField("ContentsWidth", NULL, offsetof(WordWrapperWord, ContentsWidth), ::app::Uno::Float__typeof()),
        ::uNewField("StartIndex", NULL, offsetof(WordWrapperWord, StartIndex), ::app::Uno::Int__typeof()),
        ::uNewField("TotalContents", NULL, offsetof(WordWrapperWord, TotalContents), ::app::Uno::String__typeof()),
        ::uNewField("TotalContentsWidth", NULL, offsetof(WordWrapperWord, TotalContentsWidth), ::app::Uno::Float__typeof()),
        ::uNewField("Whitespace", NULL, offsetof(WordWrapperWord, Whitespace), ::app::Uno::String__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_EndIndex", WordWrapperWord__get_EndIndex, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", WordWrapperWord__New_1, 0, true, WordWrapperWord__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void WordWrapperWord___ObjInit(WordWrapperWord* __this, ::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    __this->Contents = contents;
    __this->Whitespace = whitespace;
    __this->TotalContents = ::app::Uno::String__op_Addition_2(NULL, __this->Contents, __this->Whitespace);
    __this->StartIndex = startIndex;
    __this->ContentsWidth = contentsWidth;
    __this->TotalContentsWidth = totalContentsWidth;
}

int WordWrapperWord__get_EndIndex(WordWrapperWord* __this)
{
    return __this->StartIndex + ::uPtr< ::uString*>(__this->TotalContents)->Length();
}

WordWrapperWord* WordWrapperWord__New_1(::uStatic* __this, ::uString* contents, ::uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    WordWrapperWord* inst = (WordWrapperWord*)::uAllocObject(sizeof(WordWrapperWord), WordWrapperWord__typeof());
    inst->_ObjInit(contents, whitespace, startIndex, contentsWidth, totalContentsWidth);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WrappedLine__uType* WrappedLine__typeof()
{
    static ::uStaticStrong<WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (WrappedLine__uType*)::uAllocClassType(sizeof(WrappedLine__uType), "Fuse.Controls.Internal.WrappedLine", false, 0, 1, 0);

    type->SetStrongRefs(
        "Text", offsetof(WrappedLine, Text));

    type->SetFields(4,
        ::uNewField("LineTextStartOffset", NULL, offsetof(WrappedLine, LineTextStartOffset), ::app::Uno::Int__typeof()),
        ::uNewField("LineWidth", NULL, offsetof(WrappedLine, LineWidth), ::app::Uno::Float__typeof()),
        ::uNewField("Text", NULL, offsetof(WrappedLine, Text), ::app::Uno::String__typeof()),
        ::uNewField("YOffset", NULL, offsetof(WrappedLine, YOffset), ::app::Uno::Float__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("BoundsToPos", WrappedLine__BoundsToPos, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_LineTextEndOffset", WrappedLine__get_LineTextEndOffset, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetXOffset", WrappedLine__GetXOffset, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", WrappedLine__New_1, 0, true, WrappedLine__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("PosToBounds", WrappedLine__PosToBounds, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void WrappedLine___ObjInit(WrappedLine* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    __this->Text = text;
    __this->LineTextStartOffset = lineTextStartOffset;
    __this->YOffset = yOffset;
    __this->LineWidth = lineWidth;
}

int WrappedLine__BoundsToPos(WrappedLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float p)
{
    int c = 0;

    if (p > 0.0f)
    {
        for (; c < ::uPtr< ::uString*>(__this->Text)->Length(); c++)
        {
            float startX = ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Text), 0, c)).X;

            if (p >= startX)
            {
                float charWidth = ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Text), c, 1)).X;
                float endX = startX + charWidth;

                if (p < endX)
                {
                    float charPos = (p - startX) / charWidth;

                    if (charPos >= 0.5f)
                    {
                        c = ::app::Uno::Math__Clamp_8(NULL, c + 1, 0, ::uPtr< ::uString*>(__this->Text)->Length() - 1);
                    }

                    break;
                }
            }
        }
    }

    return c;
}

int WrappedLine__get_LineTextEndOffset(WrappedLine* __this)
{
    return __this->LineTextStartOffset + ::uPtr< ::uString*>(__this->Text)->Length();
}

float WrappedLine__GetXOffset(WrappedLine* __this, int textAlignment, float boundsWidth, float absoluteZoom)
{
    switch (textAlignment)
    {
        case 0:
        {
            return 0.0f;
        }
        case 1:
        {
            return ::app::Uno::Math__Round_2(NULL, ((boundsWidth - __this->LineWidth) / 2.0f) * absoluteZoom) / absoluteZoom;
        }
        case 2:
        {
            return boundsWidth - __this->LineWidth;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_4(NULL, ::uGetConstString("unsupported enum-value"), ::uGetConstString("textAlignment")));
}

WrappedLine* WrappedLine__New_1(::uStatic* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    WrappedLine* inst = (WrappedLine*)::uAllocObject(sizeof(WrappedLine), WrappedLine__typeof());
    inst->_ObjInit(text, lineTextStartOffset, yOffset, lineWidth);
    return inst;
}

float WrappedLine__PosToBounds(WrappedLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    return ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Text), 0, p)).X;
}

}}}}

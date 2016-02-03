// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_TEXT_RENDERER_H__
#define __APP_UNO_CONTENT_FONTS_TEXT_RENDERER_H__

#include <app/Uno.Byte4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_GlyphInfo; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShader; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShaderData; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextTransform; } } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct TextRenderer;

struct TextRenderer__uType : ::uClassType
{
};

TextRenderer__uType* TextRenderer__typeof();

void TextRenderer___ObjInit(TextRenderer* __this, int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform);
void TextRenderer__Begin(TextRenderer* __this, ::app::Uno::Content::Fonts::BitmapFont* font);
void TextRenderer__DrawString(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text, ::app::Uno::Content::Fonts::BitmapFont* font);
void TextRenderer__End(TextRenderer* __this);
::app::Uno::Float4 TextRenderer__get_Color(TextRenderer* __this);
bool TextRenderer__get_HasBegun(TextRenderer* __this);
float TextRenderer__get_Scale(TextRenderer* __this);
::app::Uno::Content::Fonts::TextShader* TextRenderer__get_Shader(TextRenderer* __this);
float TextRenderer__get_Tracking(TextRenderer* __this);
::app::Uno::Content::Fonts::TextTransform* TextRenderer__get_Transform(TextRenderer* __this);
::app::Uno::Float2 TextRenderer__MeasureString(TextRenderer* __this, ::uString* text);
::app::Uno::Float2 TextRenderer__MeasureString_1(TextRenderer* __this, ::uString* text, int startIndex, int length);
TextRenderer* TextRenderer__New_1(::uStatic* __this, int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform);
void TextRenderer__set_Color(TextRenderer* __this, ::app::Uno::Float4 value);
void TextRenderer__set_HasBegun(TextRenderer* __this, bool value);
void TextRenderer__set_Scale(TextRenderer* __this, float value);
void TextRenderer__set_Shader(TextRenderer* __this, ::app::Uno::Content::Fonts::TextShader* value);
void TextRenderer__set_Tracking(TextRenderer* __this, float value);
void TextRenderer__set_Transform(TextRenderer* __this, ::app::Uno::Content::Fonts::TextTransform* value);
void TextRenderer__WriteGlyph(TextRenderer* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci, ::app::Uno::Float2 caret);
void TextRenderer__WriteString(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text);
void TextRenderer__WriteString_1(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text, int startIndex, int length);

struct TextRenderer : ::uObject
{
    int _maxCharCount;
    float _tracking;
    ::app::Uno::Byte4 _color;
    ::uStrong< ::app::Uno::Content::Fonts::BitmapFont*> _font;
    ::uStrong< ::app::Uno::Content::Fonts::TextShader*> _shader;
    ::uStrong< ::app::Uno::Content::Fonts::TextTransform*> _transform;
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> _vbo;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> _ibo;
    ::uStrong< ::app::Uno::Content::Fonts::TextShaderData*> _data;
    bool _HasBegun;

    void _ObjInit(int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform) { TextRenderer___ObjInit(this, maxCharCount, shader, transform); }
    void Begin(::app::Uno::Content::Fonts::BitmapFont* font) { TextRenderer__Begin(this, font); }
    void DrawString(::app::Uno::Float2 caret, ::uString* text, ::app::Uno::Content::Fonts::BitmapFont* font);
    void End() { TextRenderer__End(this); }
    ::app::Uno::Float4 Color();
    bool HasBegun() { return TextRenderer__get_HasBegun(this); }
    float Scale() { return TextRenderer__get_Scale(this); }
    ::app::Uno::Content::Fonts::TextShader* Shader() { return TextRenderer__get_Shader(this); }
    float Tracking() { return TextRenderer__get_Tracking(this); }
    ::app::Uno::Content::Fonts::TextTransform* Transform() { return TextRenderer__get_Transform(this); }
    ::app::Uno::Float2 MeasureString(::uString* text);
    ::app::Uno::Float2 MeasureString_1(::uString* text, int startIndex, int length);
    void Color(::app::Uno::Float4 value);
    void HasBegun(bool value) { TextRenderer__set_HasBegun(this, value); }
    void Scale(float value) { TextRenderer__set_Scale(this, value); }
    void Shader(::app::Uno::Content::Fonts::TextShader* value) { TextRenderer__set_Shader(this, value); }
    void Tracking(float value) { TextRenderer__set_Tracking(this, value); }
    void Transform(::app::Uno::Content::Fonts::TextTransform* value) { TextRenderer__set_Transform(this, value); }
    void WriteGlyph(::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci, ::app::Uno::Float2 caret);
    void WriteString(::app::Uno::Float2 caret, ::uString* text);
    void WriteString_1(::app::Uno::Float2 caret, ::uString* text, int startIndex, int length);
};

}}}}

#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

inline void TextRenderer::DrawString(::app::Uno::Float2 caret, ::uString* text, ::app::Uno::Content::Fonts::BitmapFont* font) { TextRenderer__DrawString(this, caret, text, font); }
inline ::app::Uno::Float4 TextRenderer::Color() { return TextRenderer__get_Color(this); }
inline ::app::Uno::Float2 TextRenderer::MeasureString(::uString* text) { return TextRenderer__MeasureString(this, text); }
inline ::app::Uno::Float2 TextRenderer::MeasureString_1(::uString* text, int startIndex, int length) { return TextRenderer__MeasureString_1(this, text, startIndex, length); }
inline void TextRenderer::Color(::app::Uno::Float4 value) { TextRenderer__set_Color(this, value); }
inline void TextRenderer::WriteGlyph(::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci, ::app::Uno::Float2 caret) { TextRenderer__WriteGlyph(this, ci, caret); }
inline void TextRenderer::WriteString(::app::Uno::Float2 caret, ::uString* text) { TextRenderer__WriteString(this, caret, text); }
inline void TextRenderer::WriteString_1(::app::Uno::Float2 caret, ::uString* text, int startIndex, int length) { TextRenderer__WriteString_1(this, caret, text, startIndex, length); }

}}}}


#endif

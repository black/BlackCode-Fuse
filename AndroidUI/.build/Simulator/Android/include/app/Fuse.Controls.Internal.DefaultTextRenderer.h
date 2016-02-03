// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_DEFAULT_TEXT_RENDERER_H__
#define __APP_FUSE_CONTROLS_INTERNAL_DEFAULT_TEXT_RENDERER_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextRenderer; } } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct DefaultTextRenderer;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*> DefaultTextRenderer___bitmapFonts;
extern int DefaultTextRenderer___maxCharCount;
extern ::uStaticStrong< ::app::Uno::Content::Fonts::TextRenderer*> DefaultTextRenderer___renderer;

struct DefaultTextRenderer__uType : ::uClassType
{
};

DefaultTextRenderer__uType* DefaultTextRenderer__typeof();

void DefaultTextRenderer___ObjInit(DefaultTextRenderer* __this, ::app::Uno::Content::Fonts::FontFace* fontFace);
void DefaultTextRenderer__BeginRendering(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
void DefaultTextRenderer__DrawLine(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line);
void DefaultTextRenderer__EndRendering(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc);
void DefaultTextRenderer__EnsureRendererCapacity(::uStatic* __this, int maxCharCount);
::app::Uno::Content::Fonts::FontFace* DefaultTextRenderer__get_FontFace(DefaultTextRenderer* __this);
::app::Uno::Content::Fonts::TextRenderer* DefaultTextRenderer__get_renderer(::uStatic* __this);
::app::Uno::Content::Fonts::BitmapFont* DefaultTextRenderer__GetBitmapFont(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, bool includeZoom);
float DefaultTextRenderer__GetLineHeight(DefaultTextRenderer* __this, float fontSize);
float DefaultTextRenderer__GetLineHeightVirtual(DefaultTextRenderer* __this, float fontSize, float absoluteZoom);
::app::Uno::Float2 DefaultTextRenderer__MeasureString(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::uString* s);
::app::Uno::Float2 DefaultTextRenderer__MeasureStringVirtual(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::uString* s);
DefaultTextRenderer* DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace);
void DefaultTextRenderer__set_FontFace(DefaultTextRenderer* __this, ::app::Uno::Content::Fonts::FontFace* value);

struct DefaultTextRenderer : ::uObject
{
    float _fontSize;
    float _absoluteZoom;
    ::app::Uno::Float4x4 _transform;
    ::uStrong< ::app::Uno::Content::Fonts::BitmapFont*> _bitmapFont;
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> _FontFace;

    void _ObjInit(::app::Uno::Content::Fonts::FontFace* fontFace) { DefaultTextRenderer___ObjInit(this, fontFace); }
    void BeginRendering(float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
    void DrawLine(::app::Fuse::DrawContext* dc, float x, float y, ::uString* line) { DefaultTextRenderer__DrawLine(this, dc, x, y, line); }
    void EndRendering(::app::Fuse::DrawContext* dc) { DefaultTextRenderer__EndRendering(this, dc); }
    ::app::Uno::Content::Fonts::FontFace* FontFace() { return DefaultTextRenderer__get_FontFace(this); }
    ::app::Uno::Content::Fonts::BitmapFont* GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) { return DefaultTextRenderer__GetBitmapFont(this, fontSize, absoluteZoom, includeZoom); }
    float GetLineHeight(float fontSize) { return DefaultTextRenderer__GetLineHeight(this, fontSize); }
    float GetLineHeightVirtual(float fontSize, float absoluteZoom) { return DefaultTextRenderer__GetLineHeightVirtual(this, fontSize, absoluteZoom); }
    ::app::Uno::Float2 MeasureString(float fontSize, float absoluteZoom, ::uString* s);
    ::app::Uno::Float2 MeasureStringVirtual(float fontSize, float absoluteZoom, ::uString* s);
    void FontFace(::app::Uno::Content::Fonts::FontFace* value) { DefaultTextRenderer__set_FontFace(this, value); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

inline void DefaultTextRenderer::BeginRendering(float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength) { DefaultTextRenderer__BeginRendering(this, fontSize, absoluteZoom, transform, bounds, textColor, maxTextLength); }
inline ::app::Uno::Float2 DefaultTextRenderer::MeasureString(float fontSize, float absoluteZoom, ::uString* s) { return DefaultTextRenderer__MeasureString(this, fontSize, absoluteZoom, s); }
inline ::app::Uno::Float2 DefaultTextRenderer::MeasureStringVirtual(float fontSize, float absoluteZoom, ::uString* s) { return DefaultTextRenderer__MeasureStringVirtual(this, fontSize, absoluteZoom, s); }

}}}}


#endif

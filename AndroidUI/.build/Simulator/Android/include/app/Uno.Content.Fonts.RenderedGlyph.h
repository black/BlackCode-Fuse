// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_RENDERED_GLYPH_H__
#define __APP_UNO_CONTENT_FONTS_RENDERED_GLYPH_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Images { struct Bitmap; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct RenderedGlyph;

struct RenderedGlyph__uType : ::uStructType
{
};

RenderedGlyph__uType* RenderedGlyph__typeof();

void RenderedGlyph___ObjInit(RenderedGlyph* __this, ::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap);
RenderedGlyph RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap);

struct RenderedGlyph
{
    ::app::Uno::Float2 Advance;
    ::app::Uno::Float2 Bearing;
    ::uStrong< ::app::Uno::Content::Images::Bitmap*> Bitmap;

    void _ObjInit(::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap) { RenderedGlyph___ObjInit(this, advance, bearing, bitmap); }
};

}}}}


#endif

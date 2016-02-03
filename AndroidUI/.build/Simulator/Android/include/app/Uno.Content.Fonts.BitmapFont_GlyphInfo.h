// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_BITMAP_FONT_GLYPH_INFO_H__
#define __APP_UNO_CONTENT_FONTS_BITMAP_FONT_GLYPH_INFO_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.UShort2.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct BitmapFont_GlyphInfo;

struct BitmapFont_GlyphInfo__uType : ::uStructType
{
};

BitmapFont_GlyphInfo__uType* BitmapFont_GlyphInfo__typeof();

struct BitmapFont_GlyphInfo
{
    float Advance;
    ::app::Uno::Float2 Bearing;
    ::app::Uno::Float2 Size;
    ::app::Uno::UShort2 UpperLeft;
    ::app::Uno::UShort2 LowerRight;
};

}}}}


#endif

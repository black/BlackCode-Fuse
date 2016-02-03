// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__

#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph;

struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uStructType
{
};

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof();

void KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
::uChar KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Content::Fonts::RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this);
KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);

struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph
{
    ::uChar _key;
    ::app::Uno::Content::Fonts::RenderedGlyph _value;

    void _ObjInit(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value) { KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this, key, value); }
    ::uChar Key() { return KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(this); }
    ::app::Uno::Content::Fonts::RenderedGlyph Value() { return KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(this); }
};

}}}


#endif

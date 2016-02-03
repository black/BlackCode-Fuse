// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__UNO_CONTENT_FONTS_BITMAP_FON_48BC2940_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__UNO_CONTENT_FONTS_BITMAP_FON_48BC2940_H__

#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo;

struct KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType : ::uStructType
{
};

KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof();

void KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
::uChar KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Key(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
::app::Uno::Content::Fonts::BitmapFont_GlyphInfo KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Value(KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);

struct KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo
{
    ::uChar _key;
    ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo _value;

    void _ObjInit(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value) { KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(this, key, value); }
    ::uChar Key() { return KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Key(this); }
    ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo Value() { return KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Value(this); }
};

}}}


#endif

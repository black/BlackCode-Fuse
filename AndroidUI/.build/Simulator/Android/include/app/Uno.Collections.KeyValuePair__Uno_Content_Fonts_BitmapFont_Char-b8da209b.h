// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_CONTENT_FONTS_BITMAP_FONT_CHAR_B8DA209B_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_CONTENT_FONTS_BITMAP_FONT_CHAR_B8DA209B_H__

#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float;

struct KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__uType : ::uStructType
{
};

KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof();

void KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value);
::app::Uno::Content::Fonts::BitmapFont_CharPair KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Key(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
float KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Value(KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value);

struct KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float
{
    ::app::Uno::Content::Fonts::BitmapFont_CharPair _key;
    float _value;

    void _ObjInit(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value) { KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(this, key, value); }
    ::app::Uno::Content::Fonts::BitmapFont_CharPair Key() { return KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Key(this); }
    float Value() { return KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Value(this); }
};

}}}


#endif

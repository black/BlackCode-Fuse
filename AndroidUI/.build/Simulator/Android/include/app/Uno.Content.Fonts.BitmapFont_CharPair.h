// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_BITMAP_FONT_CHAR_PAIR_H__
#define __APP_UNO_CONTENT_FONTS_BITMAP_FONT_CHAR_PAIR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct BitmapFont_CharPair;

struct BitmapFont_CharPair__uType : ::uStructType
{
};

BitmapFont_CharPair__uType* BitmapFont_CharPair__typeof();

void BitmapFont_CharPair___ObjInit(BitmapFont_CharPair* __this, ::uChar left, ::uChar right);
int BitmapFont_CharPair__GetHashCode(BitmapFont_CharPair* __this);
BitmapFont_CharPair BitmapFont_CharPair__New_1(::uStatic* __this, ::uChar left, ::uChar right);

struct BitmapFont_CharPair
{
    ::uChar Left;
    ::uChar Right;

    void _ObjInit(::uChar left, ::uChar right) { BitmapFont_CharPair___ObjInit(this, left, right); }
    int GetHashCode() { return BitmapFont_CharPair__GetHashCode(this); }
};

}}}}


#endif

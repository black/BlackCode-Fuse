// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_POSITION_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_POSITION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct TextPosition;

extern ::uStaticStrong< TextPosition*> TextPosition__Default;

struct TextPosition__uType : ::uClassType
{
};

TextPosition__uType* TextPosition__typeof();

void TextPosition___ObjInit(TextPosition* __this, int l, int c);
void TextPosition___TypeInit(::uStatic* __this);
bool TextPosition__Equals(TextPosition* __this, ::uObject* obj);
int TextPosition__GetHashCode(TextPosition* __this);
TextPosition* TextPosition__Max(::uStatic* __this, TextPosition* a, TextPosition* b);
TextPosition* TextPosition__Min(::uStatic* __this, TextPosition* a, TextPosition* b);
TextPosition* TextPosition__New_1(::uStatic* __this, int l, int c);
bool TextPosition__op_Equality(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_GreaterThan(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_GreaterThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_Inequality(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_LessThan(::uStatic* __this, TextPosition* a, TextPosition* b);
bool TextPosition__op_LessThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b);

struct TextPosition : ::uObject
{
    int Line;
    int Char;

    void _ObjInit(int l, int c) { TextPosition___ObjInit(this, l, c); }
};

}}}}


#endif

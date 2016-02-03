// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_SHORT2_H__
#define __APP_UNO_SHORT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Short2;

struct Short2__uType : ::uStructType
{
};

Short2__uType* Short2__typeof();

void Short2___ObjInit_1(Short2* __this, ::uShort x, ::uShort y);
bool Short2__Equals(Short2* __this, ::uObject* o);
::uShort Short2__get_Item(Short2* __this, int index);
int Short2__GetHashCode(Short2* __this);
Short2 Short2__New_2(::uStatic* __this, ::uShort x, ::uShort y);
void Short2__set_Item(Short2* __this, int index, ::uShort value);
::uString* Short2__ToString(Short2* __this);

struct Short2
{
    ::uShort X;
    ::uShort Y;

    void _ObjInit_1(::uShort x, ::uShort y) { Short2___ObjInit_1(this, x, y); }
    bool Equals(::uObject* o) { return Short2__Equals(this, o); }
    ::uShort Item(int index) { return Short2__get_Item(this, index); }
    int GetHashCode() { return Short2__GetHashCode(this); }
    void Item(int index, ::uShort value) { Short2__set_Item(this, index, value); }
    ::uString* ToString() { return Short2__ToString(this); }
};

}}


#endif

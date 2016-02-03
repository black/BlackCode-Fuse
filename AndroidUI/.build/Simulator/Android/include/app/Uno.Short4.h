// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_SHORT4_H__
#define __APP_UNO_SHORT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Short4;

struct Short4__uType : ::uStructType
{
};

Short4__uType* Short4__typeof();

void Short4___ObjInit_1(Short4* __this, ::uShort x, ::uShort y, ::uShort z, ::uShort w);
bool Short4__Equals(Short4* __this, ::uObject* o);
::uShort Short4__get_Item(Short4* __this, int index);
int Short4__GetHashCode(Short4* __this);
Short4 Short4__New_2(::uStatic* __this, ::uShort x, ::uShort y, ::uShort z, ::uShort w);
void Short4__set_Item(Short4* __this, int index, ::uShort value);
::uString* Short4__ToString(Short4* __this);

struct Short4
{
    ::uShort X;
    ::uShort Y;
    ::uShort Z;
    ::uShort W;

    void _ObjInit_1(::uShort x, ::uShort y, ::uShort z, ::uShort w) { Short4___ObjInit_1(this, x, y, z, w); }
    bool Equals(::uObject* o) { return Short4__Equals(this, o); }
    ::uShort Item(int index) { return Short4__get_Item(this, index); }
    int GetHashCode() { return Short4__GetHashCode(this); }
    void Item(int index, ::uShort value) { Short4__set_Item(this, index, value); }
    ::uString* ToString() { return Short4__ToString(this); }
};

}}


#endif

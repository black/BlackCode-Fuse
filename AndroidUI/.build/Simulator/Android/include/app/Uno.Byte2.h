// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BYTE2_H__
#define __APP_UNO_BYTE2_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Byte2;

struct Byte2__uType : ::uStructType
{
};

Byte2__uType* Byte2__typeof();

void Byte2___ObjInit_1(Byte2* __this, ::uByte x, ::uByte y);
bool Byte2__Equals(Byte2* __this, ::uObject* o);
::uByte Byte2__get_Item(Byte2* __this, int index);
int Byte2__GetHashCode(Byte2* __this);
Byte2 Byte2__New_2(::uStatic* __this, ::uByte x, ::uByte y);
void Byte2__set_Item(Byte2* __this, int index, ::uByte value);
::uString* Byte2__ToString(Byte2* __this);

struct Byte2
{
    ::uByte X;
    ::uByte Y;

    void _ObjInit_1(::uByte x, ::uByte y) { Byte2___ObjInit_1(this, x, y); }
    bool Equals(::uObject* o) { return Byte2__Equals(this, o); }
    ::uByte Item(int index) { return Byte2__get_Item(this, index); }
    int GetHashCode() { return Byte2__GetHashCode(this); }
    void Item(int index, ::uByte value) { Byte2__set_Item(this, index, value); }
    ::uString* ToString() { return Byte2__ToString(this); }
};

}}


#endif

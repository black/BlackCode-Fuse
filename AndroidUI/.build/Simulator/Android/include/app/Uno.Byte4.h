// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BYTE4_H__
#define __APP_UNO_BYTE4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Byte4;

struct Byte4__uType : ::uStructType
{
};

Byte4__uType* Byte4__typeof();

void Byte4___ObjInit_1(Byte4* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w);
bool Byte4__Equals(Byte4* __this, ::uObject* o);
::uByte Byte4__get_Item(Byte4* __this, int index);
int Byte4__GetHashCode(Byte4* __this);
Byte4 Byte4__New_2(::uStatic* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w);
void Byte4__set_Item(Byte4* __this, int index, ::uByte value);
::uString* Byte4__ToString(Byte4* __this);

struct Byte4
{
    ::uByte X;
    ::uByte Y;
    ::uByte Z;
    ::uByte W;

    void _ObjInit_1(::uByte x, ::uByte y, ::uByte z, ::uByte w) { Byte4___ObjInit_1(this, x, y, z, w); }
    bool Equals(::uObject* o) { return Byte4__Equals(this, o); }
    ::uByte Item(int index) { return Byte4__get_Item(this, index); }
    int GetHashCode() { return Byte4__GetHashCode(this); }
    void Item(int index, ::uByte value) { Byte4__set_Item(this, index, value); }
    ::uString* ToString() { return Byte4__ToString(this); }
};

}}


#endif

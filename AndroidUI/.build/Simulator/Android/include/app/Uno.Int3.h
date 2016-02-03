// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT3_H__
#define __APP_UNO_INT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Int3;

struct Int3__uType : ::uStructType
{
};

Int3__uType* Int3__typeof();

void Int3___ObjInit_1(Int3* __this, int x, int y, int z);
bool Int3__Equals(Int3* __this, ::uObject* o);
int Int3__get_Item(Int3* __this, int index);
int Int3__GetHashCode(Int3* __this);
Int3 Int3__New_2(::uStatic* __this, int x, int y, int z);
void Int3__set_Item(Int3* __this, int index, int value);
::uString* Int3__ToString(Int3* __this);

struct Int3
{
    int X;
    int Y;
    int Z;

    void _ObjInit_1(int x, int y, int z) { Int3___ObjInit_1(this, x, y, z); }
    bool Equals(::uObject* o) { return Int3__Equals(this, o); }
    int Item(int index) { return Int3__get_Item(this, index); }
    int GetHashCode() { return Int3__GetHashCode(this); }
    void Item(int index, int value) { Int3__set_Item(this, index, value); }
    ::uString* ToString() { return Int3__ToString(this); }
};

}}


#endif

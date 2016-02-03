// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT4_H__
#define __APP_UNO_INT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {

struct Int4;

struct Int4__uType : ::uStructType
{
};

Int4__uType* Int4__typeof();

void Int4___ObjInit_1(Int4* __this, int x, int y, int z, int w);
void Int4___ObjInit_6(Int4* __this, ::app::Uno::Int2 xy, ::app::Uno::Int2 zw);
bool Int4__Equals(Int4* __this, ::uObject* o);
int Int4__get_Item(Int4* __this, int index);
int Int4__GetHashCode(Int4* __this);
Int4 Int4__New_2(::uStatic* __this, int x, int y, int z, int w);
Int4 Int4__New_7(::uStatic* __this, ::app::Uno::Int2 xy, ::app::Uno::Int2 zw);
bool Int4__op_Inequality(::uStatic* __this, Int4 a, Int4 b);
void Int4__set_Item(Int4* __this, int index, int value);
::uString* Int4__ToString(Int4* __this);

struct Int4
{
    int X;
    int Y;
    int Z;
    int W;

    void _ObjInit_1(int x, int y, int z, int w) { Int4___ObjInit_1(this, x, y, z, w); }
    void _ObjInit_6(::app::Uno::Int2 xy, ::app::Uno::Int2 zw);
    bool Equals(::uObject* o) { return Int4__Equals(this, o); }
    int Item(int index) { return Int4__get_Item(this, index); }
    int GetHashCode() { return Int4__GetHashCode(this); }
    void Item(int index, int value) { Int4__set_Item(this, index, value); }
    ::uString* ToString() { return Int4__ToString(this); }
};

}}

#include <app/Uno.Int2.h>

namespace app {
namespace Uno {

inline void Int4::_ObjInit_6(::app::Uno::Int2 xy, ::app::Uno::Int2 zw) { Int4___ObjInit_6(this, xy, zw); }

}}


#endif

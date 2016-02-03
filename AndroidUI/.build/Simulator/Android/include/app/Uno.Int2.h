// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT2_H__
#define __APP_UNO_INT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {

struct Int2;

struct Int2__uType : ::uStructType
{
};

Int2__uType* Int2__typeof();

void Int2___ObjInit(Int2* __this, int xy);
void Int2___ObjInit_1(Int2* __this, int x, int y);
bool Int2__Equals(Int2* __this, ::uObject* o);
int Int2__get_Item(Int2* __this, int index);
int Int2__GetHashCode(Int2* __this);
Int2 Int2__New_1(::uStatic* __this, int xy);
Int2 Int2__New_2(::uStatic* __this, int x, int y);
Int2 Int2__op_Addition_1(::uStatic* __this, Int2 a, Int2 b);
Int2 Int2__op_Explicit(::uStatic* __this, ::app::Uno::Float2 v);
bool Int2__op_Inequality(::uStatic* __this, Int2 a, Int2 b);
Int2 Int2__op_Multiply(::uStatic* __this, Int2 a, int b);
Int2 Int2__op_Subtraction_1(::uStatic* __this, Int2 a, Int2 b);
void Int2__set_Item(Int2* __this, int index, int value);
::uString* Int2__ToString(Int2* __this);

struct Int2
{
    int X;
    int Y;

    void _ObjInit(int xy) { Int2___ObjInit(this, xy); }
    void _ObjInit_1(int x, int y) { Int2___ObjInit_1(this, x, y); }
    bool Equals(::uObject* o) { return Int2__Equals(this, o); }
    int Item(int index) { return Int2__get_Item(this, index); }
    int GetHashCode() { return Int2__GetHashCode(this); }
    void Item(int index, int value) { Int2__set_Item(this, index, value); }
    ::uString* ToString() { return Int2__ToString(this); }
};

}}


#endif

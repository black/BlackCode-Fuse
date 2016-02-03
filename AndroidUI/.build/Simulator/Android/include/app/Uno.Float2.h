// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT2_H__
#define __APP_UNO_FLOAT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {

struct Float2;

struct Float2__uType : ::uStructType
{
};

Float2__uType* Float2__typeof();

void Float2___ObjInit(Float2* __this, float xy);
void Float2___ObjInit_1(Float2* __this, float x, float y);
bool Float2__Equals(Float2* __this, ::uObject* o);
float Float2__get_Item(Float2* __this, int index);
int Float2__GetHashCode(Float2* __this);
Float2 Float2__New_1(::uStatic* __this, float xy);
Float2 Float2__New_2(::uStatic* __this, float x, float y);
Float2 Float2__op_Addition(::uStatic* __this, float a, Float2 b);
Float2 Float2__op_Addition_1(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Addition_2(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Division_1(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Division_2(::uStatic* __this, Float2 a, Float2 b);
bool Float2__op_Equality(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Implicit_1(::uStatic* __this, ::app::Uno::Int2 a);
bool Float2__op_Inequality(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Multiply(::uStatic* __this, float a, Float2 b);
Float2 Float2__op_Multiply_1(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Multiply_2(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Subtraction_1(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Subtraction_2(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_UnaryNegation(::uStatic* __this, Float2 a);
void Float2__set_Item(Float2* __this, int index, float value);
::uString* Float2__ToString(Float2* __this);

struct Float2
{
    float X;
    float Y;

    void _ObjInit(float xy) { Float2___ObjInit(this, xy); }
    void _ObjInit_1(float x, float y) { Float2___ObjInit_1(this, x, y); }
    bool Equals(::uObject* o) { return Float2__Equals(this, o); }
    float Item(int index) { return Float2__get_Item(this, index); }
    int GetHashCode() { return Float2__GetHashCode(this); }
    void Item(int index, float value) { Float2__set_Item(this, index, value); }
    ::uString* ToString() { return Float2__ToString(this); }
};

}}


#endif

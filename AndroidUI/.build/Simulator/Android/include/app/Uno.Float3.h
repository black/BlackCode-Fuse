// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT3_H__
#define __APP_UNO_FLOAT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {

struct Float3;

struct Float3__uType : ::uStructType
{
};

Float3__uType* Float3__typeof();

void Float3___ObjInit(Float3* __this, float xyz);
void Float3___ObjInit_1(Float3* __this, float x, float y, float z);
void Float3___ObjInit_3(Float3* __this, ::app::Uno::Float2 xy, float z);
bool Float3__Equals(Float3* __this, ::uObject* o);
float Float3__get_Item(Float3* __this, int index);
int Float3__GetHashCode(Float3* __this);
Float3 Float3__New_1(::uStatic* __this, float xyz);
Float3 Float3__New_2(::uStatic* __this, float x, float y, float z);
Float3 Float3__New_4(::uStatic* __this, ::app::Uno::Float2 xy, float z);
Float3 Float3__op_Addition_1(::uStatic* __this, Float3 a, float b);
Float3 Float3__op_Addition_2(::uStatic* __this, Float3 a, Float3 b);
Float3 Float3__op_Division_1(::uStatic* __this, Float3 a, float b);
Float3 Float3__op_Division_2(::uStatic* __this, Float3 a, Float3 b);
bool Float3__op_Inequality(::uStatic* __this, Float3 a, Float3 b);
Float3 Float3__op_Multiply(::uStatic* __this, float a, Float3 b);
Float3 Float3__op_Multiply_1(::uStatic* __this, Float3 a, float b);
Float3 Float3__op_Multiply_2(::uStatic* __this, Float3 a, Float3 b);
Float3 Float3__op_Subtraction_2(::uStatic* __this, Float3 a, Float3 b);
Float3 Float3__op_UnaryNegation(::uStatic* __this, Float3 a);
void Float3__set_Item(Float3* __this, int index, float value);
::uString* Float3__ToString(Float3* __this);

struct Float3
{
    float X;
    float Y;
    float Z;

    void _ObjInit(float xyz) { Float3___ObjInit(this, xyz); }
    void _ObjInit_1(float x, float y, float z) { Float3___ObjInit_1(this, x, y, z); }
    void _ObjInit_3(::app::Uno::Float2 xy, float z);
    bool Equals(::uObject* o) { return Float3__Equals(this, o); }
    float Item(int index) { return Float3__get_Item(this, index); }
    int GetHashCode() { return Float3__GetHashCode(this); }
    void Item(int index, float value) { Float3__set_Item(this, index, value); }
    ::uString* ToString() { return Float3__ToString(this); }
};

}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {

inline void Float3::_ObjInit_3(::app::Uno::Float2 xy, float z) { Float3___ObjInit_3(this, xy, z); }

}}


#endif

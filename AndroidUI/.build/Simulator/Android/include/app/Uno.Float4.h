// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT4_H__
#define __APP_UNO_FLOAT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {

struct Float4;

struct Float4__uType : ::uStructType
{
};

Float4__uType* Float4__typeof();

void Float4___ObjInit(Float4* __this, float xyzw);
void Float4___ObjInit_1(Float4* __this, float x, float y, float z, float w);
void Float4___ObjInit_5(Float4* __this, ::app::Uno::Float2 xy, float z, float w);
void Float4___ObjInit_6(Float4* __this, ::app::Uno::Float2 xy, ::app::Uno::Float2 zw);
void Float4___ObjInit_7(Float4* __this, ::app::Uno::Float3 xyz, float w);
bool Float4__Equals(Float4* __this, ::uObject* o);
Float4 Float4__get_Identity(::uStatic* __this);
float Float4__get_Item(Float4* __this, int index);
int Float4__GetHashCode(Float4* __this);
Float4 Float4__New_1(::uStatic* __this, float xyzw);
Float4 Float4__New_2(::uStatic* __this, float x, float y, float z, float w);
Float4 Float4__New_6(::uStatic* __this, ::app::Uno::Float2 xy, float z, float w);
Float4 Float4__New_7(::uStatic* __this, ::app::Uno::Float2 xy, ::app::Uno::Float2 zw);
Float4 Float4__New_8(::uStatic* __this, ::app::Uno::Float3 xyz, float w);
Float4 Float4__op_Addition_1(::uStatic* __this, Float4 a, float b);
Float4 Float4__op_Addition_2(::uStatic* __this, Float4 a, Float4 b);
Float4 Float4__op_Division_1(::uStatic* __this, Float4 a, float b);
Float4 Float4__op_Division_2(::uStatic* __this, Float4 a, Float4 b);
bool Float4__op_Equality(::uStatic* __this, Float4 a, Float4 b);
bool Float4__op_Inequality(::uStatic* __this, Float4 a, Float4 b);
Float4 Float4__op_Multiply(::uStatic* __this, float a, Float4 b);
Float4 Float4__op_Multiply_1(::uStatic* __this, Float4 a, float b);
Float4 Float4__op_Multiply_2(::uStatic* __this, Float4 a, Float4 b);
Float4 Float4__op_Subtraction_2(::uStatic* __this, Float4 a, Float4 b);
void Float4__set_Item(Float4* __this, int index, float value);
::uString* Float4__ToString(Float4* __this);

struct Float4
{
    float X;
    float Y;
    float Z;
    float W;

    void _ObjInit(float xyzw) { Float4___ObjInit(this, xyzw); }
    void _ObjInit_1(float x, float y, float z, float w) { Float4___ObjInit_1(this, x, y, z, w); }
    void _ObjInit_5(::app::Uno::Float2 xy, float z, float w);
    void _ObjInit_6(::app::Uno::Float2 xy, ::app::Uno::Float2 zw);
    void _ObjInit_7(::app::Uno::Float3 xyz, float w);
    bool Equals(::uObject* o) { return Float4__Equals(this, o); }
    float Item(int index) { return Float4__get_Item(this, index); }
    int GetHashCode() { return Float4__GetHashCode(this); }
    void Item(int index, float value) { Float4__set_Item(this, index, value); }
    ::uString* ToString() { return Float4__ToString(this); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Uno {

inline void Float4::_ObjInit_5(::app::Uno::Float2 xy, float z, float w) { Float4___ObjInit_5(this, xy, z, w); }
inline void Float4::_ObjInit_6(::app::Uno::Float2 xy, ::app::Uno::Float2 zw) { Float4___ObjInit_6(this, xy, zw); }
inline void Float4::_ObjInit_7(::app::Uno::Float3 xyz, float w) { Float4___ObjInit_7(this, xyz, w); }

}}


#endif

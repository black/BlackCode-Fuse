// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT3X3_H__
#define __APP_UNO_FLOAT3X3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {

struct Float3x3;

struct Float3x3__uType : ::uStructType
{
};

Float3x3__uType* Float3x3__typeof();

void Float3x3___ObjInit(Float3x3* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
bool Float3x3__Equals(Float3x3* __this, ::uObject* o);
Float3x3 Float3x3__get_Identity(::uStatic* __this);
::app::Uno::Float3 Float3x3__get_Item(Float3x3* __this, int index);
int Float3x3__GetHashCode(Float3x3* __this);
Float3x3 Float3x3__New_1(::uStatic* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
void Float3x3__set_Item(Float3x3* __this, int index, ::app::Uno::Float3 value);
::uString* Float3x3__ToString(Float3x3* __this);

struct Float3x3
{
    float M11;
    float M12;
    float M13;
    float M21;
    float M22;
    float M23;
    float M31;
    float M32;
    float M33;

    void _ObjInit(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) { Float3x3___ObjInit(this, m11, m12, m13, m21, m22, m23, m31, m32, m33); }
    bool Equals(::uObject* o) { return Float3x3__Equals(this, o); }
    ::app::Uno::Float3 Item(int index);
    int GetHashCode() { return Float3x3__GetHashCode(this); }
    void Item(int index, ::app::Uno::Float3 value);
    ::uString* ToString() { return Float3x3__ToString(this); }
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Uno {

inline ::app::Uno::Float3 Float3x3::Item(int index) { return Float3x3__get_Item(this, index); }
inline void Float3x3::Item(int index, ::app::Uno::Float3 value) { Float3x3__set_Item(this, index, value); }

}}


#endif

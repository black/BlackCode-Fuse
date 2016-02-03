// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT3_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float3;

struct Blender__float3__uType : ::uClassType
{
    ::app::Uno::Float3(*__fp_Add)(Blender__float3*, ::app::Uno::Float3, ::app::Uno::Float3);
    ::app::Uno::Float3(*__fp_get_One)(Blender__float3*);
    ::app::Uno::Float3(*__fp_get_Zero)(Blender__float3*);
    double(*__fp_Length)(Blender__float3*, ::app::Uno::Float3);
    ::app::Uno::Float3(*__fp_Lerp)(Blender__float3*, ::app::Uno::Float3, ::app::Uno::Float3, double);
    ::app::Uno::Float3(*__fp_Sub)(Blender__float3*, ::app::Uno::Float3, ::app::Uno::Float3);
    ::app::Uno::Float3(*__fp_ToUnit)(Blender__float3*, ::app::Uno::Float3, double*);
    ::app::Uno::Float3(*__fp_Weight)(Blender__float3*, ::app::Uno::Float3, double);
};

Blender__float3__uType* Blender__float3__typeof();

void Blender__float3___ObjInit(Blender__float3* __this);
::app::Uno::Float3 Blender__float3__UnitWeight(Blender__float3* __this, ::app::Uno::Float3 v, double w);

struct Blender__float3 : ::uObject
{
    void _ObjInit() { Blender__float3___ObjInit(this); }
    ::app::Uno::Float3 Add(::app::Uno::Float3 a, ::app::Uno::Float3 b);
    ::app::Uno::Float3 One();
    ::app::Uno::Float3 Zero();
    double Length(::app::Uno::Float3 a);
    ::app::Uno::Float3 Lerp(::app::Uno::Float3 a, ::app::Uno::Float3 b, double d);
    ::app::Uno::Float3 Sub(::app::Uno::Float3 a, ::app::Uno::Float3 b);
    ::app::Uno::Float3 ToUnit(::app::Uno::Float3 a, double* length);
    ::app::Uno::Float3 UnitWeight(::app::Uno::Float3 v, double w);
    ::app::Uno::Float3 Weight(::app::Uno::Float3 v, double w);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float3 Blender__float3::Add(::app::Uno::Float3 a, ::app::Uno::Float3 b) { return (((Blender__float3__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Float3 Blender__float3::One() { return (((Blender__float3__uType*)this->__obj_type)->__fp_get_One)(this); }
inline ::app::Uno::Float3 Blender__float3::Zero() { return (((Blender__float3__uType*)this->__obj_type)->__fp_get_Zero)(this); }
inline double Blender__float3::Length(::app::Uno::Float3 a) { return (((Blender__float3__uType*)this->__obj_type)->__fp_Length)(this, a); }
inline ::app::Uno::Float3 Blender__float3::Lerp(::app::Uno::Float3 a, ::app::Uno::Float3 b, double d) { return (((Blender__float3__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
inline ::app::Uno::Float3 Blender__float3::Sub(::app::Uno::Float3 a, ::app::Uno::Float3 b) { return (((Blender__float3__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
inline ::app::Uno::Float3 Blender__float3::ToUnit(::app::Uno::Float3 a, double* length) { return (((Blender__float3__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
inline ::app::Uno::Float3 Blender__float3::UnitWeight(::app::Uno::Float3 v, double w) { return Blender__float3__UnitWeight(this, v, w); }
inline ::app::Uno::Float3 Blender__float3::Weight(::app::Uno::Float3 v, double w) { return (((Blender__float3__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }

}}}


#endif

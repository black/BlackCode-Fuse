// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT4_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float4;

struct Blender__float4__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_Add)(Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4);
    ::app::Uno::Float4(*__fp_get_One)(Blender__float4*);
    ::app::Uno::Float4(*__fp_get_Zero)(Blender__float4*);
    double(*__fp_Length)(Blender__float4*, ::app::Uno::Float4);
    ::app::Uno::Float4(*__fp_Lerp)(Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4, double);
    ::app::Uno::Float4(*__fp_Sub)(Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4);
    ::app::Uno::Float4(*__fp_ToUnit)(Blender__float4*, ::app::Uno::Float4, double*);
    ::app::Uno::Float4(*__fp_Weight)(Blender__float4*, ::app::Uno::Float4, double);
};

Blender__float4__uType* Blender__float4__typeof();

void Blender__float4___ObjInit(Blender__float4* __this);
::app::Uno::Float4 Blender__float4__UnitWeight(Blender__float4* __this, ::app::Uno::Float4 v, double w);

struct Blender__float4 : ::uObject
{
    void _ObjInit() { Blender__float4___ObjInit(this); }
    ::app::Uno::Float4 Add(::app::Uno::Float4 a, ::app::Uno::Float4 b);
    ::app::Uno::Float4 One();
    ::app::Uno::Float4 Zero();
    double Length(::app::Uno::Float4 a);
    ::app::Uno::Float4 Lerp(::app::Uno::Float4 a, ::app::Uno::Float4 b, double d);
    ::app::Uno::Float4 Sub(::app::Uno::Float4 a, ::app::Uno::Float4 b);
    ::app::Uno::Float4 ToUnit(::app::Uno::Float4 a, double* length);
    ::app::Uno::Float4 UnitWeight(::app::Uno::Float4 v, double w);
    ::app::Uno::Float4 Weight(::app::Uno::Float4 v, double w);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float4 Blender__float4::Add(::app::Uno::Float4 a, ::app::Uno::Float4 b) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Float4 Blender__float4::One() { return (((Blender__float4__uType*)this->__obj_type)->__fp_get_One)(this); }
inline ::app::Uno::Float4 Blender__float4::Zero() { return (((Blender__float4__uType*)this->__obj_type)->__fp_get_Zero)(this); }
inline double Blender__float4::Length(::app::Uno::Float4 a) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Length)(this, a); }
inline ::app::Uno::Float4 Blender__float4::Lerp(::app::Uno::Float4 a, ::app::Uno::Float4 b, double d) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
inline ::app::Uno::Float4 Blender__float4::Sub(::app::Uno::Float4 a, ::app::Uno::Float4 b) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
inline ::app::Uno::Float4 Blender__float4::ToUnit(::app::Uno::Float4 a, double* length) { return (((Blender__float4__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
inline ::app::Uno::Float4 Blender__float4::UnitWeight(::app::Uno::Float4 v, double w) { return Blender__float4__UnitWeight(this, v, w); }
inline ::app::Uno::Float4 Blender__float4::Weight(::app::Uno::Float4 v, double w) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }

}}}


#endif

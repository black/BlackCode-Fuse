// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_MOTION_SIMULATION__FLOAT4_H__
#define __APP_EXPERIMENTAL_PHYSICS_MOTION_SIMULATION__FLOAT4_H__

#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* MotionSimulation__float4__typeof();

struct MotionSimulation__float4
{
    ::app::Uno::Float4(*__fp_get_Position)(void*);
    void(*__fp_set_Position)(void*, ::app::Uno::Float4);

    static ::app::Uno::Float4 Position(::uObject* __this);
    static void Position(::uObject* __this, ::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Experimental {
namespace Physics {

inline ::app::Uno::Float4 MotionSimulation__float4::Position(::uObject* __this) { return ((MotionSimulation__float4*)uGetInterfacePtr(__this, MotionSimulation__float4__typeof()))->__fp_get_Position((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline void MotionSimulation__float4::Position(::uObject* __this, ::app::Uno::Float4 value) { ((MotionSimulation__float4*)uGetInterfacePtr(__this, MotionSimulation__float4__typeof()))->__fp_set_Position((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }

}}}


#endif

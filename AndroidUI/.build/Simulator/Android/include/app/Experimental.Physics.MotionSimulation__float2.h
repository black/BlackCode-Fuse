// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_MOTION_SIMULATION__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_MOTION_SIMULATION__FLOAT2_H__

#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* MotionSimulation__float2__typeof();

struct MotionSimulation__float2
{
    ::app::Uno::Float2(*__fp_get_Position)(void*);
    ::app::Uno::Float2(*__fp_get_Velocity)(void*);
    void(*__fp_set_Position)(void*, ::app::Uno::Float2);
    void(*__fp_set_Velocity)(void*, ::app::Uno::Float2);

    static ::app::Uno::Float2 Position(::uObject* __this);
    static ::app::Uno::Float2 Velocity(::uObject* __this);
    static void Position(::uObject* __this, ::app::Uno::Float2 value);
    static void Velocity(::uObject* __this, ::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Experimental {
namespace Physics {

inline ::app::Uno::Float2 MotionSimulation__float2::Position(::uObject* __this) { return ((MotionSimulation__float2*)uGetInterfacePtr(__this, MotionSimulation__float2__typeof()))->__fp_get_Position((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 MotionSimulation__float2::Velocity(::uObject* __this) { return ((MotionSimulation__float2*)uGetInterfacePtr(__this, MotionSimulation__float2__typeof()))->__fp_get_Velocity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline void MotionSimulation__float2::Position(::uObject* __this, ::app::Uno::Float2 value) { ((MotionSimulation__float2*)uGetInterfacePtr(__this, MotionSimulation__float2__typeof()))->__fp_set_Position((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
inline void MotionSimulation__float2::Velocity(::uObject* __this, ::app::Uno::Float2 value) { ((MotionSimulation__float2*)uGetInterfacePtr(__this, MotionSimulation__float2__typeof()))->__fp_set_Velocity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }

}}}


#endif

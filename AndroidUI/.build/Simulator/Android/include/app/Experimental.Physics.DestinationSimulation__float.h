// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_DESTINATION_SIMULATION__FLOAT_H__
#define __APP_EXPERIMENTAL_PHYSICS_DESTINATION_SIMULATION__FLOAT_H__

#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* DestinationSimulation__float__typeof();

struct DestinationSimulation__float
{
    float(*__fp_get_Destination)(void*);
    void(*__fp_set_Destination)(void*, float);

    static float Destination(::uObject* __this) { return ((DestinationSimulation__float*)uGetInterfacePtr(__this, DestinationSimulation__float__typeof()))->__fp_get_Destination((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Destination(::uObject* __this, float value) { ((DestinationSimulation__float*)uGetInterfacePtr(__this, DestinationSimulation__float__typeof()))->__fp_set_Destination((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_DESTINATION_SIMULATION__FLOAT4_H__
#define __APP_EXPERIMENTAL_PHYSICS_DESTINATION_SIMULATION__FLOAT4_H__

#include <app/Experimental.Physics.MotionSimulation__float4.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* DestinationSimulation__float4__typeof();

struct DestinationSimulation__float4
{
    ::app::Uno::Float4(*__fp_get_Destination)(void*);
    void(*__fp_set_Destination)(void*, ::app::Uno::Float4);

    static ::app::Uno::Float4 Destination(::uObject* __this);
    static void Destination(::uObject* __this, ::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Experimental {
namespace Physics {

inline ::app::Uno::Float4 DestinationSimulation__float4::Destination(::uObject* __this) { return ((DestinationSimulation__float4*)uGetInterfacePtr(__this, DestinationSimulation__float4__typeof()))->__fp_get_Destination((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline void DestinationSimulation__float4::Destination(::uObject* __this, ::app::Uno::Float4 value) { ((DestinationSimulation__float4*)uGetInterfacePtr(__this, DestinationSimulation__float4__typeof()))->__fp_set_Destination((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }

}}}


#endif

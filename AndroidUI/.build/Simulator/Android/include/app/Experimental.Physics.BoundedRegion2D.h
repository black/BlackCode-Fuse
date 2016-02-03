// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_BOUNDED_REGION2_D_H__
#define __APP_EXPERIMENTAL_PHYSICS_BOUNDED_REGION2_D_H__

#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* BoundedRegion2D__typeof();

struct BoundedRegion2D
{
    void(*__fp_EndUser)(void*, ::app::Uno::Float2);
    ::app::Uno::Float2(*__fp_get_Destination)(void*);
    bool(*__fp_get_IsUser)(void*);
    ::app::Uno::Float2(*__fp_get_MaxPosition)(void*);
    ::app::Uno::Float2(*__fp_get_MinPosition)(void*);
    ::app::Uno::Float2(*__fp_get_OverflowExtent)(void*);
    void(*__fp_MoveTo)(void*, ::app::Uno::Float2);
    void(*__fp_set_MaxPosition)(void*, ::app::Uno::Float2);
    void(*__fp_set_MinPosition)(void*, ::app::Uno::Float2);
    void(*__fp_set_OverflowExtent)(void*, ::app::Uno::Float2);
    void(*__fp_StartUser)(void*);
    void(*__fp_StepUser)(void*, ::app::Uno::Float2);

    static void EndUser(::uObject* __this, ::app::Uno::Float2 velocity);
    static ::app::Uno::Float2 Destination(::uObject* __this);
    static bool IsUser(::uObject* __this) { return ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_get_IsUser((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Uno::Float2 MaxPosition(::uObject* __this);
    static ::app::Uno::Float2 MinPosition(::uObject* __this);
    static ::app::Uno::Float2 OverflowExtent(::uObject* __this);
    static void MoveTo(::uObject* __this, ::app::Uno::Float2 position);
    static void MaxPosition(::uObject* __this, ::app::Uno::Float2 value);
    static void MinPosition(::uObject* __this, ::app::Uno::Float2 value);
    static void OverflowExtent(::uObject* __this, ::app::Uno::Float2 value);
    static void StartUser(::uObject* __this) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_StartUser((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void StepUser(::uObject* __this, ::app::Uno::Float2 offset);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Experimental {
namespace Physics {

inline void BoundedRegion2D::EndUser(::uObject* __this, ::app::Uno::Float2 velocity) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_EndUser((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), velocity); }
inline ::app::Uno::Float2 BoundedRegion2D::Destination(::uObject* __this) { return ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_get_Destination((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 BoundedRegion2D::MaxPosition(::uObject* __this) { return ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_get_MaxPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 BoundedRegion2D::MinPosition(::uObject* __this) { return ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_get_MinPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 BoundedRegion2D::OverflowExtent(::uObject* __this) { return ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_get_OverflowExtent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline void BoundedRegion2D::MoveTo(::uObject* __this, ::app::Uno::Float2 position) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_MoveTo((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position); }
inline void BoundedRegion2D::MaxPosition(::uObject* __this, ::app::Uno::Float2 value) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_set_MaxPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
inline void BoundedRegion2D::MinPosition(::uObject* __this, ::app::Uno::Float2 value) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_set_MinPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
inline void BoundedRegion2D::OverflowExtent(::uObject* __this, ::app::Uno::Float2 value) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_set_OverflowExtent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
inline void BoundedRegion2D::StepUser(::uObject* __this, ::app::Uno::Float2 offset) { ((BoundedRegion2D*)uGetInterfacePtr(__this, BoundedRegion2D__typeof()))->__fp_StepUser((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), offset); }

}}}


#endif

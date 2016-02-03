// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Physics.ForceFieldEventTrigger.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct EnteredForceField;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class EnteredForceField :396
// {
::g::Fuse::Physics::ForceFieldTrigger_type* EnteredForceField_typeof();
void EnteredForceField__ctor_4_fn(EnteredForceField* __this);
void EnteredForceField__New1_fn(EnteredForceField** __retval);
void EnteredForceField__SetForce_fn(EnteredForceField* __this, ::g::Fuse::Physics::Body* body, float* force);
void EnteredForceField__get_Threshold_fn(EnteredForceField* __this, float* __retval);
void EnteredForceField__set_Threshold_fn(EnteredForceField* __this, float* value);

struct EnteredForceField : ::g::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    void ctor_4();
    float Threshold();
    void Threshold(float value);
    static EnteredForceField* New1();
};
// }

}}} // ::g::Fuse::Physics

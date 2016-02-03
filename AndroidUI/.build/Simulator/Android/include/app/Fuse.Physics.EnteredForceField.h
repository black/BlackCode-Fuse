// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_ENTERED_FORCE_FIELD_H__
#define __APP_FUSE_PHYSICS_ENTERED_FORCE_FIELD_H__

#include <app/Fuse.Physics.ForceFieldEventTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct EnteredForceField;

struct EnteredForceField__uType : ::app::Fuse::Physics::ForceFieldEventTrigger__uType
{
};

EnteredForceField__uType* EnteredForceField__typeof();

void EnteredForceField___ObjInit_4(EnteredForceField* __this);
float EnteredForceField__get_Threshold(EnteredForceField* __this);
EnteredForceField* EnteredForceField__New_1(::uStatic* __this);
void EnteredForceField__set_Threshold(EnteredForceField* __this, float value);
void EnteredForceField__SetForce(EnteredForceField* __this, ::app::Fuse::Physics::Body* body, float force);

struct EnteredForceField : ::app::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    void _ObjInit_4() { EnteredForceField___ObjInit_4(this); }
    float Threshold() { return EnteredForceField__get_Threshold(this); }
    void Threshold(float value) { EnteredForceField__set_Threshold(this, value); }
};

}}}


#endif

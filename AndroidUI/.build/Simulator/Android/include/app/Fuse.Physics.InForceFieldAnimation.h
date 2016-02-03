// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_IN_FORCE_FIELD_ANIMATION_H__
#define __APP_FUSE_PHYSICS_IN_FORCE_FIELD_ANIMATION_H__

#include <app/Fuse.Physics.ForceFieldTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct InForceFieldAnimation;

struct InForceFieldAnimation__uType : ::app::Fuse::Physics::ForceFieldTrigger__uType
{
};

InForceFieldAnimation__uType* InForceFieldAnimation__typeof();

void InForceFieldAnimation___ObjInit_3(InForceFieldAnimation* __this);
float InForceFieldAnimation__get_From(InForceFieldAnimation* __this);
float InForceFieldAnimation__get_To(InForceFieldAnimation* __this);
InForceFieldAnimation* InForceFieldAnimation__New_1(::uStatic* __this);
void InForceFieldAnimation__set_From(InForceFieldAnimation* __this, float value);
void InForceFieldAnimation__set_To(InForceFieldAnimation* __this, float value);
void InForceFieldAnimation__SetForce(InForceFieldAnimation* __this, ::app::Fuse::Physics::Body* body, float force);

struct InForceFieldAnimation : ::app::Fuse::Physics::ForceFieldTrigger
{
    float _From;
    float _To;

    void _ObjInit_3() { InForceFieldAnimation___ObjInit_3(this); }
    float From() { return InForceFieldAnimation__get_From(this); }
    float To() { return InForceFieldAnimation__get_To(this); }
    void From(float value) { InForceFieldAnimation__set_From(this, value); }
    void To(float value) { InForceFieldAnimation__set_To(this, value); }
};

}}}


#endif

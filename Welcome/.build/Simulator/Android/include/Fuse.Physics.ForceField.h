// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Physics.IRule.h>
namespace g{namespace Fuse{namespace Physics{struct ForceField;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Physics{

// public abstract class ForceField :302
// {
struct ForceField_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Physics::IRule interface0;
    void(*fp_OnUpdate)(::g::Fuse::Physics::ForceField*, double*, ::g::Fuse::Physics::World*);
};

ForceField_type* ForceField_typeof();
void ForceField__ctor_1_fn(ForceField* __this);
void ForceField__Fuse_Physics_IRule_Update_fn(ForceField* __this, double* deltaTime, ::g::Fuse::Physics::World* world);
void ForceField__OnRooted_fn(ForceField* __this, ::g::Fuse::Node* parentNode);
void ForceField__OnUnrooted_fn(ForceField* __this, ::g::Fuse::Node* parentNode);
void ForceField__get_World_fn(ForceField* __this, ::g::Fuse::Physics::World** __retval);

struct ForceField : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Physics::World*> _world;

    void ctor_1();
    void OnUpdate(double deltaTime, ::g::Fuse::Physics::World* world) { (((ForceField_type*)__type)->fp_OnUpdate)(this, &deltaTime, world); }
    ::g::Fuse::Physics::World* World();
};
// }

}}} // ::g::Fuse::Physics

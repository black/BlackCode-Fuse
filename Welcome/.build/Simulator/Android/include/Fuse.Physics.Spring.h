// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Physics.IRule.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct Spring;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class Spring :548
// {
struct Spring_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Physics::IRule interface0;
};

Spring_type* Spring_typeof();
void Spring__ctor_1_fn(Spring* __this);
void Spring__Fuse_Physics_IRule_Update_fn(Spring* __this, double* deltaTime, ::g::Fuse::Physics::World* world);
void Spring__get_IsRooted1_fn(Spring* __this, bool* __retval);
void Spring__get_Length_fn(Spring* __this, float* __retval);
void Spring__set_Length_fn(Spring* __this, float* value);
void Spring__New1_fn(Spring** __retval);
void Spring__OnRooted_fn(Spring* __this, ::g::Fuse::Node* parentNode);
void Spring__OnUnrooted_fn(Spring* __this, ::g::Fuse::Node* parentNode);
void Spring__get_Stiffness_fn(Spring* __this, float* __retval);
void Spring__set_Stiffness_fn(Spring* __this, float* value);
void Spring__get_Target_fn(Spring* __this, ::g::Fuse::Node** __retval);
void Spring__set_Target_fn(Spring* __this, ::g::Fuse::Node* value);

struct Spring : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Physics::Body*> _body;
    float _length;
    float _stiffness;
    uStrong< ::g::Fuse::Node*> _target;
    uStrong< ::g::Fuse::Physics::Body*> _targetBody;

    void ctor_1();
    bool IsRooted1();
    float Length();
    void Length(float value);
    float Stiffness();
    void Stiffness(float value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static Spring* New1();
};
// }

}}} // ::g::Fuse::Physics

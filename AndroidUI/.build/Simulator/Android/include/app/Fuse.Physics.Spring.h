// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_SPRING_H__
#define __APP_FUSE_PHYSICS_SPRING_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Physics.IRule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Physics { struct World; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct Spring;

struct Spring__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Physics::IRule __interface_0;
};

Spring__uType* Spring__typeof();

void Spring___ObjInit_1(Spring* __this);
void Spring__Fuse_Physics_IRule_Update(Spring* __this, double deltaTime, ::app::Fuse::Physics::World* world);
bool Spring__get_IsRooted_1(Spring* __this);
float Spring__get_Length(Spring* __this);
float Spring__get_Stiffness(Spring* __this);
::app::Fuse::Node* Spring__get_Target(Spring* __this);
Spring* Spring__New_1(::uStatic* __this);
void Spring__OnRooted(Spring* __this, ::app::Fuse::Node* node);
void Spring__OnUnrooted(Spring* __this, ::app::Fuse::Node* node);
void Spring__set_Length(Spring* __this, float value);
void Spring__set_Stiffness(Spring* __this, float value);
void Spring__set_Target(Spring* __this, ::app::Fuse::Node* value);

struct Spring : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Node*> _target;
    ::uStrong< ::app::Fuse::Physics::Body*> _targetBody;
    float _length;
    float _stiffness;
    ::uStrong< ::app::Fuse::Physics::Body*> _body;

    void _ObjInit_1() { Spring___ObjInit_1(this); }
    bool IsRooted_1() { return Spring__get_IsRooted_1(this); }
    float Length() { return Spring__get_Length(this); }
    float Stiffness() { return Spring__get_Stiffness(this); }
    ::app::Fuse::Node* Target() { return Spring__get_Target(this); }
    void Length(float value) { Spring__set_Length(this, value); }
    void Stiffness(float value) { Spring__set_Stiffness(this, value); }
    void Target(::app::Fuse::Node* value) { Spring__set_Target(this, value); }
};

}}}


#endif

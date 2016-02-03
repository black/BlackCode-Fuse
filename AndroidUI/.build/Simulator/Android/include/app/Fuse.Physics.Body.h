// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_BODY_H__
#define __APP_FUSE_PHYSICS_BODY_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Physics { struct World; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Fuse { struct Translation; } }

namespace app {
namespace Fuse {
namespace Physics {

struct Body;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Body___frictionHandle;

struct Body__uType : ::uClassType
{
};

Body__uType* Body__typeof();

void Body___ObjInit(Body* __this, ::app::Fuse::Physics::World* world, ::app::Fuse::Node* node);
void Body___TypeInit(::uStatic* __this);
void Body__ApplyForce(Body* __this, ::app::Uno::Float3 force);
void Body__ApplyFriction(Body* __this, double deltaTime);
void Body__ApplyMotion(Body* __this, double deltaTime);
void Body__ConstrainToBounds(Body* __this, ::app::Fuse::Elements::Element* elm);
void Body__Dispose(Body* __this);
::app::Uno::Float3 Body__get_CenterPosition(Body* __this);
float Body__get_Friction(Body* __this);
::app::Uno::Float3 Body__get_Position(Body* __this);
::app::Uno::Float3 Body__get_WorldPosition(Body* __this);
float Body__GetFriction(::uStatic* __this, ::app::Fuse::Node* n);
void Body__Move(Body* __this, ::app::Uno::Float3 delta);
Body* Body__New_1(::uStatic* __this, ::app::Fuse::Physics::World* world, ::app::Fuse::Node* node);
Body* Body__Pin(::uStatic* __this, ::app::Fuse::Node* n);
void Body__set_Friction(Body* __this, float value);
void Body__SetFriction(::uStatic* __this, ::app::Fuse::Node* n, float friction);
bool Body__TryLockMotion(Body* __this, ::uObject* owner);
void Body__UnlockMotion(Body* __this);
void Body__Unpin(Body* __this);
void Body__Update(Body* __this, double deltaTime);

struct Body : ::uObject
{
    ::uStrong< ::app::Fuse::Physics::World*> World;
    ::uStrong< ::app::Fuse::Node*> Node;
    int PinCount;
    ::uStrong< ::app::Fuse::Translation*> _translation;
    ::uStrong< ::uObject*> _motionOwner;
    ::uStrong< ::app::Fuse::Elements::Element*> _constraint;
    ::app::Uno::Float3 _velocity;
    ::app::Uno::Float3 _position;

    void _ObjInit(::app::Fuse::Physics::World* world, ::app::Fuse::Node* node) { Body___ObjInit(this, world, node); }
    void ApplyForce(::app::Uno::Float3 force) { Body__ApplyForce(this, force); }
    void ApplyFriction(double deltaTime) { Body__ApplyFriction(this, deltaTime); }
    void ApplyMotion(double deltaTime) { Body__ApplyMotion(this, deltaTime); }
    void ConstrainToBounds(::app::Fuse::Elements::Element* elm) { Body__ConstrainToBounds(this, elm); }
    void Dispose() { Body__Dispose(this); }
    ::app::Uno::Float3 CenterPosition() { return Body__get_CenterPosition(this); }
    float Friction() { return Body__get_Friction(this); }
    ::app::Uno::Float3 Position() { return Body__get_Position(this); }
    ::app::Uno::Float3 WorldPosition() { return Body__get_WorldPosition(this); }
    void Move(::app::Uno::Float3 delta) { Body__Move(this, delta); }
    void Friction(float value) { Body__set_Friction(this, value); }
    bool TryLockMotion(::uObject* owner) { return Body__TryLockMotion(this, owner); }
    void UnlockMotion() { Body__UnlockMotion(this); }
    void Unpin() { Body__Unpin(this); }
    void Update(double deltaTime) { Body__Update(this, deltaTime); }
};

}}}


#endif

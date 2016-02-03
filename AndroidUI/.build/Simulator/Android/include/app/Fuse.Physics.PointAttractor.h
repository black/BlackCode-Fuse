// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_POINT_ATTRACTOR_H__
#define __APP_FUSE_PHYSICS_POINT_ATTRACTOR_H__

#include <app/Fuse.Physics.ForceField.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Physics { struct World; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct PointAttractor;

struct PointAttractor__uType : ::app::Fuse::Physics::ForceField__uType
{
};

PointAttractor__uType* PointAttractor__typeof();

void PointAttractor___ObjInit_2(PointAttractor* __this);
bool PointAttractor__AnyStrongerForce(PointAttractor* __this, ::app::Fuse::Physics::Body* b, float force, ::app::Fuse::Physics::World* w);
float PointAttractor__CalcForce(PointAttractor* __this, ::app::Fuse::Physics::Body* b);
float PointAttractor__Curve(PointAttractor* __this, float x);
::app::Uno::Float3 PointAttractor__DirectionTo(PointAttractor* __this, ::app::Fuse::Physics::Body* b);
bool PointAttractor__get_Exclusive(PointAttractor* __this);
::app::Uno::Float3 PointAttractor__get_Offset(PointAttractor* __this);
float PointAttractor__get_Radius(PointAttractor* __this);
float PointAttractor__get_Strength(PointAttractor* __this);
::uString* PointAttractor__get_Tag(PointAttractor* __this);
::app::Uno::Float3 PointAttractor__get_TargetPoint(PointAttractor* __this);
PointAttractor* PointAttractor__New_1(::uStatic* __this);
void PointAttractor__OnUpdate(PointAttractor* __this, double deltaTime, ::app::Fuse::Physics::World* world);
void PointAttractor__set_Exclusive(PointAttractor* __this, bool value);
void PointAttractor__set_Offset(PointAttractor* __this, ::app::Uno::Float3 value);
void PointAttractor__set_Radius(PointAttractor* __this, float value);
void PointAttractor__set_Strength(PointAttractor* __this, float value);
void PointAttractor__set_Tag(PointAttractor* __this, ::uString* value);

struct PointAttractor : ::app::Fuse::Physics::ForceField
{
    ::app::Uno::Float3 _offset;
    float _radius;
    float _strength;
    bool _Exclusive;
    ::uStrong< ::uString*> _Tag;

    void _ObjInit_2() { PointAttractor___ObjInit_2(this); }
    bool AnyStrongerForce(::app::Fuse::Physics::Body* b, float force, ::app::Fuse::Physics::World* w) { return PointAttractor__AnyStrongerForce(this, b, force, w); }
    float CalcForce(::app::Fuse::Physics::Body* b) { return PointAttractor__CalcForce(this, b); }
    float Curve(float x) { return PointAttractor__Curve(this, x); }
    ::app::Uno::Float3 DirectionTo(::app::Fuse::Physics::Body* b) { return PointAttractor__DirectionTo(this, b); }
    bool Exclusive() { return PointAttractor__get_Exclusive(this); }
    ::app::Uno::Float3 Offset() { return PointAttractor__get_Offset(this); }
    float Radius() { return PointAttractor__get_Radius(this); }
    float Strength() { return PointAttractor__get_Strength(this); }
    ::uString* Tag() { return PointAttractor__get_Tag(this); }
    ::app::Uno::Float3 TargetPoint() { return PointAttractor__get_TargetPoint(this); }
    void Exclusive(bool value) { PointAttractor__set_Exclusive(this, value); }
    void Offset(::app::Uno::Float3 value) { PointAttractor__set_Offset(this, value); }
    void Radius(float value) { PointAttractor__set_Radius(this, value); }
    void Strength(float value) { PointAttractor__set_Strength(this, value); }
    void Tag(::uString* value) { PointAttractor__set_Tag(this, value); }
};

}}}


#endif

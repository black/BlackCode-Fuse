// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Physics.ForceField.h>
#include <Fuse.Physics.IRule.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct PointAttractor;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class PointAttractor :446
// {
::g::Fuse::Physics::ForceField_type* PointAttractor_typeof();
void PointAttractor__ctor_2_fn(PointAttractor* __this);
void PointAttractor__AnyStrongerForce_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, float* force, ::g::Fuse::Physics::World* w, bool* __retval);
void PointAttractor__CalcForce_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, float* __retval);
void PointAttractor__Curve_fn(PointAttractor* __this, float* x, float* __retval);
void PointAttractor__DirectionTo_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, ::g::Uno::Float3* __retval);
void PointAttractor__get_Exclusive_fn(PointAttractor* __this, bool* __retval);
void PointAttractor__set_Exclusive_fn(PointAttractor* __this, bool* value);
void PointAttractor__New1_fn(PointAttractor** __retval);
void PointAttractor__get_Offset_fn(PointAttractor* __this, ::g::Uno::Float3* __retval);
void PointAttractor__set_Offset_fn(PointAttractor* __this, ::g::Uno::Float3* value);
void PointAttractor__OnUpdate_fn(PointAttractor* __this, double* deltaTime, ::g::Fuse::Physics::World* world);
void PointAttractor__get_Radius_fn(PointAttractor* __this, float* __retval);
void PointAttractor__set_Radius_fn(PointAttractor* __this, float* value);
void PointAttractor__get_Strength_fn(PointAttractor* __this, float* __retval);
void PointAttractor__set_Strength_fn(PointAttractor* __this, float* value);
void PointAttractor__get_Tag_fn(PointAttractor* __this, uString** __retval);
void PointAttractor__set_Tag_fn(PointAttractor* __this, uString* value);
void PointAttractor__get_TargetPoint_fn(PointAttractor* __this, ::g::Uno::Float3* __retval);

struct PointAttractor : ::g::Fuse::Physics::ForceField
{
    ::g::Uno::Float3 _offset;
    float _radius;
    float _strength;
    bool _Exclusive;
    uStrong<uString*> _Tag;

    void ctor_2();
    bool AnyStrongerForce(::g::Fuse::Physics::Body* b, float force, ::g::Fuse::Physics::World* w);
    float CalcForce(::g::Fuse::Physics::Body* b);
    float Curve(float x);
    ::g::Uno::Float3 DirectionTo(::g::Fuse::Physics::Body* b);
    bool Exclusive();
    void Exclusive(bool value);
    ::g::Uno::Float3 Offset();
    void Offset(::g::Uno::Float3 value);
    float Radius();
    void Radius(float value);
    float Strength();
    void Strength(float value);
    uString* Tag();
    void Tag(uString* value);
    ::g::Uno::Float3 TargetPoint();
    static PointAttractor* New1();
};
// }

}}} // ::g::Fuse::Physics

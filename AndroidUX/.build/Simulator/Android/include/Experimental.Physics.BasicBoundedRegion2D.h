// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Physics.BoundedRegion2D.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Physics{struct BasicBoundedRegion2D;}}}
namespace g{namespace Experimental{namespace Physics{struct Friction;}}}

namespace g{
namespace Experimental{
namespace Physics{

// public sealed class BasicBoundedRegion2D :23
// {
struct BasicBoundedRegion2D_type : uType
{
    ::g::Experimental::Physics::BoundedRegion2D interface0;
    ::g::Experimental::Physics::MotionSimulation interface1;
    ::g::Experimental::Physics::Simulation interface2;
};

BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof();
void BasicBoundedRegion2D__ctor__fn(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__CalcOver_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* sp, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__CreatePoints_fn(BasicBoundedRegion2D** __retval);
void BasicBoundedRegion2D__get_Destination_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__EndUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* velocity);
void BasicBoundedRegion2D__get_IsStatic_fn(BasicBoundedRegion2D* __this, bool* __retval);
void BasicBoundedRegion2D__get_IsUser_fn(BasicBoundedRegion2D* __this, bool* __retval);
void BasicBoundedRegion2D__get_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__get_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__MoveDestination_fn(BasicBoundedRegion2D* __this, double* elapsed);
void BasicBoundedRegion2D__MoveFriction_fn(BasicBoundedRegion2D* __this, double* elapsed);
void BasicBoundedRegion2D__MoveSnap_fn(BasicBoundedRegion2D* __this, double* elapsed, bool* X, bool* Y, bool* __retval);
void BasicBoundedRegion2D__MoveTo_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* target);
void BasicBoundedRegion2D__New1_fn(BasicBoundedRegion2D** __retval);
void BasicBoundedRegion2D__get_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__get_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__SnapValue_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__StartUser_fn(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__StepUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* offset);
void BasicBoundedRegion2D__Update_fn(BasicBoundedRegion2D* __this, double* elapsed);
void BasicBoundedRegion2D__get_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);

struct BasicBoundedRegion2D : uObject
{
    uStrong<uObject*> _destination;
    uStrong< ::g::Experimental::Physics::Friction*> _friction;
    int _moveMode;
    uStrong<uObject*> _snap;
    ::g::Uno::Float2 _snapLimit;
    ::g::Uno::Float2 _velocity;
    ::g::Uno::Float2 _MaxPosition;
    ::g::Uno::Float2 _MinPosition;
    ::g::Uno::Float2 _Position;

    void ctor_();
    ::g::Uno::Float2 CalcOver(::g::Uno::Float2 sp);
    ::g::Uno::Float2 Destination();
    void EndUser(::g::Uno::Float2 velocity);
    bool IsStatic();
    bool IsUser();
    ::g::Uno::Float2 MaxPosition();
    void MaxPosition(::g::Uno::Float2 value);
    ::g::Uno::Float2 MinPosition();
    void MinPosition(::g::Uno::Float2 value);
    void MoveDestination(double elapsed);
    void MoveFriction(double elapsed);
    bool MoveSnap(double elapsed, bool X, bool Y);
    void MoveTo(::g::Uno::Float2 target);
    ::g::Uno::Float2 OverflowExtent();
    void OverflowExtent(::g::Uno::Float2 value);
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    ::g::Uno::Float2 SnapValue(::g::Uno::Float2 p, ::g::Uno::Float2 v);
    void StartUser();
    void StepUser(::g::Uno::Float2 offset);
    void Update(double elapsed);
    ::g::Uno::Float2 Velocity();
    void Velocity(::g::Uno::Float2 value);
    static BasicBoundedRegion2D* CreatePoints();
    static BasicBoundedRegion2D* New1();
};
// }

}}} // ::g::Experimental::Physics

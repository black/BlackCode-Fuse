// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_BASIC_BOUNDED_REGION2_D_H__
#define __APP_EXPERIMENTAL_PHYSICS_BASIC_BOUNDED_REGION2_D_H__

#include <app/Experimental.Physics.BoundedRegion2D.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Physics { struct Friction__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct BasicBoundedRegion2D;

struct BasicBoundedRegion2D__uType : ::uClassType
{
    ::app::Experimental::Physics::BoundedRegion2D __interface_0;
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_1;
    ::app::Experimental::Physics::Simulation __interface_2;
};

BasicBoundedRegion2D__uType* BasicBoundedRegion2D__typeof();

void BasicBoundedRegion2D___ObjInit(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__CalcOver(BasicBoundedRegion2D* __this, ::app::Uno::Float2 sp);
BasicBoundedRegion2D* BasicBoundedRegion2D__CreatePoints(::uStatic* __this);
void BasicBoundedRegion2D__EndUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 velocity);
::app::Uno::Float2 BasicBoundedRegion2D__get_Destination(BasicBoundedRegion2D* __this);
bool BasicBoundedRegion2D__get_IsStatic(BasicBoundedRegion2D* __this);
bool BasicBoundedRegion2D__get_IsUser(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_MaxPosition(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_MinPosition(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_OverflowExtent(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_Position(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_Velocity(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__MoveDestination(BasicBoundedRegion2D* __this, double elapsed);
void BasicBoundedRegion2D__MoveFriction(BasicBoundedRegion2D* __this, double elapsed);
bool BasicBoundedRegion2D__MoveSnap(BasicBoundedRegion2D* __this, double elapsed, bool X, bool Y);
void BasicBoundedRegion2D__MoveTo(BasicBoundedRegion2D* __this, ::app::Uno::Float2 target);
BasicBoundedRegion2D* BasicBoundedRegion2D__New_1(::uStatic* __this);
float BasicBoundedRegion2D__QuadraticInOut(::uStatic* __this, float k);
void BasicBoundedRegion2D__set_MaxPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
void BasicBoundedRegion2D__set_MinPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
void BasicBoundedRegion2D__set_OverflowExtent(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
void BasicBoundedRegion2D__set_Position(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
void BasicBoundedRegion2D__set_Velocity(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 BasicBoundedRegion2D__SnapValue(BasicBoundedRegion2D* __this, ::app::Uno::Float2 p, ::app::Uno::Float2 v);
void BasicBoundedRegion2D__StartUser(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__StepUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 offset);
void BasicBoundedRegion2D__Update(BasicBoundedRegion2D* __this, double elapsed);

struct BasicBoundedRegion2D : ::uObject
{
    int _moveMode;
    ::app::Uno::Float2 _snapLimit;
    ::uStrong< ::uObject*> _destination;
    ::app::Uno::Float2 _velocity;
    ::uStrong< ::app::Experimental::Physics::Friction__float2*> _friction;
    ::uStrong< ::uObject*> _snap;
    ::app::Uno::Float2 _MaxPosition;
    ::app::Uno::Float2 _MinPosition;
    ::app::Uno::Float2 _Position;

    void _ObjInit() { BasicBoundedRegion2D___ObjInit(this); }
    ::app::Uno::Float2 CalcOver(::app::Uno::Float2 sp) { return BasicBoundedRegion2D__CalcOver(this, sp); }
    void EndUser(::app::Uno::Float2 velocity) { BasicBoundedRegion2D__EndUser(this, velocity); }
    ::app::Uno::Float2 Destination() { return BasicBoundedRegion2D__get_Destination(this); }
    bool IsStatic() { return BasicBoundedRegion2D__get_IsStatic(this); }
    bool IsUser() { return BasicBoundedRegion2D__get_IsUser(this); }
    ::app::Uno::Float2 MaxPosition() { return BasicBoundedRegion2D__get_MaxPosition(this); }
    ::app::Uno::Float2 MinPosition() { return BasicBoundedRegion2D__get_MinPosition(this); }
    ::app::Uno::Float2 OverflowExtent() { return BasicBoundedRegion2D__get_OverflowExtent(this); }
    ::app::Uno::Float2 Position() { return BasicBoundedRegion2D__get_Position(this); }
    ::app::Uno::Float2 Velocity() { return BasicBoundedRegion2D__get_Velocity(this); }
    void MoveDestination(double elapsed) { BasicBoundedRegion2D__MoveDestination(this, elapsed); }
    void MoveFriction(double elapsed) { BasicBoundedRegion2D__MoveFriction(this, elapsed); }
    bool MoveSnap(double elapsed, bool X, bool Y) { return BasicBoundedRegion2D__MoveSnap(this, elapsed, X, Y); }
    void MoveTo(::app::Uno::Float2 target) { BasicBoundedRegion2D__MoveTo(this, target); }
    void MaxPosition(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_MaxPosition(this, value); }
    void MinPosition(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_MinPosition(this, value); }
    void OverflowExtent(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_OverflowExtent(this, value); }
    void Position(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_Position(this, value); }
    void Velocity(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_Velocity(this, value); }
    ::app::Uno::Float2 SnapValue(::app::Uno::Float2 p, ::app::Uno::Float2 v) { return BasicBoundedRegion2D__SnapValue(this, p, v); }
    void StartUser() { BasicBoundedRegion2D__StartUser(this); }
    void StepUser(::app::Uno::Float2 offset) { BasicBoundedRegion2D__StepUser(this, offset); }
    void Update(double elapsed) { BasicBoundedRegion2D__Update(this, elapsed); }
};

}}}


#endif

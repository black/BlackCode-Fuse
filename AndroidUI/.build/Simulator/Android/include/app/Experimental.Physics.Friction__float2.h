// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_FRICTION__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_FRICTION__FLOAT2_H__

#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct Friction__float2;

struct Friction__float2__uType : ::uClassType
{
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_0;
    ::app::Experimental::Physics::Simulation __interface_1;
};

Friction__float2__uType* Friction__float2__typeof();

void Friction__float2___ObjInit(Friction__float2* __this);
Friction__float2* Friction__float2__CreatePoints(::uStatic* __this);
Friction__float2* Friction__float2__CreateRadians(::uStatic* __this);
float Friction__float2__get_HighFluidDeceleration(Friction__float2* __this);
bool Friction__float2__get_IsStatic(Friction__float2* __this);
float Friction__float2__get_KineticDeceleration(Friction__float2* __this);
float Friction__float2__get_LowFluidDeceleration(Friction__float2* __this);
::app::Uno::Float2 Friction__float2__get_Position(Friction__float2* __this);
float Friction__float2__get_SpeedDropout(Friction__float2* __this);
::app::Uno::Float2 Friction__float2__get_Velocity(Friction__float2* __this);
Friction__float2* Friction__float2__New_1(::uStatic* __this);
void Friction__float2__set_HighFluidDeceleration(Friction__float2* __this, float value);
void Friction__float2__set_KineticDeceleration(Friction__float2* __this, float value);
void Friction__float2__set_LowFluidDeceleration(Friction__float2* __this, float value);
void Friction__float2__set_Position(Friction__float2* __this, ::app::Uno::Float2 value);
void Friction__float2__set_SpeedDropout(Friction__float2* __this, float value);
void Friction__float2__set_Velocity(Friction__float2* __this, ::app::Uno::Float2 value);
void Friction__float2__Update(Friction__float2* __this, double elapsed);

struct Friction__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> _blender;
    float _speedDropout;
    float _kineticDeceleration;
    float _lowFluidDeceleration;
    float _highFluidDeceleration;
    ::app::Uno::Float2 _velocity;
    ::app::Uno::Float2 _position;
    bool _isStatic;

    void _ObjInit() { Friction__float2___ObjInit(this); }
    float HighFluidDeceleration() { return Friction__float2__get_HighFluidDeceleration(this); }
    bool IsStatic() { return Friction__float2__get_IsStatic(this); }
    float KineticDeceleration() { return Friction__float2__get_KineticDeceleration(this); }
    float LowFluidDeceleration() { return Friction__float2__get_LowFluidDeceleration(this); }
    ::app::Uno::Float2 Position() { return Friction__float2__get_Position(this); }
    float SpeedDropout() { return Friction__float2__get_SpeedDropout(this); }
    ::app::Uno::Float2 Velocity() { return Friction__float2__get_Velocity(this); }
    void HighFluidDeceleration(float value) { Friction__float2__set_HighFluidDeceleration(this, value); }
    void KineticDeceleration(float value) { Friction__float2__set_KineticDeceleration(this, value); }
    void LowFluidDeceleration(float value) { Friction__float2__set_LowFluidDeceleration(this, value); }
    void Position(::app::Uno::Float2 value) { Friction__float2__set_Position(this, value); }
    void SpeedDropout(float value) { Friction__float2__set_SpeedDropout(this, value); }
    void Velocity(::app::Uno::Float2 value) { Friction__float2__set_Velocity(this, value); }
    void Update(double elapsed) { Friction__float2__Update(this, elapsed); }
};

}}}


#endif

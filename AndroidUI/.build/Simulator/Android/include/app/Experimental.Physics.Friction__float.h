// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_FRICTION__FLOAT_H__
#define __APP_EXPERIMENTAL_PHYSICS_FRICTION__FLOAT_H__

#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct Friction__float;

struct Friction__float__uType : ::uClassType
{
    ::app::Experimental::Physics::MotionSimulation__float __interface_0;
    ::app::Experimental::Physics::Simulation __interface_1;
};

Friction__float__uType* Friction__float__typeof();

void Friction__float___ObjInit(Friction__float* __this);
Friction__float* Friction__float__CreatePoints(::uStatic* __this);
Friction__float* Friction__float__CreateRadians(::uStatic* __this);
float Friction__float__get_HighFluidDeceleration(Friction__float* __this);
bool Friction__float__get_IsStatic(Friction__float* __this);
float Friction__float__get_KineticDeceleration(Friction__float* __this);
float Friction__float__get_LowFluidDeceleration(Friction__float* __this);
float Friction__float__get_Position(Friction__float* __this);
float Friction__float__get_SpeedDropout(Friction__float* __this);
float Friction__float__get_Velocity(Friction__float* __this);
Friction__float* Friction__float__New_1(::uStatic* __this);
void Friction__float__set_HighFluidDeceleration(Friction__float* __this, float value);
void Friction__float__set_KineticDeceleration(Friction__float* __this, float value);
void Friction__float__set_LowFluidDeceleration(Friction__float* __this, float value);
void Friction__float__set_Position(Friction__float* __this, float value);
void Friction__float__set_SpeedDropout(Friction__float* __this, float value);
void Friction__float__set_Velocity(Friction__float* __this, float value);
void Friction__float__Update(Friction__float* __this, double elapsed);

struct Friction__float : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float*> _blender;
    float _speedDropout;
    float _kineticDeceleration;
    float _lowFluidDeceleration;
    float _highFluidDeceleration;
    float _velocity;
    float _position;
    bool _isStatic;

    void _ObjInit() { Friction__float___ObjInit(this); }
    float HighFluidDeceleration() { return Friction__float__get_HighFluidDeceleration(this); }
    bool IsStatic() { return Friction__float__get_IsStatic(this); }
    float KineticDeceleration() { return Friction__float__get_KineticDeceleration(this); }
    float LowFluidDeceleration() { return Friction__float__get_LowFluidDeceleration(this); }
    float Position() { return Friction__float__get_Position(this); }
    float SpeedDropout() { return Friction__float__get_SpeedDropout(this); }
    float Velocity() { return Friction__float__get_Velocity(this); }
    void HighFluidDeceleration(float value) { Friction__float__set_HighFluidDeceleration(this, value); }
    void KineticDeceleration(float value) { Friction__float__set_KineticDeceleration(this, value); }
    void LowFluidDeceleration(float value) { Friction__float__set_LowFluidDeceleration(this, value); }
    void Position(float value) { Friction__float__set_Position(this, value); }
    void SpeedDropout(float value) { Friction__float__set_SpeedDropout(this, value); }
    void Velocity(float value) { Friction__float__set_Velocity(this, value); }
    void Update(double elapsed) { Friction__float__Update(this, elapsed); }
};

}}}


#endif

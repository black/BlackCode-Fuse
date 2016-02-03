// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_ELASTIC_FORCE__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_ELASTIC_FORCE__FLOAT2_H__

#include <app/Experimental.Physics.DestinationSimulation__float2.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct ElasticForce__float2;

struct ElasticForce__float2__uType : ::uClassType
{
    ::app::Experimental::Physics::DestinationSimulation__float2 __interface_0;
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_1;
    ::app::Experimental::Physics::Simulation __interface_2;
};

ElasticForce__float2__uType* ElasticForce__float2__typeof();

void ElasticForce__float2___ObjInit(ElasticForce__float2* __this, float scale);
ElasticForce__float2* ElasticForce__float2__CreateDegrees(::uStatic* __this);
ElasticForce__float2* ElasticForce__float2__CreatePoints(::uStatic* __this);
ElasticForce__float2* ElasticForce__float2__CreateRadians(::uStatic* __this);
::app::Uno::Float2 ElasticForce__float2__get_Attraction(ElasticForce__float2* __this);
float ElasticForce__float2__get_AttractionCurve(ElasticForce__float2* __this);
float ElasticForce__float2__get_AttractionForce(ElasticForce__float2* __this);
float ElasticForce__float2__get_Damping(ElasticForce__float2* __this);
::app::Uno::Float2 ElasticForce__float2__get_Destination(ElasticForce__float2* __this);
float ElasticForce__float2__get_Energy(ElasticForce__float2* __this);
float ElasticForce__float2__get_EnergyEps(ElasticForce__float2* __this);
bool ElasticForce__float2__get_IsLocked(ElasticForce__float2* __this);
bool ElasticForce__float2__get_IsStatic(ElasticForce__float2* __this);
float ElasticForce__float2__get_MaxSpeed(ElasticForce__float2* __this);
::app::Uno::Float2 ElasticForce__float2__get_Position(ElasticForce__float2* __this);
::app::Uno::Float2 ElasticForce__float2__get_Velocity(ElasticForce__float2* __this);
void ElasticForce__float2__Iterate(ElasticForce__float2* __this);
ElasticForce__float2* ElasticForce__float2__New_1(::uStatic* __this, float scale);
void ElasticForce__float2__Reset(ElasticForce__float2* __this, ::app::Uno::Float2 value);
void ElasticForce__float2__ResetMaxSpeed(ElasticForce__float2* __this);
void ElasticForce__float2__set_AttractionCurve(ElasticForce__float2* __this, float value);
void ElasticForce__float2__set_AttractionForce(ElasticForce__float2* __this, float value);
void ElasticForce__float2__set_Damping(ElasticForce__float2* __this, float value);
void ElasticForce__float2__set_Destination(ElasticForce__float2* __this, ::app::Uno::Float2 value);
void ElasticForce__float2__set_EnergyEps(ElasticForce__float2* __this, float value);
void ElasticForce__float2__set_IsLocked(ElasticForce__float2* __this, bool value);
void ElasticForce__float2__set_IsStatic(ElasticForce__float2* __this, bool value);
void ElasticForce__float2__set_MaxSpeed(ElasticForce__float2* __this, float value);
void ElasticForce__float2__set_Position(ElasticForce__float2* __this, ::app::Uno::Float2 value);
void ElasticForce__float2__set_Velocity(ElasticForce__float2* __this, ::app::Uno::Float2 value);
void ElasticForce__float2__Update(ElasticForce__float2* __this, double elapsed);

struct ElasticForce__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> _blender;
    float _scale;
    ::app::Uno::Float2 _velocity;
    ::app::Uno::Float2 _attractionDestination;
    float _attractionForce;
    float _attractionCurve;
    float _damping;
    float _energyEps;
    float _maxSpeed;
    bool _hasMaxSpeed;
    bool _isStatic;
    double timeStep;
    double _remainTime;
    bool _IsLocked;
    ::app::Uno::Float2 _Position;

    void _ObjInit(float scale) { ElasticForce__float2___ObjInit(this, scale); }
    ::app::Uno::Float2 Attraction() { return ElasticForce__float2__get_Attraction(this); }
    float AttractionCurve() { return ElasticForce__float2__get_AttractionCurve(this); }
    float AttractionForce() { return ElasticForce__float2__get_AttractionForce(this); }
    float Damping() { return ElasticForce__float2__get_Damping(this); }
    ::app::Uno::Float2 Destination() { return ElasticForce__float2__get_Destination(this); }
    float Energy() { return ElasticForce__float2__get_Energy(this); }
    float EnergyEps() { return ElasticForce__float2__get_EnergyEps(this); }
    bool IsLocked() { return ElasticForce__float2__get_IsLocked(this); }
    bool IsStatic() { return ElasticForce__float2__get_IsStatic(this); }
    float MaxSpeed() { return ElasticForce__float2__get_MaxSpeed(this); }
    ::app::Uno::Float2 Position() { return ElasticForce__float2__get_Position(this); }
    ::app::Uno::Float2 Velocity() { return ElasticForce__float2__get_Velocity(this); }
    void Iterate() { ElasticForce__float2__Iterate(this); }
    void Reset(::app::Uno::Float2 value) { ElasticForce__float2__Reset(this, value); }
    void ResetMaxSpeed() { ElasticForce__float2__ResetMaxSpeed(this); }
    void AttractionCurve(float value) { ElasticForce__float2__set_AttractionCurve(this, value); }
    void AttractionForce(float value) { ElasticForce__float2__set_AttractionForce(this, value); }
    void Damping(float value) { ElasticForce__float2__set_Damping(this, value); }
    void Destination(::app::Uno::Float2 value) { ElasticForce__float2__set_Destination(this, value); }
    void EnergyEps(float value) { ElasticForce__float2__set_EnergyEps(this, value); }
    void IsLocked(bool value) { ElasticForce__float2__set_IsLocked(this, value); }
    void IsStatic(bool value) { ElasticForce__float2__set_IsStatic(this, value); }
    void MaxSpeed(float value) { ElasticForce__float2__set_MaxSpeed(this, value); }
    void Position(::app::Uno::Float2 value) { ElasticForce__float2__set_Position(this, value); }
    void Velocity(::app::Uno::Float2 value) { ElasticForce__float2__set_Velocity(this, value); }
    void Update(double elapsed) { ElasticForce__float2__Update(this, elapsed); }
};

}}}


#endif

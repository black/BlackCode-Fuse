// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_POINTER_VELOCITY__FLOAT_H__
#define __APP_EXPERIMENTAL_PHYSICS_POINTER_VELOCITY__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct PointerVelocity__float;

struct PointerVelocity__float__uType : ::uClassType
{
};

PointerVelocity__float__uType* PointerVelocity__float__typeof();

void PointerVelocity__float___ObjInit(PointerVelocity__float* __this);
void PointerVelocity__float__AddSample(PointerVelocity__float* __this, float location, float elapsed, bool tentative);
void PointerVelocity__float__ApplySample(PointerVelocity__float* __this, float sample, float elapsed);
float PointerVelocity__float__get_AverageVelocity(PointerVelocity__float* __this);
float PointerVelocity__float__get_CurrentVelocity(PointerVelocity__float* __this);
float PointerVelocity__float__get_Period(PointerVelocity__float* __this);
double PointerVelocity__float__get_TotalDistance(PointerVelocity__float* __this);
PointerVelocity__float* PointerVelocity__float__New_1(::uStatic* __this);
void PointerVelocity__float__Reset(PointerVelocity__float* __this, float location0);
void PointerVelocity__float__Reset_1(PointerVelocity__float* __this, float location0, float velocity0);
void PointerVelocity__float__set_CurrentVelocity(PointerVelocity__float* __this, float value);
void PointerVelocity__float__set_Period(PointerVelocity__float* __this, float value);

struct PointerVelocity__float : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float*> _blender;
    float _moveThreshold;
    float _elapsedLimit;
    float _period;
    float _velocity;
    float _currentLocation;
    float _startLocation;
    float _accelThreshold;
    float _accelLimit;
    float _accelFactor;
    float _inSpeedLimit;
    float _speedDistanceThreshold;
    double _totalTime;
    double _totalDistance;
    float _zeroElapsed;

    void _ObjInit() { PointerVelocity__float___ObjInit(this); }
    void AddSample(float location, float elapsed, bool tentative) { PointerVelocity__float__AddSample(this, location, elapsed, tentative); }
    void ApplySample(float sample, float elapsed) { PointerVelocity__float__ApplySample(this, sample, elapsed); }
    float AverageVelocity() { return PointerVelocity__float__get_AverageVelocity(this); }
    float CurrentVelocity() { return PointerVelocity__float__get_CurrentVelocity(this); }
    float Period() { return PointerVelocity__float__get_Period(this); }
    double TotalDistance() { return PointerVelocity__float__get_TotalDistance(this); }
    void Reset(float location0) { PointerVelocity__float__Reset(this, location0); }
    void Reset_1(float location0, float velocity0) { PointerVelocity__float__Reset_1(this, location0, velocity0); }
    void CurrentVelocity(float value) { PointerVelocity__float__set_CurrentVelocity(this, value); }
    void Period(float value) { PointerVelocity__float__set_Period(this, value); }
};

}}}


#endif

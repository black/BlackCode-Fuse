// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Physics{struct PointerVelocity;}}}
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}

namespace g{
namespace Experimental{
namespace Physics{

// public sealed class PointerVelocity<T> :576
// {
uType* PointerVelocity_typeof();
void PointerVelocity__ctor__fn(PointerVelocity* __this);
void PointerVelocity__AddSample_fn(PointerVelocity* __this, void* location, float* elapsed, bool* tentative);
void PointerVelocity__ApplySample_fn(PointerVelocity* __this, void* sample, float* elapsed);
void PointerVelocity__get_AverageVelocity_fn(PointerVelocity* __this, uTRef __retval);
void PointerVelocity__get_CurrentVelocity_fn(PointerVelocity* __this, uTRef __retval);
void PointerVelocity__set_CurrentVelocity_fn(PointerVelocity* __this, void* value);
void PointerVelocity__New1_fn(uType* __type, PointerVelocity** __retval);
void PointerVelocity__get_Period_fn(PointerVelocity* __this, float* __retval);
void PointerVelocity__set_Period_fn(PointerVelocity* __this, float* value);
void PointerVelocity__Reset_fn(PointerVelocity* __this, void* location0);
void PointerVelocity__Reset1_fn(PointerVelocity* __this, void* location0, void* velocity0);
void PointerVelocity__get_TotalDistance_fn(PointerVelocity* __this, double* __retval);

struct PointerVelocity : uObject
{
    float _accelFactor;
    float _accelLimit;
    float _accelThreshold;
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    uTField _currentLocation() { return __type->Field(this, 4); }
    float _elapsedLimit;
    float _inSpeedLimit;
    float _moveThreshold;
    float _period;
    float _speedDistanceThreshold;
    uTField _startLocation() { return __type->Field(this, 10); }
    double _totalDistance;
    double _totalTime;
    uTField _velocity() { return __type->Field(this, 13); }
    float _zeroElapsed;

    void ctor_();
    template<class T>
    void AddSample(T location, float elapsed, bool tentative) { PointerVelocity__AddSample_fn(this, uConstrain(__type->T(0), location), &elapsed, &tentative); }
    template<class T>
    void ApplySample(T sample, float elapsed) { PointerVelocity__ApplySample_fn(this, uConstrain(__type->T(0), sample), &elapsed); }
    template<class T>
    T AverageVelocity() { T __retval; return PointerVelocity__get_AverageVelocity_fn(this, &__retval), __retval; }
    template<class T>
    T CurrentVelocity() { T __retval; return PointerVelocity__get_CurrentVelocity_fn(this, &__retval), __retval; }
    template<class T>
    void CurrentVelocity(T value) { PointerVelocity__set_CurrentVelocity_fn(this, uConstrain(__type->T(0), value)); }
    float Period();
    void Period(float value);
    template<class T>
    void Reset(T location0) { PointerVelocity__Reset_fn(this, uConstrain(__type->T(0), location0)); }
    template<class T>
    void Reset1(T location0, T velocity0) { PointerVelocity__Reset1_fn(this, uConstrain(__type->T(0), location0), uConstrain(__type->T(0), velocity0)); }
    double TotalDistance();
    static PointerVelocity* New1(uType* __type);
};
// }

}}} // ::g::Experimental::Physics

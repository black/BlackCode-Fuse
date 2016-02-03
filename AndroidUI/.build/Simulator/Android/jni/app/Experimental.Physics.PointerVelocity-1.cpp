#include <app/Experimental.Physics.PointerVelocity__float.h>
#include <app/Experimental.Physics.PointerVelocity__float2.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.Statistics.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>

namespace app {
namespace Experimental {
namespace Physics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerVelocity__float__uType* PointerVelocity__float__typeof()
{
    static ::uStaticStrong<PointerVelocity__float__uType*> type;
    if (type != NULL) return type;

    type = (PointerVelocity__float__uType*)::uAllocClassType(sizeof(PointerVelocity__float__uType), "Experimental.Physics.PointerVelocity<float>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_blender", offsetof(PointerVelocity__float, _blender));

    type->SetFields(15,
        ::uNewField("_accelFactor", NULL, offsetof(PointerVelocity__float, _accelFactor), ::app::Uno::Float__typeof()),
        ::uNewField("_accelLimit", NULL, offsetof(PointerVelocity__float, _accelLimit), ::app::Uno::Float__typeof()),
        ::uNewField("_accelThreshold", NULL, offsetof(PointerVelocity__float, _accelThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_blender", NULL, offsetof(PointerVelocity__float, _blender), ::app::Fuse::Internal::Blender__float__typeof()),
        ::uNewField("_currentLocation", NULL, offsetof(PointerVelocity__float, _currentLocation), ::app::Uno::Float__typeof()),
        ::uNewField("_elapsedLimit", NULL, offsetof(PointerVelocity__float, _elapsedLimit), ::app::Uno::Float__typeof()),
        ::uNewField("_inSpeedLimit", NULL, offsetof(PointerVelocity__float, _inSpeedLimit), ::app::Uno::Float__typeof()),
        ::uNewField("_moveThreshold", NULL, offsetof(PointerVelocity__float, _moveThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_period", NULL, offsetof(PointerVelocity__float, _period), ::app::Uno::Float__typeof()),
        ::uNewField("_speedDistanceThreshold", NULL, offsetof(PointerVelocity__float, _speedDistanceThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_startLocation", NULL, offsetof(PointerVelocity__float, _startLocation), ::app::Uno::Float__typeof()),
        ::uNewField("_totalDistance", NULL, offsetof(PointerVelocity__float, _totalDistance), ::app::Uno::Double__typeof()),
        ::uNewField("_totalTime", NULL, offsetof(PointerVelocity__float, _totalTime), ::app::Uno::Double__typeof()),
        ::uNewField("_velocity", NULL, offsetof(PointerVelocity__float, _velocity), ::app::Uno::Float__typeof()),
        ::uNewField("_zeroElapsed", NULL, offsetof(PointerVelocity__float, _zeroElapsed), ::app::Uno::Float__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("AddSample", PointerVelocity__float__AddSample, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_AverageVelocity", PointerVelocity__float__get_AverageVelocity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_CurrentVelocity", PointerVelocity__float__get_CurrentVelocity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Period", PointerVelocity__float__get_Period, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_TotalDistance", PointerVelocity__float__get_TotalDistance, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", PointerVelocity__float__New_1, 0, true, PointerVelocity__float__typeof()),
        ::uNewFunctionVoid("Reset", PointerVelocity__float__Reset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Reset", PointerVelocity__float__Reset_1, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_CurrentVelocity", PointerVelocity__float__set_CurrentVelocity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Period", PointerVelocity__float__set_Period, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerVelocity__float___ObjInit(PointerVelocity__float* __this)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float(NULL);
    __this->_moveThreshold = 1.5f;
    __this->_elapsedLimit = 0.045f;
    __this->_period = 0.12f;
    __this->_accelThreshold = 1000.0f;
    __this->_accelLimit = 2000.0f;
    __this->_accelFactor = 1.5f;
    __this->_inSpeedLimit = 2000.0f;
    __this->_speedDistanceThreshold = 50.0f;
}

void PointerVelocity__float__AddSample(PointerVelocity__float* __this, float location, float elapsed, bool tentative)
{
    float diff = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Sub(location, __this->_currentLocation);
    double length = double();
    float unit = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->ToUnit(diff, &length);

    if (length < 9.9999997473787516e-06)
    {
        unit = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero();
    }

    __this->_totalDistance = __this->_totalDistance + length;
    __this->_currentLocation = location;

    if (elapsed < 1e-05f)
    {
        return;
    }

    if ((elapsed + __this->_zeroElapsed) > __this->_elapsedLimit)
    {
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero();
        elapsed = __this->_elapsedLimit;
        __this->_zeroElapsed = 0.0f;
        return;
    }
    else if (length < (double)__this->_moveThreshold)
    {
        __this->_zeroElapsed = __this->_zeroElapsed + elapsed;
    }

    float speed = (float)(length / (double)elapsed);
    double tdP = ::app::Uno::Math__Clamp(NULL, __this->_totalDistance / (double)__this->_speedDistanceThreshold, 0.0, 1.0);
    speed = ::app::Uno::Math__Min_1(NULL, (float)((double)__this->_inSpeedLimit * tdP), speed);
    float aSpeed = speed;

    if (tdP >= 1.0)
    {
        float accelRange = ::app::Uno::Math__Clamp_1(NULL, speed, __this->_accelThreshold, __this->_accelLimit) / (__this->_accelLimit - __this->_accelThreshold);
        float accel = accelRange * __this->_accelFactor;
        aSpeed = speed * accel;
    }

    float sample = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Weight(unit, (double)aSpeed);
    __this->ApplySample(sample, elapsed);
}

void PointerVelocity__float__ApplySample(PointerVelocity__float* __this, float sample, float elapsed)
{
    if (__this->_totalTime < 9.9999997473787516e-06)
    {
        __this->_velocity = sample;
    }
    else
    {
        float alpha = ::app::Fuse::Internal::Statistics__ContinuousFilterAlpha(NULL, elapsed, __this->_period);
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Lerp(__this->_velocity, sample, (double)alpha);
    }

    __this->_totalTime = __this->_totalTime + (double)elapsed;
}

float PointerVelocity__float__get_AverageVelocity(PointerVelocity__float* __this)
{
    float v = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Sub(__this->_currentLocation, __this->_startLocation);
    double length = double();
    float unit = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->ToUnit(v, &length);
    float s = ((__this->_totalTime > 9.9999997473787516e-06) && (length > 9.9999997473787516e-06)) ? (float)(length / __this->_totalTime) : 0.0f;
    return ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Weight(unit, (double)s);
}

float PointerVelocity__float__get_CurrentVelocity(PointerVelocity__float* __this)
{
    return __this->_velocity;
}

float PointerVelocity__float__get_Period(PointerVelocity__float* __this)
{
    return __this->_period;
}

double PointerVelocity__float__get_TotalDistance(PointerVelocity__float* __this)
{
    return __this->_totalDistance;
}

PointerVelocity__float* PointerVelocity__float__New_1(::uStatic* __this)
{
    PointerVelocity__float* inst = (PointerVelocity__float*)::uAllocObject(sizeof(PointerVelocity__float), PointerVelocity__float__typeof());
    inst->_ObjInit();
    return inst;
}

void PointerVelocity__float__Reset(PointerVelocity__float* __this, float location0)
{
    __this->Reset_1(location0, ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero());
}

void PointerVelocity__float__Reset_1(PointerVelocity__float* __this, float location0, float velocity0)
{
    __this->_velocity = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation = __this->_currentLocation = location0;
    __this->_totalDistance = 0.0;
    __this->_zeroElapsed = 0.0f;
}

void PointerVelocity__float__set_CurrentVelocity(PointerVelocity__float* __this, float value)
{
    __this->_velocity = value;
}

void PointerVelocity__float__set_Period(PointerVelocity__float* __this, float value)
{
    __this->_period = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerVelocity__float2__uType* PointerVelocity__float2__typeof()
{
    static ::uStaticStrong<PointerVelocity__float2__uType*> type;
    if (type != NULL) return type;

    type = (PointerVelocity__float2__uType*)::uAllocClassType(sizeof(PointerVelocity__float2__uType), "Experimental.Physics.PointerVelocity<float2>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_blender", offsetof(PointerVelocity__float2, _blender));

    type->SetFields(15,
        ::uNewField("_accelFactor", NULL, offsetof(PointerVelocity__float2, _accelFactor), ::app::Uno::Float__typeof()),
        ::uNewField("_accelLimit", NULL, offsetof(PointerVelocity__float2, _accelLimit), ::app::Uno::Float__typeof()),
        ::uNewField("_accelThreshold", NULL, offsetof(PointerVelocity__float2, _accelThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_blender", NULL, offsetof(PointerVelocity__float2, _blender), ::app::Fuse::Internal::Blender__float2__typeof()),
        ::uNewField("_currentLocation", NULL, offsetof(PointerVelocity__float2, _currentLocation), ::app::Uno::Float2__typeof()),
        ::uNewField("_elapsedLimit", NULL, offsetof(PointerVelocity__float2, _elapsedLimit), ::app::Uno::Float__typeof()),
        ::uNewField("_inSpeedLimit", NULL, offsetof(PointerVelocity__float2, _inSpeedLimit), ::app::Uno::Float__typeof()),
        ::uNewField("_moveThreshold", NULL, offsetof(PointerVelocity__float2, _moveThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_period", NULL, offsetof(PointerVelocity__float2, _period), ::app::Uno::Float__typeof()),
        ::uNewField("_speedDistanceThreshold", NULL, offsetof(PointerVelocity__float2, _speedDistanceThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_startLocation", NULL, offsetof(PointerVelocity__float2, _startLocation), ::app::Uno::Float2__typeof()),
        ::uNewField("_totalDistance", NULL, offsetof(PointerVelocity__float2, _totalDistance), ::app::Uno::Double__typeof()),
        ::uNewField("_totalTime", NULL, offsetof(PointerVelocity__float2, _totalTime), ::app::Uno::Double__typeof()),
        ::uNewField("_velocity", NULL, offsetof(PointerVelocity__float2, _velocity), ::app::Uno::Float2__typeof()),
        ::uNewField("_zeroElapsed", NULL, offsetof(PointerVelocity__float2, _zeroElapsed), ::app::Uno::Float__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("AddSample", PointerVelocity__float2__AddSample, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_AverageVelocity", PointerVelocity__float2__get_AverageVelocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_CurrentVelocity", PointerVelocity__float2__get_CurrentVelocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Period", PointerVelocity__float2__get_Period, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_TotalDistance", PointerVelocity__float2__get_TotalDistance, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", PointerVelocity__float2__New_1, 0, true, PointerVelocity__float2__typeof()),
        ::uNewFunctionVoid("Reset", PointerVelocity__float2__Reset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Reset", PointerVelocity__float2__Reset_1, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_CurrentVelocity", PointerVelocity__float2__set_CurrentVelocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Period", PointerVelocity__float2__set_Period, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerVelocity__float2___ObjInit(PointerVelocity__float2* __this)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_moveThreshold = 1.5f;
    __this->_elapsedLimit = 0.045f;
    __this->_period = 0.12f;
    __this->_accelThreshold = 1000.0f;
    __this->_accelLimit = 2000.0f;
    __this->_accelFactor = 1.5f;
    __this->_inSpeedLimit = 2000.0f;
    __this->_speedDistanceThreshold = 50.0f;
}

void PointerVelocity__float2__AddSample(PointerVelocity__float2* __this, ::app::Uno::Float2 location, float elapsed, bool tentative)
{
    ::app::Uno::Float2 diff = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(location, __this->_currentLocation);
    double length = double();
    ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(diff, &length);

    if (length < 9.9999997473787516e-06)
    {
        unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
    }

    __this->_totalDistance = __this->_totalDistance + length;
    __this->_currentLocation = location;

    if (elapsed < 1e-05f)
    {
        return;
    }

    if ((elapsed + __this->_zeroElapsed) > __this->_elapsedLimit)
    {
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
        elapsed = __this->_elapsedLimit;
        __this->_zeroElapsed = 0.0f;
        return;
    }
    else if (length < (double)__this->_moveThreshold)
    {
        __this->_zeroElapsed = __this->_zeroElapsed + elapsed;
    }

    float speed = (float)(length / (double)elapsed);
    double tdP = ::app::Uno::Math__Clamp(NULL, __this->_totalDistance / (double)__this->_speedDistanceThreshold, 0.0, 1.0);
    speed = ::app::Uno::Math__Min_1(NULL, (float)((double)__this->_inSpeedLimit * tdP), speed);
    float aSpeed = speed;

    if (tdP >= 1.0)
    {
        float accelRange = ::app::Uno::Math__Clamp_1(NULL, speed, __this->_accelThreshold, __this->_accelLimit) / (__this->_accelLimit - __this->_accelThreshold);
        float accel = accelRange * __this->_accelFactor;
        aSpeed = speed * accel;
    }

    ::app::Uno::Float2 sample = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, (double)aSpeed);
    __this->ApplySample(sample, elapsed);
}

void PointerVelocity__float2__ApplySample(PointerVelocity__float2* __this, ::app::Uno::Float2 sample, float elapsed)
{
    if (__this->_totalTime < 9.9999997473787516e-06)
    {
        __this->_velocity = sample;
    }
    else
    {
        float alpha = ::app::Fuse::Internal::Statistics__ContinuousFilterAlpha(NULL, elapsed, __this->_period);
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Lerp(__this->_velocity, sample, (double)alpha);
    }

    __this->_totalTime = __this->_totalTime + (double)elapsed;
}

::app::Uno::Float2 PointerVelocity__float2__get_AverageVelocity(PointerVelocity__float2* __this)
{
    ::app::Uno::Float2 v = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->_currentLocation, __this->_startLocation);
    double length = double();
    ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(v, &length);
    float s = ((__this->_totalTime > 9.9999997473787516e-06) && (length > 9.9999997473787516e-06)) ? (float)(length / __this->_totalTime) : 0.0f;
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, (double)s);
}

::app::Uno::Float2 PointerVelocity__float2__get_CurrentVelocity(PointerVelocity__float2* __this)
{
    return __this->_velocity;
}

float PointerVelocity__float2__get_Period(PointerVelocity__float2* __this)
{
    return __this->_period;
}

double PointerVelocity__float2__get_TotalDistance(PointerVelocity__float2* __this)
{
    return __this->_totalDistance;
}

PointerVelocity__float2* PointerVelocity__float2__New_1(::uStatic* __this)
{
    PointerVelocity__float2* inst = (PointerVelocity__float2*)::uAllocObject(sizeof(PointerVelocity__float2), PointerVelocity__float2__typeof());
    inst->_ObjInit();
    return inst;
}

void PointerVelocity__float2__Reset(PointerVelocity__float2* __this, ::app::Uno::Float2 location0)
{
    __this->Reset_1(location0, ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero());
}

void PointerVelocity__float2__Reset_1(PointerVelocity__float2* __this, ::app::Uno::Float2 location0, ::app::Uno::Float2 velocity0)
{
    __this->_velocity = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation = __this->_currentLocation = location0;
    __this->_totalDistance = 0.0;
    __this->_zeroElapsed = 0.0f;
}

void PointerVelocity__float2__set_CurrentVelocity(PointerVelocity__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
}

void PointerVelocity__float2__set_Period(PointerVelocity__float2* __this, float value)
{
    __this->_period = value;
}

}}}

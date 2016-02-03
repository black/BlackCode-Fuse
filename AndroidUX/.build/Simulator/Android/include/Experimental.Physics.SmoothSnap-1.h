// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Physics{struct SmoothSnap;}}}
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}

namespace g{
namespace Experimental{
namespace Physics{

// public sealed class SmoothSnap<T> :767
// {
struct SmoothSnap_type : uType
{
    ::g::Experimental::Physics::DestinationSimulation interface0;
    ::g::Experimental::Physics::MotionSimulation interface1;
    ::g::Experimental::Physics::Simulation interface2;
};

SmoothSnap_type* SmoothSnap_typeof();
void SmoothSnap__ctor__fn(SmoothSnap* __this, float* scale);
void SmoothSnap__CreateNormalized_fn(uType* __type, SmoothSnap** __retval);
void SmoothSnap__CreatePoints_fn(uType* __type, SmoothSnap** __retval);
void SmoothSnap__get_Destination_fn(SmoothSnap* __this, uTRef __retval);
void SmoothSnap__set_Destination_fn(SmoothSnap* __this, void* value);
void SmoothSnap__get_IsStatic_fn(SmoothSnap* __this, bool* __retval);
void SmoothSnap__New1_fn(uType* __type, float* scale, SmoothSnap** __retval);
void SmoothSnap__get_Position_fn(SmoothSnap* __this, uTRef __retval);
void SmoothSnap__set_Position_fn(SmoothSnap* __this, void* value);
void SmoothSnap__Reset_fn(SmoothSnap* __this, void* destination);
void SmoothSnap__get_Speed_fn(SmoothSnap* __this, float* __retval);
void SmoothSnap__set_Speed_fn(SmoothSnap* __this, float* value);
void SmoothSnap__Update_fn(SmoothSnap* __this, double* elapsed);
void SmoothSnap__get_Velocity_fn(SmoothSnap* __this, uTRef __retval);
void SmoothSnap__set_Velocity_fn(SmoothSnap* __this, void* value);

struct SmoothSnap : uObject
{
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    float _scale;
    float _speed;
    float _speedDropoutDistance;
    float _speedMin;
    uTField _Destination() { return __type->Field(this, 5); }
    uTField _Position() { return __type->Field(this, 6); }
    uTField _Velocity() { return __type->Field(this, 7); }

    void ctor_(float scale);
    template<class T>
    T Destination() { T __retval; return SmoothSnap__get_Destination_fn(this, &__retval), __retval; }
    template<class T>
    void Destination(T value) { SmoothSnap__set_Destination_fn(this, uConstrain(__type->T(0), value)); }
    bool IsStatic();
    template<class T>
    T Position() { T __retval; return SmoothSnap__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { SmoothSnap__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T destination) { SmoothSnap__Reset_fn(this, uConstrain(__type->T(0), destination)); }
    float Speed();
    void Speed(float value);
    void Update(double elapsed);
    template<class T>
    T Velocity() { T __retval; return SmoothSnap__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { SmoothSnap__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    static SmoothSnap* CreateNormalized(uType* __type);
    static SmoothSnap* CreatePoints(uType* __type);
    static SmoothSnap* New1(uType* __type, float scale);
};
// }

}}} // ::g::Experimental::Physics

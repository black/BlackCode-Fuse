// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class UpdateSeekArgs :1667
// {
uType* UpdateSeekArgs_typeof();
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time);
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval);
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value);
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval);
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value);
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval);
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval);
void UpdateSeekArgs__get_RelativeDistance_fn(UpdateSeekArgs* __this, float* __retval);

struct UpdateSeekArgs : uObject
{
    float _scale;
    double _time;
    float _Delta;
    float _Distance;

    void ctor_(float delta, float distance, float scale, double time);
    float Delta();
    void Delta(float value);
    float Distance();
    void Distance(float value);
    float RelativeDelta();
    float RelativeDistance();
    static UpdateSeekArgs* New1(float delta, float distance, float scale, double time);
};
// }

}}} // ::g::Fuse::Navigation

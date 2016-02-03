// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct ProgressSpan;}}}
namespace g{namespace Fuse{namespace Navigation{struct ProgressTimer;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class ProgressTimer :195
// {
uType* ProgressTimer_typeof();
void ProgressTimer__ctor__fn(ProgressTimer* __this, double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant);
void ProgressTimer__Ease_fn(ProgressTimer* __this, double* progress, double* __retval);
void ProgressTimer__get_EasedNormalizedProgress_fn(ProgressTimer* __this, double* __retval);
void ProgressTimer__get_EasedProgress_fn(ProgressTimer* __this, double* __retval);
void ProgressTimer__New1_fn(double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant, ProgressTimer** __retval);
void ProgressTimer__get_NormalizedProgress_fn(ProgressTimer* __this, double* __retval);
void ProgressTimer__get_Progress_fn(ProgressTimer* __this, double* __retval);
void ProgressTimer__get_ProgressSpan_fn(ProgressTimer* __this, ::g::Fuse::Navigation::ProgressSpan** __retval);
void ProgressTimer__Start_fn(double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant, ProgressTimer** __retval);
void ProgressTimer__get_TimeLeft_fn(ProgressTimer* __this, double* __retval);
void ProgressTimer__Update_fn(ProgressTimer* __this);
void ProgressTimer__get_Variant_fn(ProgressTimer* __this, int* __retval);

struct ProgressTimer : uObject
{
    double _duration;
    int _easing;
    double _elapsedTime;
    uStrong< ::g::Fuse::Navigation::ProgressSpan*> _progressSpan;
    int _variant;

    void ctor_(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
    double Ease(double progress);
    double EasedNormalizedProgress();
    double EasedProgress();
    double NormalizedProgress();
    double Progress();
    ::g::Fuse::Navigation::ProgressSpan* ProgressSpan();
    double TimeLeft();
    void Update();
    int Variant();
    static ProgressTimer* New1(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
    static ProgressTimer* Start(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
};
// }

}}} // ::g::Fuse::Navigation

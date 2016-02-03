// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationTween;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class NavigationTween :1571
// {
uType* NavigationTween_typeof();
void NavigationTween__ctor__fn(NavigationTween* __this);
void NavigationTween__get_Duration_fn(NavigationTween* __this, double* __retval);
void NavigationTween__set_Duration_fn(NavigationTween* __this, double* value);
void NavigationTween__get_DurationBack_fn(NavigationTween* __this, double* __retval);
void NavigationTween__set_DurationBack_fn(NavigationTween* __this, double* value);
void NavigationTween__get_Easing_fn(NavigationTween* __this, int* __retval);
void NavigationTween__set_Easing_fn(NavigationTween* __this, int* value);
void NavigationTween__get_EasingBack_fn(NavigationTween* __this, int* __retval);
void NavigationTween__set_EasingBack_fn(NavigationTween* __this, int* value);
void NavigationTween__New1_fn(NavigationTween** __retval);

struct NavigationTween : uObject
{
    double _duration;
    double _durationBack;
    int _easing;
    int _easingBack;
    bool _hasDurationBack;
    bool _hasEasingBack;

    void ctor_();
    double Duration();
    void Duration(double value);
    double DurationBack();
    void DurationBack(double value);
    int Easing();
    void Easing(int value);
    int EasingBack();
    void EasingBack(int value);
    static NavigationTween* New1();
};
// }

}}} // ::g::Fuse::Navigation

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.NavigationAnimation.h>
namespace g{namespace Fuse{namespace Navigation{struct ActivatingAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class ActivatingAnimation :584
// {
::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof();
void ActivatingAnimation__ctor_3_fn(ActivatingAnimation* __this);
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this);
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval);
void ActivatingAnimation__New1_fn(ActivatingAnimation** __retval);
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct ActivatingAnimation : ::g::Fuse::Navigation::NavigationAnimation
{
    void ctor_3();
    double InvertProgress(double p);
    static ActivatingAnimation* New1();
};
// }

}}} // ::g::Fuse::Navigation

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.NavigationAnimation.h>
namespace g{namespace Fuse{namespace Navigation{struct EnterExitAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class EnterExitAnimation :537
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof();
void EnterExitAnimation__ctor_3_fn(EnterExitAnimation* __this);
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this);
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval);
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct EnterExitAnimation : ::g::Fuse::Navigation::NavigationAnimation
{
    bool NegativeProgress;
    bool PositiveProgress;

    void ctor_3();
    bool IsMatch(double progress);
};
// }

}}} // ::g::Fuse::Navigation

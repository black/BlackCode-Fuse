// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_ACTIVATING_ANIMATION_H__
#define __APP_FUSE_NAVIGATION_ACTIVATING_ANIMATION_H__

#include <app/Fuse.Navigation.NavigationAnimation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct ActivatingAnimation;

struct ActivatingAnimation__uType : ::app::Fuse::Navigation::NavigationAnimation__uType
{
};

ActivatingAnimation__uType* ActivatingAnimation__typeof();

void ActivatingAnimation___ObjInit_3(ActivatingAnimation* __this);
void ActivatingAnimation__ForceUpdate(ActivatingAnimation* __this);
double ActivatingAnimation__InvertProgress(ActivatingAnimation* __this, double p);
ActivatingAnimation* ActivatingAnimation__New_1(::uStatic* __this);
void ActivatingAnimation__OnNavigationStateChanged(ActivatingAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct ActivatingAnimation : ::app::Fuse::Navigation::NavigationAnimation
{
    void _ObjInit_3() { ActivatingAnimation___ObjInit_3(this); }
    double InvertProgress(double p) { return ActivatingAnimation__InvertProgress(this, p); }
};

}}}


#endif

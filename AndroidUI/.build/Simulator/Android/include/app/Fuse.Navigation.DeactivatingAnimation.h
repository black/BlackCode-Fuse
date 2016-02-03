// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_DEACTIVATING_ANIMATION_H__
#define __APP_FUSE_NAVIGATION_DEACTIVATING_ANIMATION_H__

#include <app/Fuse.Navigation.NavigationAnimation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct DeactivatingAnimation;

struct DeactivatingAnimation__uType : ::app::Fuse::Navigation::NavigationAnimation__uType
{
};

DeactivatingAnimation__uType* DeactivatingAnimation__typeof();

void DeactivatingAnimation___ObjInit_3(DeactivatingAnimation* __this);
void DeactivatingAnimation__ForceUpdate(DeactivatingAnimation* __this);
DeactivatingAnimation* DeactivatingAnimation__New_1(::uStatic* __this);
void DeactivatingAnimation__OnNavigationStateChanged(DeactivatingAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct DeactivatingAnimation : ::app::Fuse::Navigation::NavigationAnimation
{
    void _ObjInit_3() { DeactivatingAnimation___ObjInit_3(this); }
};

}}}


#endif

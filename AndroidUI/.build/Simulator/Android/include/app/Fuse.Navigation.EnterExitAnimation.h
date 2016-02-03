// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_ENTER_EXIT_ANIMATION_H__
#define __APP_FUSE_NAVIGATION_ENTER_EXIT_ANIMATION_H__

#include <app/Fuse.Navigation.NavigationAnimation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct EnterExitAnimation;

struct EnterExitAnimation__uType : ::app::Fuse::Navigation::NavigationAnimation__uType
{
};

EnterExitAnimation__uType* EnterExitAnimation__typeof();

void EnterExitAnimation___ObjInit_3(EnterExitAnimation* __this);
void EnterExitAnimation__ForceUpdate(EnterExitAnimation* __this);
bool EnterExitAnimation__IsMatch(EnterExitAnimation* __this, double progress);
void EnterExitAnimation__OnNavigationStateChanged(EnterExitAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct EnterExitAnimation : ::app::Fuse::Navigation::NavigationAnimation
{
    bool PositiveProgress;
    bool NegativeProgress;

    void _ObjInit_3() { EnterExitAnimation___ObjInit_3(this); }
    bool IsMatch(double progress) { return EnterExitAnimation__IsMatch(this, progress); }
};

}}}


#endif

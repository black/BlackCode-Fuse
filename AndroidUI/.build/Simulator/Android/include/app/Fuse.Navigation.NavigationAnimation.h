// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_ANIMATION_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationAnimation;

struct NavigationAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
    void(*__fp_ForceUpdate)(NavigationAnimation*);
    void(*__fp_OnNavigationStateChanged)(NavigationAnimation*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*);
};

NavigationAnimation__uType* NavigationAnimation__typeof();

void NavigationAnimation___ObjInit_2(NavigationAnimation* __this);
::app::Fuse::Node* NavigationAnimation__get_PageContext(NavigationAnimation* __this);
float NavigationAnimation__get_Scale(NavigationAnimation* __this);
void NavigationAnimation__GoProgress(NavigationAnimation* __this, double p, int variant, ::app::Fuse::Navigation::NavigationArgs* state);
void NavigationAnimation__OnRooted(NavigationAnimation* __this, ::app::Fuse::Node* elm);
void NavigationAnimation__OnUnrooted(NavigationAnimation* __this, ::app::Fuse::Node* elm);
void NavigationAnimation__set_Scale(NavigationAnimation* __this, float value);

struct NavigationAnimation : ::app::Fuse::Triggers::Trigger
{
    float _scale;

    void _ObjInit_2() { NavigationAnimation___ObjInit_2(this); }
    void ForceUpdate() { (((NavigationAnimation__uType*)this->__obj_type)->__fp_ForceUpdate)(this); }
    ::app::Fuse::Node* PageContext() { return NavigationAnimation__get_PageContext(this); }
    float Scale() { return NavigationAnimation__get_Scale(this); }
    void GoProgress(double p, int variant, ::app::Fuse::Navigation::NavigationArgs* state) { NavigationAnimation__GoProgress(this, p, variant, state); }
    void OnNavigationStateChanged(::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state) { (((NavigationAnimation__uType*)this->__obj_type)->__fp_OnNavigationStateChanged)(this, sender, state); }
    void Scale(float value) { NavigationAnimation__set_Scale(this, value); }
};

}}}


#endif

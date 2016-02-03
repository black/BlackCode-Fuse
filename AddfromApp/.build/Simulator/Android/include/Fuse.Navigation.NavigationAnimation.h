// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class NavigationAnimation :485
// {
struct NavigationAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_ForceUpdate)(::g::Fuse::Navigation::NavigationAnimation*);
    void(*fp_OnNavigationStateChanged)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*);
};

NavigationAnimation_type* NavigationAnimation_typeof();
void NavigationAnimation__ctor_2_fn(NavigationAnimation* __this);
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state);
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this, ::g::Fuse::Node* parentNode);
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this, ::g::Fuse::Node* parentNode);
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Node** __retval);
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval);
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value);

struct NavigationAnimation : ::g::Fuse::Triggers::Trigger
{
    float _scale;

    void ctor_2();
    void ForceUpdate() { (((NavigationAnimation_type*)__type)->fp_ForceUpdate)(this); }
    void GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state);
    void OnNavigationStateChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state) { (((NavigationAnimation_type*)__type)->fp_OnNavigationStateChanged)(this, sender, state); }
    ::g::Fuse::Node* PageContext();
    float Scale();
    void Scale(float value);
};
// }

}}} // ::g::Fuse::Navigation

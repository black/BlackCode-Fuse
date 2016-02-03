// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class WhileNavigationTrigger :2197
// {
struct WhileNavigationTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_ForceUpdate)(::g::Fuse::Navigation::WhileNavigationTrigger*);
    void(*fp_OnNavigationStateChanged)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*);
};

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();
void WhileNavigationTrigger__ctor_3_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__GoProgress_fn(WhileNavigationTrigger* __this, double* progress);
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval);
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value);
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this, ::g::Fuse::Node* parentNode);
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this, ::g::Fuse::Node* parentNode);
void WhileNavigationTrigger__get_PageContext_fn(WhileNavigationTrigger* __this, ::g::Fuse::Node** __retval);
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval);
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value);

struct WhileNavigationTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    bool _hasLimit;
    float _limit;
    float _threshold;

    void ctor_3();
    void ForceUpdate() { (((WhileNavigationTrigger_type*)__type)->fp_ForceUpdate)(this); }
    void GoProgress(double progress);
    float Limit();
    void Limit(float value);
    void OnNavigationStateChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state) { (((WhileNavigationTrigger_type*)__type)->fp_OnNavigationStateChanged)(this, sender, state); }
    ::g::Fuse::Node* PageContext();
    float Threshold();
    void Threshold(float value);
};
// }

}}} // ::g::Fuse::Navigation

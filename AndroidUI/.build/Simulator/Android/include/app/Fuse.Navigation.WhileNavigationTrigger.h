// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_NAVIGATION_TRIGGER_H__
#define __APP_FUSE_NAVIGATION_WHILE_NAVIGATION_TRIGGER_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileNavigationTrigger;

struct WhileNavigationTrigger__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
    void(*__fp_ForceUpdate)(WhileNavigationTrigger*);
    void(*__fp_OnNavigationStateChanged)(WhileNavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*);
};

WhileNavigationTrigger__uType* WhileNavigationTrigger__typeof();

void WhileNavigationTrigger___ObjInit_3(WhileNavigationTrigger* __this);
float WhileNavigationTrigger__get_Limit(WhileNavigationTrigger* __this);
::app::Fuse::Node* WhileNavigationTrigger__get_PageContext(WhileNavigationTrigger* __this);
float WhileNavigationTrigger__get_Threshold(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__GoProgress(WhileNavigationTrigger* __this, double progress);
void WhileNavigationTrigger__OnRooted(WhileNavigationTrigger* __this, ::app::Fuse::Node* elm);
void WhileNavigationTrigger__OnUnrooted(WhileNavigationTrigger* __this, ::app::Fuse::Node* elm);
void WhileNavigationTrigger__set_Limit(WhileNavigationTrigger* __this, float value);
void WhileNavigationTrigger__set_Threshold(WhileNavigationTrigger* __this, float value);

struct WhileNavigationTrigger : ::app::Fuse::Triggers::WhileTrigger
{
    float _threshold;
    float _limit;
    bool _hasLimit;

    void _ObjInit_3() { WhileNavigationTrigger___ObjInit_3(this); }
    void ForceUpdate() { (((WhileNavigationTrigger__uType*)this->__obj_type)->__fp_ForceUpdate)(this); }
    float Limit() { return WhileNavigationTrigger__get_Limit(this); }
    ::app::Fuse::Node* PageContext() { return WhileNavigationTrigger__get_PageContext(this); }
    float Threshold() { return WhileNavigationTrigger__get_Threshold(this); }
    void GoProgress(double progress) { WhileNavigationTrigger__GoProgress(this, progress); }
    void OnNavigationStateChanged(::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state) { (((WhileNavigationTrigger__uType*)this->__obj_type)->__fp_OnNavigationStateChanged)(this, sender, state); }
    void Limit(float value) { WhileNavigationTrigger__set_Limit(this, value); }
    void Threshold(float value) { WhileNavigationTrigger__set_Threshold(this, value); }
};

}}}


#endif

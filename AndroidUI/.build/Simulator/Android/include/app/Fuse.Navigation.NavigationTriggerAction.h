// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_TRIGGER_ACTION_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_TRIGGER_ACTION_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationTriggerAction;

struct NavigationTriggerAction__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
    void(*__fp_Perform_1)(NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*);
};

NavigationTriggerAction__uType* NavigationTriggerAction__typeof();

void NavigationTriggerAction___ObjInit_1(NavigationTriggerAction* __this);
::uObject* NavigationTriggerAction__get_Context(NavigationTriggerAction* __this);
void NavigationTriggerAction__Perform(NavigationTriggerAction* __this, ::app::Fuse::Node* n);
void NavigationTriggerAction__set_Context(NavigationTriggerAction* __this, ::uObject* value);

struct NavigationTriggerAction : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _context;

    void _ObjInit_1() { NavigationTriggerAction___ObjInit_1(this); }
    ::uObject* Context() { return NavigationTriggerAction__get_Context(this); }
    void Perform_1(::uObject* ctx, ::app::Fuse::Node* n) { (((NavigationTriggerAction__uType*)this->__obj_type)->__fp_Perform_1)(this, ctx, n); }
    void Context(::uObject* value) { NavigationTriggerAction__set_Context(this, value); }
};

}}}


#endif

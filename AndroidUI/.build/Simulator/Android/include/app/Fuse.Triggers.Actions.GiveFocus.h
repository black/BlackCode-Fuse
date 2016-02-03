// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_GIVE_FOCUS_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_GIVE_FOCUS_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct GiveFocus;

extern ::uStaticStrong< ::app::Fuse::Triggers::Actions::TriggerAction*> GiveFocus__Singleton;

struct GiveFocus__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

GiveFocus__uType* GiveFocus__typeof();

void GiveFocus___ObjInit_1(GiveFocus* __this);
void GiveFocus___TypeInit(::uStatic* __this);
::app::Fuse::Node* GiveFocus__get_Target(GiveFocus* __this);
GiveFocus* GiveFocus__New_1(::uStatic* __this);
void GiveFocus__Perform(GiveFocus* __this, ::app::Fuse::Node* target);
void GiveFocus__set_Target(GiveFocus* __this, ::app::Fuse::Node* value);

struct GiveFocus : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    void _ObjInit_1() { GiveFocus___ObjInit_1(this); }
    ::app::Fuse::Node* Target() { return GiveFocus__get_Target(this); }
    void Target(::app::Fuse::Node* value) { GiveFocus__set_Target(this, value); }
};

}}}}


#endif

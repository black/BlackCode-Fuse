// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TOGGLE_H__
#define __APP_FUSE_CONTROLS_TOGGLE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Toggle;

struct Toggle__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Toggle__uType* Toggle__typeof();

void Toggle___ObjInit_1(Toggle* __this);
::uObject* Toggle__FindTarget(Toggle* __this, ::app::Fuse::Node* n);
::uObject* Toggle__get_Target(Toggle* __this);
Toggle* Toggle__New_1(::uStatic* __this);
void Toggle__Perform(Toggle* __this, ::app::Fuse::Node* target);
void Toggle__set_Target(Toggle* __this, ::uObject* value);

struct Toggle : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _Target;

    void _ObjInit_1() { Toggle___ObjInit_1(this); }
    ::uObject* FindTarget(::app::Fuse::Node* n) { return Toggle__FindTarget(this, n); }
    ::uObject* Target() { return Toggle__get_Target(this); }
    void Target(::uObject* value) { Toggle__set_Target(this, value); }
};

}}}


#endif

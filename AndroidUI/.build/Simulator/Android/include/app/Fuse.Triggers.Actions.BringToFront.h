// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_BRING_TO_FRONT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_BRING_TO_FRONT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct BringToFront;

struct BringToFront__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

BringToFront__uType* BringToFront__typeof();

void BringToFront___ObjInit_1(BringToFront* __this);
::app::Fuse::Node* BringToFront__get_Target(BringToFront* __this);
BringToFront* BringToFront__New_1(::uStatic* __this);
void BringToFront__Perform(BringToFront* __this, ::app::Fuse::Node* target);
void BringToFront__set_Target(BringToFront* __this, ::app::Fuse::Node* value);

struct BringToFront : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    void _ObjInit_1() { BringToFront___ObjInit_1(this); }
    ::app::Fuse::Node* Target() { return BringToFront__get_Target(this); }
    void Target(::app::Fuse::Node* value) { BringToFront__set_Target(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SEND_TO_BACK_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SEND_TO_BACK_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct SendToBack;

struct SendToBack__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

SendToBack__uType* SendToBack__typeof();

void SendToBack___ObjInit_1(SendToBack* __this);
::app::Fuse::Node* SendToBack__get_Target(SendToBack* __this);
SendToBack* SendToBack__New_1(::uStatic* __this);
void SendToBack__Perform(SendToBack* __this, ::app::Fuse::Node* target);
void SendToBack__set_Target(SendToBack* __this, ::app::Fuse::Node* value);

struct SendToBack : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    void _ObjInit_1() { SendToBack___ObjInit_1(this); }
    ::app::Fuse::Node* Target() { return SendToBack__get_Target(this); }
    void Target(::app::Fuse::Node* value) { SendToBack__set_Target(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct SendToBack;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class SendToBack :26
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();
void SendToBack__ctor_1_fn(SendToBack* __this);
void SendToBack__New1_fn(SendToBack** __retval);
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target);
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Node** __retval);
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Node* value);

struct SendToBack : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_1();
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static SendToBack* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

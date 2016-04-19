// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Pulse;}}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Pulse :187
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target);
void Pulse__get_Target_fn(Pulse* __this, ::g::Fuse::Triggers::WhileBool** __retval);
void Pulse__set_Target_fn(Pulse* __this, ::g::Fuse::Triggers::WhileBool* value);

struct Pulse : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Triggers::WhileBool*> _Target;

    ::g::Fuse::Triggers::WhileBool* Target();
    void Target(::g::Fuse::Triggers::WhileBool* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions

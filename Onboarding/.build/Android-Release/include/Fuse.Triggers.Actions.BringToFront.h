// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct BringToFront;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class BringToFront :10
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof();
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target);
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Node** __retval);
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Node* value);

struct BringToFront : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Node*> _Target;

    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions

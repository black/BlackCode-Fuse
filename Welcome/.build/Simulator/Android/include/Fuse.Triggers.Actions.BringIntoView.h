// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct BringIntoView;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class BringIntoView :9
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof();
void BringIntoView__ctor_1_fn(BringIntoView* __this);
void BringIntoView__New1_fn(BringIntoView** __retval);
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target);

struct BringIntoView : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    static BringIntoView* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

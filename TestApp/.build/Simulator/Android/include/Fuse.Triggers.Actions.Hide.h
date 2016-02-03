// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Hide;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Hide :403
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof();
void Hide__ctor_1_fn(Hide* __this);
void Hide__New1_fn(Hide** __retval);
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target);

struct Hide : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    static Hide* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

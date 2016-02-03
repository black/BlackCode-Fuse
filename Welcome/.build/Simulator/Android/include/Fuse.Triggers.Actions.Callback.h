// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Callback;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Callback :7
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof();
void Callback__ctor_1_fn(Callback* __this);
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval);
void Callback__set_Action_fn(Callback* __this, uDelegate* value);
void Callback__add_Handler_fn(Callback* __this, uDelegate* value);
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value);
void Callback__New1_fn(Callback** __retval);
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target);

struct Callback : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uDelegate*> _Action;
    uStrong<uDelegate*> Handler1;

    void ctor_1();
    uDelegate* Action();
    void Action(uDelegate* value);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    static Callback* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

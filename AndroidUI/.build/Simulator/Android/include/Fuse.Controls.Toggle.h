// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Controls{struct Toggle;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Toggle :4285
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof();
void Toggle__ctor_1_fn(Toggle* __this);
void Toggle__FindTarget_fn(Toggle* __this, ::g::Fuse::Node* n, uObject** __retval);
void Toggle__New1_fn(Toggle** __retval);
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target);
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval);
void Toggle__set_Target_fn(Toggle* __this, uObject* value);

struct Toggle : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _Target;

    void ctor_1();
    uObject* FindTarget(::g::Fuse::Node* n);
    uObject* Target();
    void Target(uObject* value);
    static Toggle* New1();
};
// }

}}} // ::g::Fuse::Controls

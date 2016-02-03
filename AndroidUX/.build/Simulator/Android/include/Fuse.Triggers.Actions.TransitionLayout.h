// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TransitionLayout;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class TransitionLayout :240
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();
void TransitionLayout__ctor_1_fn(TransitionLayout* __this);
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval);
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value);
void TransitionLayout__New1_fn(TransitionLayout** __retval);
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target);

struct TransitionLayout : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Elements::Element*> _From;

    void ctor_1();
    ::g::Fuse::Elements::Element* From();
    void From(::g::Fuse::Elements::Element* value);
    static TransitionLayout* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

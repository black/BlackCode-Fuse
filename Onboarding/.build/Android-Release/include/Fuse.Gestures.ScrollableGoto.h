// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct ScrollableGoto;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ScrollableGoto :11
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof();
void ScrollableGoto__Perform_fn(ScrollableGoto* __this, ::g::Fuse::Node* target);
void ScrollableGoto__get_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView** __retval);
void ScrollableGoto__set_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView* value);

struct ScrollableGoto : ::g::Fuse::Triggers::Actions::TriggerAction
{
    bool _hasPosition;
    bool _hasRelativePosition;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _relativePosition;
    uStrong< ::g::Fuse::Controls::ScrollView*> _Target;

    ::g::Fuse::Controls::ScrollView* Target();
    void Target(::g::Fuse::Controls::ScrollView* value);
};
// }

}}} // ::g::Fuse::Gestures

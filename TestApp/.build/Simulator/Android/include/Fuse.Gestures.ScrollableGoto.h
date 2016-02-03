// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Gestures\$.uno'.
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
void ScrollableGoto__ctor_1_fn(ScrollableGoto* __this);
void ScrollableGoto__New1_fn(ScrollableGoto** __retval);
void ScrollableGoto__Perform_fn(ScrollableGoto* __this, ::g::Fuse::Node* target);
void ScrollableGoto__get_Position_fn(ScrollableGoto* __this, ::g::Uno::Float2* __retval);
void ScrollableGoto__set_Position_fn(ScrollableGoto* __this, ::g::Uno::Float2* value);
void ScrollableGoto__get_RelativePosition_fn(ScrollableGoto* __this, ::g::Uno::Float2* __retval);
void ScrollableGoto__set_RelativePosition_fn(ScrollableGoto* __this, ::g::Uno::Float2* value);
void ScrollableGoto__get_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView** __retval);
void ScrollableGoto__set_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView* value);

struct ScrollableGoto : ::g::Fuse::Triggers::Actions::TriggerAction
{
    bool _hasPosition;
    bool _hasRelativePosition;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _relativePosition;
    uStrong< ::g::Fuse::Controls::ScrollView*> _Target;

    void ctor_1();
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    ::g::Uno::Float2 RelativePosition();
    void RelativePosition(::g::Uno::Float2 value);
    ::g::Fuse::Controls::ScrollView* Target();
    void Target(::g::Fuse::Controls::ScrollView* value);
    static ScrollableGoto* New1();
};
// }

}}} // ::g::Fuse::Gestures

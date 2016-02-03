// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileScrollable;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileScrollable :354
// {
::g::Fuse::Triggers::Trigger_type* WhileScrollable_typeof();
void WhileScrollable__ctor_3_fn(WhileScrollable* __this);
void WhileScrollable__get_IsOn_fn(WhileScrollable* __this, bool* __retval);
void WhileScrollable__New1_fn(WhileScrollable** __retval);
void WhileScrollable__OnRooted_fn(WhileScrollable* __this, ::g::Fuse::Node* parentNode);
void WhileScrollable__OnScrollPositionChanged_fn(WhileScrollable* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileScrollable__OnUnrooted_fn(WhileScrollable* __this, ::g::Fuse::Node* parentNode);
void WhileScrollable__get_ScrollDirections_fn(WhileScrollable* __this, int* __retval);
void WhileScrollable__set_ScrollDirections_fn(WhileScrollable* __this, int* value);
void WhileScrollable__get_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView** __retval);
void WhileScrollable__set_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView* value);

struct WhileScrollable : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    uStrong< ::g::Fuse::Controls::ScrollView*> _source;
    int _ScrollDirections;

    void ctor_3();
    bool IsOn();
    void OnScrollPositionChanged(uObject* sender, ::g::Uno::EventArgs* args);
    int ScrollDirections();
    void ScrollDirections(int value);
    ::g::Fuse::Controls::ScrollView* ScrollView();
    void ScrollView(::g::Fuse::Controls::ScrollView* value);
    static WhileScrollable* New1();
};
// }

}}} // ::g::Fuse::Triggers

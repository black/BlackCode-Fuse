// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileSwipeActive;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhileSwipeActive :671
// {
::g::Fuse::Triggers::Trigger_type* WhileSwipeActive_typeof();
void WhileSwipeActive__ctor_3_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void WhileSwipeActive__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval);
void WhileSwipeActive__OnIsActiveChanged_fn(WhileSwipeActive* __this, bool* v);
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this, ::g::Fuse::Node* n);
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this, ::g::Fuse::Node* n);
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct WhileSwipeActive : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_3(::g::Fuse::Gestures::SwipeGesture* source);
    void OnIsActiveChanged(bool v);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static WhileSwipeActive* New1(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures

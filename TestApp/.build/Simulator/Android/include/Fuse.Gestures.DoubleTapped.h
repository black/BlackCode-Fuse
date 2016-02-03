// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.ClickerTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct DoubleTapped;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleTapped :806
// {
::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof();
void DoubleTapped__ctor_3_fn(DoubleTapped* __this);
void DoubleTapped__ctor_4_fn(DoubleTapped* __this, uDelegate* handler);
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value);
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value);
void DoubleTapped__New1_fn(DoubleTapped** __retval);
void DoubleTapped__New2_fn(uDelegate* handler, DoubleTapped** __retval);
void DoubleTapped__OnRooted_fn(DoubleTapped* __this, ::g::Fuse::Node* parentNode);
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount);
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this, ::g::Fuse::Node* parentNode);

struct DoubleTapped : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_3();
    void ctor_4(uDelegate* handler);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount);
    static DoubleTapped* New1();
    static DoubleTapped* New2(uDelegate* handler);
};
// }

}}} // ::g::Fuse::Gestures

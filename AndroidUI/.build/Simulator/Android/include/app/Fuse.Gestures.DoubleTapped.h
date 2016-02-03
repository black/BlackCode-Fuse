// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_DOUBLE_TAPPED_H__
#define __APP_FUSE_GESTURES_DOUBLE_TAPPED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct DoubleTapped;

struct DoubleTapped__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

DoubleTapped__uType* DoubleTapped__typeof();

void DoubleTapped___ObjInit_3(DoubleTapped* __this);
void DoubleTapped___ObjInit_4(DoubleTapped* __this, ::uDelegate* handler);
void DoubleTapped__add_Handler(DoubleTapped* __this, ::uDelegate* value);
DoubleTapped* DoubleTapped__New_1(::uStatic* __this);
DoubleTapped* DoubleTapped__New_2(::uStatic* __this, ::uDelegate* handler);
void DoubleTapped__OnRooted(DoubleTapped* __this, ::app::Fuse::Node* elm);
void DoubleTapped__OnTapped(DoubleTapped* __this, ::app::Fuse::Input::PointerEventArgs* args, int tapCount);
void DoubleTapped__OnUnrooted(DoubleTapped* __this, ::app::Fuse::Node* elm);
void DoubleTapped__remove_Handler(DoubleTapped* __this, ::uDelegate* value);

struct DoubleTapped : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { DoubleTapped___ObjInit_3(this); }
    void _ObjInit_4(::uDelegate* handler) { DoubleTapped___ObjInit_4(this, handler); }
    void add_Handler(::uDelegate* value) { DoubleTapped__add_Handler(this, value); }
    void OnTapped(::app::Fuse::Input::PointerEventArgs* args, int tapCount) { DoubleTapped__OnTapped(this, args, tapCount); }
    void remove_Handler(::uDelegate* value) { DoubleTapped__remove_Handler(this, value); }
};

}}}


#endif

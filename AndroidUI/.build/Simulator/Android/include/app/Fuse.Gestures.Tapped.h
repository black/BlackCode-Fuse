// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_TAPPED_H__
#define __APP_FUSE_GESTURES_TAPPED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Tapped;

struct Tapped__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

Tapped__uType* Tapped__typeof();

void Tapped___ObjInit_3(Tapped* __this);
void Tapped___ObjInit_4(Tapped* __this, ::uDelegate* handler);
void Tapped__add_Handler(Tapped* __this, ::uDelegate* value);
Tapped* Tapped__New_1(::uStatic* __this);
Tapped* Tapped__New_2(::uStatic* __this, ::uDelegate* handler);
void Tapped__OnRooted(Tapped* __this, ::app::Fuse::Node* elm);
void Tapped__OnTapped(Tapped* __this, ::app::Fuse::Input::PointerEventArgs* args, int tapCount);
void Tapped__OnUnrooted(Tapped* __this, ::app::Fuse::Node* elm);
void Tapped__remove_Handler(Tapped* __this, ::uDelegate* value);

struct Tapped : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { Tapped___ObjInit_3(this); }
    void _ObjInit_4(::uDelegate* handler) { Tapped___ObjInit_4(this, handler); }
    void add_Handler(::uDelegate* value) { Tapped__add_Handler(this, value); }
    void OnTapped(::app::Fuse::Input::PointerEventArgs* args, int tapCount) { Tapped__OnTapped(this, args, tapCount); }
    void remove_Handler(::uDelegate* value) { Tapped__remove_Handler(this, value); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_LONG_PRESSED_H__
#define __APP_FUSE_GESTURES_LONG_PRESSED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct LongPressed;

struct LongPressed__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

LongPressed__uType* LongPressed__typeof();

void LongPressed___ObjInit_3(LongPressed* __this);
void LongPressed__add_Handler(LongPressed* __this, ::uDelegate* value);
LongPressed* LongPressed__New_1(::uStatic* __this);
void LongPressed__OnLongPressed(LongPressed* __this, ::app::Fuse::Input::PointerEventArgs* args, int count);
void LongPressed__OnRooted(LongPressed* __this, ::app::Fuse::Node* elm);
void LongPressed__OnUnrooted(LongPressed* __this, ::app::Fuse::Node* elm);
void LongPressed__remove_Handler(LongPressed* __this, ::uDelegate* value);

struct LongPressed : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { LongPressed___ObjInit_3(this); }
    void add_Handler(::uDelegate* value) { LongPressed__add_Handler(this, value); }
    void OnLongPressed(::app::Fuse::Input::PointerEventArgs* args, int count) { LongPressed__OnLongPressed(this, args, count); }
    void remove_Handler(::uDelegate* value) { LongPressed__remove_Handler(this, value); }
};

}}}


#endif

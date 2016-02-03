// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_DOUBLE_CLICKED_H__
#define __APP_FUSE_GESTURES_DOUBLE_CLICKED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct DoubleClicked;

struct DoubleClicked__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

DoubleClicked__uType* DoubleClicked__typeof();

void DoubleClicked___ObjInit_3(DoubleClicked* __this);
void DoubleClicked__add_Handler(DoubleClicked* __this, ::uDelegate* value);
DoubleClicked* DoubleClicked__New_1(::uStatic* __this);
void DoubleClicked__OnClicked(DoubleClicked* __this, ::app::Fuse::Input::PointerEventArgs* args, int clickCount);
void DoubleClicked__OnRooted(DoubleClicked* __this, ::app::Fuse::Node* elm);
void DoubleClicked__OnUnrooted(DoubleClicked* __this, ::app::Fuse::Node* elm);
void DoubleClicked__remove_Handler(DoubleClicked* __this, ::uDelegate* value);

struct DoubleClicked : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { DoubleClicked___ObjInit_3(this); }
    void add_Handler(::uDelegate* value) { DoubleClicked__add_Handler(this, value); }
    void OnClicked(::app::Fuse::Input::PointerEventArgs* args, int clickCount) { DoubleClicked__OnClicked(this, args, clickCount); }
    void remove_Handler(::uDelegate* value) { DoubleClicked__remove_Handler(this, value); }
};

}}}


#endif

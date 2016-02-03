// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_CLICKED_H__
#define __APP_FUSE_GESTURES_CLICKED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Clicked;

struct Clicked__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

Clicked__uType* Clicked__typeof();

void Clicked___ObjInit_3(Clicked* __this);
void Clicked__add_Handler(Clicked* __this, ::uDelegate* value);
void Clicked__AddHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
Clicked* Clicked__GetClicked(::uStatic* __this, ::app::Fuse::Node* n);
Clicked* Clicked__New_1(::uStatic* __this);
void Clicked__OnClicked(Clicked* __this, ::app::Fuse::Input::PointerEventArgs* args, int clickCount);
void Clicked__OnRooted(Clicked* __this, ::app::Fuse::Node* elm);
void Clicked__OnUnrooted(Clicked* __this, ::app::Fuse::Node* elm);
void Clicked__remove_Handler(Clicked* __this, ::uDelegate* value);
void Clicked__RemoveHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct Clicked : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { Clicked___ObjInit_3(this); }
    void add_Handler(::uDelegate* value) { Clicked__add_Handler(this, value); }
    void OnClicked(::app::Fuse::Input::PointerEventArgs* args, int clickCount) { Clicked__OnClicked(this, args, clickCount); }
    void remove_Handler(::uDelegate* value) { Clicked__remove_Handler(this, value); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.ClickerTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicked;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Clicked :16
// {
::g::Fuse::Triggers::Trigger_type* Clicked_typeof();
void Clicked__ctor_3_fn(Clicked* __this);
void Clicked__AddHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void Clicked__GetClicked_fn(::g::Fuse::Node* n, Clicked** __retval);
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value);
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value);
void Clicked__New1_fn(Clicked** __retval);
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount);
void Clicked__OnRooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode);
void Clicked__OnUnrooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode);
void Clicked__RemoveHandler_fn(::g::Fuse::Node* node, uDelegate* handler);

struct Clicked : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_3();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount);
    static void AddHandler(::g::Fuse::Node* node, uDelegate* handler);
    static Clicked* GetClicked(::g::Fuse::Node* n);
    static Clicked* New1();
    static void RemoveHandler(::g::Fuse::Node* node, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Gestures

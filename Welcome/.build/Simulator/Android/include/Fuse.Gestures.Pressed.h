// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Gestures{struct Pressed;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Pressed :265
// {
::g::Fuse::Triggers::Trigger_type* Pressed_typeof();
void Pressed__ctor_2_fn(Pressed* __this);
void Pressed__New1_fn(Pressed** __retval);
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a);
void Pressed__OnRooted_fn(Pressed* __this, ::g::Fuse::Node* parentNode);
void Pressed__OnUnrooted_fn(Pressed* __this, ::g::Fuse::Node* parentNode);

struct Pressed : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    void OnPressed(uObject* s, uObject* a);
    static Pressed* New1();
};
// }

}}} // ::g::Fuse::Gestures

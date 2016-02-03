// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Gestures{struct Released;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Released :375
// {
::g::Fuse::Triggers::Trigger_type* Released_typeof();
void Released__ctor_2_fn(Released* __this);
void Released__New1_fn(Released** __retval);
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a);
void Released__OnRooted_fn(Released* __this, ::g::Fuse::Node* parentNode);
void Released__OnUnrooted_fn(Released* __this, ::g::Fuse::Node* parentNode);

struct Released : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    void OnReleased(uObject* s, uObject* a);
    static Released* New1();
};
// }

}}} // ::g::Fuse::Gestures

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.ClickerTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct LongPressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LongPressed :231
// {
::g::Fuse::Triggers::Trigger_type* LongPressed_typeof();
void LongPressed__ctor_3_fn(LongPressed* __this);
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value);
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value);
void LongPressed__New1_fn(LongPressed** __retval);
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count);
void LongPressed__OnRooted_fn(LongPressed* __this, ::g::Fuse::Node* parentNode);
void LongPressed__OnUnrooted_fn(LongPressed* __this, ::g::Fuse::Node* parentNode);

struct LongPressed : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_3();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int count);
    static LongPressed* New1();
};
// }

}}} // ::g::Fuse::Gestures

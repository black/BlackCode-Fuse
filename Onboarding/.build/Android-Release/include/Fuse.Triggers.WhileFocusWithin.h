// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFocusWithin;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFocusWithin :1371
// {
::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof();
void WhileFocusWithin__ctor_3_fn(WhileFocusWithin* __this);
void WhileFocusWithin__get_IsOn_fn(WhileFocusWithin* __this, bool* __retval);
void WhileFocusWithin__New1_fn(WhileFocusWithin** __retval);
void WhileFocusWithin__OnFocusChange_fn(WhileFocusWithin* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileFocusWithin__OnRooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode);
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode);

struct WhileFocusWithin : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_3();
    bool IsOn();
    void OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileFocusWithin* New1();
};
// }

}}} // ::g::Fuse::Triggers

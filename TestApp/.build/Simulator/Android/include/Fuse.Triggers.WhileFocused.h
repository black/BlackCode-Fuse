// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFocused;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFocused :1300
// {
::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof();
void WhileFocused__ctor_3_fn(WhileFocused* __this);
void WhileFocused__New1_fn(WhileFocused** __retval);
void WhileFocused__OnGotFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileFocused__OnLostFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileFocused__OnRooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode);
void WhileFocused__OnUnrooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode);

struct WhileFocused : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_3();
    void OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileFocused* New1();
};
// }

}}} // ::g::Fuse::Triggers

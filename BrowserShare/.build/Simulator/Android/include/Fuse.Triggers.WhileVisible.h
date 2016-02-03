// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileVisible;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileVisible :1710
// {
::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof();
void WhileVisible__ctor_3_fn(WhileVisible* __this);
void WhileVisible__New1_fn(WhileVisible** __retval);
void WhileVisible__OnIsVisibleChanged_fn(WhileVisible* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileVisible__OnRooted_fn(WhileVisible* __this, ::g::Fuse::Node* parentNode);
void WhileVisible__OnUnrooted_fn(WhileVisible* __this, ::g::Fuse::Node* parentNode);

struct WhileVisible : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_3();
    void OnIsVisibleChanged(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileVisible* New1();
};
// }

}}} // ::g::Fuse::Triggers

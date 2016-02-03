// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhilePaused;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePaused :1486
// {
::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof();
void WhilePaused__ctor_3_fn(WhilePaused* __this);
void WhilePaused__IsPaused_fn(::g::Fuse::Node* n, bool* __retval);
void WhilePaused__New1_fn(WhilePaused** __retval);
void WhilePaused__OnRooted_fn(WhilePaused* __this, ::g::Fuse::Node* parentNode);
void WhilePaused__SetState_fn(::g::Fuse::Node* n, bool* paused);

struct WhilePaused : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whilePausedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whilePausedProp() { return WhilePaused_typeof()->Init(), _whilePausedProp_; }

    void ctor_3();
    static bool IsPaused(::g::Fuse::Node* n);
    static WhilePaused* New1();
    static void SetState(::g::Fuse::Node* n, bool paused);
};
// }

}}} // ::g::Fuse::Triggers

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFailed;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFailed :1168
// {
::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();
void WhileFailed__ctor_3_fn(WhileFailed* __this);
void WhileFailed__IsFailed_fn(::g::Fuse::Node* n, bool* __retval);
void WhileFailed__New1_fn(WhileFailed** __retval);
void WhileFailed__OnRooted_fn(WhileFailed* __this, ::g::Fuse::Node* parentNode);
void WhileFailed__SetState_fn(::g::Fuse::Node* n, bool* failed, uString* message);

struct WhileFailed : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileFailedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileFailedProp() { return WhileFailed_typeof()->Init(), _whileFailedProp_; }

    void ctor_3();
    static bool IsFailed(::g::Fuse::Node* n);
    static WhileFailed* New1();
    static void SetState(::g::Fuse::Node* n, bool failed, uString* message);
};
// }

}}} // ::g::Fuse::Triggers

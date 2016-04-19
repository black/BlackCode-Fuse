// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileCompleted;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileCompleted :1518
// {
::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof();
void WhileCompleted__IsCompleted_fn(::g::Fuse::Node* n, bool* __retval);
void WhileCompleted__OnRooted_fn(WhileCompleted* __this, ::g::Fuse::Node* parentNode);
void WhileCompleted__SetState_fn(::g::Fuse::Node* n, bool* paused);

struct WhileCompleted : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileCompletedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileCompletedProp() { return WhileCompleted_typeof()->Init(), _whileCompletedProp_; }

    static bool IsCompleted(::g::Fuse::Node* n);
    static void SetState(::g::Fuse::Node* n, bool paused);
};
// }

}}} // ::g::Fuse::Triggers

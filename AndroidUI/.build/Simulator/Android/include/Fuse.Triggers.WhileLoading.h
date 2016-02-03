// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileLoading;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileLoading :1411
// {
::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof();
void WhileLoading__ctor_3_fn(WhileLoading* __this);
void WhileLoading__IsLoading_fn(::g::Fuse::Node* n, bool* __retval);
void WhileLoading__New1_fn(WhileLoading** __retval);
void WhileLoading__OnRooted_fn(WhileLoading* __this, ::g::Fuse::Node* parentNode);
void WhileLoading__SetState_fn(::g::Fuse::Node* n, bool* loading);

struct WhileLoading : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileLoadingProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileLoadingProp() { return WhileLoading_typeof()->Init(), _whileLoadingProp_; }

    void ctor_3();
    static bool IsLoading(::g::Fuse::Node* n);
    static WhileLoading* New1();
    static void SetState(::g::Fuse::Node* n, bool loading);
};
// }

}}} // ::g::Fuse::Triggers

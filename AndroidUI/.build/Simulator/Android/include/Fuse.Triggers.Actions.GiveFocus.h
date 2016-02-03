// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct GiveFocus;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class GiveFocus :73
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof();
void GiveFocus__ctor_1_fn(GiveFocus* __this);
void GiveFocus__New1_fn(GiveFocus** __retval);
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target);
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Node** __retval);
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Node* value);

struct GiveFocus : ::g::Fuse::Triggers::Actions::TriggerAction
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> Singleton_;
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*>& Singleton() { return GiveFocus_typeof()->Init(), Singleton_; }
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_1();
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static GiveFocus* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

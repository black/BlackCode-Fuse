// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct RaiseUserEvent;}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class RaiseUserEvent :74
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();
void RaiseUserEvent__ctor_1_fn(RaiseUserEvent* __this);
void RaiseUserEvent__get_ArgList_fn(RaiseUserEvent* __this, uObject** __retval);
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval);
void RaiseUserEvent__get_Name_fn(RaiseUserEvent* __this, uString** __retval);
void RaiseUserEvent__set_Name_fn(RaiseUserEvent* __this, uString* value);
void RaiseUserEvent__New1_fn(RaiseUserEvent** __retval);
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target);

struct RaiseUserEvent : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _args;
    uStrong< ::g::Fuse::UserEvent*> _event;
    uStrong< ::g::Fuse::Node*> _eventTarget;
    uStrong<uString*> _name;

    void ctor_1();
    uObject* ArgList();
    ::g::Uno::Collections::Dictionary* ConvertArgs();
    uString* Name();
    void Name(uString* value);
    static RaiseUserEvent* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions

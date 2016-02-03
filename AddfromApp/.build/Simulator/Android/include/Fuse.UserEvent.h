// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Fuse{struct UserEventDispatch;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{

// public sealed class UserEvent :255
// {
::g::Fuse::Behavior_type* UserEvent_typeof();
void UserEvent__ctor_1_fn(UserEvent* __this, uString* name);
void UserEvent__get_Name_fn(UserEvent* __this, uString** __retval);
void UserEvent__set_Name_fn(UserEvent* __this, uString* value);
void UserEvent__New1_fn(uString* name, UserEvent** __retval);
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args);
void UserEvent__add_Raised_fn(UserEvent* __this, uDelegate* value);
void UserEvent__remove_Raised_fn(UserEvent* __this, uDelegate* value);
void UserEvent__RaiseEvent_fn(::g::Fuse::Node* from, uString* name, ::g::Uno::Collections::Dictionary* args);
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, uString* name, ::g::Fuse::Node** node, UserEvent** __retval);

struct UserEvent : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::UserEventDispatch*> Dispatch;
    uStrong<uString*> _Name;
    uStrong<uDelegate*> Raised1;

    void ctor_1(uString* name);
    uString* Name();
    void Name(uString* value);
    void Raise(::g::Uno::Collections::Dictionary* args);
    void add_Raised(uDelegate* value);
    void remove_Raised(uDelegate* value);
    static UserEvent* New1(uString* name);
    static void RaiseEvent(::g::Fuse::Node* from, uString* name, ::g::Uno::Collections::Dictionary* args);
    static UserEvent* ScanTree(::g::Fuse::Node* at, uString* name, ::g::Fuse::Node** node);
};
// }

}} // ::g::Fuse

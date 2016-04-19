// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEventArgs;}}
namespace g{namespace Fuse{struct UserEventDispatch;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{

// internal sealed class UserEventDispatch :215
// {
uType* UserEventDispatch_typeof();
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args);
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value);
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value);

struct UserEventDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _userEvents_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _userEvents() { return UserEventDispatch_typeof()->Init(), _userEvents_; }
    uStrong<uDelegate*> Raised1;

    void OnRaised(::g::Fuse::UserEventArgs* args);
    void Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
    void add_Raised(uDelegate* value);
    void remove_Raised(uDelegate* value);
};
// }

}} // ::g::Fuse

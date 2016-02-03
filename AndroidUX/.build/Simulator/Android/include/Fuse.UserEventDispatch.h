// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.18.8\$.uno'.
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
void UserEventDispatch__ctor__fn(UserEventDispatch* __this);
void UserEventDispatch__DirectRaise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
void UserEventDispatch__GetByName_fn(uString* name, UserEventDispatch** __retval);
void UserEventDispatch__get_Name_fn(UserEventDispatch* __this, uString** __retval);
void UserEventDispatch__set_Name_fn(UserEventDispatch* __this, uString* value);
void UserEventDispatch__New1_fn(UserEventDispatch** __retval);
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args);
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value);
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value);

struct UserEventDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _userEvents_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _userEvents() { return UserEventDispatch_typeof()->Init(), _userEvents_; }
    uStrong<uString*> _Name;
    uStrong<uDelegate*> Raised1;

    void ctor_();
    void DirectRaise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
    uString* Name();
    void Name(uString* value);
    void OnRaised(::g::Fuse::UserEventArgs* args);
    void Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
    void add_Raised(uDelegate* value);
    void remove_Raised(uDelegate* value);
    static UserEventDispatch* GetByName(uString* name);
    static UserEventDispatch* New1();
};
// }

}} // ::g::Fuse

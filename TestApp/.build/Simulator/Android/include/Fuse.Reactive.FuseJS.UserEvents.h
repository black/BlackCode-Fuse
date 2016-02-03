// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct UserEvents;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class UserEvents :832
// {
uType* UserEvents_typeof();
void UserEvents__ctor__fn(UserEvents* __this);
void UserEvents__CreateModule_fn(uObject** __retval);
void UserEvents__New1_fn(UserEvents** __retval);
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct UserEvents : uObject
{
    void ctor_();
    static uObject* CreateModule();
    static UserEvents* New1();
    static uObject* Raise(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS

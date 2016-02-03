// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Email;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Email :265
// {
uType* Email_typeof();
void Email__ctor__fn(Email* __this);
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Email__CreateModule_fn(uObject** __retval);
void Email__New1_fn(Email** __retval);

struct Email : uObject
{
    void ctor_();
    static uObject* Compose(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* CreateModule();
    static Email* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Storage;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class Storage :693
// {
uClassType* Storage_typeof();
void Storage__CreateModule_fn(uObject** __retval);
void Storage__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Storage__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Storage__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void Storage__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Storage__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct Storage : uObject
{
    static uObject* CreateModule();
    static uObject* Delete(::g::Fuse::Scripting::Context* c, uArray* args);
    static uObject* Read(::g::Fuse::Scripting::Context* c, uArray* args);
    static ::g::Uno::Threading::Future1* ReadAsync(uArray* args);
    static uObject* Write(::g::Fuse::Scripting::Context* c, uArray* args);
    static ::g::Uno::Threading::Future1* WriteAsync(uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS

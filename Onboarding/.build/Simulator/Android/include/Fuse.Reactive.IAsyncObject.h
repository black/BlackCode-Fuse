// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IAsyncObject :1277
// {
uInterfaceType* IAsyncObject_typeof();

struct IAsyncObject
{
    void(*fp_Tell)(uObject*, uString*, ::g::Fuse::Reactive::Dispatcher*, uDelegate*, uDelegate*);
    static void Tell(const uInterface& __this, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback) { __this.VTable<IAsyncObject>()->fp_Tell(__this, key, thread, callback, failCallback); }
};
// }

}}} // ::g::Fuse::Reactive

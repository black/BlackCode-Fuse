// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IAsyncFunction :1287
// {
uInterfaceType* IAsyncFunction_typeof();

struct IAsyncFunction
{
    void(*fp_Call)(uObject*, ::g::Fuse::Reactive::ScriptEventArgs*);
    void(*fp_Call1)(uObject*, uArray*);
    static void Call(const uInterface& __this, ::g::Fuse::Reactive::ScriptEventArgs* ev) { __this.VTable<IAsyncFunction>()->fp_Call(__this, ev); }
    static void Call1(const uInterface& __this, uArray* args) { __this.VTable<IAsyncFunction>()->fp_Call1(__this, args); }
};
// }

}}} // ::g::Fuse::Reactive

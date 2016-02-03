// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface ISubscription :1293
// {
uInterfaceType* ISubscription_typeof();

struct ISubscription
{
    void(*fp_SetExclusive)(uObject*, uObject*);
    static void SetExclusive(const uInterface& __this, uObject* newValue) { __this.VTable<ISubscription>()->fp_SetExclusive(__this, newValue); }
};
// }

}}} // ::g::Fuse::Reactive

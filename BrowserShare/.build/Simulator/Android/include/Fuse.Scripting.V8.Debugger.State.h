// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private abstract interface Debugger.State :431
// {
uInterfaceType* Debugger__State_typeof();

struct Debugger__State
{
    void(*fp_Run)(uObject*, uObject**);
    static uObject* Run(const uInterface& __this) { uObject* __retval; return __this.VTable<Debugger__State>()->fp_Run(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Scripting::V8

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface INameScope :8
// {
uInterfaceType* INameScope_typeof();

struct INameScope
{
    void(*fp_FindObjectByName)(uObject*, uString*, uDelegate*, uObject**);
    static uObject* FindObjectByName(const uInterface& __this, uString* name, uDelegate* acceptor) { uObject* __retval; return __this.VTable<INameScope>()->fp_FindObjectByName(__this, name, acceptor, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface INameListener :13
// {
uInterfaceType* INameListener_typeof();

struct INameListener
{
    void(*fp_OnNameChanged)(uObject*, uObject*, uString*);
    static void OnNameChanged(const uInterface& __this, uObject* obj, uString* name) { __this.VTable<INameListener>()->fp_OnNameChanged(__this, obj, name); }
};
// }

}}} // ::g::Fuse::Scripting

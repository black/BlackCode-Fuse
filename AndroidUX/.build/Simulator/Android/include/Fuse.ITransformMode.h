// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface ITransformMode :6324
// {
uInterfaceType* ITransformMode_typeof();

struct ITransformMode
{
    void(*fp_get_Flags)(uObject*, int*);
    static int Flags(const uInterface& __this) { int __retval; return __this.VTable<ITransformMode>()->fp_get_Flags(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse

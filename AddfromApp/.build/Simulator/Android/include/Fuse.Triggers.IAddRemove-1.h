// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IAddRemove<T> :653
// {
uInterfaceType* IAddRemove_typeof();

struct IAddRemove
{
    void(*fp_Add)(uObject*, void*);
    void(*fp_Remove)(uObject*, void*);
    template<class T>
    static void Add(const uInterface& __this, T node) { __this.VTable<IAddRemove>()->fp_Add(__this, uConstrain(__this->__type->GetBase(IAddRemove_typeof())->T(0), node)); }
    static void Add_ex(const uInterface& __this, void* node) { __this.VTable<IAddRemove>()->fp_Add(__this, node); }
    template<class T>
    static void Remove(const uInterface& __this, T node) { __this.VTable<IAddRemove>()->fp_Remove(__this, uConstrain(__this->__type->GetBase(IAddRemove_typeof())->T(0), node)); }
    static void Remove_ex(const uInterface& __this, void* node) { __this.VTable<IAddRemove>()->fp_Remove(__this, node); }
};
// }

}}} // ::g::Fuse::Triggers

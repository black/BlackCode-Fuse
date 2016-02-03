// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace UX{

// public abstract interface IFactory :105
// {
uInterfaceType* IFactory_typeof();

struct IFactory
{
    void(*fp_New1)(uObject*, uObject**);
    static uObject* New1(const uInterface& __this) { uObject* __retval; return __this.VTable<IFactory>()->fp_New1(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX

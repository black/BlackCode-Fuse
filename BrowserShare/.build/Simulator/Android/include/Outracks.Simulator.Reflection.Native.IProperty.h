// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// internal abstract interface IProperty :109
// {
uInterfaceType* IProperty_typeof();

struct IProperty
{
    void(*fp_get_DeclaringType)(uObject*, uType**);
    void(*fp_get_GetMethod)(uObject*, uObject**);
    void(*fp_get_SetMethod)(uObject*, uObject**);
    static uType* DeclaringType(const uInterface& __this) { uType* __retval; return __this.VTable<IProperty>()->fp_get_DeclaringType(__this, &__retval), __retval; }
    static uObject* GetMethod(const uInterface& __this) { uObject* __retval; return __this.VTable<IProperty>()->fp_get_GetMethod(__this, &__retval), __retval; }
    static uObject* SetMethod(const uInterface& __this) { uObject* __retval; return __this.VTable<IProperty>()->fp_get_SetMethod(__this, &__retval), __retval; }
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native

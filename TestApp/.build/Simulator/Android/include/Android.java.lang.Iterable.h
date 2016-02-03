// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace java{
namespace lang{

// public abstract extern interface Iterable :18692
// {
uInterfaceType* Iterable_typeof();

struct Iterable
{
    void(*fp_iterator)(uObject*, uObject**);
    static uObject* iterator(const uInterface& __this) { uObject* __retval; return __this.VTable<Iterable>()->fp_iterator(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Android::java::lang

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace java{
namespace lang{

// public abstract extern interface Runnable :18676
// {
uInterfaceType* Runnable_typeof();

struct Runnable
{
    void(*fp_run)(uObject*);
    static void run(const uInterface& __this) { __this.VTable<Runnable>()->fp_run(__this); }
};
// }

}}}} // ::g::Android::java::lang

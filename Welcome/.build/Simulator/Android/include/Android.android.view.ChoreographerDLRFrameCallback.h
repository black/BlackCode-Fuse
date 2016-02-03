// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ChoreographerDLRFrameCallback :26590
// {
uInterfaceType* ChoreographerDLRFrameCallback_typeof();

struct ChoreographerDLRFrameCallback
{
    void(*fp_doFrame)(uObject*, int64_t*);
    static void doFrame(const uInterface& __this, int64_t arg0) { __this.VTable<ChoreographerDLRFrameCallback>()->fp_doFrame(__this, &arg0); }
};
// }

}}}} // ::g::Android::android::view

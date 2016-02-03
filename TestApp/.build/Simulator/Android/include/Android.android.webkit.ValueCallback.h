// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public abstract extern interface ValueCallback :5281
// {
uInterfaceType* ValueCallback_typeof();

struct ValueCallback
{
    void(*fp_onReceiveValue)(uObject*, ::g::Android::java::lang::Object*);
    static void onReceiveValue(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { __this.VTable<ValueCallback>()->fp_onReceiveValue(__this, arg0); }
};
// }

}}}} // ::g::Android::android::webkit

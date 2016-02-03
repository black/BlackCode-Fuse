// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public abstract extern interface GeolocationPermissionsDLRCallback :5247
// {
uInterfaceType* GeolocationPermissionsDLRCallback_typeof();

struct GeolocationPermissionsDLRCallback
{
    void(*fp_invoke)(uObject*, ::g::Android::java::lang::String*, bool*, bool*);
    static void invoke(const uInterface& __this, ::g::Android::java::lang::String* arg0, bool arg1, bool arg2) { __this.VTable<GeolocationPermissionsDLRCallback>()->fp_invoke(__this, arg0, &arg1, &arg2); }
};
// }

}}}} // ::g::Android::android::webkit

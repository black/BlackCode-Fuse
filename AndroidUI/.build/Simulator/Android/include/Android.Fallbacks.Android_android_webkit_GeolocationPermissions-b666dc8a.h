// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.webkit.GeolocationPermissionsDLRCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_webkit_GeolocationPermissionsDLRCallback;}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_webkit_GeolocationPermissionsDLRCallback :29557
// {
struct Android_android_webkit_GeolocationPermissionsDLRCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::webkit::GeolocationPermissionsDLRCallback interface2;
};

Android_android_webkit_GeolocationPermissionsDLRCallback_type* Android_android_webkit_GeolocationPermissionsDLRCallback_typeof();
void Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_fn(Android_android_webkit_GeolocationPermissionsDLRCallback* __this, ::g::Android::java::lang::String* arg0, bool* arg1, bool* arg2);
void Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_IMPL_23945_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_, bool* arg4_);

struct Android_android_webkit_GeolocationPermissionsDLRCallback : ::g::Android::java::lang::Object
{
    static jmethodID invoke_23945_ID_;
    static jmethodID& invoke_23945_ID() { return invoke_23945_ID_; }

    void invoke(::g::Android::java::lang::String* arg0, bool arg1, bool arg2);
    static void invoke_IMPL_23945(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_, bool arg4_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.webkit.ValueCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_webkit_ValueCallback;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_webkit_ValueCallback :29615
// {
struct Android_android_webkit_ValueCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::webkit::ValueCallback interface2;
};

Android_android_webkit_ValueCallback_type* Android_android_webkit_ValueCallback_typeof();
void Android_android_webkit_ValueCallback__onReceiveValue_fn(Android_android_webkit_ValueCallback* __this, ::g::Android::java::lang::Object* arg0);
void Android_android_webkit_ValueCallback__onReceiveValue_IMPL_23991_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_webkit_ValueCallback : ::g::Android::java::lang::Object
{
    static jmethodID onReceiveValue_23991_ID_;
    static jmethodID& onReceiveValue_23991_ID() { return onReceiveValue_23991_ID_; }

    void onReceiveValue(::g::Android::java::lang::Object* arg0);
    static void onReceiveValue_IMPL_23991(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

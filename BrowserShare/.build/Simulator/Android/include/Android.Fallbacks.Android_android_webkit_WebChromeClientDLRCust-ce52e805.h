// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.webkit.WebChromeClientDLRCustomViewCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_webkit_WebChromeClientDLRCustomViewCallback;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_webkit_WebChromeClientDLRCustomViewCallback :29640
// {
struct Android_android_webkit_WebChromeClientDLRCustomViewCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::webkit::WebChromeClientDLRCustomViewCallback interface2;
};

Android_android_webkit_WebChromeClientDLRCustomViewCallback_type* Android_android_webkit_WebChromeClientDLRCustomViewCallback_typeof();
void Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_fn(Android_android_webkit_WebChromeClientDLRCustomViewCallback* __this);
void Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_IMPL_23998_fn(bool* arg0_, jobject* arg1_);

struct Android_android_webkit_WebChromeClientDLRCustomViewCallback : ::g::Android::java::lang::Object
{
    static jmethodID onCustomViewHidden_23998_ID_;
    static jmethodID& onCustomViewHidden_23998_ID() { return onCustomViewHidden_23998_ID_; }

    void onCustomViewHidden();
    static void onCustomViewHidden_IMPL_23998(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks

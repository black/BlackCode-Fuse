// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace webkit{struct WebSettings;}}}}

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public abstract extern class WebSettings :11
// {
::g::Android::java::lang::Object_type* WebSettings_typeof();
void WebSettings___Init2_fn();
void WebSettings__setJavaScriptEnabled_fn(WebSettings* __this, bool* arg0);
void WebSettings__setJavaScriptEnabled_IMPL_24140_fn(bool* arg0_, jobject* arg1_, bool* arg2_);

struct WebSettings : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID setJavaScriptEnabled_24140_ID_;
    static jmethodID& setJavaScriptEnabled_24140_ID() { return setJavaScriptEnabled_24140_ID_; }

    void setJavaScriptEnabled(bool arg0);
    static void _Init2();
    static void setJavaScriptEnabled_IMPL_24140(bool arg0_, jobject arg1_, bool arg2_);
};
// }

}}}} // ::g::Android::android::webkit

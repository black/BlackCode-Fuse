// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace webkit{struct WebChromeClient;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public extern class WebChromeClient :2498
// {
struct WebChromeClient_type : ::g::Android::java::lang::Object_type
{
    void(*fp_onProgressChanged)(::g::Android::android::webkit::WebChromeClient*, ::g::Android::android::webkit::WebView*, int*);
};

WebChromeClient_type* WebChromeClient_typeof();
void WebChromeClient__ctor_5_fn(WebChromeClient* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void WebChromeClient___Init2_fn();
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1);
void WebChromeClient__onProgressChanged_IMPL_24000_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct WebChromeClient : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID onProgressChanged_24000_ID_;
    static jmethodID& onProgressChanged_24000_ID() { return onProgressChanged_24000_ID_; }

    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void onProgressChanged(::g::Android::android::webkit::WebView* arg0, int arg1) { (((WebChromeClient_type*)__type)->fp_onProgressChanged)(this, arg0, &arg1); }
    static void _Init2();
    static void onProgressChanged(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int arg1) { WebChromeClient__onProgressChanged_fn(__this, arg0, &arg1); }
    static void onProgressChanged_IMPL_24000(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::webkit

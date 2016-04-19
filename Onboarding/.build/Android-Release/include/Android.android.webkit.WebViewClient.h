// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebViewClient;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public extern class WebViewClient :4633
// {
struct WebViewClient_type : ::g::Android::java::lang::Object_type
{
    void(*fp_onPageFinished)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*);
    void(*fp_onPageStarted)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, ::g::Android::android::graphics::Bitmap*);
    void(*fp_shouldOverrideUrlLoading)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, bool*);
};

WebViewClient_type* WebViewClient_typeof();
void WebViewClient__ctor_5_fn(WebViewClient* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void WebViewClient___Init2_fn();
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
void WebViewClient__onPageFinished_IMPL_24357_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2);
void WebViewClient__onPageStarted_IMPL_24356_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* __retval);
void WebViewClient__shouldOverrideUrlLoading_IMPL_24355_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct WebViewClient : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID onPageFinished_24357_ID_;
    static jmethodID& onPageFinished_24357_ID() { return onPageFinished_24357_ID_; }
    static jmethodID onPageStarted_24356_ID_;
    static jmethodID& onPageStarted_24356_ID() { return onPageStarted_24356_ID_; }
    static jmethodID shouldOverrideUrlLoading_24355_ID_;
    static jmethodID& shouldOverrideUrlLoading_24355_ID() { return shouldOverrideUrlLoading_24355_ID_; }

    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void onPageFinished(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { (((WebViewClient_type*)__type)->fp_onPageFinished)(this, arg0, arg1); }
    void onPageStarted(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2) { (((WebViewClient_type*)__type)->fp_onPageStarted)(this, arg0, arg1, arg2); }
    bool shouldOverrideUrlLoading(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { bool __retval; return (((WebViewClient_type*)__type)->fp_shouldOverrideUrlLoading)(this, arg0, arg1, &__retval), __retval; }
    static void _Init2();
    static void onPageFinished(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { WebViewClient__onPageFinished_fn(__this, arg0, arg1); }
    static void onPageFinished_IMPL_24357(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onPageStarted(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2) { WebViewClient__onPageStarted_fn(__this, arg0, arg1, arg2); }
    static void onPageStarted_IMPL_24356(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static bool shouldOverrideUrlLoading(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { bool __retval; return WebViewClient__shouldOverrideUrlLoading_fn(__this, arg0, arg1, &__retval), __retval; }
    static bool shouldOverrideUrlLoading_IMPL_24355(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}}} // ::g::Android::android::webkit

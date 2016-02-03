// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace net{namespace http{struct SslError;}}}}}
namespace g{namespace Android{namespace android{namespace os{struct Message;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct HttpAuthHandler;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct SslErrorHandler;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebResourceResponse;}}}}
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
void WebViewClient__ctor_4_fn(WebViewClient* __this);
void WebViewClient__ctor_5_fn(WebViewClient* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void WebViewClient___Init2_fn();
void WebViewClient__doUpdateVisitedHistory_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* arg2);
void WebViewClient__doUpdateVisitedHistory_IMPL_24363_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_);
void WebViewClient__get_ERROR_AUTHENTICATION_fn(int* __retval);
void WebViewClient__get_ERROR_BAD_URL_fn(int* __retval);
void WebViewClient__get_ERROR_CONNECT_fn(int* __retval);
void WebViewClient__get_ERROR_FAILED_SSL_HANDSHAKE_fn(int* __retval);
void WebViewClient__get_ERROR_FILE_fn(int* __retval);
void WebViewClient__get_ERROR_FILE_NOT_FOUND_fn(int* __retval);
void WebViewClient__get_ERROR_HOST_LOOKUP_fn(int* __retval);
void WebViewClient__get_ERROR_IO_fn(int* __retval);
void WebViewClient__get_ERROR_PROXY_AUTHENTICATION_fn(int* __retval);
void WebViewClient__get_ERROR_REDIRECT_LOOP_fn(int* __retval);
void WebViewClient__get_ERROR_TIMEOUT_fn(int* __retval);
void WebViewClient__get_ERROR_TOO_MANY_REQUESTS_fn(int* __retval);
void WebViewClient__get_ERROR_UNKNOWN_fn(int* __retval);
void WebViewClient__get_ERROR_UNSUPPORTED_AUTH_SCHEME_fn(int* __retval);
void WebViewClient__get_ERROR_UNSUPPORTED_SCHEME_fn(int* __retval);
void WebViewClient__New5_fn(WebViewClient** __retval);
void WebViewClient__New6_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, WebViewClient** __retval);
void WebViewClient__onFormResubmission_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2);
void WebViewClient__onFormResubmission_IMPL_24362_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void WebViewClient__onLoadResource_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
void WebViewClient__onLoadResource_IMPL_24358_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
void WebViewClient__onPageFinished_IMPL_24357_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2);
void WebViewClient__onPageStarted_IMPL_24356_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void WebViewClient__onReceivedError_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3);
void WebViewClient__onReceivedError_IMPL_24361_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, uObject* arg5_);
void WebViewClient__onReceivedHttpAuthRequest_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::HttpAuthHandler* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3);
void WebViewClient__onReceivedHttpAuthRequest_IMPL_24365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
void WebViewClient__onReceivedLoginRequest_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3);
void WebViewClient__onReceivedLoginRequest_IMPL_24369_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
void WebViewClient__onReceivedSslError_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::SslErrorHandler* arg1, ::g::Android::android::net::http::SslError* arg2);
void WebViewClient__onReceivedSslError_IMPL_24364_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void WebViewClient__onScaleChanged_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, float* arg1, float* arg2);
void WebViewClient__onScaleChanged_IMPL_24368_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, float* arg3_, float* arg4_);
void WebViewClient__onTooManyRedirects_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2);
void WebViewClient__onTooManyRedirects_IMPL_24360_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void WebViewClient__onUnhandledKeyEvent_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1);
void WebViewClient__onUnhandledKeyEvent_IMPL_24367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebViewClient__shouldInterceptRequest_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::webkit::WebResourceResponse** __retval);
void WebViewClient__shouldInterceptRequest_IMPL_24359_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);
void WebViewClient__shouldOverrideKeyEvent_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void WebViewClient__shouldOverrideKeyEvent_IMPL_24366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* __retval);
void WebViewClient__shouldOverrideUrlLoading_IMPL_24355_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct WebViewClient : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID doUpdateVisitedHistory_24363_ID_;
    static jmethodID& doUpdateVisitedHistory_24363_ID() { return doUpdateVisitedHistory_24363_ID_; }
    static jfieldID ERROR_AUTHENTICATION_24342_ID_;
    static jfieldID& ERROR_AUTHENTICATION_24342_ID() { return ERROR_AUTHENTICATION_24342_ID_; }
    static jfieldID ERROR_BAD_URL_24350_ID_;
    static jfieldID& ERROR_BAD_URL_24350_ID() { return ERROR_BAD_URL_24350_ID_; }
    static jfieldID ERROR_CONNECT_24344_ID_;
    static jfieldID& ERROR_CONNECT_24344_ID() { return ERROR_CONNECT_24344_ID_; }
    static jfieldID ERROR_FAILED_SSL_HANDSHAKE_24349_ID_;
    static jfieldID& ERROR_FAILED_SSL_HANDSHAKE_24349_ID() { return ERROR_FAILED_SSL_HANDSHAKE_24349_ID_; }
    static jfieldID ERROR_FILE_24351_ID_;
    static jfieldID& ERROR_FILE_24351_ID() { return ERROR_FILE_24351_ID_; }
    static jfieldID ERROR_FILE_NOT_FOUND_24352_ID_;
    static jfieldID& ERROR_FILE_NOT_FOUND_24352_ID() { return ERROR_FILE_NOT_FOUND_24352_ID_; }
    static jfieldID ERROR_HOST_LOOKUP_24340_ID_;
    static jfieldID& ERROR_HOST_LOOKUP_24340_ID() { return ERROR_HOST_LOOKUP_24340_ID_; }
    static jfieldID ERROR_IO_24345_ID_;
    static jfieldID& ERROR_IO_24345_ID() { return ERROR_IO_24345_ID_; }
    static jfieldID ERROR_PROXY_AUTHENTICATION_24343_ID_;
    static jfieldID& ERROR_PROXY_AUTHENTICATION_24343_ID() { return ERROR_PROXY_AUTHENTICATION_24343_ID_; }
    static jfieldID ERROR_REDIRECT_LOOP_24347_ID_;
    static jfieldID& ERROR_REDIRECT_LOOP_24347_ID() { return ERROR_REDIRECT_LOOP_24347_ID_; }
    static jfieldID ERROR_TIMEOUT_24346_ID_;
    static jfieldID& ERROR_TIMEOUT_24346_ID() { return ERROR_TIMEOUT_24346_ID_; }
    static jfieldID ERROR_TOO_MANY_REQUESTS_24353_ID_;
    static jfieldID& ERROR_TOO_MANY_REQUESTS_24353_ID() { return ERROR_TOO_MANY_REQUESTS_24353_ID_; }
    static jfieldID ERROR_UNKNOWN_24339_ID_;
    static jfieldID& ERROR_UNKNOWN_24339_ID() { return ERROR_UNKNOWN_24339_ID_; }
    static jfieldID ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID_;
    static jfieldID& ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID() { return ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID_; }
    static jfieldID ERROR_UNSUPPORTED_SCHEME_24348_ID_;
    static jfieldID& ERROR_UNSUPPORTED_SCHEME_24348_ID() { return ERROR_UNSUPPORTED_SCHEME_24348_ID_; }
    static jmethodID onFormResubmission_24362_ID_;
    static jmethodID& onFormResubmission_24362_ID() { return onFormResubmission_24362_ID_; }
    static jmethodID onLoadResource_24358_ID_;
    static jmethodID& onLoadResource_24358_ID() { return onLoadResource_24358_ID_; }
    static jmethodID onPageFinished_24357_ID_;
    static jmethodID& onPageFinished_24357_ID() { return onPageFinished_24357_ID_; }
    static jmethodID onPageStarted_24356_ID_;
    static jmethodID& onPageStarted_24356_ID() { return onPageStarted_24356_ID_; }
    static jmethodID onReceivedError_24361_ID_;
    static jmethodID& onReceivedError_24361_ID() { return onReceivedError_24361_ID_; }
    static jmethodID onReceivedHttpAuthRequest_24365_ID_;
    static jmethodID& onReceivedHttpAuthRequest_24365_ID() { return onReceivedHttpAuthRequest_24365_ID_; }
    static jmethodID onReceivedLoginRequest_24369_ID_;
    static jmethodID& onReceivedLoginRequest_24369_ID() { return onReceivedLoginRequest_24369_ID_; }
    static jmethodID onReceivedSslError_24364_ID_;
    static jmethodID& onReceivedSslError_24364_ID() { return onReceivedSslError_24364_ID_; }
    static jmethodID onScaleChanged_24368_ID_;
    static jmethodID& onScaleChanged_24368_ID() { return onScaleChanged_24368_ID_; }
    static jmethodID onTooManyRedirects_24360_ID_;
    static jmethodID& onTooManyRedirects_24360_ID() { return onTooManyRedirects_24360_ID_; }
    static jmethodID onUnhandledKeyEvent_24367_ID_;
    static jmethodID& onUnhandledKeyEvent_24367_ID() { return onUnhandledKeyEvent_24367_ID_; }
    static jmethodID shouldInterceptRequest_24359_ID_;
    static jmethodID& shouldInterceptRequest_24359_ID() { return shouldInterceptRequest_24359_ID_; }
    static jmethodID shouldOverrideKeyEvent_24366_ID_;
    static jmethodID& shouldOverrideKeyEvent_24366_ID() { return shouldOverrideKeyEvent_24366_ID_; }
    static jmethodID shouldOverrideUrlLoading_24355_ID_;
    static jmethodID& shouldOverrideUrlLoading_24355_ID() { return shouldOverrideUrlLoading_24355_ID_; }
    static jmethodID WebViewClient_24354_ID_c_;
    static jmethodID& WebViewClient_24354_ID_c() { return WebViewClient_24354_ID_c_; }

    void ctor_4();
    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void doUpdateVisitedHistory(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool arg2);
    void onFormResubmission(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2);
    void onLoadResource(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
    void onPageFinished(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { (((WebViewClient_type*)__type)->fp_onPageFinished)(this, arg0, arg1); }
    void onPageStarted(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2) { (((WebViewClient_type*)__type)->fp_onPageStarted)(this, arg0, arg1, arg2); }
    void onReceivedError(::g::Android::android::webkit::WebView* arg0, int arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3);
    void onReceivedHttpAuthRequest(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::HttpAuthHandler* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3);
    void onReceivedLoginRequest(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3);
    void onReceivedSslError(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::SslErrorHandler* arg1, ::g::Android::android::net::http::SslError* arg2);
    void onScaleChanged(::g::Android::android::webkit::WebView* arg0, float arg1, float arg2);
    void onTooManyRedirects(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2);
    void onUnhandledKeyEvent(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1);
    ::g::Android::android::webkit::WebResourceResponse* shouldInterceptRequest(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
    bool shouldOverrideKeyEvent(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1);
    bool shouldOverrideUrlLoading(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { bool __retval; return (((WebViewClient_type*)__type)->fp_shouldOverrideUrlLoading)(this, arg0, arg1, &__retval), __retval; }
    static void _Init2();
    static void doUpdateVisitedHistory_IMPL_24363(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static WebViewClient* New5();
    static WebViewClient* New6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onFormResubmission_IMPL_24362(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static void onLoadResource_IMPL_24358(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onPageFinished(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { WebViewClient__onPageFinished_fn(__this, arg0, arg1); }
    static void onPageFinished_IMPL_24357(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onPageStarted(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2) { WebViewClient__onPageStarted_fn(__this, arg0, arg1, arg2); }
    static void onPageStarted_IMPL_24356(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static void onReceivedError_IMPL_24361(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_, uObject* arg5_);
    static void onReceivedHttpAuthRequest_IMPL_24365(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
    static void onReceivedLoginRequest_IMPL_24369(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
    static void onReceivedSslError_IMPL_24364(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static void onScaleChanged_IMPL_24368(bool arg0_, jobject arg1_, uObject* arg2_, float arg3_, float arg4_);
    static void onTooManyRedirects_IMPL_24360(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static void onUnhandledKeyEvent_IMPL_24367(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* shouldInterceptRequest_IMPL_24359(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool shouldOverrideKeyEvent_IMPL_24366(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool shouldOverrideUrlLoading(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1) { bool __retval; return WebViewClient__shouldOverrideUrlLoading_fn(__this, arg0, arg1, &__retval), __retval; }
    static bool shouldOverrideUrlLoading_IMPL_24355(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static int ERROR_AUTHENTICATION();
    static int ERROR_BAD_URL();
    static int ERROR_CONNECT();
    static int ERROR_FAILED_SSL_HANDSHAKE();
    static int ERROR_FILE();
    static int ERROR_FILE_NOT_FOUND();
    static int ERROR_HOST_LOOKUP();
    static int ERROR_IO();
    static int ERROR_PROXY_AUTHENTICATION();
    static int ERROR_REDIRECT_LOOP();
    static int ERROR_TIMEOUT();
    static int ERROR_TOO_MANY_REQUESTS();
    static int ERROR_UNKNOWN();
    static int ERROR_UNSUPPORTED_AUTH_SCHEME();
    static int ERROR_UNSUPPORTED_SCHEME();
};
// }

}}}} // ::g::Android::android::webkit

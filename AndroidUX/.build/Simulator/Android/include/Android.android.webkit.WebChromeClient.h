// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Message;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct ConsoleMessage;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct JsPromptResult;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct JsResult;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebChromeClient;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

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
void WebChromeClient__ctor_4_fn(WebChromeClient* __this);
void WebChromeClient__ctor_5_fn(WebChromeClient* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void WebChromeClient___Init2_fn();
void WebChromeClient__getDefaultVideoPoster_fn(WebChromeClient* __this, ::g::Android::android::graphics::Bitmap** __retval);
void WebChromeClient__getDefaultVideoPoster_IMPL_24021_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WebChromeClient__getVideoLoadingProgressView_fn(WebChromeClient* __this, ::g::Android::android::view::View** __retval);
void WebChromeClient__getVideoLoadingProgressView_IMPL_24022_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WebChromeClient__getVisitedHistory_fn(WebChromeClient* __this, uObject* arg0);
void WebChromeClient__getVisitedHistory_IMPL_24023_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebChromeClient__New5_fn(WebChromeClient** __retval);
void WebChromeClient__New6_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, WebChromeClient** __retval);
void WebChromeClient__onCloseWindow_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0);
void WebChromeClient__onCloseWindow_IMPL_24009_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebChromeClient__onConsoleMessage_fn(WebChromeClient* __this, ::g::Android::android::webkit::ConsoleMessage* arg0, bool* __retval);
void WebChromeClient__onConsoleMessage1_fn(WebChromeClient* __this, ::g::Android::java::lang::String* arg0, int* arg1, ::g::Android::java::lang::String* arg2);
void WebChromeClient__onConsoleMessage_IMPL_24019_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);
void WebChromeClient__onConsoleMessage_IMPL_24020_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebChromeClient__onCreateWindow_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, bool* arg1, bool* arg2, ::g::Android::android::os::Message* arg3, bool* __retval);
void WebChromeClient__onCreateWindow_IMPL_24007_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_, bool* arg4_, uObject* arg5_, bool* __retval);
void WebChromeClient__onExceededDatabaseQuota_fn(WebChromeClient* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, uObject* arg5);
void WebChromeClient__onExceededDatabaseQuota_IMPL_24014_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int64_t* arg4_, int64_t* arg5_, int64_t* arg6_, uObject* arg7_);
void WebChromeClient__onGeolocationPermissionsHidePrompt_fn(WebChromeClient* __this);
void WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017_fn(bool* arg0_, jobject* arg1_);
void WebChromeClient__onGeolocationPermissionsShowPrompt_fn(WebChromeClient* __this, ::g::Android::java::lang::String* arg0, uObject* arg1);
void WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebChromeClient__onHideCustomView_fn(WebChromeClient* __this);
void WebChromeClient__onHideCustomView_IMPL_24006_fn(bool* arg0_, jobject* arg1_);
void WebChromeClient__onJsAlert_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3, bool* __retval);
void WebChromeClient__onJsAlert_IMPL_24010_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, bool* __retval);
void WebChromeClient__onJsBeforeUnload_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3, bool* __retval);
void WebChromeClient__onJsBeforeUnload_IMPL_24013_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, bool* __retval);
void WebChromeClient__onJsConfirm_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3, bool* __retval);
void WebChromeClient__onJsConfirm_IMPL_24011_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, bool* __retval);
void WebChromeClient__onJsPrompt_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::android::webkit::JsPromptResult* arg4, bool* __retval);
void WebChromeClient__onJsPrompt_IMPL_24012_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_, bool* __retval);
void WebChromeClient__onJsTimeout_fn(WebChromeClient* __this, bool* __retval);
void WebChromeClient__onJsTimeout_IMPL_24018_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1);
void WebChromeClient__onProgressChanged_IMPL_24000_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void WebChromeClient__onReachedMaxAppCacheSize_fn(WebChromeClient* __this, int64_t* arg0, int64_t* arg1, uObject* arg2);
void WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, int64_t* arg3_, uObject* arg4_);
void WebChromeClient__onReceivedIcon_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::graphics::Bitmap* arg1);
void WebChromeClient__onReceivedIcon_IMPL_24002_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebChromeClient__onReceivedTitle_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
void WebChromeClient__onReceivedTitle_IMPL_24001_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebChromeClient__onReceivedTouchIconUrl_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* arg2);
void WebChromeClient__onReceivedTouchIconUrl_IMPL_24003_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_);
void WebChromeClient__onRequestFocus_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0);
void WebChromeClient__onRequestFocus_IMPL_24008_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebChromeClient__onShowCustomView_fn(WebChromeClient* __this, ::g::Android::android::view::View* arg0, uObject* arg1);
void WebChromeClient__onShowCustomView1_fn(WebChromeClient* __this, ::g::Android::android::view::View* arg0, int* arg1, uObject* arg2);
void WebChromeClient__onShowCustomView_IMPL_24004_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebChromeClient__onShowCustomView_IMPL_24005_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);

struct WebChromeClient : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getDefaultVideoPoster_24021_ID_;
    static jmethodID& getDefaultVideoPoster_24021_ID() { return getDefaultVideoPoster_24021_ID_; }
    static jmethodID getVideoLoadingProgressView_24022_ID_;
    static jmethodID& getVideoLoadingProgressView_24022_ID() { return getVideoLoadingProgressView_24022_ID_; }
    static jmethodID getVisitedHistory_24023_ID_;
    static jmethodID& getVisitedHistory_24023_ID() { return getVisitedHistory_24023_ID_; }
    static jmethodID onCloseWindow_24009_ID_;
    static jmethodID& onCloseWindow_24009_ID() { return onCloseWindow_24009_ID_; }
    static jmethodID onConsoleMessage_24019_ID_;
    static jmethodID& onConsoleMessage_24019_ID() { return onConsoleMessage_24019_ID_; }
    static jmethodID onConsoleMessage_24020_ID_;
    static jmethodID& onConsoleMessage_24020_ID() { return onConsoleMessage_24020_ID_; }
    static jmethodID onCreateWindow_24007_ID_;
    static jmethodID& onCreateWindow_24007_ID() { return onCreateWindow_24007_ID_; }
    static jmethodID onExceededDatabaseQuota_24014_ID_;
    static jmethodID& onExceededDatabaseQuota_24014_ID() { return onExceededDatabaseQuota_24014_ID_; }
    static jmethodID onGeolocationPermissionsHidePrompt_24017_ID_;
    static jmethodID& onGeolocationPermissionsHidePrompt_24017_ID() { return onGeolocationPermissionsHidePrompt_24017_ID_; }
    static jmethodID onGeolocationPermissionsShowPrompt_24016_ID_;
    static jmethodID& onGeolocationPermissionsShowPrompt_24016_ID() { return onGeolocationPermissionsShowPrompt_24016_ID_; }
    static jmethodID onHideCustomView_24006_ID_;
    static jmethodID& onHideCustomView_24006_ID() { return onHideCustomView_24006_ID_; }
    static jmethodID onJsAlert_24010_ID_;
    static jmethodID& onJsAlert_24010_ID() { return onJsAlert_24010_ID_; }
    static jmethodID onJsBeforeUnload_24013_ID_;
    static jmethodID& onJsBeforeUnload_24013_ID() { return onJsBeforeUnload_24013_ID_; }
    static jmethodID onJsConfirm_24011_ID_;
    static jmethodID& onJsConfirm_24011_ID() { return onJsConfirm_24011_ID_; }
    static jmethodID onJsPrompt_24012_ID_;
    static jmethodID& onJsPrompt_24012_ID() { return onJsPrompt_24012_ID_; }
    static jmethodID onJsTimeout_24018_ID_;
    static jmethodID& onJsTimeout_24018_ID() { return onJsTimeout_24018_ID_; }
    static jmethodID onProgressChanged_24000_ID_;
    static jmethodID& onProgressChanged_24000_ID() { return onProgressChanged_24000_ID_; }
    static jmethodID onReachedMaxAppCacheSize_24015_ID_;
    static jmethodID& onReachedMaxAppCacheSize_24015_ID() { return onReachedMaxAppCacheSize_24015_ID_; }
    static jmethodID onReceivedIcon_24002_ID_;
    static jmethodID& onReceivedIcon_24002_ID() { return onReceivedIcon_24002_ID_; }
    static jmethodID onReceivedTitle_24001_ID_;
    static jmethodID& onReceivedTitle_24001_ID() { return onReceivedTitle_24001_ID_; }
    static jmethodID onReceivedTouchIconUrl_24003_ID_;
    static jmethodID& onReceivedTouchIconUrl_24003_ID() { return onReceivedTouchIconUrl_24003_ID_; }
    static jmethodID onRequestFocus_24008_ID_;
    static jmethodID& onRequestFocus_24008_ID() { return onRequestFocus_24008_ID_; }
    static jmethodID onShowCustomView_24004_ID_;
    static jmethodID& onShowCustomView_24004_ID() { return onShowCustomView_24004_ID_; }
    static jmethodID onShowCustomView_24005_ID_;
    static jmethodID& onShowCustomView_24005_ID() { return onShowCustomView_24005_ID_; }
    static jmethodID WebChromeClient_23999_ID_c_;
    static jmethodID& WebChromeClient_23999_ID_c() { return WebChromeClient_23999_ID_c_; }

    void ctor_4();
    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::graphics::Bitmap* getDefaultVideoPoster();
    ::g::Android::android::view::View* getVideoLoadingProgressView();
    void getVisitedHistory(uObject* arg0);
    void onCloseWindow(::g::Android::android::webkit::WebView* arg0);
    bool onConsoleMessage(::g::Android::android::webkit::ConsoleMessage* arg0);
    void onConsoleMessage1(::g::Android::java::lang::String* arg0, int arg1, ::g::Android::java::lang::String* arg2);
    bool onCreateWindow(::g::Android::android::webkit::WebView* arg0, bool arg1, bool arg2, ::g::Android::android::os::Message* arg3);
    void onExceededDatabaseQuota(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uObject* arg5);
    void onGeolocationPermissionsHidePrompt();
    void onGeolocationPermissionsShowPrompt(::g::Android::java::lang::String* arg0, uObject* arg1);
    void onHideCustomView();
    bool onJsAlert(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3);
    bool onJsBeforeUnload(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3);
    bool onJsConfirm(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3);
    bool onJsPrompt(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::android::webkit::JsPromptResult* arg4);
    bool onJsTimeout();
    void onProgressChanged(::g::Android::android::webkit::WebView* arg0, int arg1) { (((WebChromeClient_type*)__type)->fp_onProgressChanged)(this, arg0, &arg1); }
    void onReachedMaxAppCacheSize(int64_t arg0, int64_t arg1, uObject* arg2);
    void onReceivedIcon(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::graphics::Bitmap* arg1);
    void onReceivedTitle(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1);
    void onReceivedTouchIconUrl(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool arg2);
    void onRequestFocus(::g::Android::android::webkit::WebView* arg0);
    void onShowCustomView(::g::Android::android::view::View* arg0, uObject* arg1);
    void onShowCustomView1(::g::Android::android::view::View* arg0, int arg1, uObject* arg2);
    static void _Init2();
    static uObject* getDefaultVideoPoster_IMPL_24021(bool arg0_, jobject arg1_);
    static uObject* getVideoLoadingProgressView_IMPL_24022(bool arg0_, jobject arg1_);
    static void getVisitedHistory_IMPL_24023(bool arg0_, jobject arg1_, uObject* arg2_);
    static WebChromeClient* New5();
    static WebChromeClient* New6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onCloseWindow_IMPL_24009(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onConsoleMessage_IMPL_24019(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
    static bool onConsoleMessage_IMPL_24020(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onCreateWindow_IMPL_24007(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_, bool arg4_, uObject* arg5_);
    static void onExceededDatabaseQuota_IMPL_24014(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int64_t arg4_, int64_t arg5_, int64_t arg6_, uObject* arg7_);
    static void onGeolocationPermissionsHidePrompt_IMPL_24017(bool arg0_, jobject arg1_);
    static void onGeolocationPermissionsShowPrompt_IMPL_24016(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onHideCustomView_IMPL_24006(bool arg0_, jobject arg1_);
    static bool onJsAlert_IMPL_24010(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
    static bool onJsBeforeUnload_IMPL_24013(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
    static bool onJsConfirm_IMPL_24011(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_);
    static bool onJsPrompt_IMPL_24012(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_);
    static bool onJsTimeout_IMPL_24018(bool arg0_, jobject arg1_);
    static void onProgressChanged(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int arg1) { WebChromeClient__onProgressChanged_fn(__this, arg0, &arg1); }
    static void onProgressChanged_IMPL_24000(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void onReachedMaxAppCacheSize_IMPL_24015(bool arg0_, jobject arg1_, int64_t arg2_, int64_t arg3_, uObject* arg4_);
    static void onReceivedIcon_IMPL_24002(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onReceivedTitle_IMPL_24001(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onReceivedTouchIconUrl_IMPL_24003(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static void onRequestFocus_IMPL_24008(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onShowCustomView_IMPL_24004(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onShowCustomView_IMPL_24005(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
};
// }

}}}} // ::g::Android::android::webkit

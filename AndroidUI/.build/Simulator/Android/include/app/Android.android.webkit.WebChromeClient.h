// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_H__
#define __APP_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Message; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct ConsoleMessage; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct JsPromptResult; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct JsResult; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebView; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace webkit {

struct WebChromeClient;

extern jclass WebChromeClient___javaClass_2;
extern jmethodID WebChromeClient__getDefaultVideoPoster_24021_ID;
extern jmethodID WebChromeClient__getVideoLoadingProgressView_24022_ID;
extern jmethodID WebChromeClient__getVisitedHistory_24023_ID;
extern jmethodID WebChromeClient__onCloseWindow_24009_ID;
extern jmethodID WebChromeClient__onConsoleMessage_24019_ID;
extern jmethodID WebChromeClient__onConsoleMessage_24020_ID;
extern jmethodID WebChromeClient__onCreateWindow_24007_ID;
extern jmethodID WebChromeClient__onExceededDatabaseQuota_24014_ID;
extern jmethodID WebChromeClient__onGeolocationPermissionsHidePrompt_24017_ID;
extern jmethodID WebChromeClient__onGeolocationPermissionsShowPrompt_24016_ID;
extern jmethodID WebChromeClient__onHideCustomView_24006_ID;
extern jmethodID WebChromeClient__onJsAlert_24010_ID;
extern jmethodID WebChromeClient__onJsBeforeUnload_24013_ID;
extern jmethodID WebChromeClient__onJsConfirm_24011_ID;
extern jmethodID WebChromeClient__onJsPrompt_24012_ID;
extern jmethodID WebChromeClient__onJsTimeout_24018_ID;
extern jmethodID WebChromeClient__onProgressChanged_24000_ID;
extern jmethodID WebChromeClient__onReachedMaxAppCacheSize_24015_ID;
extern jmethodID WebChromeClient__onReceivedIcon_24002_ID;
extern jmethodID WebChromeClient__onReceivedTitle_24001_ID;
extern jmethodID WebChromeClient__onReceivedTouchIconUrl_24003_ID;
extern jmethodID WebChromeClient__onRequestFocus_24008_ID;
extern jmethodID WebChromeClient__onShowCustomView_24004_ID;
extern jmethodID WebChromeClient__onShowCustomView_24005_ID;
extern jmethodID WebChromeClient__WebChromeClient_23999_ID_c;

struct WebChromeClient__uType : ::app::Android::java::lang::Object__uType
{
    void(*__fp_onProgressChanged)(WebChromeClient*, ::app::Android::android::webkit::WebView*, int);
};

WebChromeClient__uType* WebChromeClient__typeof();

void WebChromeClient___Init_2(::uStatic* __this);
void WebChromeClient___ObjInit_4(WebChromeClient* __this);
void WebChromeClient___ObjInit_5(WebChromeClient* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
::app::Android::android::graphics::Bitmap* WebChromeClient__getDefaultVideoPoster(WebChromeClient* __this);
::uObject* WebChromeClient__getDefaultVideoPoster_IMPL_24021(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::View* WebChromeClient__getVideoLoadingProgressView(WebChromeClient* __this);
::uObject* WebChromeClient__getVideoLoadingProgressView_IMPL_24022(::uStatic* __this, bool arg0_, jobject arg1_);
void WebChromeClient__getVisitedHistory(WebChromeClient* __this, ::uObject* arg0);
void WebChromeClient__getVisitedHistory_IMPL_24023(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
WebChromeClient* WebChromeClient__New_5(::uStatic* __this);
WebChromeClient* WebChromeClient__New_6(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void WebChromeClient__onCloseWindow(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0);
void WebChromeClient__onCloseWindow_IMPL_24009(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebChromeClient__onConsoleMessage(WebChromeClient* __this, ::app::Android::android::webkit::ConsoleMessage* arg0);
void WebChromeClient__onConsoleMessage_1(WebChromeClient* __this, ::app::Android::java::lang::String* arg0, int arg1, ::app::Android::java::lang::String* arg2);
void WebChromeClient__onConsoleMessage_IMPL_24019(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);
bool WebChromeClient__onConsoleMessage_IMPL_24020(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebChromeClient__onCreateWindow(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, bool arg1, bool arg2, ::app::Android::android::os::Message* arg3);
bool WebChromeClient__onCreateWindow_IMPL_24007(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_, bool arg4_, ::uObject* arg5_);
void WebChromeClient__onExceededDatabaseQuota(WebChromeClient* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::uLong arg2, ::uLong arg3, ::uLong arg4, ::uObject* arg5);
void WebChromeClient__onExceededDatabaseQuota_IMPL_24014(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uLong arg4_, ::uLong arg5_, ::uLong arg6_, ::uObject* arg7_);
void WebChromeClient__onGeolocationPermissionsHidePrompt(WebChromeClient* __this);
void WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017(::uStatic* __this, bool arg0_, jobject arg1_);
void WebChromeClient__onGeolocationPermissionsShowPrompt(WebChromeClient* __this, ::app::Android::java::lang::String* arg0, ::uObject* arg1);
void WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void WebChromeClient__onHideCustomView(WebChromeClient* __this);
void WebChromeClient__onHideCustomView_IMPL_24006(::uStatic* __this, bool arg0_, jobject arg1_);
bool WebChromeClient__onJsAlert(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3);
bool WebChromeClient__onJsAlert_IMPL_24010(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_);
bool WebChromeClient__onJsBeforeUnload(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3);
bool WebChromeClient__onJsBeforeUnload_IMPL_24013(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_);
bool WebChromeClient__onJsConfirm(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3);
bool WebChromeClient__onJsConfirm_IMPL_24011(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_);
bool WebChromeClient__onJsPrompt(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::android::webkit::JsPromptResult* arg4);
bool WebChromeClient__onJsPrompt_IMPL_24012(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_, ::uObject* arg6_);
bool WebChromeClient__onJsTimeout(WebChromeClient* __this);
bool WebChromeClient__onJsTimeout_IMPL_24018(::uStatic* __this, bool arg0_, jobject arg1_);
void WebChromeClient__onProgressChanged(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, int arg1);
void WebChromeClient__onProgressChanged_IMPL_24000(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void WebChromeClient__onReachedMaxAppCacheSize(WebChromeClient* __this, ::uLong arg0, ::uLong arg1, ::uObject* arg2);
void WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_, ::uLong arg3_, ::uObject* arg4_);
void WebChromeClient__onReceivedIcon(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::android::graphics::Bitmap* arg1);
void WebChromeClient__onReceivedIcon_IMPL_24002(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void WebChromeClient__onReceivedTitle(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1);
void WebChromeClient__onReceivedTitle_IMPL_24001(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void WebChromeClient__onReceivedTouchIconUrl(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, bool arg2);
void WebChromeClient__onReceivedTouchIconUrl_IMPL_24003(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_);
void WebChromeClient__onRequestFocus(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0);
void WebChromeClient__onRequestFocus_IMPL_24008(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebChromeClient__onShowCustomView(WebChromeClient* __this, ::app::Android::android::view::View* arg0, int arg1, ::uObject* arg2);
void WebChromeClient__onShowCustomView_1(WebChromeClient* __this, ::app::Android::android::view::View* arg0, ::uObject* arg1);
void WebChromeClient__onShowCustomView_IMPL_24004(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void WebChromeClient__onShowCustomView_IMPL_24005(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);

struct WebChromeClient : ::app::Android::java::lang::Object
{
    void _ObjInit_4() { WebChromeClient___ObjInit_4(this); }
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { WebChromeClient___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::graphics::Bitmap* getDefaultVideoPoster() { return WebChromeClient__getDefaultVideoPoster(this); }
    ::app::Android::android::view::View* getVideoLoadingProgressView() { return WebChromeClient__getVideoLoadingProgressView(this); }
    void getVisitedHistory(::uObject* arg0) { WebChromeClient__getVisitedHistory(this, arg0); }
    void onCloseWindow(::app::Android::android::webkit::WebView* arg0) { WebChromeClient__onCloseWindow(this, arg0); }
    bool onConsoleMessage(::app::Android::android::webkit::ConsoleMessage* arg0) { return WebChromeClient__onConsoleMessage(this, arg0); }
    void onConsoleMessage_1(::app::Android::java::lang::String* arg0, int arg1, ::app::Android::java::lang::String* arg2) { WebChromeClient__onConsoleMessage_1(this, arg0, arg1, arg2); }
    bool onCreateWindow(::app::Android::android::webkit::WebView* arg0, bool arg1, bool arg2, ::app::Android::android::os::Message* arg3) { return WebChromeClient__onCreateWindow(this, arg0, arg1, arg2, arg3); }
    void onExceededDatabaseQuota(::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::uLong arg2, ::uLong arg3, ::uLong arg4, ::uObject* arg5) { WebChromeClient__onExceededDatabaseQuota(this, arg0, arg1, arg2, arg3, arg4, arg5); }
    void onGeolocationPermissionsHidePrompt() { WebChromeClient__onGeolocationPermissionsHidePrompt(this); }
    void onGeolocationPermissionsShowPrompt(::app::Android::java::lang::String* arg0, ::uObject* arg1) { WebChromeClient__onGeolocationPermissionsShowPrompt(this, arg0, arg1); }
    void onHideCustomView() { WebChromeClient__onHideCustomView(this); }
    bool onJsAlert(::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3) { return WebChromeClient__onJsAlert(this, arg0, arg1, arg2, arg3); }
    bool onJsBeforeUnload(::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3) { return WebChromeClient__onJsBeforeUnload(this, arg0, arg1, arg2, arg3); }
    bool onJsConfirm(::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3) { return WebChromeClient__onJsConfirm(this, arg0, arg1, arg2, arg3); }
    bool onJsPrompt(::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::android::webkit::JsPromptResult* arg4) { return WebChromeClient__onJsPrompt(this, arg0, arg1, arg2, arg3, arg4); }
    bool onJsTimeout() { return WebChromeClient__onJsTimeout(this); }
    void onProgressChanged(::app::Android::android::webkit::WebView* arg0, int arg1) { (((WebChromeClient__uType*)this->__obj_type)->__fp_onProgressChanged)(this, arg0, arg1); }
    void onReachedMaxAppCacheSize(::uLong arg0, ::uLong arg1, ::uObject* arg2) { WebChromeClient__onReachedMaxAppCacheSize(this, arg0, arg1, arg2); }
    void onReceivedIcon(::app::Android::android::webkit::WebView* arg0, ::app::Android::android::graphics::Bitmap* arg1) { WebChromeClient__onReceivedIcon(this, arg0, arg1); }
    void onReceivedTitle(::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1) { WebChromeClient__onReceivedTitle(this, arg0, arg1); }
    void onReceivedTouchIconUrl(::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, bool arg2) { WebChromeClient__onReceivedTouchIconUrl(this, arg0, arg1, arg2); }
    void onRequestFocus(::app::Android::android::webkit::WebView* arg0) { WebChromeClient__onRequestFocus(this, arg0); }
    void onShowCustomView(::app::Android::android::view::View* arg0, int arg1, ::uObject* arg2) { WebChromeClient__onShowCustomView(this, arg0, arg1, arg2); }
    void onShowCustomView_1(::app::Android::android::view::View* arg0, ::uObject* arg1) { WebChromeClient__onShowCustomView_1(this, arg0, arg1); }
};

}}}}


#endif

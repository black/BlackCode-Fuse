// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.AbsoluteLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebChromeClient;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebSettings;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebViewClient;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public sealed extern class WebView :3384
// {
::g::Android::android::view::ViewGroup_type* WebView_typeof();
void WebView__ctor_16_fn(WebView* __this, ::g::Android::android::content::Context* arg0);
void WebView___Init5_fn();
void WebView__addJavascriptInterface_fn(WebView* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::String* arg1);
void WebView__addJavascriptInterface_IMPL_24285_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebView__canGoBack_fn(WebView* __this, bool* __retval);
void WebView__canGoBack_IMPL_24239_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void WebView__canGoForward_fn(WebView* __this, bool* __retval);
void WebView__canGoForward_IMPL_24241_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void WebView__getProgress_fn(WebView* __this, int* __retval);
void WebView__getProgress_IMPL_24261_fn(bool* arg0_, jobject* arg1_, int* __retval);
void WebView__getSettings_fn(WebView* __this, ::g::Android::android::webkit::WebSettings** __retval);
void WebView__getSettings_IMPL_24287_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WebView__getUrl_fn(WebView* __this, ::g::Android::java::lang::String** __retval);
void WebView__getUrl_IMPL_24257_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WebView__goBack_fn(WebView* __this);
void WebView__goBack_IMPL_24240_fn(bool* arg0_, jobject* arg1_);
void WebView__goForward_fn(WebView* __this);
void WebView__goForward_IMPL_24242_fn(bool* arg0_, jobject* arg1_);
void WebView__loadDataWithBaseURL_fn(WebView* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::java::lang::String* arg4);
void WebView__loadDataWithBaseURL_IMPL_24233_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_);
void WebView__loadUrl_fn(WebView* __this, ::g::Android::java::lang::String* arg0);
void WebView__loadUrl_IMPL_24230_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__New13_fn(::g::Android::android::content::Context* arg0, WebView** __retval);
void WebView__onScrollChanged_fn(WebView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void WebView__onScrollChanged_IMPL_24331_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void WebView__onTouchEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void WebView__onTouchEvent_IMPL_24310_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebView__reload_fn(WebView* __this);
void WebView__reload_IMPL_24238_fn(bool* arg0_, jobject* arg1_);
void WebView__setBackgroundColor_fn(WebView* __this, int* arg0);
void WebView__setBackgroundColor_IMPL_24336_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void WebView__setLayoutParams_fn(WebView* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void WebView__setLayoutParams_IMPL_24300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__setWebChromeClient_fn(WebView* __this, ::g::Android::android::webkit::WebChromeClient* arg0);
void WebView__setWebChromeClient_IMPL_24283_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__setWebViewClient_fn(WebView* __this, ::g::Android::android::webkit::WebViewClient* arg0);
void WebView__setWebViewClient_IMPL_24281_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__stopLoading_fn(WebView* __this);
void WebView__stopLoading_IMPL_24237_fn(bool* arg0_, jobject* arg1_);

struct WebView : ::g::Android::android::widget::AbsoluteLayout
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID addJavascriptInterface_24285_ID_;
    static jmethodID& addJavascriptInterface_24285_ID() { return addJavascriptInterface_24285_ID_; }
    static jmethodID canGoBack_24239_ID_;
    static jmethodID& canGoBack_24239_ID() { return canGoBack_24239_ID_; }
    static jmethodID canGoForward_24241_ID_;
    static jmethodID& canGoForward_24241_ID() { return canGoForward_24241_ID_; }
    static jmethodID getProgress_24261_ID_;
    static jmethodID& getProgress_24261_ID() { return getProgress_24261_ID_; }
    static jmethodID getSettings_24287_ID_;
    static jmethodID& getSettings_24287_ID() { return getSettings_24287_ID_; }
    static jmethodID getUrl_24257_ID_;
    static jmethodID& getUrl_24257_ID() { return getUrl_24257_ID_; }
    static jmethodID goBack_24240_ID_;
    static jmethodID& goBack_24240_ID() { return goBack_24240_ID_; }
    static jmethodID goForward_24242_ID_;
    static jmethodID& goForward_24242_ID() { return goForward_24242_ID_; }
    static jmethodID loadDataWithBaseURL_24233_ID_;
    static jmethodID& loadDataWithBaseURL_24233_ID() { return loadDataWithBaseURL_24233_ID_; }
    static jmethodID loadUrl_24230_ID_;
    static jmethodID& loadUrl_24230_ID() { return loadUrl_24230_ID_; }
    static jmethodID onScrollChanged_24331_ID_;
    static jmethodID& onScrollChanged_24331_ID() { return onScrollChanged_24331_ID_; }
    static jmethodID onTouchEvent_24310_ID_;
    static jmethodID& onTouchEvent_24310_ID() { return onTouchEvent_24310_ID_; }
    static jmethodID reload_24238_ID_;
    static jmethodID& reload_24238_ID() { return reload_24238_ID_; }
    static jmethodID setBackgroundColor_24336_ID_;
    static jmethodID& setBackgroundColor_24336_ID() { return setBackgroundColor_24336_ID_; }
    static jmethodID setLayoutParams_24300_ID_;
    static jmethodID& setLayoutParams_24300_ID() { return setLayoutParams_24300_ID_; }
    static jmethodID setWebChromeClient_24283_ID_;
    static jmethodID& setWebChromeClient_24283_ID() { return setWebChromeClient_24283_ID_; }
    static jmethodID setWebViewClient_24281_ID_;
    static jmethodID& setWebViewClient_24281_ID() { return setWebViewClient_24281_ID_; }
    static jmethodID stopLoading_24237_ID_;
    static jmethodID& stopLoading_24237_ID() { return stopLoading_24237_ID_; }
    static jmethodID WebView_24212_ID_c_;
    static jmethodID& WebView_24212_ID_c() { return WebView_24212_ID_c_; }

    void ctor_16(::g::Android::android::content::Context* arg0);
    void addJavascriptInterface(::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::String* arg1);
    bool canGoBack();
    bool canGoForward();
    int getProgress();
    ::g::Android::android::webkit::WebSettings* getSettings();
    ::g::Android::java::lang::String* getUrl();
    void goBack();
    void goForward();
    void loadDataWithBaseURL(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::java::lang::String* arg4);
    void loadUrl(::g::Android::java::lang::String* arg0);
    void reload();
    void setWebChromeClient(::g::Android::android::webkit::WebChromeClient* arg0);
    void setWebViewClient(::g::Android::android::webkit::WebViewClient* arg0);
    void stopLoading();
    static void _Init5();
    static void addJavascriptInterface_IMPL_24285(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool canGoBack_IMPL_24239(bool arg0_, jobject arg1_);
    static bool canGoForward_IMPL_24241(bool arg0_, jobject arg1_);
    static int getProgress_IMPL_24261(bool arg0_, jobject arg1_);
    static uObject* getSettings_IMPL_24287(bool arg0_, jobject arg1_);
    static uObject* getUrl_IMPL_24257(bool arg0_, jobject arg1_);
    static void goBack_IMPL_24240(bool arg0_, jobject arg1_);
    static void goForward_IMPL_24242(bool arg0_, jobject arg1_);
    static void loadDataWithBaseURL_IMPL_24233(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_);
    static void loadUrl_IMPL_24230(bool arg0_, jobject arg1_, uObject* arg2_);
    static WebView* New13(::g::Android::android::content::Context* arg0);
    static void onScrollChanged_IMPL_24331(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent_IMPL_24310(bool arg0_, jobject arg1_, uObject* arg2_);
    static void reload_IMPL_24238(bool arg0_, jobject arg1_);
    static void setBackgroundColor_IMPL_24336(bool arg0_, jobject arg1_, int arg2_);
    static void setLayoutParams_IMPL_24300(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setWebChromeClient_IMPL_24283(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setWebViewClient_IMPL_24281(bool arg0_, jobject arg1_, uObject* arg2_);
    static void stopLoading_IMPL_24237(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::webkit

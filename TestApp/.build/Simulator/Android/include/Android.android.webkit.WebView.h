// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroupDLROnHierarchyChangeListener.h>
#include <Android.android.view.ViewParent.h>
#include <Android.android.widget.AbsoluteLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Paint;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeProvider;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct EditorInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
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
struct WebView_type : ::g::Android::android::view::ViewGroup_type
{
    ::g::Android::android::view::ViewGroupDLROnHierarchyChangeListener interface3;
};

WebView_type* WebView_typeof();
void WebView__ctor_16_fn(WebView* __this, ::g::Android::android::content::Context* arg0);
void WebView___Init5_fn();
void WebView__addJavascriptInterface_fn(WebView* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::String* arg1);
void WebView__addJavascriptInterface_IMPL_24285_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebView__canGoBack_fn(WebView* __this, bool* __retval);
void WebView__canGoBack_IMPL_24239_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void WebView__canGoForward_fn(WebView* __this, bool* __retval);
void WebView__canGoForward_IMPL_24241_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void WebView__computeScroll_fn(WebView* __this);
void WebView__computeScroll_IMPL_24308_fn(bool* arg0_, jobject* arg1_);
void WebView__dispatchKeyEvent_fn(WebView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void WebView__dispatchKeyEvent_IMPL_24332_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebView__getAccessibilityNodeProvider_fn(WebView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeProvider** __retval);
void WebView__getAccessibilityNodeProvider_IMPL_24316_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WebView__getProgress_fn(WebView* __this, int* __retval);
void WebView__getProgress_IMPL_24261_fn(bool* arg0_, jobject* arg1_, int* __retval);
void WebView__getSettings_fn(WebView* __this, ::g::Android::android::webkit::WebSettings** __retval);
void WebView__getSettings_IMPL_24287_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void WebView__getTitle_fn(WebView* __this, ::g::Android::java::lang::String** __retval);
void WebView__getTitle_IMPL_24259_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
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
void WebView__onChildViewAdded_fn(WebView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void WebView__onChildViewAdded_IMPL_24289_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebView__onChildViewRemoved_fn(WebView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void WebView__onChildViewRemoved_IMPL_24290_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void WebView__onCreateInputConnection_fn(WebView* __this, ::g::Android::android::view::inputmethod::EditorInfo* arg0, uObject** __retval);
void WebView__onCreateInputConnection_IMPL_24326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void WebView__onGenericMotionEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void WebView__onGenericMotionEvent_IMPL_24311_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebView__onHoverEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void WebView__onHoverEvent_IMPL_24309_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebView__onInitializeAccessibilityEvent_fn(WebView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void WebView__onInitializeAccessibilityEvent_IMPL_24319_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__onInitializeAccessibilityNodeInfo_fn(WebView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void WebView__onInitializeAccessibilityNodeInfo_IMPL_24318_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__onKeyDown_fn(WebView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void WebView__onKeyDown_IMPL_24313_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void WebView__onKeyMultiple_fn(WebView* __this, int* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval);
void WebView__onKeyMultiple_IMPL_24315_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, bool* __retval);
void WebView__onKeyUp_fn(WebView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void WebView__onKeyUp_IMPL_24314_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void WebView__onScrollChanged_fn(WebView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void WebView__onScrollChanged_IMPL_24331_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void WebView__onTouchEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void WebView__onTouchEvent_IMPL_24310_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebView__onTrackballEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void WebView__onTrackballEvent_IMPL_24312_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void WebView__onWindowFocusChanged_fn(WebView* __this, bool* arg0);
void WebView__onWindowFocusChanged_IMPL_24328_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void WebView__performAccessibilityAction_fn(WebView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void WebView__performAccessibilityAction_IMPL_24320_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void WebView__performLongClick_fn(WebView* __this, bool* __retval);
void WebView__performLongClick_IMPL_24324_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void WebView__reload_fn(WebView* __this);
void WebView__reload_IMPL_24238_fn(bool* arg0_, jobject* arg1_);
void WebView__requestChildRectangleOnScreen_fn(WebView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval);
void WebView__requestChildRectangleOnScreen_IMPL_24335_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval);
void WebView__requestFocus2_fn(WebView* __this, int* arg0, ::g::Android::android::graphics::Rect* arg1, bool* __retval);
void WebView__requestFocus_IMPL_24333_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void WebView__setBackgroundColor_fn(WebView* __this, int* arg0);
void WebView__setBackgroundColor_IMPL_24336_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void WebView__setLayerType_fn(WebView* __this, int* arg0, ::g::Android::android::graphics::Paint* arg1);
void WebView__setLayerType_IMPL_24337_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void WebView__setLayoutParams_fn(WebView* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void WebView__setLayoutParams_IMPL_24300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__setOverScrollMode_fn(WebView* __this, int* arg0);
void WebView__setOverScrollMode_IMPL_24301_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void WebView__setScrollBarStyle_fn(WebView* __this, int* arg0);
void WebView__setScrollBarStyle_IMPL_24302_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void WebView__setWebChromeClient_fn(WebView* __this, ::g::Android::android::webkit::WebChromeClient* arg0);
void WebView__setWebChromeClient_IMPL_24283_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__setWebViewClient_fn(WebView* __this, ::g::Android::android::webkit::WebViewClient* arg0);
void WebView__setWebViewClient_IMPL_24281_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void WebView__shouldDelayChildPressedState_fn(WebView* __this, bool* __retval);
void WebView__shouldDelayChildPressedState_IMPL_24317_fn(bool* arg0_, jobject* arg1_, bool* __retval);
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
    static jmethodID computeScroll_24308_ID_;
    static jmethodID& computeScroll_24308_ID() { return computeScroll_24308_ID_; }
    static jmethodID dispatchKeyEvent_24332_ID_;
    static jmethodID& dispatchKeyEvent_24332_ID() { return dispatchKeyEvent_24332_ID_; }
    static jmethodID getAccessibilityNodeProvider_24316_ID_;
    static jmethodID& getAccessibilityNodeProvider_24316_ID() { return getAccessibilityNodeProvider_24316_ID_; }
    static jmethodID getProgress_24261_ID_;
    static jmethodID& getProgress_24261_ID() { return getProgress_24261_ID_; }
    static jmethodID getSettings_24287_ID_;
    static jmethodID& getSettings_24287_ID() { return getSettings_24287_ID_; }
    static jmethodID getTitle_24259_ID_;
    static jmethodID& getTitle_24259_ID() { return getTitle_24259_ID_; }
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
    static jmethodID onChildViewAdded_24289_ID_;
    static jmethodID& onChildViewAdded_24289_ID() { return onChildViewAdded_24289_ID_; }
    static jmethodID onChildViewRemoved_24290_ID_;
    static jmethodID& onChildViewRemoved_24290_ID() { return onChildViewRemoved_24290_ID_; }
    static jmethodID onCreateInputConnection_24326_ID_;
    static jmethodID& onCreateInputConnection_24326_ID() { return onCreateInputConnection_24326_ID_; }
    static jmethodID onGenericMotionEvent_24311_ID_;
    static jmethodID& onGenericMotionEvent_24311_ID() { return onGenericMotionEvent_24311_ID_; }
    static jmethodID onHoverEvent_24309_ID_;
    static jmethodID& onHoverEvent_24309_ID() { return onHoverEvent_24309_ID_; }
    static jmethodID onInitializeAccessibilityEvent_24319_ID_;
    static jmethodID& onInitializeAccessibilityEvent_24319_ID() { return onInitializeAccessibilityEvent_24319_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_24318_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_24318_ID() { return onInitializeAccessibilityNodeInfo_24318_ID_; }
    static jmethodID onKeyDown_24313_ID_;
    static jmethodID& onKeyDown_24313_ID() { return onKeyDown_24313_ID_; }
    static jmethodID onKeyMultiple_24315_ID_;
    static jmethodID& onKeyMultiple_24315_ID() { return onKeyMultiple_24315_ID_; }
    static jmethodID onKeyUp_24314_ID_;
    static jmethodID& onKeyUp_24314_ID() { return onKeyUp_24314_ID_; }
    static jmethodID onScrollChanged_24331_ID_;
    static jmethodID& onScrollChanged_24331_ID() { return onScrollChanged_24331_ID_; }
    static jmethodID onTouchEvent_24310_ID_;
    static jmethodID& onTouchEvent_24310_ID() { return onTouchEvent_24310_ID_; }
    static jmethodID onTrackballEvent_24312_ID_;
    static jmethodID& onTrackballEvent_24312_ID() { return onTrackballEvent_24312_ID_; }
    static jmethodID onWindowFocusChanged_24328_ID_;
    static jmethodID& onWindowFocusChanged_24328_ID() { return onWindowFocusChanged_24328_ID_; }
    static jmethodID performAccessibilityAction_24320_ID_;
    static jmethodID& performAccessibilityAction_24320_ID() { return performAccessibilityAction_24320_ID_; }
    static jmethodID performLongClick_24324_ID_;
    static jmethodID& performLongClick_24324_ID() { return performLongClick_24324_ID_; }
    static jmethodID reload_24238_ID_;
    static jmethodID& reload_24238_ID() { return reload_24238_ID_; }
    static jmethodID requestChildRectangleOnScreen_24335_ID_;
    static jmethodID& requestChildRectangleOnScreen_24335_ID() { return requestChildRectangleOnScreen_24335_ID_; }
    static jmethodID requestFocus_24333_ID_;
    static jmethodID& requestFocus_24333_ID() { return requestFocus_24333_ID_; }
    static jmethodID setBackgroundColor_24336_ID_;
    static jmethodID& setBackgroundColor_24336_ID() { return setBackgroundColor_24336_ID_; }
    static jmethodID setLayerType_24337_ID_;
    static jmethodID& setLayerType_24337_ID() { return setLayerType_24337_ID_; }
    static jmethodID setLayoutParams_24300_ID_;
    static jmethodID& setLayoutParams_24300_ID() { return setLayoutParams_24300_ID_; }
    static jmethodID setOverScrollMode_24301_ID_;
    static jmethodID& setOverScrollMode_24301_ID() { return setOverScrollMode_24301_ID_; }
    static jmethodID setScrollBarStyle_24302_ID_;
    static jmethodID& setScrollBarStyle_24302_ID() { return setScrollBarStyle_24302_ID_; }
    static jmethodID setWebChromeClient_24283_ID_;
    static jmethodID& setWebChromeClient_24283_ID() { return setWebChromeClient_24283_ID_; }
    static jmethodID setWebViewClient_24281_ID_;
    static jmethodID& setWebViewClient_24281_ID() { return setWebViewClient_24281_ID_; }
    static jmethodID shouldDelayChildPressedState_24317_ID_;
    static jmethodID& shouldDelayChildPressedState_24317_ID() { return shouldDelayChildPressedState_24317_ID_; }
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
    ::g::Android::java::lang::String* getTitle();
    ::g::Android::java::lang::String* getUrl();
    void goBack();
    void goForward();
    void loadDataWithBaseURL(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::java::lang::String* arg4);
    void loadUrl(::g::Android::java::lang::String* arg0);
    void onChildViewAdded(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
    void onChildViewRemoved(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
    void reload();
    void setWebChromeClient(::g::Android::android::webkit::WebChromeClient* arg0);
    void setWebViewClient(::g::Android::android::webkit::WebViewClient* arg0);
    void stopLoading();
    static void _Init5();
    static void addJavascriptInterface_IMPL_24285(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool canGoBack_IMPL_24239(bool arg0_, jobject arg1_);
    static bool canGoForward_IMPL_24241(bool arg0_, jobject arg1_);
    static void computeScroll_IMPL_24308(bool arg0_, jobject arg1_);
    static bool dispatchKeyEvent_IMPL_24332(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getAccessibilityNodeProvider_IMPL_24316(bool arg0_, jobject arg1_);
    static int getProgress_IMPL_24261(bool arg0_, jobject arg1_);
    static uObject* getSettings_IMPL_24287(bool arg0_, jobject arg1_);
    static uObject* getTitle_IMPL_24259(bool arg0_, jobject arg1_);
    static uObject* getUrl_IMPL_24257(bool arg0_, jobject arg1_);
    static void goBack_IMPL_24240(bool arg0_, jobject arg1_);
    static void goForward_IMPL_24242(bool arg0_, jobject arg1_);
    static void loadDataWithBaseURL_IMPL_24233(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_);
    static void loadUrl_IMPL_24230(bool arg0_, jobject arg1_, uObject* arg2_);
    static WebView* New13(::g::Android::android::content::Context* arg0);
    static void onChildViewAdded_IMPL_24289(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onChildViewRemoved_IMPL_24290(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* onCreateInputConnection_IMPL_24326(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onGenericMotionEvent_IMPL_24311(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onHoverEvent_IMPL_24309(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent_IMPL_24319(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_24318(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onKeyDown_IMPL_24313(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyMultiple_IMPL_24315(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static bool onKeyUp_IMPL_24314(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void onScrollChanged_IMPL_24331(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent_IMPL_24310(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onTrackballEvent_IMPL_24312(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onWindowFocusChanged_IMPL_24328(bool arg0_, jobject arg1_, bool arg2_);
    static bool performAccessibilityAction_IMPL_24320(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool performLongClick_IMPL_24324(bool arg0_, jobject arg1_);
    static void reload_IMPL_24238(bool arg0_, jobject arg1_);
    static bool requestChildRectangleOnScreen_IMPL_24335(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static bool requestFocus_IMPL_24333(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void setBackgroundColor_IMPL_24336(bool arg0_, jobject arg1_, int arg2_);
    static void setLayerType_IMPL_24337(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void setLayoutParams_IMPL_24300(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOverScrollMode_IMPL_24301(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollBarStyle_IMPL_24302(bool arg0_, jobject arg1_, int arg2_);
    static void setWebChromeClient_IMPL_24283(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setWebViewClient_IMPL_24281(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool shouldDelayChildPressedState_IMPL_24317(bool arg0_, jobject arg1_);
    static void stopLoading_IMPL_24237(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::webkit

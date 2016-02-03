// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_WEB_VIEW_H__
#define __APP_ANDROID_ANDROID_WEBKIT_WEB_VIEW_H__

#include <app/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h>
#include <app/Android.android.view.ViewParent.h>
#include <app/Android.android.widget.AbsoluteLayout.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Configuration; } } } } }
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Paint; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Bundle; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeProvider; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct EditorInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebChromeClient; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebViewClient; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace webkit {

struct WebView;

extern jclass WebView___javaClass_5;
extern jmethodID WebView__canGoBack_24239_ID;
extern jmethodID WebView__canGoForward_24241_ID;
extern jmethodID WebView__computeHorizontalScrollOffset_24304_ID;
extern jmethodID WebView__computeHorizontalScrollRange_24303_ID;
extern jmethodID WebView__computeScroll_24308_ID;
extern jmethodID WebView__computeVerticalScrollExtent_24307_ID;
extern jmethodID WebView__computeVerticalScrollOffset_24306_ID;
extern jmethodID WebView__computeVerticalScrollRange_24305_ID;
extern jmethodID WebView__dispatchDraw_24338_ID;
extern jmethodID WebView__dispatchKeyEvent_24332_ID;
extern jmethodID WebView__getAccessibilityNodeProvider_24316_ID;
extern jmethodID WebView__getProgress_24261_ID;
extern jmethodID WebView__getTitle_24259_ID;
extern jmethodID WebView__getUrl_24257_ID;
extern jmethodID WebView__goBack_24240_ID;
extern jmethodID WebView__goForward_24242_ID;
extern jmethodID WebView__loadDataWithBaseURL_24233_ID;
extern jmethodID WebView__loadUrl_24230_ID;
extern jmethodID WebView__onAttachedToWindow_24298_ID;
extern jmethodID WebView__onChildViewAdded_24289_ID;
extern jmethodID WebView__onChildViewRemoved_24290_ID;
extern jmethodID WebView__onConfigurationChanged_24325_ID;
extern jmethodID WebView__onCreateInputConnection_24326_ID;
extern jmethodID WebView__onDetachedFromWindow_24299_ID;
extern jmethodID WebView__onDraw_24323_ID;
extern jmethodID WebView__onFocusChanged_24329_ID;
extern jmethodID WebView__onGenericMotionEvent_24311_ID;
extern jmethodID WebView__onHoverEvent_24309_ID;
extern jmethodID WebView__onInitializeAccessibilityEvent_24319_ID;
extern jmethodID WebView__onInitializeAccessibilityNodeInfo_24318_ID;
extern jmethodID WebView__onKeyDown_24313_ID;
extern jmethodID WebView__onKeyMultiple_24315_ID;
extern jmethodID WebView__onKeyUp_24314_ID;
extern jmethodID WebView__onMeasure_24334_ID;
extern jmethodID WebView__onOverScrolled_24321_ID;
extern jmethodID WebView__onScrollChanged_24331_ID;
extern jmethodID WebView__onSizeChanged_24330_ID;
extern jmethodID WebView__onTouchEvent_24310_ID;
extern jmethodID WebView__onTrackballEvent_24312_ID;
extern jmethodID WebView__onVisibilityChanged_24327_ID;
extern jmethodID WebView__onWindowFocusChanged_24328_ID;
extern jmethodID WebView__onWindowVisibilityChanged_24322_ID;
extern jmethodID WebView__performAccessibilityAction_24320_ID;
extern jmethodID WebView__performLongClick_24324_ID;
extern jmethodID WebView__reload_24238_ID;
extern jmethodID WebView__requestChildRectangleOnScreen_24335_ID;
extern jmethodID WebView__requestFocus_24333_ID;
extern jmethodID WebView__setBackgroundColor_24336_ID;
extern jmethodID WebView__setLayerType_24337_ID;
extern jmethodID WebView__setLayoutParams_24300_ID;
extern jmethodID WebView__setOverScrollMode_24301_ID;
extern jmethodID WebView__setScrollBarStyle_24302_ID;
extern jmethodID WebView__setWebChromeClient_24283_ID;
extern jmethodID WebView__setWebViewClient_24281_ID;
extern jmethodID WebView__shouldDelayChildPressedState_24317_ID;
extern jmethodID WebView__stopLoading_24237_ID;
extern jmethodID WebView__WebView_24212_ID_c;

struct WebView__uType : ::app::Android::android::widget::AbsoluteLayout__uType
{
    ::app::Android::android::view::ViewGroupDLROnHierarchyChangeListener __interface_3;
};

WebView__uType* WebView__typeof();

void WebView___Init_5(::uStatic* __this);
void WebView___ObjInit_16(WebView* __this, ::app::Android::android::content::Context* arg0);
bool WebView__canGoBack(WebView* __this);
bool WebView__canGoBack_IMPL_24239(::uStatic* __this, bool arg0_, jobject arg1_);
bool WebView__canGoForward(WebView* __this);
bool WebView__canGoForward_IMPL_24241(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__computeHorizontalScrollOffset(WebView* __this);
int WebView__computeHorizontalScrollOffset_IMPL_24304(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__computeHorizontalScrollRange(WebView* __this);
int WebView__computeHorizontalScrollRange_IMPL_24303(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__computeScroll(WebView* __this);
void WebView__computeScroll_IMPL_24308(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__computeVerticalScrollExtent(WebView* __this);
int WebView__computeVerticalScrollExtent_IMPL_24307(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__computeVerticalScrollOffset(WebView* __this);
int WebView__computeVerticalScrollOffset_IMPL_24306(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__computeVerticalScrollRange(WebView* __this);
int WebView__computeVerticalScrollRange_IMPL_24305(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__dispatchDraw(WebView* __this, ::app::Android::android::graphics::Canvas* arg0);
void WebView__dispatchDraw_IMPL_24338(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebView__dispatchKeyEvent(WebView* __this, ::app::Android::android::view::KeyEvent* arg0);
bool WebView__dispatchKeyEvent_IMPL_24332(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::accessibility::AccessibilityNodeProvider* WebView__getAccessibilityNodeProvider(WebView* __this);
::uObject* WebView__getAccessibilityNodeProvider_IMPL_24316(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__getProgress(WebView* __this);
int WebView__getProgress_IMPL_24261(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* WebView__getTitle(WebView* __this);
::uObject* WebView__getTitle_IMPL_24259(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* WebView__getUrl(WebView* __this);
::uObject* WebView__getUrl_IMPL_24257(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__goBack(WebView* __this);
void WebView__goBack_IMPL_24240(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__goForward(WebView* __this);
void WebView__goForward_IMPL_24242(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__loadDataWithBaseURL(WebView* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::java::lang::String* arg4);
void WebView__loadDataWithBaseURL_IMPL_24233(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_, ::uObject* arg6_);
void WebView__loadUrl(WebView* __this, ::app::Android::java::lang::String* arg0);
void WebView__loadUrl_IMPL_24230(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
WebView* WebView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void WebView__onAttachedToWindow(WebView* __this);
void WebView__onAttachedToWindow_IMPL_24298(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__onChildViewAdded(WebView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void WebView__onChildViewAdded_IMPL_24289(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void WebView__onChildViewRemoved(WebView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void WebView__onChildViewRemoved_IMPL_24290(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void WebView__onConfigurationChanged(WebView* __this, ::app::Android::android::content::res::Configuration* arg0);
void WebView__onConfigurationChanged_IMPL_24325(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* WebView__onCreateInputConnection(WebView* __this, ::app::Android::android::view::inputmethod::EditorInfo* arg0);
::uObject* WebView__onCreateInputConnection_IMPL_24326(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__onDetachedFromWindow(WebView* __this);
void WebView__onDetachedFromWindow_IMPL_24299(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__onDraw(WebView* __this, ::app::Android::android::graphics::Canvas* arg0);
void WebView__onDraw_IMPL_24323(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__onFocusChanged(WebView* __this, bool arg0, int arg1, ::app::Android::android::graphics::Rect* arg2);
void WebView__onFocusChanged_IMPL_24329(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, ::uObject* arg4_);
bool WebView__onGenericMotionEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool WebView__onGenericMotionEvent_IMPL_24311(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebView__onHoverEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool WebView__onHoverEvent_IMPL_24309(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__onInitializeAccessibilityEvent(WebView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void WebView__onInitializeAccessibilityEvent_IMPL_24319(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__onInitializeAccessibilityNodeInfo(WebView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void WebView__onInitializeAccessibilityNodeInfo_IMPL_24318(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebView__onKeyDown(WebView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool WebView__onKeyDown_IMPL_24313(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool WebView__onKeyMultiple(WebView* __this, int arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2);
bool WebView__onKeyMultiple_IMPL_24315(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
bool WebView__onKeyUp(WebView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool WebView__onKeyUp_IMPL_24314(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void WebView__onMeasure(WebView* __this, int arg0, int arg1);
void WebView__onMeasure_IMPL_24334(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void WebView__onOverScrolled(WebView* __this, int arg0, int arg1, bool arg2, bool arg3);
void WebView__onOverScrolled_IMPL_24321(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
void WebView__onScrollChanged(WebView* __this, int arg0, int arg1, int arg2, int arg3);
void WebView__onScrollChanged_IMPL_24331(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void WebView__onSizeChanged(WebView* __this, int arg0, int arg1, int arg2, int arg3);
void WebView__onSizeChanged_IMPL_24330(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool WebView__onTouchEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool WebView__onTouchEvent_IMPL_24310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebView__onTrackballEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool WebView__onTrackballEvent_IMPL_24312(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__onVisibilityChanged(WebView* __this, ::app::Android::android::view::View* arg0, int arg1);
void WebView__onVisibilityChanged_IMPL_24327(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void WebView__onWindowFocusChanged(WebView* __this, bool arg0);
void WebView__onWindowFocusChanged_IMPL_24328(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void WebView__onWindowVisibilityChanged(WebView* __this, int arg0);
void WebView__onWindowVisibilityChanged_IMPL_24322(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool WebView__performAccessibilityAction(WebView* __this, int arg0, ::app::Android::android::os::Bundle* arg1);
bool WebView__performAccessibilityAction_IMPL_24320(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool WebView__performLongClick(WebView* __this);
bool WebView__performLongClick_IMPL_24324(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__reload(WebView* __this);
void WebView__reload_IMPL_24238(::uStatic* __this, bool arg0_, jobject arg1_);
bool WebView__requestChildRectangleOnScreen(WebView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2);
bool WebView__requestChildRectangleOnScreen_IMPL_24335(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_);
bool WebView__requestFocus_2(WebView* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
bool WebView__requestFocus_IMPL_24333(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void WebView__setBackgroundColor(WebView* __this, int arg0);
void WebView__setBackgroundColor_IMPL_24336(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void WebView__setLayerType(WebView* __this, int arg0, ::app::Android::android::graphics::Paint* arg1);
void WebView__setLayerType_IMPL_24337(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void WebView__setLayoutParams(WebView* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void WebView__setLayoutParams_IMPL_24300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__setOverScrollMode(WebView* __this, int arg0);
void WebView__setOverScrollMode_IMPL_24301(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void WebView__setScrollBarStyle(WebView* __this, int arg0);
void WebView__setScrollBarStyle_IMPL_24302(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void WebView__setWebChromeClient(WebView* __this, ::app::Android::android::webkit::WebChromeClient* arg0);
void WebView__setWebChromeClient_IMPL_24283(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__setWebViewClient(WebView* __this, ::app::Android::android::webkit::WebViewClient* arg0);
void WebView__setWebViewClient_IMPL_24281(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool WebView__shouldDelayChildPressedState(WebView* __this);
bool WebView__shouldDelayChildPressedState_IMPL_24317(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__stopLoading(WebView* __this);
void WebView__stopLoading_IMPL_24237(::uStatic* __this, bool arg0_, jobject arg1_);

struct WebView : ::app::Android::android::widget::AbsoluteLayout
{
    void _ObjInit_16(::app::Android::android::content::Context* arg0) { WebView___ObjInit_16(this, arg0); }
    bool canGoBack() { return WebView__canGoBack(this); }
    bool canGoForward() { return WebView__canGoForward(this); }
    int getProgress() { return WebView__getProgress(this); }
    ::app::Android::java::lang::String* getTitle() { return WebView__getTitle(this); }
    ::app::Android::java::lang::String* getUrl() { return WebView__getUrl(this); }
    void goBack() { WebView__goBack(this); }
    void goForward() { WebView__goForward(this); }
    void loadDataWithBaseURL(::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::java::lang::String* arg4) { WebView__loadDataWithBaseURL(this, arg0, arg1, arg2, arg3, arg4); }
    void loadUrl(::app::Android::java::lang::String* arg0) { WebView__loadUrl(this, arg0); }
    void onChildViewAdded(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { WebView__onChildViewAdded(this, arg0, arg1); }
    void onChildViewRemoved(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { WebView__onChildViewRemoved(this, arg0, arg1); }
    void reload() { WebView__reload(this); }
    void setWebChromeClient(::app::Android::android::webkit::WebChromeClient* arg0) { WebView__setWebChromeClient(this, arg0); }
    void setWebViewClient(::app::Android::android::webkit::WebViewClient* arg0) { WebView__setWebViewClient(this, arg0); }
    void stopLoading() { WebView__stopLoading(this); }
};

}}}}


#endif

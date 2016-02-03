// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SCROLL_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_SCROLL_VIEW_H__

#include <app/Android.android.view.ViewParent.h>
#include <app/Android.android.widget.FrameLayout.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Bundle; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct ScrollView;

extern jclass ScrollView___javaClass_5;
extern jmethodID ScrollView__addView_26070_ID;
extern jmethodID ScrollView__addView_26071_ID;
extern jmethodID ScrollView__addView_26072_ID;
extern jmethodID ScrollView__addView_26073_ID;
extern jmethodID ScrollView__arrowScroll_26091_ID;
extern jmethodID ScrollView__computeScroll_26098_ID;
extern jmethodID ScrollView__computeScrollDeltaToGetChildRectOnScreen_26099_ID;
extern jmethodID ScrollView__computeVerticalScrollOffset_26095_ID;
extern jmethodID ScrollView__computeVerticalScrollRange_26094_ID;
extern jmethodID ScrollView__dispatchKeyEvent_26079_ID;
extern jmethodID ScrollView__executeKeyEvent_26080_ID;
extern jmethodID ScrollView__fling_26107_ID;
extern jmethodID ScrollView__fullScroll_26090_ID;
extern jmethodID ScrollView__getBottomFadingEdgeStrength_26068_ID;
extern jmethodID ScrollView__getMaxScrollAmount_26069_ID;
extern jmethodID ScrollView__getTopFadingEdgeStrength_26067_ID;
extern jmethodID ScrollView__isFillViewport_26074_ID;
extern jmethodID ScrollView__isSmoothScrollingEnabled_26076_ID;
extern jmethodID ScrollView__j_draw_26110_ID;
extern jmethodID ScrollView__measureChild_26096_ID;
extern jmethodID ScrollView__measureChildWithMargins_26097_ID;
extern jmethodID ScrollView__onDetachedFromWindow_26104_ID;
extern jmethodID ScrollView__onGenericMotionEvent_26084_ID;
extern jmethodID ScrollView__onInitializeAccessibilityEvent_26088_ID;
extern jmethodID ScrollView__onInitializeAccessibilityNodeInfo_26087_ID;
extern jmethodID ScrollView__onInterceptTouchEvent_26082_ID;
extern jmethodID ScrollView__onLayout_26105_ID;
extern jmethodID ScrollView__onMeasure_26078_ID;
extern jmethodID ScrollView__onOverScrolled_26085_ID;
extern jmethodID ScrollView__onRequestFocusInDescendants_26101_ID;
extern jmethodID ScrollView__onRestoreInstanceState_26111_ID;
extern jmethodID ScrollView__onSaveInstanceState_26112_ID;
extern jmethodID ScrollView__onSizeChanged_26106_ID;
extern jmethodID ScrollView__onTouchEvent_26083_ID;
extern jmethodID ScrollView__pageScroll_26089_ID;
extern jmethodID ScrollView__performAccessibilityAction_26086_ID;
extern jmethodID ScrollView__requestChildFocus_26100_ID;
extern jmethodID ScrollView__requestChildRectangleOnScreen_26102_ID;
extern jmethodID ScrollView__requestDisallowInterceptTouchEvent_26081_ID;
extern jmethodID ScrollView__requestLayout_26103_ID;
extern jmethodID ScrollView__scrollTo_26108_ID;
extern jmethodID ScrollView__ScrollView_26063_ID_c;
extern jmethodID ScrollView__ScrollView_26064_ID_c;
extern jmethodID ScrollView__ScrollView_26065_ID_c;
extern jmethodID ScrollView__setFillViewport_26075_ID;
extern jmethodID ScrollView__setOverScrollMode_26109_ID;
extern jmethodID ScrollView__setSmoothScrollingEnabled_26077_ID;
extern jmethodID ScrollView__shouldDelayChildPressedState_26066_ID;
extern jmethodID ScrollView__smoothScrollBy_26092_ID;
extern jmethodID ScrollView__smoothScrollTo_26093_ID;

struct ScrollView__uType : ::app::Android::android::widget::FrameLayout__uType
{
};

ScrollView__uType* ScrollView__typeof();

void ScrollView___Init_5(::uStatic* __this);
void ScrollView___ObjInit_16(ScrollView* __this, ::app::Android::android::content::Context* arg0);
void ScrollView___ObjInit_17(ScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void ScrollView___ObjInit_18(ScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void ScrollView___ObjInit_19(ScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ScrollView__addView(ScrollView* __this, ::app::Android::android::view::View* arg0);
void ScrollView__addView_1(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1);
void ScrollView__addView_3(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void ScrollView__addView_4(ScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void ScrollView__addView_IMPL_26070(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__addView_IMPL_26071(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ScrollView__addView_IMPL_26072(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ScrollView__addView_IMPL_26073(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);
bool ScrollView__arrowScroll(ScrollView* __this, int arg0);
bool ScrollView__arrowScroll_IMPL_26091(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ScrollView__computeScroll(ScrollView* __this);
void ScrollView__computeScroll_IMPL_26098(::uStatic* __this, bool arg0_, jobject arg1_);
int ScrollView__computeScrollDeltaToGetChildRectOnScreen(ScrollView* __this, ::app::Android::android::graphics::Rect* arg0);
int ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int ScrollView__computeVerticalScrollOffset(ScrollView* __this);
int ScrollView__computeVerticalScrollOffset_IMPL_26095(::uStatic* __this, bool arg0_, jobject arg1_);
int ScrollView__computeVerticalScrollRange(ScrollView* __this);
int ScrollView__computeVerticalScrollRange_IMPL_26094(::uStatic* __this, bool arg0_, jobject arg1_);
bool ScrollView__dispatchKeyEvent(ScrollView* __this, ::app::Android::android::view::KeyEvent* arg0);
bool ScrollView__dispatchKeyEvent_IMPL_26079(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ScrollView__executeKeyEvent(ScrollView* __this, ::app::Android::android::view::KeyEvent* arg0);
bool ScrollView__executeKeyEvent_IMPL_26080(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__fling(ScrollView* __this, int arg0);
void ScrollView__fling_IMPL_26107(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool ScrollView__fullScroll(ScrollView* __this, int arg0);
bool ScrollView__fullScroll_IMPL_26090(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
float ScrollView__getBottomFadingEdgeStrength(ScrollView* __this);
float ScrollView__getBottomFadingEdgeStrength_IMPL_26068(::uStatic* __this, bool arg0_, jobject arg1_);
int ScrollView__getMaxScrollAmount(ScrollView* __this);
int ScrollView__getMaxScrollAmount_IMPL_26069(::uStatic* __this, bool arg0_, jobject arg1_);
float ScrollView__getTopFadingEdgeStrength(ScrollView* __this);
float ScrollView__getTopFadingEdgeStrength_IMPL_26067(::uStatic* __this, bool arg0_, jobject arg1_);
bool ScrollView__isFillViewport(ScrollView* __this);
bool ScrollView__isFillViewport_IMPL_26074(::uStatic* __this, bool arg0_, jobject arg1_);
bool ScrollView__isSmoothScrollingEnabled(ScrollView* __this);
bool ScrollView__isSmoothScrollingEnabled_IMPL_26076(::uStatic* __this, bool arg0_, jobject arg1_);
void ScrollView__j_draw(ScrollView* __this, ::app::Android::android::graphics::Canvas* arg0);
void ScrollView__j_draw_IMPL_26110(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__measureChild(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2);
void ScrollView__measureChild_IMPL_26096(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
void ScrollView__measureChildWithMargins(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4);
void ScrollView__measureChildWithMargins_IMPL_26097(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
ScrollView* ScrollView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
ScrollView* ScrollView__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
ScrollView* ScrollView__New_15(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
ScrollView* ScrollView__New_16(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ScrollView__onDetachedFromWindow(ScrollView* __this);
void ScrollView__onDetachedFromWindow_IMPL_26104(::uStatic* __this, bool arg0_, jobject arg1_);
bool ScrollView__onGenericMotionEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ScrollView__onGenericMotionEvent_IMPL_26084(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__onInitializeAccessibilityEvent(ScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ScrollView__onInitializeAccessibilityEvent_IMPL_26088(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__onInitializeAccessibilityNodeInfo(ScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ScrollView__onInterceptTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ScrollView__onInterceptTouchEvent_IMPL_26082(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__onLayout(ScrollView* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void ScrollView__onLayout_IMPL_26105(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void ScrollView__onMeasure(ScrollView* __this, int arg0, int arg1);
void ScrollView__onMeasure_IMPL_26078(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ScrollView__onOverScrolled(ScrollView* __this, int arg0, int arg1, bool arg2, bool arg3);
void ScrollView__onOverScrolled_IMPL_26085(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
bool ScrollView__onRequestFocusInDescendants(ScrollView* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
bool ScrollView__onRequestFocusInDescendants_IMPL_26101(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void ScrollView__onRestoreInstanceState(ScrollView* __this, ::uObject* arg0);
void ScrollView__onRestoreInstanceState_IMPL_26111(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* ScrollView__onSaveInstanceState(ScrollView* __this);
::uObject* ScrollView__onSaveInstanceState_IMPL_26112(::uStatic* __this, bool arg0_, jobject arg1_);
void ScrollView__onSizeChanged(ScrollView* __this, int arg0, int arg1, int arg2, int arg3);
void ScrollView__onSizeChanged_IMPL_26106(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool ScrollView__onTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ScrollView__onTouchEvent_IMPL_26083(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ScrollView__pageScroll(ScrollView* __this, int arg0);
bool ScrollView__pageScroll_IMPL_26089(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool ScrollView__performAccessibilityAction(ScrollView* __this, int arg0, ::app::Android::android::os::Bundle* arg1);
bool ScrollView__performAccessibilityAction_IMPL_26086(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void ScrollView__requestChildFocus(ScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void ScrollView__requestChildFocus_IMPL_26100(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool ScrollView__requestChildRectangleOnScreen(ScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2);
bool ScrollView__requestChildRectangleOnScreen_IMPL_26102(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_);
void ScrollView__requestDisallowInterceptTouchEvent(ScrollView* __this, bool arg0);
void ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ScrollView__requestLayout(ScrollView* __this);
void ScrollView__requestLayout_IMPL_26103(::uStatic* __this, bool arg0_, jobject arg1_);
void ScrollView__scrollTo(ScrollView* __this, int arg0, int arg1);
void ScrollView__scrollTo_IMPL_26108(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ScrollView__setFillViewport(ScrollView* __this, bool arg0);
void ScrollView__setFillViewport_IMPL_26075(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ScrollView__setOverScrollMode(ScrollView* __this, int arg0);
void ScrollView__setOverScrollMode_IMPL_26109(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ScrollView__setSmoothScrollingEnabled(ScrollView* __this, bool arg0);
void ScrollView__setSmoothScrollingEnabled_IMPL_26077(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool ScrollView__shouldDelayChildPressedState(ScrollView* __this);
bool ScrollView__shouldDelayChildPressedState_IMPL_26066(::uStatic* __this, bool arg0_, jobject arg1_);
void ScrollView__smoothScrollBy(ScrollView* __this, int arg0, int arg1);
void ScrollView__smoothScrollBy_IMPL_26092(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ScrollView__smoothScrollTo(ScrollView* __this, int arg0, int arg1);
void ScrollView__smoothScrollTo_IMPL_26093(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);

struct ScrollView : ::app::Android::android::widget::FrameLayout
{
    void _ObjInit_16(::app::Android::android::content::Context* arg0) { ScrollView___ObjInit_16(this, arg0); }
    void _ObjInit_17(::app::Android::android::content::Context* arg0, ::uObject* arg1) { ScrollView___ObjInit_17(this, arg0, arg1); }
    void _ObjInit_18(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { ScrollView___ObjInit_18(this, arg0, arg1, arg2); }
    void _ObjInit_19(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ScrollView___ObjInit_19(this, obj, utype, hasFallbackClass, resolveType); }
    bool arrowScroll(int arg0) { return ScrollView__arrowScroll(this, arg0); }
    int computeScrollDeltaToGetChildRectOnScreen(::app::Android::android::graphics::Rect* arg0) { return ScrollView__computeScrollDeltaToGetChildRectOnScreen(this, arg0); }
    bool executeKeyEvent(::app::Android::android::view::KeyEvent* arg0) { return ScrollView__executeKeyEvent(this, arg0); }
    void fling(int arg0) { ScrollView__fling(this, arg0); }
    bool fullScroll(int arg0) { return ScrollView__fullScroll(this, arg0); }
    int getMaxScrollAmount() { return ScrollView__getMaxScrollAmount(this); }
    bool isFillViewport() { return ScrollView__isFillViewport(this); }
    bool isSmoothScrollingEnabled() { return ScrollView__isSmoothScrollingEnabled(this); }
    bool pageScroll(int arg0) { return ScrollView__pageScroll(this, arg0); }
    void setFillViewport(bool arg0) { ScrollView__setFillViewport(this, arg0); }
    void setSmoothScrollingEnabled(bool arg0) { ScrollView__setSmoothScrollingEnabled(this, arg0); }
    void smoothScrollBy(int arg0, int arg1) { ScrollView__smoothScrollBy(this, arg0, arg1); }
    void smoothScrollTo(int arg0, int arg1) { ScrollView__smoothScrollTo(this, arg0, arg1); }
};

}}}}


#endif

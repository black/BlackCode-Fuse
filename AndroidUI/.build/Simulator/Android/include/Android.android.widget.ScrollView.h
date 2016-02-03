// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewParent.h>
#include <Android.android.widget.FrameLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct ScrollView;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class ScrollView :21321
// {
::g::Android::android::view::ViewGroup_type* ScrollView_typeof();
void ScrollView__ctor_16_fn(ScrollView* __this, ::g::Android::android::content::Context* arg0);
void ScrollView__ctor_17_fn(ScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void ScrollView__ctor_18_fn(ScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void ScrollView__ctor_19_fn(ScrollView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ScrollView___Init5_fn();
void ScrollView__addView_fn(ScrollView* __this, ::g::Android::android::view::View* arg0);
void ScrollView__addView1_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void ScrollView__addView2_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1);
void ScrollView__addView3_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void ScrollView__addView_IMPL_26070_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ScrollView__addView_IMPL_26071_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ScrollView__addView_IMPL_26072_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ScrollView__addView_IMPL_26073_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);
void ScrollView__arrowScroll_fn(ScrollView* __this, int* arg0, bool* __retval);
void ScrollView__arrowScroll_IMPL_26091_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void ScrollView__computeScroll_fn(ScrollView* __this);
void ScrollView__computeScroll_IMPL_26098_fn(bool* arg0_, jobject* arg1_);
void ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void ScrollView__computeVerticalScrollOffset_IMPL_26095_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ScrollView__computeVerticalScrollRange_IMPL_26094_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ScrollView__dispatchKeyEvent_fn(ScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void ScrollView__dispatchKeyEvent_IMPL_26079_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__executeKeyEvent_fn(ScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void ScrollView__executeKeyEvent_IMPL_26080_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__fling_fn(ScrollView* __this, int* arg0);
void ScrollView__fling_IMPL_26107_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ScrollView__fullScroll_fn(ScrollView* __this, int* arg0, bool* __retval);
void ScrollView__fullScroll_IMPL_26090_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void ScrollView__getBottomFadingEdgeStrength_IMPL_26068_fn(bool* arg0_, jobject* arg1_, float* __retval);
void ScrollView__getMaxScrollAmount_fn(ScrollView* __this, int* __retval);
void ScrollView__getMaxScrollAmount_IMPL_26069_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ScrollView__getTopFadingEdgeStrength_IMPL_26067_fn(bool* arg0_, jobject* arg1_, float* __retval);
void ScrollView__isFillViewport_fn(ScrollView* __this, bool* __retval);
void ScrollView__isFillViewport_IMPL_26074_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ScrollView__isSmoothScrollingEnabled_fn(ScrollView* __this, bool* __retval);
void ScrollView__isSmoothScrollingEnabled_IMPL_26076_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ScrollView__j_draw_fn(ScrollView* __this, ::g::Android::android::graphics::Canvas* arg0);
void ScrollView__j_draw_IMPL_26110_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ScrollView__measureChild_IMPL_26096_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void ScrollView__measureChildWithMargins_IMPL_26097_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void ScrollView__New13_fn(::g::Android::android::content::Context* arg0, ScrollView** __retval);
void ScrollView__New14_fn(::g::Android::android::content::Context* arg0, uObject* arg1, ScrollView** __retval);
void ScrollView__New15_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, ScrollView** __retval);
void ScrollView__New16_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, ScrollView** __retval);
void ScrollView__onDetachedFromWindow_IMPL_26104_fn(bool* arg0_, jobject* arg1_);
void ScrollView__onGenericMotionEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ScrollView__onGenericMotionEvent_IMPL_26084_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__onInitializeAccessibilityEvent_fn(ScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ScrollView__onInitializeAccessibilityEvent_IMPL_26088_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ScrollView__onInitializeAccessibilityNodeInfo_fn(ScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ScrollView__onInterceptTouchEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ScrollView__onInterceptTouchEvent_IMPL_26082_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__onLayout_IMPL_26105_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void ScrollView__onMeasure_IMPL_26078_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ScrollView__onOverScrolled_IMPL_26085_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* arg4_, bool* arg5_);
void ScrollView__onRequestFocusInDescendants_IMPL_26101_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void ScrollView__onRestoreInstanceState_IMPL_26111_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ScrollView__onSaveInstanceState_IMPL_26112_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ScrollView__onSizeChanged_IMPL_26106_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void ScrollView__onTouchEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ScrollView__onTouchEvent_IMPL_26083_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__pageScroll_fn(ScrollView* __this, int* arg0, bool* __retval);
void ScrollView__pageScroll_IMPL_26089_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void ScrollView__performAccessibilityAction_fn(ScrollView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void ScrollView__performAccessibilityAction_IMPL_26086_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void ScrollView__requestChildFocus_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void ScrollView__requestChildFocus_IMPL_26100_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ScrollView__requestChildRectangleOnScreen_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval);
void ScrollView__requestChildRectangleOnScreen_IMPL_26102_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval);
void ScrollView__requestDisallowInterceptTouchEvent_fn(ScrollView* __this, bool* arg0);
void ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ScrollView__requestLayout_fn(ScrollView* __this);
void ScrollView__requestLayout_IMPL_26103_fn(bool* arg0_, jobject* arg1_);
void ScrollView__scrollTo_fn(ScrollView* __this, int* arg0, int* arg1);
void ScrollView__scrollTo_IMPL_26108_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ScrollView__setFillViewport_fn(ScrollView* __this, bool* arg0);
void ScrollView__setFillViewport_IMPL_26075_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ScrollView__setOverScrollMode_fn(ScrollView* __this, int* arg0);
void ScrollView__setOverScrollMode_IMPL_26109_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ScrollView__setSmoothScrollingEnabled_fn(ScrollView* __this, bool* arg0);
void ScrollView__setSmoothScrollingEnabled_IMPL_26077_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ScrollView__shouldDelayChildPressedState_fn(ScrollView* __this, bool* __retval);
void ScrollView__shouldDelayChildPressedState_IMPL_26066_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ScrollView__smoothScrollBy_fn(ScrollView* __this, int* arg0, int* arg1);
void ScrollView__smoothScrollBy_IMPL_26092_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ScrollView__smoothScrollTo_fn(ScrollView* __this, int* arg0, int* arg1);
void ScrollView__smoothScrollTo_IMPL_26093_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);

struct ScrollView : ::g::Android::android::widget::FrameLayout
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID addView_26070_ID_;
    static jmethodID& addView_26070_ID() { return addView_26070_ID_; }
    static jmethodID addView_26071_ID_;
    static jmethodID& addView_26071_ID() { return addView_26071_ID_; }
    static jmethodID addView_26072_ID_;
    static jmethodID& addView_26072_ID() { return addView_26072_ID_; }
    static jmethodID addView_26073_ID_;
    static jmethodID& addView_26073_ID() { return addView_26073_ID_; }
    static jmethodID arrowScroll_26091_ID_;
    static jmethodID& arrowScroll_26091_ID() { return arrowScroll_26091_ID_; }
    static jmethodID computeScroll_26098_ID_;
    static jmethodID& computeScroll_26098_ID() { return computeScroll_26098_ID_; }
    static jmethodID computeScrollDeltaToGetChildRectOnScreen_26099_ID_;
    static jmethodID& computeScrollDeltaToGetChildRectOnScreen_26099_ID() { return computeScrollDeltaToGetChildRectOnScreen_26099_ID_; }
    static jmethodID computeVerticalScrollOffset_26095_ID_;
    static jmethodID& computeVerticalScrollOffset_26095_ID() { return computeVerticalScrollOffset_26095_ID_; }
    static jmethodID computeVerticalScrollRange_26094_ID_;
    static jmethodID& computeVerticalScrollRange_26094_ID() { return computeVerticalScrollRange_26094_ID_; }
    static jmethodID dispatchKeyEvent_26079_ID_;
    static jmethodID& dispatchKeyEvent_26079_ID() { return dispatchKeyEvent_26079_ID_; }
    static jmethodID executeKeyEvent_26080_ID_;
    static jmethodID& executeKeyEvent_26080_ID() { return executeKeyEvent_26080_ID_; }
    static jmethodID fling_26107_ID_;
    static jmethodID& fling_26107_ID() { return fling_26107_ID_; }
    static jmethodID fullScroll_26090_ID_;
    static jmethodID& fullScroll_26090_ID() { return fullScroll_26090_ID_; }
    static jmethodID getBottomFadingEdgeStrength_26068_ID_;
    static jmethodID& getBottomFadingEdgeStrength_26068_ID() { return getBottomFadingEdgeStrength_26068_ID_; }
    static jmethodID getMaxScrollAmount_26069_ID_;
    static jmethodID& getMaxScrollAmount_26069_ID() { return getMaxScrollAmount_26069_ID_; }
    static jmethodID getTopFadingEdgeStrength_26067_ID_;
    static jmethodID& getTopFadingEdgeStrength_26067_ID() { return getTopFadingEdgeStrength_26067_ID_; }
    static jmethodID isFillViewport_26074_ID_;
    static jmethodID& isFillViewport_26074_ID() { return isFillViewport_26074_ID_; }
    static jmethodID isSmoothScrollingEnabled_26076_ID_;
    static jmethodID& isSmoothScrollingEnabled_26076_ID() { return isSmoothScrollingEnabled_26076_ID_; }
    static jmethodID j_draw_26110_ID_;
    static jmethodID& j_draw_26110_ID() { return j_draw_26110_ID_; }
    static jmethodID measureChild_26096_ID_;
    static jmethodID& measureChild_26096_ID() { return measureChild_26096_ID_; }
    static jmethodID measureChildWithMargins_26097_ID_;
    static jmethodID& measureChildWithMargins_26097_ID() { return measureChildWithMargins_26097_ID_; }
    static jmethodID onDetachedFromWindow_26104_ID_;
    static jmethodID& onDetachedFromWindow_26104_ID() { return onDetachedFromWindow_26104_ID_; }
    static jmethodID onGenericMotionEvent_26084_ID_;
    static jmethodID& onGenericMotionEvent_26084_ID() { return onGenericMotionEvent_26084_ID_; }
    static jmethodID onInitializeAccessibilityEvent_26088_ID_;
    static jmethodID& onInitializeAccessibilityEvent_26088_ID() { return onInitializeAccessibilityEvent_26088_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_26087_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_26087_ID() { return onInitializeAccessibilityNodeInfo_26087_ID_; }
    static jmethodID onInterceptTouchEvent_26082_ID_;
    static jmethodID& onInterceptTouchEvent_26082_ID() { return onInterceptTouchEvent_26082_ID_; }
    static jmethodID onLayout_26105_ID_;
    static jmethodID& onLayout_26105_ID() { return onLayout_26105_ID_; }
    static jmethodID onMeasure_26078_ID_;
    static jmethodID& onMeasure_26078_ID() { return onMeasure_26078_ID_; }
    static jmethodID onOverScrolled_26085_ID_;
    static jmethodID& onOverScrolled_26085_ID() { return onOverScrolled_26085_ID_; }
    static jmethodID onRequestFocusInDescendants_26101_ID_;
    static jmethodID& onRequestFocusInDescendants_26101_ID() { return onRequestFocusInDescendants_26101_ID_; }
    static jmethodID onRestoreInstanceState_26111_ID_;
    static jmethodID& onRestoreInstanceState_26111_ID() { return onRestoreInstanceState_26111_ID_; }
    static jmethodID onSaveInstanceState_26112_ID_;
    static jmethodID& onSaveInstanceState_26112_ID() { return onSaveInstanceState_26112_ID_; }
    static jmethodID onSizeChanged_26106_ID_;
    static jmethodID& onSizeChanged_26106_ID() { return onSizeChanged_26106_ID_; }
    static jmethodID onTouchEvent_26083_ID_;
    static jmethodID& onTouchEvent_26083_ID() { return onTouchEvent_26083_ID_; }
    static jmethodID pageScroll_26089_ID_;
    static jmethodID& pageScroll_26089_ID() { return pageScroll_26089_ID_; }
    static jmethodID performAccessibilityAction_26086_ID_;
    static jmethodID& performAccessibilityAction_26086_ID() { return performAccessibilityAction_26086_ID_; }
    static jmethodID requestChildFocus_26100_ID_;
    static jmethodID& requestChildFocus_26100_ID() { return requestChildFocus_26100_ID_; }
    static jmethodID requestChildRectangleOnScreen_26102_ID_;
    static jmethodID& requestChildRectangleOnScreen_26102_ID() { return requestChildRectangleOnScreen_26102_ID_; }
    static jmethodID requestDisallowInterceptTouchEvent_26081_ID_;
    static jmethodID& requestDisallowInterceptTouchEvent_26081_ID() { return requestDisallowInterceptTouchEvent_26081_ID_; }
    static jmethodID requestLayout_26103_ID_;
    static jmethodID& requestLayout_26103_ID() { return requestLayout_26103_ID_; }
    static jmethodID scrollTo_26108_ID_;
    static jmethodID& scrollTo_26108_ID() { return scrollTo_26108_ID_; }
    static jmethodID ScrollView_26063_ID_c_;
    static jmethodID& ScrollView_26063_ID_c() { return ScrollView_26063_ID_c_; }
    static jmethodID ScrollView_26064_ID_c_;
    static jmethodID& ScrollView_26064_ID_c() { return ScrollView_26064_ID_c_; }
    static jmethodID ScrollView_26065_ID_c_;
    static jmethodID& ScrollView_26065_ID_c() { return ScrollView_26065_ID_c_; }
    static jmethodID setFillViewport_26075_ID_;
    static jmethodID& setFillViewport_26075_ID() { return setFillViewport_26075_ID_; }
    static jmethodID setOverScrollMode_26109_ID_;
    static jmethodID& setOverScrollMode_26109_ID() { return setOverScrollMode_26109_ID_; }
    static jmethodID setSmoothScrollingEnabled_26077_ID_;
    static jmethodID& setSmoothScrollingEnabled_26077_ID() { return setSmoothScrollingEnabled_26077_ID_; }
    static jmethodID shouldDelayChildPressedState_26066_ID_;
    static jmethodID& shouldDelayChildPressedState_26066_ID() { return shouldDelayChildPressedState_26066_ID_; }
    static jmethodID smoothScrollBy_26092_ID_;
    static jmethodID& smoothScrollBy_26092_ID() { return smoothScrollBy_26092_ID_; }
    static jmethodID smoothScrollTo_26093_ID_;
    static jmethodID& smoothScrollTo_26093_ID() { return smoothScrollTo_26093_ID_; }

    void ctor_16(::g::Android::android::content::Context* arg0);
    void ctor_17(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_18(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    bool arrowScroll(int arg0);
    bool executeKeyEvent(::g::Android::android::view::KeyEvent* arg0);
    void fling(int arg0);
    bool fullScroll(int arg0);
    int getMaxScrollAmount();
    bool isFillViewport();
    bool isSmoothScrollingEnabled();
    bool pageScroll(int arg0);
    void setFillViewport(bool arg0);
    void setSmoothScrollingEnabled(bool arg0);
    void smoothScrollBy(int arg0, int arg1);
    void smoothScrollTo(int arg0, int arg1);
    static void _Init5();
    static void addView_IMPL_26070(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView_IMPL_26071(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void addView_IMPL_26072(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void addView_IMPL_26073(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
    static bool arrowScroll_IMPL_26091(bool arg0_, jobject arg1_, int arg2_);
    static void computeScroll_IMPL_26098(bool arg0_, jobject arg1_);
    static int computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(bool arg0_, jobject arg1_, uObject* arg2_);
    static int computeVerticalScrollOffset_IMPL_26095(bool arg0_, jobject arg1_);
    static int computeVerticalScrollRange_IMPL_26094(bool arg0_, jobject arg1_);
    static bool dispatchKeyEvent_IMPL_26079(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool executeKeyEvent_IMPL_26080(bool arg0_, jobject arg1_, uObject* arg2_);
    static void fling_IMPL_26107(bool arg0_, jobject arg1_, int arg2_);
    static bool fullScroll_IMPL_26090(bool arg0_, jobject arg1_, int arg2_);
    static float getBottomFadingEdgeStrength_IMPL_26068(bool arg0_, jobject arg1_);
    static int getMaxScrollAmount_IMPL_26069(bool arg0_, jobject arg1_);
    static float getTopFadingEdgeStrength_IMPL_26067(bool arg0_, jobject arg1_);
    static bool isFillViewport_IMPL_26074(bool arg0_, jobject arg1_);
    static bool isSmoothScrollingEnabled_IMPL_26076(bool arg0_, jobject arg1_);
    static void j_draw_IMPL_26110(bool arg0_, jobject arg1_, uObject* arg2_);
    static void measureChild_IMPL_26096(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static void measureChildWithMargins_IMPL_26097(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static ScrollView* New13(::g::Android::android::content::Context* arg0);
    static ScrollView* New14(::g::Android::android::content::Context* arg0, uObject* arg1);
    static ScrollView* New15(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static ScrollView* New16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onDetachedFromWindow_IMPL_26104(bool arg0_, jobject arg1_);
    static bool onGenericMotionEvent_IMPL_26084(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent_IMPL_26088(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_26087(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onInterceptTouchEvent_IMPL_26082(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onLayout_IMPL_26105(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void onMeasure_IMPL_26078(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void onOverScrolled_IMPL_26085(bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
    static bool onRequestFocusInDescendants_IMPL_26101(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void onRestoreInstanceState_IMPL_26111(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* onSaveInstanceState_IMPL_26112(bool arg0_, jobject arg1_);
    static void onSizeChanged_IMPL_26106(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent_IMPL_26083(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool pageScroll_IMPL_26089(bool arg0_, jobject arg1_, int arg2_);
    static bool performAccessibilityAction_IMPL_26086(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void requestChildFocus_IMPL_26100(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool requestChildRectangleOnScreen_IMPL_26102(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static void requestDisallowInterceptTouchEvent_IMPL_26081(bool arg0_, jobject arg1_, bool arg2_);
    static void requestLayout_IMPL_26103(bool arg0_, jobject arg1_);
    static void scrollTo_IMPL_26108(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void setFillViewport_IMPL_26075(bool arg0_, jobject arg1_, bool arg2_);
    static void setOverScrollMode_IMPL_26109(bool arg0_, jobject arg1_, int arg2_);
    static void setSmoothScrollingEnabled_IMPL_26077(bool arg0_, jobject arg1_, bool arg2_);
    static bool shouldDelayChildPressedState_IMPL_26066(bool arg0_, jobject arg1_);
    static void smoothScrollBy_IMPL_26092(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void smoothScrollTo_IMPL_26093(bool arg0_, jobject arg1_, int arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::widget

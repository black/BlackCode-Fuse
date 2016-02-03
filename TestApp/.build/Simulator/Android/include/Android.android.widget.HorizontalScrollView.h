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
namespace g{namespace Android{namespace android{namespace widget{struct HorizontalScrollView;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class HorizontalScrollView :15049
// {
::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof();
void HorizontalScrollView__ctor_16_fn(HorizontalScrollView* __this, ::g::Android::android::content::Context* arg0);
void HorizontalScrollView__ctor_17_fn(HorizontalScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void HorizontalScrollView__ctor_18_fn(HorizontalScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void HorizontalScrollView__ctor_19_fn(HorizontalScrollView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void HorizontalScrollView___Init5_fn();
void HorizontalScrollView__addView_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0);
void HorizontalScrollView__addView1_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void HorizontalScrollView__addView2_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1);
void HorizontalScrollView__addView3_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void HorizontalScrollView__addView_IMPL_25366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HorizontalScrollView__addView_IMPL_25367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void HorizontalScrollView__addView_IMPL_25368_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void HorizontalScrollView__addView_IMPL_25369_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);
void HorizontalScrollView__arrowScroll_fn(HorizontalScrollView* __this, int* arg0, bool* __retval);
void HorizontalScrollView__arrowScroll_IMPL_25388_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392_fn(bool* arg0_, jobject* arg1_, int* __retval);
void HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391_fn(bool* arg0_, jobject* arg1_, int* __retval);
void HorizontalScrollView__computeScroll_fn(HorizontalScrollView* __this);
void HorizontalScrollView__computeScroll_IMPL_25395_fn(bool* arg0_, jobject* arg1_);
void HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void HorizontalScrollView__dispatchKeyEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void HorizontalScrollView__dispatchKeyEvent_IMPL_25375_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__executeKeyEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void HorizontalScrollView__executeKeyEvent_IMPL_25376_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__fling_fn(HorizontalScrollView* __this, int* arg0);
void HorizontalScrollView__fling_IMPL_25403_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void HorizontalScrollView__fullScroll_fn(HorizontalScrollView* __this, int* arg0, bool* __retval);
void HorizontalScrollView__fullScroll_IMPL_25387_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363_fn(bool* arg0_, jobject* arg1_, float* __retval);
void HorizontalScrollView__getMaxScrollAmount_fn(HorizontalScrollView* __this, int* __retval);
void HorizontalScrollView__getMaxScrollAmount_IMPL_25365_fn(bool* arg0_, jobject* arg1_, int* __retval);
void HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364_fn(bool* arg0_, jobject* arg1_, float* __retval);
void HorizontalScrollView__isFillViewport_fn(HorizontalScrollView* __this, bool* __retval);
void HorizontalScrollView__isFillViewport_IMPL_25370_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void HorizontalScrollView__isSmoothScrollingEnabled_fn(HorizontalScrollView* __this, bool* __retval);
void HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void HorizontalScrollView__j_draw_fn(HorizontalScrollView* __this, ::g::Android::android::graphics::Canvas* arg0);
void HorizontalScrollView__j_draw_IMPL_25406_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HorizontalScrollView__measureChild_IMPL_25393_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void HorizontalScrollView__measureChildWithMargins_IMPL_25394_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void HorizontalScrollView__New13_fn(::g::Android::android::content::Context* arg0, HorizontalScrollView** __retval);
void HorizontalScrollView__New14_fn(::g::Android::android::content::Context* arg0, uObject* arg1, HorizontalScrollView** __retval);
void HorizontalScrollView__New15_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, HorizontalScrollView** __retval);
void HorizontalScrollView__New16_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, HorizontalScrollView** __retval);
void HorizontalScrollView__onGenericMotionEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void HorizontalScrollView__onGenericMotionEvent_IMPL_25380_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__onInitializeAccessibilityEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HorizontalScrollView__onInitializeAccessibilityNodeInfo_fn(HorizontalScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HorizontalScrollView__onInterceptTouchEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void HorizontalScrollView__onInterceptTouchEvent_IMPL_25378_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__onLayout_IMPL_25401_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void HorizontalScrollView__onMeasure_IMPL_25374_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void HorizontalScrollView__onOverScrolled_IMPL_25382_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* arg4_, bool* arg5_);
void HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void HorizontalScrollView__onRestoreInstanceState_IMPL_25407_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HorizontalScrollView__onSaveInstanceState_IMPL_25408_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void HorizontalScrollView__onSizeChanged_IMPL_25402_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void HorizontalScrollView__onTouchEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void HorizontalScrollView__onTouchEvent_IMPL_25379_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__pageScroll_fn(HorizontalScrollView* __this, int* arg0, bool* __retval);
void HorizontalScrollView__pageScroll_IMPL_25386_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void HorizontalScrollView__performAccessibilityAction_fn(HorizontalScrollView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void HorizontalScrollView__performAccessibilityAction_IMPL_25383_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void HorizontalScrollView__requestChildFocus_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void HorizontalScrollView__requestChildFocus_IMPL_25397_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void HorizontalScrollView__requestChildRectangleOnScreen_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval);
void HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval);
void HorizontalScrollView__requestDisallowInterceptTouchEvent_fn(HorizontalScrollView* __this, bool* arg0);
void HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void HorizontalScrollView__requestLayout_fn(HorizontalScrollView* __this);
void HorizontalScrollView__requestLayout_IMPL_25400_fn(bool* arg0_, jobject* arg1_);
void HorizontalScrollView__scrollTo_fn(HorizontalScrollView* __this, int* arg0, int* arg1);
void HorizontalScrollView__scrollTo_IMPL_25404_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void HorizontalScrollView__setFillViewport_fn(HorizontalScrollView* __this, bool* arg0);
void HorizontalScrollView__setFillViewport_IMPL_25371_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void HorizontalScrollView__setOverScrollMode_fn(HorizontalScrollView* __this, int* arg0);
void HorizontalScrollView__setOverScrollMode_IMPL_25405_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void HorizontalScrollView__setSmoothScrollingEnabled_fn(HorizontalScrollView* __this, bool* arg0);
void HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void HorizontalScrollView__shouldDelayChildPressedState_fn(HorizontalScrollView* __this, bool* __retval);
void HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void HorizontalScrollView__smoothScrollBy_fn(HorizontalScrollView* __this, int* arg0, int* arg1);
void HorizontalScrollView__smoothScrollBy_IMPL_25389_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void HorizontalScrollView__smoothScrollTo_fn(HorizontalScrollView* __this, int* arg0, int* arg1);
void HorizontalScrollView__smoothScrollTo_IMPL_25390_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);

struct HorizontalScrollView : ::g::Android::android::widget::FrameLayout
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID addView_25366_ID_;
    static jmethodID& addView_25366_ID() { return addView_25366_ID_; }
    static jmethodID addView_25367_ID_;
    static jmethodID& addView_25367_ID() { return addView_25367_ID_; }
    static jmethodID addView_25368_ID_;
    static jmethodID& addView_25368_ID() { return addView_25368_ID_; }
    static jmethodID addView_25369_ID_;
    static jmethodID& addView_25369_ID() { return addView_25369_ID_; }
    static jmethodID arrowScroll_25388_ID_;
    static jmethodID& arrowScroll_25388_ID() { return arrowScroll_25388_ID_; }
    static jmethodID computeHorizontalScrollOffset_25392_ID_;
    static jmethodID& computeHorizontalScrollOffset_25392_ID() { return computeHorizontalScrollOffset_25392_ID_; }
    static jmethodID computeHorizontalScrollRange_25391_ID_;
    static jmethodID& computeHorizontalScrollRange_25391_ID() { return computeHorizontalScrollRange_25391_ID_; }
    static jmethodID computeScroll_25395_ID_;
    static jmethodID& computeScroll_25395_ID() { return computeScroll_25395_ID_; }
    static jmethodID computeScrollDeltaToGetChildRectOnScreen_25396_ID_;
    static jmethodID& computeScrollDeltaToGetChildRectOnScreen_25396_ID() { return computeScrollDeltaToGetChildRectOnScreen_25396_ID_; }
    static jmethodID dispatchKeyEvent_25375_ID_;
    static jmethodID& dispatchKeyEvent_25375_ID() { return dispatchKeyEvent_25375_ID_; }
    static jmethodID executeKeyEvent_25376_ID_;
    static jmethodID& executeKeyEvent_25376_ID() { return executeKeyEvent_25376_ID_; }
    static jmethodID fling_25403_ID_;
    static jmethodID& fling_25403_ID() { return fling_25403_ID_; }
    static jmethodID fullScroll_25387_ID_;
    static jmethodID& fullScroll_25387_ID() { return fullScroll_25387_ID_; }
    static jmethodID getLeftFadingEdgeStrength_25363_ID_;
    static jmethodID& getLeftFadingEdgeStrength_25363_ID() { return getLeftFadingEdgeStrength_25363_ID_; }
    static jmethodID getMaxScrollAmount_25365_ID_;
    static jmethodID& getMaxScrollAmount_25365_ID() { return getMaxScrollAmount_25365_ID_; }
    static jmethodID getRightFadingEdgeStrength_25364_ID_;
    static jmethodID& getRightFadingEdgeStrength_25364_ID() { return getRightFadingEdgeStrength_25364_ID_; }
    static jmethodID HorizontalScrollView_25360_ID_c_;
    static jmethodID& HorizontalScrollView_25360_ID_c() { return HorizontalScrollView_25360_ID_c_; }
    static jmethodID HorizontalScrollView_25361_ID_c_;
    static jmethodID& HorizontalScrollView_25361_ID_c() { return HorizontalScrollView_25361_ID_c_; }
    static jmethodID HorizontalScrollView_25362_ID_c_;
    static jmethodID& HorizontalScrollView_25362_ID_c() { return HorizontalScrollView_25362_ID_c_; }
    static jmethodID isFillViewport_25370_ID_;
    static jmethodID& isFillViewport_25370_ID() { return isFillViewport_25370_ID_; }
    static jmethodID isSmoothScrollingEnabled_25372_ID_;
    static jmethodID& isSmoothScrollingEnabled_25372_ID() { return isSmoothScrollingEnabled_25372_ID_; }
    static jmethodID j_draw_25406_ID_;
    static jmethodID& j_draw_25406_ID() { return j_draw_25406_ID_; }
    static jmethodID measureChild_25393_ID_;
    static jmethodID& measureChild_25393_ID() { return measureChild_25393_ID_; }
    static jmethodID measureChildWithMargins_25394_ID_;
    static jmethodID& measureChildWithMargins_25394_ID() { return measureChildWithMargins_25394_ID_; }
    static jmethodID onGenericMotionEvent_25380_ID_;
    static jmethodID& onGenericMotionEvent_25380_ID() { return onGenericMotionEvent_25380_ID_; }
    static jmethodID onInitializeAccessibilityEvent_25385_ID_;
    static jmethodID& onInitializeAccessibilityEvent_25385_ID() { return onInitializeAccessibilityEvent_25385_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_25384_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_25384_ID() { return onInitializeAccessibilityNodeInfo_25384_ID_; }
    static jmethodID onInterceptTouchEvent_25378_ID_;
    static jmethodID& onInterceptTouchEvent_25378_ID() { return onInterceptTouchEvent_25378_ID_; }
    static jmethodID onLayout_25401_ID_;
    static jmethodID& onLayout_25401_ID() { return onLayout_25401_ID_; }
    static jmethodID onMeasure_25374_ID_;
    static jmethodID& onMeasure_25374_ID() { return onMeasure_25374_ID_; }
    static jmethodID onOverScrolled_25382_ID_;
    static jmethodID& onOverScrolled_25382_ID() { return onOverScrolled_25382_ID_; }
    static jmethodID onRequestFocusInDescendants_25398_ID_;
    static jmethodID& onRequestFocusInDescendants_25398_ID() { return onRequestFocusInDescendants_25398_ID_; }
    static jmethodID onRestoreInstanceState_25407_ID_;
    static jmethodID& onRestoreInstanceState_25407_ID() { return onRestoreInstanceState_25407_ID_; }
    static jmethodID onSaveInstanceState_25408_ID_;
    static jmethodID& onSaveInstanceState_25408_ID() { return onSaveInstanceState_25408_ID_; }
    static jmethodID onSizeChanged_25402_ID_;
    static jmethodID& onSizeChanged_25402_ID() { return onSizeChanged_25402_ID_; }
    static jmethodID onTouchEvent_25379_ID_;
    static jmethodID& onTouchEvent_25379_ID() { return onTouchEvent_25379_ID_; }
    static jmethodID pageScroll_25386_ID_;
    static jmethodID& pageScroll_25386_ID() { return pageScroll_25386_ID_; }
    static jmethodID performAccessibilityAction_25383_ID_;
    static jmethodID& performAccessibilityAction_25383_ID() { return performAccessibilityAction_25383_ID_; }
    static jmethodID requestChildFocus_25397_ID_;
    static jmethodID& requestChildFocus_25397_ID() { return requestChildFocus_25397_ID_; }
    static jmethodID requestChildRectangleOnScreen_25399_ID_;
    static jmethodID& requestChildRectangleOnScreen_25399_ID() { return requestChildRectangleOnScreen_25399_ID_; }
    static jmethodID requestDisallowInterceptTouchEvent_25377_ID_;
    static jmethodID& requestDisallowInterceptTouchEvent_25377_ID() { return requestDisallowInterceptTouchEvent_25377_ID_; }
    static jmethodID requestLayout_25400_ID_;
    static jmethodID& requestLayout_25400_ID() { return requestLayout_25400_ID_; }
    static jmethodID scrollTo_25404_ID_;
    static jmethodID& scrollTo_25404_ID() { return scrollTo_25404_ID_; }
    static jmethodID setFillViewport_25371_ID_;
    static jmethodID& setFillViewport_25371_ID() { return setFillViewport_25371_ID_; }
    static jmethodID setOverScrollMode_25405_ID_;
    static jmethodID& setOverScrollMode_25405_ID() { return setOverScrollMode_25405_ID_; }
    static jmethodID setSmoothScrollingEnabled_25373_ID_;
    static jmethodID& setSmoothScrollingEnabled_25373_ID() { return setSmoothScrollingEnabled_25373_ID_; }
    static jmethodID shouldDelayChildPressedState_25381_ID_;
    static jmethodID& shouldDelayChildPressedState_25381_ID() { return shouldDelayChildPressedState_25381_ID_; }
    static jmethodID smoothScrollBy_25389_ID_;
    static jmethodID& smoothScrollBy_25389_ID() { return smoothScrollBy_25389_ID_; }
    static jmethodID smoothScrollTo_25390_ID_;
    static jmethodID& smoothScrollTo_25390_ID() { return smoothScrollTo_25390_ID_; }

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
    static void addView_IMPL_25366(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView_IMPL_25367(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void addView_IMPL_25368(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void addView_IMPL_25369(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
    static bool arrowScroll_IMPL_25388(bool arg0_, jobject arg1_, int arg2_);
    static int computeHorizontalScrollOffset_IMPL_25392(bool arg0_, jobject arg1_);
    static int computeHorizontalScrollRange_IMPL_25391(bool arg0_, jobject arg1_);
    static void computeScroll_IMPL_25395(bool arg0_, jobject arg1_);
    static int computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyEvent_IMPL_25375(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool executeKeyEvent_IMPL_25376(bool arg0_, jobject arg1_, uObject* arg2_);
    static void fling_IMPL_25403(bool arg0_, jobject arg1_, int arg2_);
    static bool fullScroll_IMPL_25387(bool arg0_, jobject arg1_, int arg2_);
    static float getLeftFadingEdgeStrength_IMPL_25363(bool arg0_, jobject arg1_);
    static int getMaxScrollAmount_IMPL_25365(bool arg0_, jobject arg1_);
    static float getRightFadingEdgeStrength_IMPL_25364(bool arg0_, jobject arg1_);
    static bool isFillViewport_IMPL_25370(bool arg0_, jobject arg1_);
    static bool isSmoothScrollingEnabled_IMPL_25372(bool arg0_, jobject arg1_);
    static void j_draw_IMPL_25406(bool arg0_, jobject arg1_, uObject* arg2_);
    static void measureChild_IMPL_25393(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static void measureChildWithMargins_IMPL_25394(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static HorizontalScrollView* New13(::g::Android::android::content::Context* arg0);
    static HorizontalScrollView* New14(::g::Android::android::content::Context* arg0, uObject* arg1);
    static HorizontalScrollView* New15(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static HorizontalScrollView* New16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static bool onGenericMotionEvent_IMPL_25380(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent_IMPL_25385(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_25384(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onInterceptTouchEvent_IMPL_25378(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onLayout_IMPL_25401(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void onMeasure_IMPL_25374(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void onOverScrolled_IMPL_25382(bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
    static bool onRequestFocusInDescendants_IMPL_25398(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void onRestoreInstanceState_IMPL_25407(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* onSaveInstanceState_IMPL_25408(bool arg0_, jobject arg1_);
    static void onSizeChanged_IMPL_25402(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent_IMPL_25379(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool pageScroll_IMPL_25386(bool arg0_, jobject arg1_, int arg2_);
    static bool performAccessibilityAction_IMPL_25383(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void requestChildFocus_IMPL_25397(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool requestChildRectangleOnScreen_IMPL_25399(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static void requestDisallowInterceptTouchEvent_IMPL_25377(bool arg0_, jobject arg1_, bool arg2_);
    static void requestLayout_IMPL_25400(bool arg0_, jobject arg1_);
    static void scrollTo_IMPL_25404(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void setFillViewport_IMPL_25371(bool arg0_, jobject arg1_, bool arg2_);
    static void setOverScrollMode_IMPL_25405(bool arg0_, jobject arg1_, int arg2_);
    static void setSmoothScrollingEnabled_IMPL_25373(bool arg0_, jobject arg1_, bool arg2_);
    static bool shouldDelayChildPressedState_IMPL_25381(bool arg0_, jobject arg1_);
    static void smoothScrollBy_IMPL_25389(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void smoothScrollTo_IMPL_25390(bool arg0_, jobject arg1_, int arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::widget

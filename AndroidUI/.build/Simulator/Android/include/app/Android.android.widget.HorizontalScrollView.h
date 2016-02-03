// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_HORIZONTAL_SCROLL_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_HORIZONTAL_SCROLL_VIEW_H__

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

struct HorizontalScrollView;

extern jclass HorizontalScrollView___javaClass_5;
extern jmethodID HorizontalScrollView__addView_25366_ID;
extern jmethodID HorizontalScrollView__addView_25367_ID;
extern jmethodID HorizontalScrollView__addView_25368_ID;
extern jmethodID HorizontalScrollView__addView_25369_ID;
extern jmethodID HorizontalScrollView__arrowScroll_25388_ID;
extern jmethodID HorizontalScrollView__computeHorizontalScrollOffset_25392_ID;
extern jmethodID HorizontalScrollView__computeHorizontalScrollRange_25391_ID;
extern jmethodID HorizontalScrollView__computeScroll_25395_ID;
extern jmethodID HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_25396_ID;
extern jmethodID HorizontalScrollView__dispatchKeyEvent_25375_ID;
extern jmethodID HorizontalScrollView__executeKeyEvent_25376_ID;
extern jmethodID HorizontalScrollView__fling_25403_ID;
extern jmethodID HorizontalScrollView__fullScroll_25387_ID;
extern jmethodID HorizontalScrollView__getLeftFadingEdgeStrength_25363_ID;
extern jmethodID HorizontalScrollView__getMaxScrollAmount_25365_ID;
extern jmethodID HorizontalScrollView__getRightFadingEdgeStrength_25364_ID;
extern jmethodID HorizontalScrollView__HorizontalScrollView_25360_ID_c;
extern jmethodID HorizontalScrollView__HorizontalScrollView_25361_ID_c;
extern jmethodID HorizontalScrollView__HorizontalScrollView_25362_ID_c;
extern jmethodID HorizontalScrollView__isFillViewport_25370_ID;
extern jmethodID HorizontalScrollView__isSmoothScrollingEnabled_25372_ID;
extern jmethodID HorizontalScrollView__j_draw_25406_ID;
extern jmethodID HorizontalScrollView__measureChild_25393_ID;
extern jmethodID HorizontalScrollView__measureChildWithMargins_25394_ID;
extern jmethodID HorizontalScrollView__onGenericMotionEvent_25380_ID;
extern jmethodID HorizontalScrollView__onInitializeAccessibilityEvent_25385_ID;
extern jmethodID HorizontalScrollView__onInitializeAccessibilityNodeInfo_25384_ID;
extern jmethodID HorizontalScrollView__onInterceptTouchEvent_25378_ID;
extern jmethodID HorizontalScrollView__onLayout_25401_ID;
extern jmethodID HorizontalScrollView__onMeasure_25374_ID;
extern jmethodID HorizontalScrollView__onOverScrolled_25382_ID;
extern jmethodID HorizontalScrollView__onRequestFocusInDescendants_25398_ID;
extern jmethodID HorizontalScrollView__onRestoreInstanceState_25407_ID;
extern jmethodID HorizontalScrollView__onSaveInstanceState_25408_ID;
extern jmethodID HorizontalScrollView__onSizeChanged_25402_ID;
extern jmethodID HorizontalScrollView__onTouchEvent_25379_ID;
extern jmethodID HorizontalScrollView__pageScroll_25386_ID;
extern jmethodID HorizontalScrollView__performAccessibilityAction_25383_ID;
extern jmethodID HorizontalScrollView__requestChildFocus_25397_ID;
extern jmethodID HorizontalScrollView__requestChildRectangleOnScreen_25399_ID;
extern jmethodID HorizontalScrollView__requestDisallowInterceptTouchEvent_25377_ID;
extern jmethodID HorizontalScrollView__requestLayout_25400_ID;
extern jmethodID HorizontalScrollView__scrollTo_25404_ID;
extern jmethodID HorizontalScrollView__setFillViewport_25371_ID;
extern jmethodID HorizontalScrollView__setOverScrollMode_25405_ID;
extern jmethodID HorizontalScrollView__setSmoothScrollingEnabled_25373_ID;
extern jmethodID HorizontalScrollView__shouldDelayChildPressedState_25381_ID;
extern jmethodID HorizontalScrollView__smoothScrollBy_25389_ID;
extern jmethodID HorizontalScrollView__smoothScrollTo_25390_ID;

struct HorizontalScrollView__uType : ::app::Android::android::widget::FrameLayout__uType
{
};

HorizontalScrollView__uType* HorizontalScrollView__typeof();

void HorizontalScrollView___Init_5(::uStatic* __this);
void HorizontalScrollView___ObjInit_16(HorizontalScrollView* __this, ::app::Android::android::content::Context* arg0);
void HorizontalScrollView___ObjInit_17(HorizontalScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void HorizontalScrollView___ObjInit_18(HorizontalScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void HorizontalScrollView___ObjInit_19(HorizontalScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void HorizontalScrollView__addView(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0);
void HorizontalScrollView__addView_1(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1);
void HorizontalScrollView__addView_3(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void HorizontalScrollView__addView_4(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void HorizontalScrollView__addView_IMPL_25366(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__addView_IMPL_25367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void HorizontalScrollView__addView_IMPL_25368(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void HorizontalScrollView__addView_IMPL_25369(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);
bool HorizontalScrollView__arrowScroll(HorizontalScrollView* __this, int arg0);
bool HorizontalScrollView__arrowScroll_IMPL_25388(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int HorizontalScrollView__computeHorizontalScrollOffset(HorizontalScrollView* __this);
int HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392(::uStatic* __this, bool arg0_, jobject arg1_);
int HorizontalScrollView__computeHorizontalScrollRange(HorizontalScrollView* __this);
int HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391(::uStatic* __this, bool arg0_, jobject arg1_);
void HorizontalScrollView__computeScroll(HorizontalScrollView* __this);
void HorizontalScrollView__computeScroll_IMPL_25395(::uStatic* __this, bool arg0_, jobject arg1_);
int HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen(HorizontalScrollView* __this, ::app::Android::android::graphics::Rect* arg0);
int HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool HorizontalScrollView__dispatchKeyEvent(HorizontalScrollView* __this, ::app::Android::android::view::KeyEvent* arg0);
bool HorizontalScrollView__dispatchKeyEvent_IMPL_25375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool HorizontalScrollView__executeKeyEvent(HorizontalScrollView* __this, ::app::Android::android::view::KeyEvent* arg0);
bool HorizontalScrollView__executeKeyEvent_IMPL_25376(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__fling(HorizontalScrollView* __this, int arg0);
void HorizontalScrollView__fling_IMPL_25403(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool HorizontalScrollView__fullScroll(HorizontalScrollView* __this, int arg0);
bool HorizontalScrollView__fullScroll_IMPL_25387(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
float HorizontalScrollView__getLeftFadingEdgeStrength(HorizontalScrollView* __this);
float HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363(::uStatic* __this, bool arg0_, jobject arg1_);
int HorizontalScrollView__getMaxScrollAmount(HorizontalScrollView* __this);
int HorizontalScrollView__getMaxScrollAmount_IMPL_25365(::uStatic* __this, bool arg0_, jobject arg1_);
float HorizontalScrollView__getRightFadingEdgeStrength(HorizontalScrollView* __this);
float HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364(::uStatic* __this, bool arg0_, jobject arg1_);
bool HorizontalScrollView__isFillViewport(HorizontalScrollView* __this);
bool HorizontalScrollView__isFillViewport_IMPL_25370(::uStatic* __this, bool arg0_, jobject arg1_);
bool HorizontalScrollView__isSmoothScrollingEnabled(HorizontalScrollView* __this);
bool HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372(::uStatic* __this, bool arg0_, jobject arg1_);
void HorizontalScrollView__j_draw(HorizontalScrollView* __this, ::app::Android::android::graphics::Canvas* arg0);
void HorizontalScrollView__j_draw_IMPL_25406(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__measureChild(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2);
void HorizontalScrollView__measureChild_IMPL_25393(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
void HorizontalScrollView__measureChildWithMargins(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4);
void HorizontalScrollView__measureChildWithMargins_IMPL_25394(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
HorizontalScrollView* HorizontalScrollView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
HorizontalScrollView* HorizontalScrollView__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
HorizontalScrollView* HorizontalScrollView__New_15(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
HorizontalScrollView* HorizontalScrollView__New_16(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
bool HorizontalScrollView__onGenericMotionEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool HorizontalScrollView__onGenericMotionEvent_IMPL_25380(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__onInitializeAccessibilityEvent(HorizontalScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__onInitializeAccessibilityNodeInfo(HorizontalScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool HorizontalScrollView__onInterceptTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool HorizontalScrollView__onInterceptTouchEvent_IMPL_25378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__onLayout(HorizontalScrollView* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void HorizontalScrollView__onLayout_IMPL_25401(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void HorizontalScrollView__onMeasure(HorizontalScrollView* __this, int arg0, int arg1);
void HorizontalScrollView__onMeasure_IMPL_25374(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void HorizontalScrollView__onOverScrolled(HorizontalScrollView* __this, int arg0, int arg1, bool arg2, bool arg3);
void HorizontalScrollView__onOverScrolled_IMPL_25382(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
bool HorizontalScrollView__onRequestFocusInDescendants(HorizontalScrollView* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
bool HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void HorizontalScrollView__onRestoreInstanceState(HorizontalScrollView* __this, ::uObject* arg0);
void HorizontalScrollView__onRestoreInstanceState_IMPL_25407(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* HorizontalScrollView__onSaveInstanceState(HorizontalScrollView* __this);
::uObject* HorizontalScrollView__onSaveInstanceState_IMPL_25408(::uStatic* __this, bool arg0_, jobject arg1_);
void HorizontalScrollView__onSizeChanged(HorizontalScrollView* __this, int arg0, int arg1, int arg2, int arg3);
void HorizontalScrollView__onSizeChanged_IMPL_25402(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool HorizontalScrollView__onTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool HorizontalScrollView__onTouchEvent_IMPL_25379(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool HorizontalScrollView__pageScroll(HorizontalScrollView* __this, int arg0);
bool HorizontalScrollView__pageScroll_IMPL_25386(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool HorizontalScrollView__performAccessibilityAction(HorizontalScrollView* __this, int arg0, ::app::Android::android::os::Bundle* arg1);
bool HorizontalScrollView__performAccessibilityAction_IMPL_25383(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void HorizontalScrollView__requestChildFocus(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void HorizontalScrollView__requestChildFocus_IMPL_25397(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool HorizontalScrollView__requestChildRectangleOnScreen(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2);
bool HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_);
void HorizontalScrollView__requestDisallowInterceptTouchEvent(HorizontalScrollView* __this, bool arg0);
void HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void HorizontalScrollView__requestLayout(HorizontalScrollView* __this);
void HorizontalScrollView__requestLayout_IMPL_25400(::uStatic* __this, bool arg0_, jobject arg1_);
void HorizontalScrollView__scrollTo(HorizontalScrollView* __this, int arg0, int arg1);
void HorizontalScrollView__scrollTo_IMPL_25404(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void HorizontalScrollView__setFillViewport(HorizontalScrollView* __this, bool arg0);
void HorizontalScrollView__setFillViewport_IMPL_25371(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void HorizontalScrollView__setOverScrollMode(HorizontalScrollView* __this, int arg0);
void HorizontalScrollView__setOverScrollMode_IMPL_25405(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void HorizontalScrollView__setSmoothScrollingEnabled(HorizontalScrollView* __this, bool arg0);
void HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool HorizontalScrollView__shouldDelayChildPressedState(HorizontalScrollView* __this);
bool HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381(::uStatic* __this, bool arg0_, jobject arg1_);
void HorizontalScrollView__smoothScrollBy(HorizontalScrollView* __this, int arg0, int arg1);
void HorizontalScrollView__smoothScrollBy_IMPL_25389(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void HorizontalScrollView__smoothScrollTo(HorizontalScrollView* __this, int arg0, int arg1);
void HorizontalScrollView__smoothScrollTo_IMPL_25390(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);

struct HorizontalScrollView : ::app::Android::android::widget::FrameLayout
{
    void _ObjInit_16(::app::Android::android::content::Context* arg0) { HorizontalScrollView___ObjInit_16(this, arg0); }
    void _ObjInit_17(::app::Android::android::content::Context* arg0, ::uObject* arg1) { HorizontalScrollView___ObjInit_17(this, arg0, arg1); }
    void _ObjInit_18(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { HorizontalScrollView___ObjInit_18(this, arg0, arg1, arg2); }
    void _ObjInit_19(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { HorizontalScrollView___ObjInit_19(this, obj, utype, hasFallbackClass, resolveType); }
    bool arrowScroll(int arg0) { return HorizontalScrollView__arrowScroll(this, arg0); }
    int computeScrollDeltaToGetChildRectOnScreen(::app::Android::android::graphics::Rect* arg0) { return HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen(this, arg0); }
    bool executeKeyEvent(::app::Android::android::view::KeyEvent* arg0) { return HorizontalScrollView__executeKeyEvent(this, arg0); }
    void fling(int arg0) { HorizontalScrollView__fling(this, arg0); }
    bool fullScroll(int arg0) { return HorizontalScrollView__fullScroll(this, arg0); }
    int getMaxScrollAmount() { return HorizontalScrollView__getMaxScrollAmount(this); }
    bool isFillViewport() { return HorizontalScrollView__isFillViewport(this); }
    bool isSmoothScrollingEnabled() { return HorizontalScrollView__isSmoothScrollingEnabled(this); }
    bool pageScroll(int arg0) { return HorizontalScrollView__pageScroll(this, arg0); }
    void setFillViewport(bool arg0) { HorizontalScrollView__setFillViewport(this, arg0); }
    void setSmoothScrollingEnabled(bool arg0) { HorizontalScrollView__setSmoothScrollingEnabled(this, arg0); }
    void smoothScrollBy(int arg0, int arg1) { HorizontalScrollView__smoothScrollBy(this, arg0, arg1); }
    void smoothScrollTo(int arg0, int arg1) { HorizontalScrollView__smoothScrollTo(this, arg0, arg1); }
};

}}}}


#endif

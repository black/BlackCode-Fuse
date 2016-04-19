// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.FrameLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct HorizontalScrollView;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class HorizontalScrollView :15049
// {
::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof();
void HorizontalScrollView__ctor_19_fn(HorizontalScrollView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void HorizontalScrollView___Init5_fn();
void HorizontalScrollView__addView_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0);
void HorizontalScrollView__addView2_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1);
void HorizontalScrollView__addView_IMPL_25366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HorizontalScrollView__addView_IMPL_25367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void HorizontalScrollView__onInterceptTouchEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void HorizontalScrollView__onInterceptTouchEvent_IMPL_25378_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__onTouchEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void HorizontalScrollView__onTouchEvent_IMPL_25379_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void HorizontalScrollView__requestLayout_fn(HorizontalScrollView* __this);
void HorizontalScrollView__requestLayout_IMPL_25400_fn(bool* arg0_, jobject* arg1_);

struct HorizontalScrollView : ::g::Android::android::widget::FrameLayout
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID addView_25366_ID_;
    static jmethodID& addView_25366_ID() { return addView_25366_ID_; }
    static jmethodID addView_25367_ID_;
    static jmethodID& addView_25367_ID() { return addView_25367_ID_; }
    static jmethodID onInterceptTouchEvent_25378_ID_;
    static jmethodID& onInterceptTouchEvent_25378_ID() { return onInterceptTouchEvent_25378_ID_; }
    static jmethodID onTouchEvent_25379_ID_;
    static jmethodID& onTouchEvent_25379_ID() { return onTouchEvent_25379_ID_; }
    static jmethodID requestLayout_25400_ID_;
    static jmethodID& requestLayout_25400_ID() { return requestLayout_25400_ID_; }

    void ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init5();
    static void addView_IMPL_25366(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView_IMPL_25367(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool onInterceptTouchEvent_IMPL_25378(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onTouchEvent_IMPL_25379(bool arg0_, jobject arg1_, uObject* arg2_);
    static void requestLayout_IMPL_25400(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::widget

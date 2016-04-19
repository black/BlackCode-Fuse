// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.FrameLayout.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct ScrollView;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class ScrollView :21321
// {
::g::Android::android::view::ViewGroup_type* ScrollView_typeof();
void ScrollView__ctor_19_fn(ScrollView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ScrollView___Init5_fn();
void ScrollView__addView_fn(ScrollView* __this, ::g::Android::android::view::View* arg0);
void ScrollView__addView2_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1);
void ScrollView__addView_IMPL_26070_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ScrollView__addView_IMPL_26071_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ScrollView__onInterceptTouchEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ScrollView__onInterceptTouchEvent_IMPL_26082_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__onTouchEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ScrollView__onTouchEvent_IMPL_26083_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ScrollView__requestLayout_fn(ScrollView* __this);
void ScrollView__requestLayout_IMPL_26103_fn(bool* arg0_, jobject* arg1_);

struct ScrollView : ::g::Android::android::widget::FrameLayout
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID addView_26070_ID_;
    static jmethodID& addView_26070_ID() { return addView_26070_ID_; }
    static jmethodID addView_26071_ID_;
    static jmethodID& addView_26071_ID() { return addView_26071_ID_; }
    static jmethodID onInterceptTouchEvent_26082_ID_;
    static jmethodID& onInterceptTouchEvent_26082_ID() { return onInterceptTouchEvent_26082_ID_; }
    static jmethodID onTouchEvent_26083_ID_;
    static jmethodID& onTouchEvent_26083_ID() { return onTouchEvent_26083_ID_; }
    static jmethodID requestLayout_26103_ID_;
    static jmethodID& requestLayout_26103_ID() { return requestLayout_26103_ID_; }

    void ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init5();
    static void addView_IMPL_26070(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView_IMPL_26071(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool onInterceptTouchEvent_IMPL_26082(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onTouchEvent_IMPL_26083(bool arg0_, jobject arg1_, uObject* arg2_);
    static void requestLayout_IMPL_26103(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::widget

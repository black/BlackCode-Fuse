// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern class ViewGroup :6451
// {
struct ViewGroup_type : ::g::Android::android::view::View_type
{
    void(*fp_addView)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*);
    void(*fp_addView2)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*);
    void(*fp_onInterceptTouchEvent)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*);
};

ViewGroup_type* ViewGroup_typeof();
void ViewGroup__ctor_11_fn(ViewGroup* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ViewGroup___Init3_fn();
void ViewGroup__addView_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__addView2_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1);
void ViewGroup__addView_IMPL_23432_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__addView_IMPL_23433_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ViewGroup__bringChildToFront_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__bringChildToFront_IMPL_23392_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__hasFocus_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__hasFocus_IMPL_23380_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__onInterceptTouchEvent_fn(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ViewGroup__onInterceptTouchEvent_IMPL_23409_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__removeView_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__removeView_IMPL_23446_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__setClipChildren_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setClipChildren_IMPL_23425_fn(bool* arg0_, jobject* arg1_, bool* arg2_);

struct ViewGroup : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID addView_23432_ID_;
    static jmethodID& addView_23432_ID() { return addView_23432_ID_; }
    static jmethodID addView_23433_ID_;
    static jmethodID& addView_23433_ID() { return addView_23433_ID_; }
    static jmethodID bringChildToFront_23392_ID_;
    static jmethodID& bringChildToFront_23392_ID() { return bringChildToFront_23392_ID_; }
    static jmethodID hasFocus_23380_ID_;
    static jmethodID& hasFocus_23380_ID() { return hasFocus_23380_ID_; }
    static jmethodID onInterceptTouchEvent_23409_ID_;
    static jmethodID& onInterceptTouchEvent_23409_ID() { return onInterceptTouchEvent_23409_ID_; }
    static jmethodID removeView_23446_ID_;
    static jmethodID& removeView_23446_ID() { return removeView_23446_ID_; }
    static jmethodID setClipChildren_23425_ID_;
    static jmethodID& setClipChildren_23425_ID() { return setClipChildren_23425_ID_; }

    void ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void addView(::g::Android::android::view::View* arg0) { (((ViewGroup_type*)__type)->fp_addView)(this, arg0); }
    void addView2(::g::Android::android::view::View* arg0, int arg1) { (((ViewGroup_type*)__type)->fp_addView2)(this, arg0, &arg1); }
    void bringChildToFront(::g::Android::android::view::View* arg0);
    bool onInterceptTouchEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((ViewGroup_type*)__type)->fp_onInterceptTouchEvent)(this, arg0, &__retval), __retval; }
    void removeView(::g::Android::android::view::View* arg0);
    void setClipChildren(bool arg0);
    static void _Init3();
    static void addView(ViewGroup* __this, ::g::Android::android::view::View* arg0) { ViewGroup__addView_fn(__this, arg0); }
    static void addView2(ViewGroup* __this, ::g::Android::android::view::View* arg0, int arg1) { ViewGroup__addView2_fn(__this, arg0, &arg1); }
    static void addView_IMPL_23432(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView_IMPL_23433(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void bringChildToFront_IMPL_23392(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool hasFocus_IMPL_23380(bool arg0_, jobject arg1_);
    static bool onInterceptTouchEvent(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return ViewGroup__onInterceptTouchEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onInterceptTouchEvent_IMPL_23409(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeView_IMPL_23446(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setClipChildren_IMPL_23425(bool arg0_, jobject arg1_, bool arg2_);
};
// }

}}}} // ::g::Android::android::view

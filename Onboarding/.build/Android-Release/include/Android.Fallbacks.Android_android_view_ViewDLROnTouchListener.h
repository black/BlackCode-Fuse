// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnTouchListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnTouchListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnTouchListener :20360
// {
struct Android_android_view_ViewDLROnTouchListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnTouchListener interface2;
};

Android_android_view_ViewDLROnTouchListener_type* Android_android_view_ViewDLROnTouchListener_typeof();
void Android_android_view_ViewDLROnTouchListener__onTouch_fn(Android_android_view_ViewDLROnTouchListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1, bool* __retval);
void Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct Android_android_view_ViewDLROnTouchListener : ::g::Android::java::lang::Object
{
    static jmethodID onTouch_22729_ID_;
    static jmethodID& onTouch_22729_ID() { return onTouch_22729_ID_; }

    bool onTouch(::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1);
    static bool onTouch_IMPL_22729(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks

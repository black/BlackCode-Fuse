// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnGenericMotionListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnGenericMotionListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnGenericMotionListener :20210
// {
struct Android_android_view_ViewDLROnGenericMotionListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnGenericMotionListener interface2;
};

Android_android_view_ViewDLROnGenericMotionListener_type* Android_android_view_ViewDLROnGenericMotionListener_typeof();
void Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_fn(Android_android_view_ViewDLROnGenericMotionListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1, bool* __retval);
void Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_IMPL_22723_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct Android_android_view_ViewDLROnGenericMotionListener : ::g::Android::java::lang::Object
{
    static jmethodID onGenericMotion_22723_ID_;
    static jmethodID& onGenericMotion_22723_ID() { return onGenericMotion_22723_ID_; }

    bool onGenericMotion(::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1);
    static bool onGenericMotion_IMPL_22723(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks

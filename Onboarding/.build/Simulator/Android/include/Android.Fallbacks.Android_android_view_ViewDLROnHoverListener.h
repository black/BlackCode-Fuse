// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnHoverListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnHoverListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnHoverListener :20235
// {
struct Android_android_view_ViewDLROnHoverListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnHoverListener interface2;
};

Android_android_view_ViewDLROnHoverListener_type* Android_android_view_ViewDLROnHoverListener_typeof();
void Android_android_view_ViewDLROnHoverListener__onHover_fn(Android_android_view_ViewDLROnHoverListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1, bool* __retval);
void Android_android_view_ViewDLROnHoverListener__onHover_IMPL_22724_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct Android_android_view_ViewDLROnHoverListener : ::g::Android::java::lang::Object
{
    static jmethodID onHover_22724_ID_;
    static jmethodID& onHover_22724_ID() { return onHover_22724_ID_; }

    bool onHover(::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1);
    static bool onHover_IMPL_22724(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks

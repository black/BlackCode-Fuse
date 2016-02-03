// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnKeyListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnKeyListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnKeyListener :20260
// {
struct Android_android_view_ViewDLROnKeyListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnKeyListener interface2;
};

Android_android_view_ViewDLROnKeyListener_type* Android_android_view_ViewDLROnKeyListener_typeof();
void Android_android_view_ViewDLROnKeyListener__onKey_fn(Android_android_view_ViewDLROnKeyListener* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval);
void Android_android_view_ViewDLROnKeyListener__onKey_IMPL_22725_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, bool* __retval);

struct Android_android_view_ViewDLROnKeyListener : ::g::Android::java::lang::Object
{
    static jmethodID onKey_22725_ID_;
    static jmethodID& onKey_22725_ID() { return onKey_22725_ID_; }

    bool onKey(::g::Android::android::view::View* arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2);
    static bool onKey_IMPL_22725(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
};
// }

}}} // ::g::Android::Fallbacks

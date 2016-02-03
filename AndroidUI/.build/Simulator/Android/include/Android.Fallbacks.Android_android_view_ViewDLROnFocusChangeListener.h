// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnFocusChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnFocusChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnFocusChangeListener :20185
// {
struct Android_android_view_ViewDLROnFocusChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnFocusChangeListener interface2;
};

Android_android_view_ViewDLROnFocusChangeListener_type* Android_android_view_ViewDLROnFocusChangeListener_typeof();
void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_fn(Android_android_view_ViewDLROnFocusChangeListener* __this, ::g::Android::android::view::View* arg0, bool* arg1);
void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_);

struct Android_android_view_ViewDLROnFocusChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onFocusChange_22722_ID_;
    static jmethodID& onFocusChange_22722_ID() { return onFocusChange_22722_ID_; }

    void onFocusChange(::g::Android::android::view::View* arg0, bool arg1);
    static void onFocusChange_IMPL_22722(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
};
// }

}}} // ::g::Android::Fallbacks

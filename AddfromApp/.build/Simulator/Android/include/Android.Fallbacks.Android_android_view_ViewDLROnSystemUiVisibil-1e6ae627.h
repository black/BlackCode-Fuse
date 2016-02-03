// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnSystemUiVisibilityChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnSystemUiVisibilityChangeListener :20335
// {
struct Android_android_view_ViewDLROnSystemUiVisibilityChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnSystemUiVisibilityChangeListener interface2;
};

Android_android_view_ViewDLROnSystemUiVisibilityChangeListener_type* Android_android_view_ViewDLROnSystemUiVisibilityChangeListener_typeof();
void Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_fn(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener* __this, int* arg0);
void Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_IMPL_22728_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct Android_android_view_ViewDLROnSystemUiVisibilityChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onSystemUiVisibilityChange_22728_ID_;
    static jmethodID& onSystemUiVisibilityChange_22728_ID() { return onSystemUiVisibilityChange_22728_ID_; }

    void onSystemUiVisibilityChange(int arg0);
    static void onSystemUiVisibilityChange_IMPL_22728(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}} // ::g::Android::Fallbacks

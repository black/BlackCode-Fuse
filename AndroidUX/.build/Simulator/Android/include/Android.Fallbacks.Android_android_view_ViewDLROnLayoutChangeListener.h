// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnLayoutChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnLayoutChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnLayoutChangeListener :20285
// {
struct Android_android_view_ViewDLROnLayoutChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnLayoutChangeListener interface2;
};

Android_android_view_ViewDLROnLayoutChangeListener_type* Android_android_view_ViewDLROnLayoutChangeListener_typeof();
void Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_fn(Android_android_view_ViewDLROnLayoutChangeListener* __this, ::g::Android::android::view::View* arg0, int* arg1, int* arg2, int* arg3, int* arg4, int* arg5, int* arg6, int* arg7, int* arg8);
void Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_IMPL_22726_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_, int* arg7_, int* arg8_, int* arg9_, int* arg10_);

struct Android_android_view_ViewDLROnLayoutChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onLayoutChange_22726_ID_;
    static jmethodID& onLayoutChange_22726_ID() { return onLayoutChange_22726_ID_; }

    void onLayoutChange(::g::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
    static void onLayoutChange_IMPL_22726(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_, int arg7_, int arg8_, int arg9_, int arg10_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnClickListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnClickListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnClickListener :20110
// {
struct Android_android_view_ViewDLROnClickListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnClickListener interface2;
};

Android_android_view_ViewDLROnClickListener_type* Android_android_view_ViewDLROnClickListener_typeof();
void Android_android_view_ViewDLROnClickListener__onClick_fn(Android_android_view_ViewDLROnClickListener* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewDLROnClickListener__onClick_IMPL_22719_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_ViewDLROnClickListener : ::g::Android::java::lang::Object
{
    static jmethodID onClick_22719_ID_;
    static jmethodID& onClick_22719_ID() { return onClick_22719_ID_; }

    void onClick(::g::Android::android::view::View* arg0);
    static void onClick_IMPL_22719(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

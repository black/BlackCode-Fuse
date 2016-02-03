// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnLongClickListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnLongClickListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnLongClickListener :20310
// {
struct Android_android_view_ViewDLROnLongClickListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnLongClickListener interface2;
};

Android_android_view_ViewDLROnLongClickListener_type* Android_android_view_ViewDLROnLongClickListener_typeof();
void Android_android_view_ViewDLROnLongClickListener__onLongClick_fn(Android_android_view_ViewDLROnLongClickListener* __this, ::g::Android::android::view::View* arg0, bool* __retval);
void Android_android_view_ViewDLROnLongClickListener__onLongClick_IMPL_22727_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);

struct Android_android_view_ViewDLROnLongClickListener : ::g::Android::java::lang::Object
{
    static jmethodID onLongClick_22727_ID_;
    static jmethodID& onLongClick_22727_ID() { return onLongClick_22727_ID_; }

    bool onLongClick(::g::Android::android::view::View* arg0);
    static bool onLongClick_IMPL_22727(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

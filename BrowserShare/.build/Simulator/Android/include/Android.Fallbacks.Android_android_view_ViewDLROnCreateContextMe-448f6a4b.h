// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnCreateContextMenuListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnCreateContextMenuListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnCreateContextMenuListener :20135
// {
struct Android_android_view_ViewDLROnCreateContextMenuListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnCreateContextMenuListener interface2;
};

Android_android_view_ViewDLROnCreateContextMenuListener_type* Android_android_view_ViewDLROnCreateContextMenuListener_typeof();
void Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_fn(Android_android_view_ViewDLROnCreateContextMenuListener* __this, uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2);
void Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_IMPL_22720_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);

struct Android_android_view_ViewDLROnCreateContextMenuListener : ::g::Android::java::lang::Object
{
    static jmethodID onCreateContextMenu_22720_ID_;
    static jmethodID& onCreateContextMenu_22720_ID() { return onCreateContextMenu_22720_ID_; }

    void onCreateContextMenu(uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2);
    static void onCreateContextMenu_IMPL_22720(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_MenuItemDLROnMenuItemClickListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_MenuItemDLROnMenuItemClickListener :19125
// {
struct Android_android_view_MenuItemDLROnMenuItemClickListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::MenuItemDLROnMenuItemClickListener interface2;
};

Android_android_view_MenuItemDLROnMenuItemClickListener_type* Android_android_view_MenuItemDLROnMenuItemClickListener_typeof();
void Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_fn(Android_android_view_MenuItemDLROnMenuItemClickListener* __this, uObject* arg0, bool* __retval);
void Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);

struct Android_android_view_MenuItemDLROnMenuItemClickListener : ::g::Android::java::lang::Object
{
    static jmethodID onMenuItemClick_22293_ID_;
    static jmethodID& onMenuItemClick_22293_ID() { return onMenuItemClick_22293_ID_; }

    bool onMenuItemClick(uObject* arg0);
    static bool onMenuItemClick_IMPL_22293(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_MenuItemDLROnActionExpandListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_MenuItemDLROnActionExpandListener :19092
// {
struct Android_android_view_MenuItemDLROnActionExpandListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::MenuItemDLROnActionExpandListener interface2;
};

Android_android_view_MenuItemDLROnActionExpandListener_type* Android_android_view_MenuItemDLROnActionExpandListener_typeof();
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_fn(Android_android_view_MenuItemDLROnActionExpandListener* __this, uObject* arg0, bool* __retval);
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_fn(Android_android_view_MenuItemDLROnActionExpandListener* __this, uObject* arg0, bool* __retval);
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);

struct Android_android_view_MenuItemDLROnActionExpandListener : ::g::Android::java::lang::Object
{
    static jmethodID onMenuItemActionCollapse_22292_ID_;
    static jmethodID& onMenuItemActionCollapse_22292_ID() { return onMenuItemActionCollapse_22292_ID_; }
    static jmethodID onMenuItemActionExpand_22291_ID_;
    static jmethodID& onMenuItemActionExpand_22291_ID() { return onMenuItemActionExpand_22291_ID_; }

    bool onMenuItemActionCollapse(uObject* arg0);
    bool onMenuItemActionExpand(uObject* arg0);
    static bool onMenuItemActionCollapse_IMPL_22292(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onMenuItemActionExpand_IMPL_22291(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

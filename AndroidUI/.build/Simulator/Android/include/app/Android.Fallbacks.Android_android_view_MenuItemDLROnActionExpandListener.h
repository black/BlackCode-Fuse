// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_ACTION_EXPAND_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_ACTION_EXPAND_LISTENER_H__

#include <app/Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_MenuItemDLROnActionExpandListener;

extern jmethodID Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID;
extern jmethodID Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID;

struct Android_android_view_MenuItemDLROnActionExpandListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::MenuItemDLROnActionExpandListener __interface_2;
};

Android_android_view_MenuItemDLROnActionExpandListener__uType* Android_android_view_MenuItemDLROnActionExpandListener__typeof();

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse(Android_android_view_MenuItemDLROnActionExpandListener* __this, ::uObject* arg0);
bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand(Android_android_view_MenuItemDLROnActionExpandListener* __this, ::uObject* arg0);
bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_MenuItemDLROnActionExpandListener : ::app::Android::java::lang::Object
{
    bool onMenuItemActionCollapse(::uObject* arg0) { return Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse(this, arg0); }
    bool onMenuItemActionExpand(::uObject* arg0) { return Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand(this, arg0); }
};

}}}


#endif

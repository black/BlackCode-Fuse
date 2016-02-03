// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_MENU_ITEM_CLI_B952820B_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_MENU_ITEM_CLI_B952820B_H__

#include <app/Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_MenuItemDLROnMenuItemClickListener;

extern jmethodID Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID;

struct Android_android_view_MenuItemDLROnMenuItemClickListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::MenuItemDLROnMenuItemClickListener __interface_2;
};

Android_android_view_MenuItemDLROnMenuItemClickListener__uType* Android_android_view_MenuItemDLROnMenuItemClickListener__typeof();

bool Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick(Android_android_view_MenuItemDLROnMenuItemClickListener* __this, ::uObject* arg0);
bool Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_MenuItemDLROnMenuItemClickListener : ::app::Android::java::lang::Object
{
    bool onMenuItemClick(::uObject* arg0) { return Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick(this, arg0); }
};

}}}


#endif

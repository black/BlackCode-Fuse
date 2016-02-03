// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_MENU_ITEM_CLICK_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_MENU_ITEM_CLICK_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* MenuItemDLROnMenuItemClickListener__typeof();

struct MenuItemDLROnMenuItemClickListener
{
    bool(*__fp_onMenuItemClick)(void*, ::uObject*);

    static bool onMenuItemClick(::uObject* __this, ::uObject* arg0) { return ((MenuItemDLROnMenuItemClickListener*)uGetInterfacePtr(__this, MenuItemDLROnMenuItemClickListener__typeof()))->__fp_onMenuItemClick((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif

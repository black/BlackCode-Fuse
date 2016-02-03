// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_ACTION_EXPAND_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_MENU_ITEM_D_L_R_ON_ACTION_EXPAND_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* MenuItemDLROnActionExpandListener__typeof();

struct MenuItemDLROnActionExpandListener
{
    bool(*__fp_onMenuItemActionCollapse)(void*, ::uObject*);
    bool(*__fp_onMenuItemActionExpand)(void*, ::uObject*);

    static bool onMenuItemActionCollapse(::uObject* __this, ::uObject* arg0) { return ((MenuItemDLROnActionExpandListener*)uGetInterfacePtr(__this, MenuItemDLROnActionExpandListener__typeof()))->__fp_onMenuItemActionCollapse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool onMenuItemActionExpand(::uObject* __this, ::uObject* arg0) { return ((MenuItemDLROnActionExpandListener*)uGetInterfacePtr(__this, MenuItemDLROnActionExpandListener__typeof()))->__fp_onMenuItemActionExpand((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif

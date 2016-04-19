// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface MenuItemDLROnActionExpandListener :26837
// {
uInterfaceType* MenuItemDLROnActionExpandListener_typeof();

struct MenuItemDLROnActionExpandListener
{
    void(*fp_onMenuItemActionCollapse)(uObject*, uObject*, bool*);
    void(*fp_onMenuItemActionExpand)(uObject*, uObject*, bool*);
    static bool onMenuItemActionCollapse(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<MenuItemDLROnActionExpandListener>()->fp_onMenuItemActionCollapse(__this, arg0, &__retval), __retval; }
    static bool onMenuItemActionExpand(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<MenuItemDLROnActionExpandListener>()->fp_onMenuItemActionExpand(__this, arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view

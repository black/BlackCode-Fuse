// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ActionProvider;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface MenuItem :26871
// {
uInterfaceType* MenuItem_typeof();

struct MenuItem
{
    void(*fp_collapseActionView)(uObject*, bool*);
    void(*fp_expandActionView)(uObject*, bool*);
    void(*fp_getActionProvider)(uObject*, ::g::Android::android::view::ActionProvider**);
    void(*fp_getActionView)(uObject*, ::g::Android::android::view::View**);
    void(*fp_getAlphabeticShortcut)(uObject*, uChar*);
    void(*fp_getGroupId)(uObject*, int*);
    void(*fp_getIcon)(uObject*, ::g::Android::android::graphics::drawable::Drawable**);
    void(*fp_getIntent)(uObject*, ::g::Android::android::content::Intent**);
    void(*fp_getItemId)(uObject*, int*);
    void(*fp_getMenuInfo)(uObject*, uObject**);
    void(*fp_getNumericShortcut)(uObject*, uChar*);
    void(*fp_getOrder)(uObject*, int*);
    void(*fp_getSubMenu)(uObject*, uObject**);
    void(*fp_getTitle)(uObject*, uObject**);
    void(*fp_getTitleCondensed)(uObject*, uObject**);
    void(*fp_hasSubMenu)(uObject*, bool*);
    void(*fp_isActionViewExpanded)(uObject*, bool*);
    void(*fp_isCheckable)(uObject*, bool*);
    void(*fp_isChecked)(uObject*, bool*);
    void(*fp_isEnabled)(uObject*, bool*);
    void(*fp_isVisible)(uObject*, bool*);
    void(*fp_setActionProvider)(uObject*, ::g::Android::android::view::ActionProvider*, uObject**);
    void(*fp_setActionView)(uObject*, ::g::Android::android::view::View*, uObject**);
    void(*fp_setActionView1)(uObject*, int*, uObject**);
    void(*fp_setAlphabeticShortcut)(uObject*, uChar*, uObject**);
    void(*fp_setCheckable)(uObject*, bool*, uObject**);
    void(*fp_setChecked)(uObject*, bool*, uObject**);
    void(*fp_setEnabled)(uObject*, bool*, uObject**);
    void(*fp_setIcon)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**);
    void(*fp_setIcon1)(uObject*, int*, uObject**);
    void(*fp_setIntent)(uObject*, ::g::Android::android::content::Intent*, uObject**);
    void(*fp_setNumericShortcut)(uObject*, uChar*, uObject**);
    void(*fp_setOnActionExpandListener)(uObject*, uObject*, uObject**);
    void(*fp_setOnMenuItemClickListener)(uObject*, uObject*, uObject**);
    void(*fp_setShortcut)(uObject*, uChar*, uChar*, uObject**);
    void(*fp_setShowAsAction)(uObject*, int*);
    void(*fp_setShowAsActionFlags)(uObject*, int*, uObject**);
    void(*fp_setTitle)(uObject*, uObject*, uObject**);
    void(*fp_setTitle1)(uObject*, int*, uObject**);
    void(*fp_setTitleCondensed)(uObject*, uObject*, uObject**);
    void(*fp_setVisible)(uObject*, bool*, uObject**);
    static bool collapseActionView(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_collapseActionView(__this, &__retval), __retval; }
    static bool expandActionView(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_expandActionView(__this, &__retval), __retval; }
    static ::g::Android::android::view::ActionProvider* getActionProvider(const uInterface& __this) { ::g::Android::android::view::ActionProvider* __retval; return __this.VTable<MenuItem>()->fp_getActionProvider(__this, &__retval), __retval; }
    static ::g::Android::android::view::View* getActionView(const uInterface& __this) { ::g::Android::android::view::View* __retval; return __this.VTable<MenuItem>()->fp_getActionView(__this, &__retval), __retval; }
    static uChar getAlphabeticShortcut(const uInterface& __this) { uChar __retval; return __this.VTable<MenuItem>()->fp_getAlphabeticShortcut(__this, &__retval), __retval; }
    static int getGroupId(const uInterface& __this) { int __retval; return __this.VTable<MenuItem>()->fp_getGroupId(__this, &__retval), __retval; }
    static ::g::Android::android::graphics::drawable::Drawable* getIcon(const uInterface& __this) { ::g::Android::android::graphics::drawable::Drawable* __retval; return __this.VTable<MenuItem>()->fp_getIcon(__this, &__retval), __retval; }
    static ::g::Android::android::content::Intent* getIntent(const uInterface& __this) { ::g::Android::android::content::Intent* __retval; return __this.VTable<MenuItem>()->fp_getIntent(__this, &__retval), __retval; }
    static int getItemId(const uInterface& __this) { int __retval; return __this.VTable<MenuItem>()->fp_getItemId(__this, &__retval), __retval; }
    static uObject* getMenuInfo(const uInterface& __this) { uObject* __retval; return __this.VTable<MenuItem>()->fp_getMenuInfo(__this, &__retval), __retval; }
    static uChar getNumericShortcut(const uInterface& __this) { uChar __retval; return __this.VTable<MenuItem>()->fp_getNumericShortcut(__this, &__retval), __retval; }
    static int getOrder(const uInterface& __this) { int __retval; return __this.VTable<MenuItem>()->fp_getOrder(__this, &__retval), __retval; }
    static uObject* getSubMenu(const uInterface& __this) { uObject* __retval; return __this.VTable<MenuItem>()->fp_getSubMenu(__this, &__retval), __retval; }
    static uObject* getTitle(const uInterface& __this) { uObject* __retval; return __this.VTable<MenuItem>()->fp_getTitle(__this, &__retval), __retval; }
    static uObject* getTitleCondensed(const uInterface& __this) { uObject* __retval; return __this.VTable<MenuItem>()->fp_getTitleCondensed(__this, &__retval), __retval; }
    static bool hasSubMenu(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_hasSubMenu(__this, &__retval), __retval; }
    static bool isActionViewExpanded(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_isActionViewExpanded(__this, &__retval), __retval; }
    static bool isCheckable(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_isCheckable(__this, &__retval), __retval; }
    static bool isChecked(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_isChecked(__this, &__retval), __retval; }
    static bool isEnabled(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_isEnabled(__this, &__retval), __retval; }
    static bool isVisible(const uInterface& __this) { bool __retval; return __this.VTable<MenuItem>()->fp_isVisible(__this, &__retval), __retval; }
    static uObject* setActionProvider(const uInterface& __this, ::g::Android::android::view::ActionProvider* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setActionProvider(__this, arg0, &__retval), __retval; }
    static uObject* setActionView(const uInterface& __this, ::g::Android::android::view::View* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setActionView(__this, arg0, &__retval), __retval; }
    static uObject* setActionView1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setActionView1(__this, &arg0, &__retval), __retval; }
    static uObject* setAlphabeticShortcut(const uInterface& __this, uChar arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setAlphabeticShortcut(__this, &arg0, &__retval), __retval; }
    static uObject* setCheckable(const uInterface& __this, bool arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setCheckable(__this, &arg0, &__retval), __retval; }
    static uObject* setChecked(const uInterface& __this, bool arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setChecked(__this, &arg0, &__retval), __retval; }
    static uObject* setEnabled(const uInterface& __this, bool arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setEnabled(__this, &arg0, &__retval), __retval; }
    static uObject* setIcon(const uInterface& __this, ::g::Android::android::graphics::drawable::Drawable* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setIcon(__this, arg0, &__retval), __retval; }
    static uObject* setIcon1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setIcon1(__this, &arg0, &__retval), __retval; }
    static uObject* setIntent(const uInterface& __this, ::g::Android::android::content::Intent* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setIntent(__this, arg0, &__retval), __retval; }
    static uObject* setNumericShortcut(const uInterface& __this, uChar arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setNumericShortcut(__this, &arg0, &__retval), __retval; }
    static uObject* setOnActionExpandListener(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setOnActionExpandListener(__this, arg0, &__retval), __retval; }
    static uObject* setOnMenuItemClickListener(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setOnMenuItemClickListener(__this, arg0, &__retval), __retval; }
    static uObject* setShortcut(const uInterface& __this, uChar arg0, uChar arg1) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setShortcut(__this, &arg0, &arg1, &__retval), __retval; }
    static void setShowAsAction(const uInterface& __this, int arg0) { __this.VTable<MenuItem>()->fp_setShowAsAction(__this, &arg0); }
    static uObject* setShowAsActionFlags(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setShowAsActionFlags(__this, &arg0, &__retval), __retval; }
    static uObject* setTitle(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setTitle(__this, arg0, &__retval), __retval; }
    static uObject* setTitle1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setTitle1(__this, &arg0, &__retval), __retval; }
    static uObject* setTitleCondensed(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setTitleCondensed(__this, arg0, &__retval), __retval; }
    static uObject* setVisible(const uInterface& __this, bool arg0) { uObject* __retval; return __this.VTable<MenuItem>()->fp_setVisible(__this, &arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view

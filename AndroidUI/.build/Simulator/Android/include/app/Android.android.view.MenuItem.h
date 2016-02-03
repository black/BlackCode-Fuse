// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_MENU_ITEM_H__
#define __APP_ANDROID_ANDROID_VIEW_MENU_ITEM_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Intent; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionProvider; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* MenuItem__typeof();

struct MenuItem
{
    bool(*__fp_collapseActionView)(void*);
    bool(*__fp_expandActionView)(void*);
    ::app::Android::android::view::ActionProvider*(*__fp_getActionProvider)(void*);
    ::app::Android::android::view::View*(*__fp_getActionView)(void*);
    ::uChar(*__fp_getAlphabeticShortcut)(void*);
    int(*__fp_getGroupId)(void*);
    ::app::Android::android::graphics::drawable::Drawable*(*__fp_getIcon)(void*);
    ::app::Android::android::content::Intent*(*__fp_getIntent)(void*);
    int(*__fp_getItemId)(void*);
    ::uObject*(*__fp_getMenuInfo)(void*);
    ::uChar(*__fp_getNumericShortcut)(void*);
    int(*__fp_getOrder)(void*);
    ::uObject*(*__fp_getSubMenu)(void*);
    ::uObject*(*__fp_getTitle)(void*);
    ::uObject*(*__fp_getTitleCondensed)(void*);
    bool(*__fp_hasSubMenu)(void*);
    bool(*__fp_isActionViewExpanded)(void*);
    bool(*__fp_isCheckable)(void*);
    bool(*__fp_isChecked)(void*);
    bool(*__fp_isEnabled)(void*);
    bool(*__fp_isVisible)(void*);
    ::uObject*(*__fp_setActionProvider)(void*, ::app::Android::android::view::ActionProvider*);
    ::uObject*(*__fp_setActionView)(void*, int);
    ::uObject*(*__fp_setActionView_1)(void*, ::app::Android::android::view::View*);
    ::uObject*(*__fp_setAlphabeticShortcut)(void*, ::uChar);
    ::uObject*(*__fp_setCheckable)(void*, bool);
    ::uObject*(*__fp_setChecked)(void*, bool);
    ::uObject*(*__fp_setEnabled)(void*, bool);
    ::uObject*(*__fp_setIcon)(void*, ::app::Android::android::graphics::drawable::Drawable*);
    ::uObject*(*__fp_setIcon_1)(void*, int);
    ::uObject*(*__fp_setIntent)(void*, ::app::Android::android::content::Intent*);
    ::uObject*(*__fp_setNumericShortcut)(void*, ::uChar);
    ::uObject*(*__fp_setOnActionExpandListener)(void*, ::uObject*);
    ::uObject*(*__fp_setOnMenuItemClickListener)(void*, ::uObject*);
    ::uObject*(*__fp_setShortcut)(void*, ::uChar, ::uChar);
    void(*__fp_setShowAsAction)(void*, int);
    ::uObject*(*__fp_setShowAsActionFlags)(void*, int);
    ::uObject*(*__fp_setTitle)(void*, ::uObject*);
    ::uObject*(*__fp_setTitle_1)(void*, int);
    ::uObject*(*__fp_setTitleCondensed)(void*, ::uObject*);
    ::uObject*(*__fp_setVisible)(void*, bool);

    static bool collapseActionView(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_collapseActionView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool expandActionView(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_expandActionView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::view::ActionProvider* getActionProvider(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getActionProvider((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::view::View* getActionView(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getActionView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uChar getAlphabeticShortcut(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getAlphabeticShortcut((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getGroupId(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getGroupId((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::graphics::drawable::Drawable* getIcon(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getIcon((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::content::Intent* getIntent(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getIntent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getItemId(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getItemId((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* getMenuInfo(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getMenuInfo((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uChar getNumericShortcut(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getNumericShortcut((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getOrder(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getOrder((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* getSubMenu(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getSubMenu((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* getTitle(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getTitle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* getTitleCondensed(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_getTitleCondensed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool hasSubMenu(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_hasSubMenu((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isActionViewExpanded(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_isActionViewExpanded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isCheckable(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_isCheckable((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isChecked(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_isChecked((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isEnabled(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_isEnabled((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isVisible(::uObject* __this) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_isVisible((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* setActionProvider(::uObject* __this, ::app::Android::android::view::ActionProvider* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setActionProvider((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setActionView(::uObject* __this, int arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setActionView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setActionView_1(::uObject* __this, ::app::Android::android::view::View* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setActionView_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setAlphabeticShortcut(::uObject* __this, ::uChar arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setAlphabeticShortcut((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setCheckable(::uObject* __this, bool arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setCheckable((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setChecked(::uObject* __this, bool arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setChecked((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setEnabled(::uObject* __this, bool arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setEnabled((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setIcon(::uObject* __this, ::app::Android::android::graphics::drawable::Drawable* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setIcon((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setIcon_1(::uObject* __this, int arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setIcon_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setIntent(::uObject* __this, ::app::Android::android::content::Intent* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setIntent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setNumericShortcut(::uObject* __this, ::uChar arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setNumericShortcut((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setOnActionExpandListener(::uObject* __this, ::uObject* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setOnActionExpandListener((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setOnMenuItemClickListener(::uObject* __this, ::uObject* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setOnMenuItemClickListener((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setShortcut(::uObject* __this, ::uChar arg0, ::uChar arg1) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setShortcut((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void setShowAsAction(::uObject* __this, int arg0) { ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setShowAsAction((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setShowAsActionFlags(::uObject* __this, int arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setShowAsActionFlags((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setTitle(::uObject* __this, ::uObject* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setTitle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setTitle_1(::uObject* __this, int arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setTitle_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setTitleCondensed(::uObject* __this, ::uObject* arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setTitleCondensed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setVisible(::uObject* __this, bool arg0) { return ((MenuItem*)uGetInterfacePtr(__this, MenuItem__typeof()))->__fp_setVisible((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif

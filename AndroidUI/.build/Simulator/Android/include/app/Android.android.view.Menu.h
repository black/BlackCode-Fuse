// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_MENU_H__
#define __APP_ANDROID_ANDROID_VIEW_MENU_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct ComponentName; } } } }
namespace app { namespace Android { namespace android { namespace content { struct Intent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_content_Intent; } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_view_MenuItem; } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* Menu__typeof();

struct Menu
{
    ::uObject*(*__fp_add)(void*, ::uObject*);
    ::uObject*(*__fp_add_1)(void*, int);
    ::uObject*(*__fp_add_2)(void*, int, int, int, ::uObject*);
    ::uObject*(*__fp_add_3)(void*, int, int, int, int);
    int(*__fp_addIntentOptions)(void*, int, int, int, ::app::Android::android::content::ComponentName*, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent*, ::app::Android::android::content::Intent*, int, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem*);
    ::uObject*(*__fp_addSubMenu)(void*, ::uObject*);
    ::uObject*(*__fp_addSubMenu_1)(void*, int);
    ::uObject*(*__fp_addSubMenu_2)(void*, int, int, int, ::uObject*);
    ::uObject*(*__fp_addSubMenu_3)(void*, int, int, int, int);
    void(*__fp_clear)(void*);
    void(*__fp_close)(void*);
    ::uObject*(*__fp_findItem)(void*, int);
    ::uObject*(*__fp_getItem)(void*, int);
    bool(*__fp_hasVisibleItems)(void*);
    bool(*__fp_isShortcutKey)(void*, int, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_performIdentifierAction)(void*, int, int);
    bool(*__fp_performShortcut)(void*, int, ::app::Android::android::view::KeyEvent*, int);
    void(*__fp_removeGroup)(void*, int);
    void(*__fp_removeItem)(void*, int);
    void(*__fp_setGroupCheckable)(void*, int, bool, bool);
    void(*__fp_setGroupEnabled)(void*, int, bool);
    void(*__fp_setGroupVisible)(void*, int, bool);
    void(*__fp_setQwertyMode)(void*, bool);
    int(*__fp_size)(void*);

    static ::uObject* add(::uObject* __this, ::uObject* arg0) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* add_1(::uObject* __this, int arg0) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_add_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* add_2(::uObject* __this, int arg0, int arg1, int arg2, ::uObject* arg3) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_add_2((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static ::uObject* add_3(::uObject* __this, int arg0, int arg1, int arg2, int arg3) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_add_3((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static int addIntentOptions(::uObject* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_addIntentOptions((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); }
    static ::uObject* addSubMenu(::uObject* __this, ::uObject* arg0) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_addSubMenu((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* addSubMenu_1(::uObject* __this, int arg0) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_addSubMenu_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* addSubMenu_2(::uObject* __this, int arg0, int arg1, int arg2, ::uObject* arg3) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_addSubMenu_2((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static ::uObject* addSubMenu_3(::uObject* __this, int arg0, int arg1, int arg2, int arg3) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_addSubMenu_3((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static void clear(::uObject* __this) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void close(::uObject* __this) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_close((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* findItem(::uObject* __this, int arg0) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_findItem((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* getItem(::uObject* __this, int arg0) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_getItem((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool hasVisibleItems(::uObject* __this) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_hasVisibleItems((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isShortcutKey(::uObject* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_isShortcutKey((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool performIdentifierAction(::uObject* __this, int arg0, int arg1) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_performIdentifierAction((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool performShortcut(::uObject* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_performShortcut((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void removeGroup(::uObject* __this, int arg0) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_removeGroup((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void removeItem(::uObject* __this, int arg0) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_removeItem((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void setGroupCheckable(::uObject* __this, int arg0, bool arg1, bool arg2) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_setGroupCheckable((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void setGroupEnabled(::uObject* __this, int arg0, bool arg1) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_setGroupEnabled((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void setGroupVisible(::uObject* __this, int arg0, bool arg1) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_setGroupVisible((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void setQwertyMode(::uObject* __this, bool arg0) { ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_setQwertyMode((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static int size(::uObject* __this) { return ((Menu*)uGetInterfacePtr(__this, Menu__typeof()))->__fp_size((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif

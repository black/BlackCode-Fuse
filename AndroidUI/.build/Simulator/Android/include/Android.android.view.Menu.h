// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace content{struct ComponentName;}}}}
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface Menu :26638
// {
uInterfaceType* Menu_typeof();

struct Menu
{
    void(*fp_add)(uObject*, uObject*, uObject**);
    void(*fp_add1)(uObject*, int*, uObject**);
    void(*fp_add2)(uObject*, int*, int*, int*, uObject*, uObject**);
    void(*fp_add3)(uObject*, int*, int*, int*, int*, uObject**);
    void(*fp_addIntentOptions)(uObject*, int*, int*, int*, ::g::Android::android::content::ComponentName*, ::g::Android::Runtime::ObjectArray*, ::g::Android::android::content::Intent*, int*, ::g::Android::Runtime::ObjectArray*, int*);
    void(*fp_addSubMenu)(uObject*, uObject*, uObject**);
    void(*fp_addSubMenu1)(uObject*, int*, uObject**);
    void(*fp_addSubMenu2)(uObject*, int*, int*, int*, uObject*, uObject**);
    void(*fp_addSubMenu3)(uObject*, int*, int*, int*, int*, uObject**);
    void(*fp_clear)(uObject*);
    void(*fp_close)(uObject*);
    void(*fp_findItem)(uObject*, int*, uObject**);
    void(*fp_getItem)(uObject*, int*, uObject**);
    void(*fp_hasVisibleItems)(uObject*, bool*);
    void(*fp_isShortcutKey)(uObject*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_performIdentifierAction)(uObject*, int*, int*, bool*);
    void(*fp_performShortcut)(uObject*, int*, ::g::Android::android::view::KeyEvent*, int*, bool*);
    void(*fp_removeGroup)(uObject*, int*);
    void(*fp_removeItem)(uObject*, int*);
    void(*fp_setGroupCheckable)(uObject*, int*, bool*, bool*);
    void(*fp_setGroupEnabled)(uObject*, int*, bool*);
    void(*fp_setGroupVisible)(uObject*, int*, bool*);
    void(*fp_setQwertyMode)(uObject*, bool*);
    void(*fp_size)(uObject*, int*);
    static uObject* add(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<Menu>()->fp_add(__this, arg0, &__retval), __retval; }
    static uObject* add1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<Menu>()->fp_add1(__this, &arg0, &__retval), __retval; }
    static uObject* add2(const uInterface& __this, int arg0, int arg1, int arg2, uObject* arg3) { uObject* __retval; return __this.VTable<Menu>()->fp_add2(__this, &arg0, &arg1, &arg2, arg3, &__retval), __retval; }
    static uObject* add3(const uInterface& __this, int arg0, int arg1, int arg2, int arg3) { uObject* __retval; return __this.VTable<Menu>()->fp_add3(__this, &arg0, &arg1, &arg2, &arg3, &__retval), __retval; }
    static int addIntentOptions(const uInterface& __this, int arg0, int arg1, int arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int arg6, ::g::Android::Runtime::ObjectArray* arg7) { int __retval; return __this.VTable<Menu>()->fp_addIntentOptions(__this, &arg0, &arg1, &arg2, arg3, arg4, arg5, &arg6, arg7, &__retval), __retval; }
    static uObject* addSubMenu(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<Menu>()->fp_addSubMenu(__this, arg0, &__retval), __retval; }
    static uObject* addSubMenu1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<Menu>()->fp_addSubMenu1(__this, &arg0, &__retval), __retval; }
    static uObject* addSubMenu2(const uInterface& __this, int arg0, int arg1, int arg2, uObject* arg3) { uObject* __retval; return __this.VTable<Menu>()->fp_addSubMenu2(__this, &arg0, &arg1, &arg2, arg3, &__retval), __retval; }
    static uObject* addSubMenu3(const uInterface& __this, int arg0, int arg1, int arg2, int arg3) { uObject* __retval; return __this.VTable<Menu>()->fp_addSubMenu3(__this, &arg0, &arg1, &arg2, &arg3, &__retval), __retval; }
    static void clear(const uInterface& __this) { __this.VTable<Menu>()->fp_clear(__this); }
    static void close(const uInterface& __this) { __this.VTable<Menu>()->fp_close(__this); }
    static uObject* findItem(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<Menu>()->fp_findItem(__this, &arg0, &__retval), __retval; }
    static uObject* getItem(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<Menu>()->fp_getItem(__this, &arg0, &__retval), __retval; }
    static bool hasVisibleItems(const uInterface& __this) { bool __retval; return __this.VTable<Menu>()->fp_hasVisibleItems(__this, &__retval), __retval; }
    static bool isShortcutKey(const uInterface& __this, int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return __this.VTable<Menu>()->fp_isShortcutKey(__this, &arg0, arg1, &__retval), __retval; }
    static bool performIdentifierAction(const uInterface& __this, int arg0, int arg1) { bool __retval; return __this.VTable<Menu>()->fp_performIdentifierAction(__this, &arg0, &arg1, &__retval), __retval; }
    static bool performShortcut(const uInterface& __this, int arg0, ::g::Android::android::view::KeyEvent* arg1, int arg2) { bool __retval; return __this.VTable<Menu>()->fp_performShortcut(__this, &arg0, arg1, &arg2, &__retval), __retval; }
    static void removeGroup(const uInterface& __this, int arg0) { __this.VTable<Menu>()->fp_removeGroup(__this, &arg0); }
    static void removeItem(const uInterface& __this, int arg0) { __this.VTable<Menu>()->fp_removeItem(__this, &arg0); }
    static void setGroupCheckable(const uInterface& __this, int arg0, bool arg1, bool arg2) { __this.VTable<Menu>()->fp_setGroupCheckable(__this, &arg0, &arg1, &arg2); }
    static void setGroupEnabled(const uInterface& __this, int arg0, bool arg1) { __this.VTable<Menu>()->fp_setGroupEnabled(__this, &arg0, &arg1); }
    static void setGroupVisible(const uInterface& __this, int arg0, bool arg1) { __this.VTable<Menu>()->fp_setGroupVisible(__this, &arg0, &arg1); }
    static void setQwertyMode(const uInterface& __this, bool arg0) { __this.VTable<Menu>()->fp_setQwertyMode(__this, &arg0); }
    static int size(const uInterface& __this) { int __retval; return __this.VTable<Menu>()->fp_size(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view

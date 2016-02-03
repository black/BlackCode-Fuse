// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_H__

#include <app/Android.android.view.Menu.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct ComponentName; } } } }
namespace app { namespace Android { namespace android { namespace content { struct Intent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_content_Intent; } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_view_MenuItem; } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_Menu;

extern jmethodID Android_android_view_Menu__add_22256_ID;
extern jmethodID Android_android_view_Menu__add_22257_ID;
extern jmethodID Android_android_view_Menu__add_22258_ID;
extern jmethodID Android_android_view_Menu__add_22259_ID;
extern jmethodID Android_android_view_Menu__addIntentOptions_22264_ID;
extern jmethodID Android_android_view_Menu__addSubMenu_22260_ID;
extern jmethodID Android_android_view_Menu__addSubMenu_22261_ID;
extern jmethodID Android_android_view_Menu__addSubMenu_22262_ID;
extern jmethodID Android_android_view_Menu__addSubMenu_22263_ID;
extern jmethodID Android_android_view_Menu__clear_22267_ID;
extern jmethodID Android_android_view_Menu__close_22275_ID;
extern jmethodID Android_android_view_Menu__findItem_22272_ID;
extern jmethodID Android_android_view_Menu__getItem_22274_ID;
extern jmethodID Android_android_view_Menu__hasVisibleItems_22271_ID;
extern jmethodID Android_android_view_Menu__isShortcutKey_22277_ID;
extern jmethodID Android_android_view_Menu__performIdentifierAction_22278_ID;
extern jmethodID Android_android_view_Menu__performShortcut_22276_ID;
extern jmethodID Android_android_view_Menu__removeGroup_22266_ID;
extern jmethodID Android_android_view_Menu__removeItem_22265_ID;
extern jmethodID Android_android_view_Menu__setGroupCheckable_22268_ID;
extern jmethodID Android_android_view_Menu__setGroupEnabled_22270_ID;
extern jmethodID Android_android_view_Menu__setGroupVisible_22269_ID;
extern jmethodID Android_android_view_Menu__setQwertyMode_22279_ID;
extern jmethodID Android_android_view_Menu__size_22273_ID;

struct Android_android_view_Menu__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::Menu __interface_2;
};

Android_android_view_Menu__uType* Android_android_view_Menu__typeof();

::uObject* Android_android_view_Menu__add(Android_android_view_Menu* __this, ::uObject* arg0);
::uObject* Android_android_view_Menu__add_1(Android_android_view_Menu* __this, int arg0);
::uObject* Android_android_view_Menu__add_2(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::uObject* arg3);
::uObject* Android_android_view_Menu__add_3(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, int arg3);
::uObject* Android_android_view_Menu__add_IMPL_22256(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_Menu__add_IMPL_22257(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_Menu__add_IMPL_22258(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_);
::uObject* Android_android_view_Menu__add_IMPL_22259(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
int Android_android_view_Menu__addIntentOptions(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7);
int Android_android_view_Menu__addIntentOptions_IMPL_22264(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_, ::uObject* arg6_, ::uObject* arg7_, int arg8_, ::uObject* arg9_);
::uObject* Android_android_view_Menu__addSubMenu(Android_android_view_Menu* __this, ::uObject* arg0);
::uObject* Android_android_view_Menu__addSubMenu_1(Android_android_view_Menu* __this, int arg0);
::uObject* Android_android_view_Menu__addSubMenu_2(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::uObject* arg3);
::uObject* Android_android_view_Menu__addSubMenu_3(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, int arg3);
::uObject* Android_android_view_Menu__addSubMenu_IMPL_22260(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_Menu__addSubMenu_IMPL_22261(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_Menu__addSubMenu_IMPL_22262(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_);
::uObject* Android_android_view_Menu__addSubMenu_IMPL_22263(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void Android_android_view_Menu__clear(Android_android_view_Menu* __this);
void Android_android_view_Menu__clear_IMPL_22267(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_view_Menu__close(Android_android_view_Menu* __this);
void Android_android_view_Menu__close_IMPL_22275(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_Menu__findItem(Android_android_view_Menu* __this, int arg0);
::uObject* Android_android_view_Menu__findItem_IMPL_22272(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_Menu__getItem(Android_android_view_Menu* __this, int arg0);
::uObject* Android_android_view_Menu__getItem_IMPL_22274(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool Android_android_view_Menu__hasVisibleItems(Android_android_view_Menu* __this);
bool Android_android_view_Menu__hasVisibleItems_IMPL_22271(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_Menu__isShortcutKey(Android_android_view_Menu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool Android_android_view_Menu__isShortcutKey_IMPL_22277(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool Android_android_view_Menu__performIdentifierAction(Android_android_view_Menu* __this, int arg0, int arg1);
bool Android_android_view_Menu__performIdentifierAction_IMPL_22278(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
bool Android_android_view_Menu__performShortcut(Android_android_view_Menu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2);
bool Android_android_view_Menu__performShortcut_IMPL_22276(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_);
void Android_android_view_Menu__removeGroup(Android_android_view_Menu* __this, int arg0);
void Android_android_view_Menu__removeGroup_IMPL_22266(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Android_android_view_Menu__removeItem(Android_android_view_Menu* __this, int arg0);
void Android_android_view_Menu__removeItem_IMPL_22265(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Android_android_view_Menu__setGroupCheckable(Android_android_view_Menu* __this, int arg0, bool arg1, bool arg2);
void Android_android_view_Menu__setGroupCheckable_IMPL_22268(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_);
void Android_android_view_Menu__setGroupEnabled(Android_android_view_Menu* __this, int arg0, bool arg1);
void Android_android_view_Menu__setGroupEnabled_IMPL_22270(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_);
void Android_android_view_Menu__setGroupVisible(Android_android_view_Menu* __this, int arg0, bool arg1);
void Android_android_view_Menu__setGroupVisible_IMPL_22269(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_);
void Android_android_view_Menu__setQwertyMode(Android_android_view_Menu* __this, bool arg0);
void Android_android_view_Menu__setQwertyMode_IMPL_22279(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
int Android_android_view_Menu__size(Android_android_view_Menu* __this);
int Android_android_view_Menu__size_IMPL_22273(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_view_Menu : ::app::Android::java::lang::Object
{
    ::uObject* add(::uObject* arg0) { return Android_android_view_Menu__add(this, arg0); }
    ::uObject* add_1(int arg0) { return Android_android_view_Menu__add_1(this, arg0); }
    ::uObject* add_2(int arg0, int arg1, int arg2, ::uObject* arg3) { return Android_android_view_Menu__add_2(this, arg0, arg1, arg2, arg3); }
    ::uObject* add_3(int arg0, int arg1, int arg2, int arg3) { return Android_android_view_Menu__add_3(this, arg0, arg1, arg2, arg3); }
    int addIntentOptions(int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7) { return Android_android_view_Menu__addIntentOptions(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); }
    ::uObject* addSubMenu(::uObject* arg0) { return Android_android_view_Menu__addSubMenu(this, arg0); }
    ::uObject* addSubMenu_1(int arg0) { return Android_android_view_Menu__addSubMenu_1(this, arg0); }
    ::uObject* addSubMenu_2(int arg0, int arg1, int arg2, ::uObject* arg3) { return Android_android_view_Menu__addSubMenu_2(this, arg0, arg1, arg2, arg3); }
    ::uObject* addSubMenu_3(int arg0, int arg1, int arg2, int arg3) { return Android_android_view_Menu__addSubMenu_3(this, arg0, arg1, arg2, arg3); }
    void clear() { Android_android_view_Menu__clear(this); }
    void close() { Android_android_view_Menu__close(this); }
    ::uObject* findItem(int arg0) { return Android_android_view_Menu__findItem(this, arg0); }
    ::uObject* getItem(int arg0) { return Android_android_view_Menu__getItem(this, arg0); }
    bool hasVisibleItems() { return Android_android_view_Menu__hasVisibleItems(this); }
    bool isShortcutKey(int arg0, ::app::Android::android::view::KeyEvent* arg1) { return Android_android_view_Menu__isShortcutKey(this, arg0, arg1); }
    bool performIdentifierAction(int arg0, int arg1) { return Android_android_view_Menu__performIdentifierAction(this, arg0, arg1); }
    bool performShortcut(int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2) { return Android_android_view_Menu__performShortcut(this, arg0, arg1, arg2); }
    void removeGroup(int arg0) { Android_android_view_Menu__removeGroup(this, arg0); }
    void removeItem(int arg0) { Android_android_view_Menu__removeItem(this, arg0); }
    void setGroupCheckable(int arg0, bool arg1, bool arg2) { Android_android_view_Menu__setGroupCheckable(this, arg0, arg1, arg2); }
    void setGroupEnabled(int arg0, bool arg1) { Android_android_view_Menu__setGroupEnabled(this, arg0, arg1); }
    void setGroupVisible(int arg0, bool arg1) { Android_android_view_Menu__setGroupVisible(this, arg0, arg1); }
    void setQwertyMode(bool arg0) { Android_android_view_Menu__setQwertyMode(this, arg0); }
    int size() { return Android_android_view_Menu__size(this); }
};

}}}


#endif

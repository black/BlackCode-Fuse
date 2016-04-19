// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.Menu.h>
#include <Android.android.view.SubMenu.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct ComponentName;}}}}
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SubMenu;}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_SubMenu :19536
// {
struct Android_android_view_SubMenu_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::SubMenu interface2;
    ::g::Android::android::view::Menu interface3;
};

Android_android_view_SubMenu_type* Android_android_view_SubMenu_typeof();
void Android_android_view_SubMenu__add_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval);
void Android_android_view_SubMenu__add1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__add2_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval);
void Android_android_view_SubMenu__add3_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval);
void Android_android_view_SubMenu__add_IMPL_22256_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SubMenu__add_IMPL_22257_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__add_IMPL_22258_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval);
void Android_android_view_SubMenu__add_IMPL_22259_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval);
void Android_android_view_SubMenu__addIntentOptions_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int* arg6, ::g::Android::Runtime::ObjectArray* arg7, int* __retval);
void Android_android_view_SubMenu__addIntentOptions_IMPL_22264_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int* arg8_, uObject* arg9_, int* __retval);
void Android_android_view_SubMenu__addSubMenu_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu2_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu3_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu_IMPL_22260_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu_IMPL_22261_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu_IMPL_22262_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval);
void Android_android_view_SubMenu__addSubMenu_IMPL_22263_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval);
void Android_android_view_SubMenu__clear_fn(Android_android_view_SubMenu* __this);
void Android_android_view_SubMenu__clear_IMPL_22267_fn(bool* arg0_, jobject* arg1_);
void Android_android_view_SubMenu__clearHeader_fn(Android_android_view_SubMenu* __this);
void Android_android_view_SubMenu__clearHeader_IMPL_22582_fn(bool* arg0_, jobject* arg1_);
void Android_android_view_SubMenu__close_fn(Android_android_view_SubMenu* __this);
void Android_android_view_SubMenu__close_IMPL_22275_fn(bool* arg0_, jobject* arg1_);
void Android_android_view_SubMenu__findItem_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__findItem_IMPL_22272_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__getItem_fn(Android_android_view_SubMenu* __this, uObject** __retval);
void Android_android_view_SubMenu__getItem1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__getItem_IMPL_22274_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__getItem_IMPL_22585_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_SubMenu__hasVisibleItems_fn(Android_android_view_SubMenu* __this, bool* __retval);
void Android_android_view_SubMenu__hasVisibleItems_IMPL_22271_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_SubMenu__isShortcutKey_fn(Android_android_view_SubMenu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void Android_android_view_SubMenu__isShortcutKey_IMPL_22277_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void Android_android_view_SubMenu__performIdentifierAction_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, bool* __retval);
void Android_android_view_SubMenu__performIdentifierAction_IMPL_22278_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval);
void Android_android_view_SubMenu__performShortcut_fn(Android_android_view_SubMenu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, int* arg2, bool* __retval);
void Android_android_view_SubMenu__performShortcut_IMPL_22276_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, bool* __retval);
void Android_android_view_SubMenu__removeGroup_fn(Android_android_view_SubMenu* __this, int* arg0);
void Android_android_view_SubMenu__removeGroup_IMPL_22266_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Android_android_view_SubMenu__removeItem_fn(Android_android_view_SubMenu* __this, int* arg0);
void Android_android_view_SubMenu__removeItem_IMPL_22265_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Android_android_view_SubMenu__setGroupCheckable_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1, bool* arg2);
void Android_android_view_SubMenu__setGroupCheckable_IMPL_22268_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* arg4_);
void Android_android_view_SubMenu__setGroupEnabled_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1);
void Android_android_view_SubMenu__setGroupEnabled_IMPL_22270_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_);
void Android_android_view_SubMenu__setGroupVisible_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1);
void Android_android_view_SubMenu__setGroupVisible_IMPL_22269_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_);
void Android_android_view_SubMenu__setHeaderIcon_fn(Android_android_view_SubMenu* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval);
void Android_android_view_SubMenu__setHeaderIcon1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__setHeaderIcon_IMPL_22579_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setHeaderIcon_IMPL_22580_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setHeaderTitle_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval);
void Android_android_view_SubMenu__setHeaderTitle1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__setHeaderTitle_IMPL_22577_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setHeaderTitle_IMPL_22578_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setHeaderView_fn(Android_android_view_SubMenu* __this, ::g::Android::android::view::View* arg0, uObject** __retval);
void Android_android_view_SubMenu__setHeaderView_IMPL_22581_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setIcon_fn(Android_android_view_SubMenu* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval);
void Android_android_view_SubMenu__setIcon1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval);
void Android_android_view_SubMenu__setIcon_IMPL_22583_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setIcon_IMPL_22584_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_SubMenu__setQwertyMode_fn(Android_android_view_SubMenu* __this, bool* arg0);
void Android_android_view_SubMenu__setQwertyMode_IMPL_22279_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void Android_android_view_SubMenu__size_fn(Android_android_view_SubMenu* __this, int* __retval);
void Android_android_view_SubMenu__size_IMPL_22273_fn(bool* arg0_, jobject* arg1_, int* __retval);

struct Android_android_view_SubMenu : ::g::Android::java::lang::Object
{
    static jmethodID add_22256_ID_;
    static jmethodID& add_22256_ID() { return add_22256_ID_; }
    static jmethodID add_22257_ID_;
    static jmethodID& add_22257_ID() { return add_22257_ID_; }
    static jmethodID add_22258_ID_;
    static jmethodID& add_22258_ID() { return add_22258_ID_; }
    static jmethodID add_22259_ID_;
    static jmethodID& add_22259_ID() { return add_22259_ID_; }
    static jmethodID addIntentOptions_22264_ID_;
    static jmethodID& addIntentOptions_22264_ID() { return addIntentOptions_22264_ID_; }
    static jmethodID addSubMenu_22260_ID_;
    static jmethodID& addSubMenu_22260_ID() { return addSubMenu_22260_ID_; }
    static jmethodID addSubMenu_22261_ID_;
    static jmethodID& addSubMenu_22261_ID() { return addSubMenu_22261_ID_; }
    static jmethodID addSubMenu_22262_ID_;
    static jmethodID& addSubMenu_22262_ID() { return addSubMenu_22262_ID_; }
    static jmethodID addSubMenu_22263_ID_;
    static jmethodID& addSubMenu_22263_ID() { return addSubMenu_22263_ID_; }
    static jmethodID clear_22267_ID_;
    static jmethodID& clear_22267_ID() { return clear_22267_ID_; }
    static jmethodID clearHeader_22582_ID_;
    static jmethodID& clearHeader_22582_ID() { return clearHeader_22582_ID_; }
    static jmethodID close_22275_ID_;
    static jmethodID& close_22275_ID() { return close_22275_ID_; }
    static jmethodID findItem_22272_ID_;
    static jmethodID& findItem_22272_ID() { return findItem_22272_ID_; }
    static jmethodID getItem_22274_ID_;
    static jmethodID& getItem_22274_ID() { return getItem_22274_ID_; }
    static jmethodID getItem_22585_ID_;
    static jmethodID& getItem_22585_ID() { return getItem_22585_ID_; }
    static jmethodID hasVisibleItems_22271_ID_;
    static jmethodID& hasVisibleItems_22271_ID() { return hasVisibleItems_22271_ID_; }
    static jmethodID isShortcutKey_22277_ID_;
    static jmethodID& isShortcutKey_22277_ID() { return isShortcutKey_22277_ID_; }
    static jmethodID performIdentifierAction_22278_ID_;
    static jmethodID& performIdentifierAction_22278_ID() { return performIdentifierAction_22278_ID_; }
    static jmethodID performShortcut_22276_ID_;
    static jmethodID& performShortcut_22276_ID() { return performShortcut_22276_ID_; }
    static jmethodID removeGroup_22266_ID_;
    static jmethodID& removeGroup_22266_ID() { return removeGroup_22266_ID_; }
    static jmethodID removeItem_22265_ID_;
    static jmethodID& removeItem_22265_ID() { return removeItem_22265_ID_; }
    static jmethodID setGroupCheckable_22268_ID_;
    static jmethodID& setGroupCheckable_22268_ID() { return setGroupCheckable_22268_ID_; }
    static jmethodID setGroupEnabled_22270_ID_;
    static jmethodID& setGroupEnabled_22270_ID() { return setGroupEnabled_22270_ID_; }
    static jmethodID setGroupVisible_22269_ID_;
    static jmethodID& setGroupVisible_22269_ID() { return setGroupVisible_22269_ID_; }
    static jmethodID setHeaderIcon_22579_ID_;
    static jmethodID& setHeaderIcon_22579_ID() { return setHeaderIcon_22579_ID_; }
    static jmethodID setHeaderIcon_22580_ID_;
    static jmethodID& setHeaderIcon_22580_ID() { return setHeaderIcon_22580_ID_; }
    static jmethodID setHeaderTitle_22577_ID_;
    static jmethodID& setHeaderTitle_22577_ID() { return setHeaderTitle_22577_ID_; }
    static jmethodID setHeaderTitle_22578_ID_;
    static jmethodID& setHeaderTitle_22578_ID() { return setHeaderTitle_22578_ID_; }
    static jmethodID setHeaderView_22581_ID_;
    static jmethodID& setHeaderView_22581_ID() { return setHeaderView_22581_ID_; }
    static jmethodID setIcon_22583_ID_;
    static jmethodID& setIcon_22583_ID() { return setIcon_22583_ID_; }
    static jmethodID setIcon_22584_ID_;
    static jmethodID& setIcon_22584_ID() { return setIcon_22584_ID_; }
    static jmethodID setQwertyMode_22279_ID_;
    static jmethodID& setQwertyMode_22279_ID() { return setQwertyMode_22279_ID_; }
    static jmethodID size_22273_ID_;
    static jmethodID& size_22273_ID() { return size_22273_ID_; }

    uObject* add(uObject* arg0);
    uObject* add1(int arg0);
    uObject* add2(int arg0, int arg1, int arg2, uObject* arg3);
    uObject* add3(int arg0, int arg1, int arg2, int arg3);
    int addIntentOptions(int arg0, int arg1, int arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int arg6, ::g::Android::Runtime::ObjectArray* arg7);
    uObject* addSubMenu(uObject* arg0);
    uObject* addSubMenu1(int arg0);
    uObject* addSubMenu2(int arg0, int arg1, int arg2, uObject* arg3);
    uObject* addSubMenu3(int arg0, int arg1, int arg2, int arg3);
    void clear();
    void clearHeader();
    void close();
    uObject* findItem(int arg0);
    uObject* getItem();
    uObject* getItem1(int arg0);
    bool hasVisibleItems();
    bool isShortcutKey(int arg0, ::g::Android::android::view::KeyEvent* arg1);
    bool performIdentifierAction(int arg0, int arg1);
    bool performShortcut(int arg0, ::g::Android::android::view::KeyEvent* arg1, int arg2);
    void removeGroup(int arg0);
    void removeItem(int arg0);
    void setGroupCheckable(int arg0, bool arg1, bool arg2);
    void setGroupEnabled(int arg0, bool arg1);
    void setGroupVisible(int arg0, bool arg1);
    uObject* setHeaderIcon(::g::Android::android::graphics::drawable::Drawable* arg0);
    uObject* setHeaderIcon1(int arg0);
    uObject* setHeaderTitle(uObject* arg0);
    uObject* setHeaderTitle1(int arg0);
    uObject* setHeaderView(::g::Android::android::view::View* arg0);
    uObject* setIcon(::g::Android::android::graphics::drawable::Drawable* arg0);
    uObject* setIcon1(int arg0);
    void setQwertyMode(bool arg0);
    int size();
    static uObject* add_IMPL_22256(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* add_IMPL_22257(bool arg0_, jobject arg1_, int arg2_);
    static uObject* add_IMPL_22258(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_);
    static uObject* add_IMPL_22259(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static int addIntentOptions_IMPL_22264(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int arg8_, uObject* arg9_);
    static uObject* addSubMenu_IMPL_22260(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* addSubMenu_IMPL_22261(bool arg0_, jobject arg1_, int arg2_);
    static uObject* addSubMenu_IMPL_22262(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_);
    static uObject* addSubMenu_IMPL_22263(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void clear_IMPL_22267(bool arg0_, jobject arg1_);
    static void clearHeader_IMPL_22582(bool arg0_, jobject arg1_);
    static void close_IMPL_22275(bool arg0_, jobject arg1_);
    static uObject* findItem_IMPL_22272(bool arg0_, jobject arg1_, int arg2_);
    static uObject* getItem_IMPL_22274(bool arg0_, jobject arg1_, int arg2_);
    static uObject* getItem_IMPL_22585(bool arg0_, jobject arg1_);
    static bool hasVisibleItems_IMPL_22271(bool arg0_, jobject arg1_);
    static bool isShortcutKey_IMPL_22277(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool performIdentifierAction_IMPL_22278(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static bool performShortcut_IMPL_22276(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_);
    static void removeGroup_IMPL_22266(bool arg0_, jobject arg1_, int arg2_);
    static void removeItem_IMPL_22265(bool arg0_, jobject arg1_, int arg2_);
    static void setGroupCheckable_IMPL_22268(bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_);
    static void setGroupEnabled_IMPL_22270(bool arg0_, jobject arg1_, int arg2_, bool arg3_);
    static void setGroupVisible_IMPL_22269(bool arg0_, jobject arg1_, int arg2_, bool arg3_);
    static uObject* setHeaderIcon_IMPL_22579(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setHeaderIcon_IMPL_22580(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setHeaderTitle_IMPL_22577(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setHeaderTitle_IMPL_22578(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setHeaderView_IMPL_22581(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setIcon_IMPL_22583(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setIcon_IMPL_22584(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setQwertyMode_IMPL_22279(bool arg0_, jobject arg1_, bool arg2_);
    static int size_IMPL_22273(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks

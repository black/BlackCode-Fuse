// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_ITEM_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_MENU_ITEM_H__

#include <app/Android.android.view.MenuItem.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Intent; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionProvider; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_MenuItem;

extern jmethodID Android_android_view_MenuItem__collapseActionView_22332_ID;
extern jmethodID Android_android_view_MenuItem__expandActionView_22331_ID;
extern jmethodID Android_android_view_MenuItem__getActionProvider_22330_ID;
extern jmethodID Android_android_view_MenuItem__getActionView_22328_ID;
extern jmethodID Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID;
extern jmethodID Android_android_view_MenuItem__getGroupId_22295_ID;
extern jmethodID Android_android_view_MenuItem__getIcon_22304_ID;
extern jmethodID Android_android_view_MenuItem__getIntent_22306_ID;
extern jmethodID Android_android_view_MenuItem__getItemId_22294_ID;
extern jmethodID Android_android_view_MenuItem__getMenuInfo_22323_ID;
extern jmethodID Android_android_view_MenuItem__getNumericShortcut_22309_ID;
extern jmethodID Android_android_view_MenuItem__getOrder_22296_ID;
extern jmethodID Android_android_view_MenuItem__getSubMenu_22321_ID;
extern jmethodID Android_android_view_MenuItem__getTitle_22299_ID;
extern jmethodID Android_android_view_MenuItem__getTitleCondensed_22301_ID;
extern jmethodID Android_android_view_MenuItem__hasSubMenu_22320_ID;
extern jmethodID Android_android_view_MenuItem__isActionViewExpanded_22333_ID;
extern jmethodID Android_android_view_MenuItem__isCheckable_22313_ID;
extern jmethodID Android_android_view_MenuItem__isChecked_22315_ID;
extern jmethodID Android_android_view_MenuItem__isEnabled_22319_ID;
extern jmethodID Android_android_view_MenuItem__isVisible_22317_ID;
extern jmethodID Android_android_view_MenuItem__setActionProvider_22329_ID;
extern jmethodID Android_android_view_MenuItem__setActionView_22326_ID;
extern jmethodID Android_android_view_MenuItem__setActionView_22327_ID;
extern jmethodID Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID;
extern jmethodID Android_android_view_MenuItem__setCheckable_22312_ID;
extern jmethodID Android_android_view_MenuItem__setChecked_22314_ID;
extern jmethodID Android_android_view_MenuItem__setEnabled_22318_ID;
extern jmethodID Android_android_view_MenuItem__setIcon_22302_ID;
extern jmethodID Android_android_view_MenuItem__setIcon_22303_ID;
extern jmethodID Android_android_view_MenuItem__setIntent_22305_ID;
extern jmethodID Android_android_view_MenuItem__setNumericShortcut_22308_ID;
extern jmethodID Android_android_view_MenuItem__setOnActionExpandListener_22334_ID;
extern jmethodID Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID;
extern jmethodID Android_android_view_MenuItem__setShortcut_22307_ID;
extern jmethodID Android_android_view_MenuItem__setShowAsAction_22324_ID;
extern jmethodID Android_android_view_MenuItem__setShowAsActionFlags_22325_ID;
extern jmethodID Android_android_view_MenuItem__setTitle_22297_ID;
extern jmethodID Android_android_view_MenuItem__setTitle_22298_ID;
extern jmethodID Android_android_view_MenuItem__setTitleCondensed_22300_ID;
extern jmethodID Android_android_view_MenuItem__setVisible_22316_ID;

struct Android_android_view_MenuItem__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::MenuItem __interface_2;
};

Android_android_view_MenuItem__uType* Android_android_view_MenuItem__typeof();

bool Android_android_view_MenuItem__collapseActionView(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__collapseActionView_IMPL_22332(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__expandActionView(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__expandActionView_IMPL_22331(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ActionProvider* Android_android_view_MenuItem__getActionProvider(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getActionProvider_IMPL_22330(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::View* Android_android_view_MenuItem__getActionView(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getActionView_IMPL_22328(::uStatic* __this, bool arg0_, jobject arg1_);
::uChar Android_android_view_MenuItem__getAlphabeticShortcut(Android_android_view_MenuItem* __this);
::uChar Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_view_MenuItem__getGroupId(Android_android_view_MenuItem* __this);
int Android_android_view_MenuItem__getGroupId_IMPL_22295(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::drawable::Drawable* Android_android_view_MenuItem__getIcon(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getIcon_IMPL_22304(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::content::Intent* Android_android_view_MenuItem__getIntent(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getIntent_IMPL_22306(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_view_MenuItem__getItemId(Android_android_view_MenuItem* __this);
int Android_android_view_MenuItem__getItemId_IMPL_22294(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_MenuItem__getMenuInfo(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getMenuInfo_IMPL_22323(::uStatic* __this, bool arg0_, jobject arg1_);
::uChar Android_android_view_MenuItem__getNumericShortcut(Android_android_view_MenuItem* __this);
::uChar Android_android_view_MenuItem__getNumericShortcut_IMPL_22309(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_view_MenuItem__getOrder(Android_android_view_MenuItem* __this);
int Android_android_view_MenuItem__getOrder_IMPL_22296(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_MenuItem__getSubMenu(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getSubMenu_IMPL_22321(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_MenuItem__getTitle(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getTitle_IMPL_22299(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_MenuItem__getTitleCondensed(Android_android_view_MenuItem* __this);
::uObject* Android_android_view_MenuItem__getTitleCondensed_IMPL_22301(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__hasSubMenu(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__hasSubMenu_IMPL_22320(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__isActionViewExpanded(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__isCheckable(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__isCheckable_IMPL_22313(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__isChecked(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__isChecked_IMPL_22315(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__isEnabled(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__isEnabled_IMPL_22319(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_MenuItem__isVisible(Android_android_view_MenuItem* __this);
bool Android_android_view_MenuItem__isVisible_IMPL_22317(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_MenuItem__setActionProvider(Android_android_view_MenuItem* __this, ::app::Android::android::view::ActionProvider* arg0);
::uObject* Android_android_view_MenuItem__setActionProvider_IMPL_22329(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setActionView(Android_android_view_MenuItem* __this, int arg0);
::uObject* Android_android_view_MenuItem__setActionView_1(Android_android_view_MenuItem* __this, ::app::Android::android::view::View* arg0);
::uObject* Android_android_view_MenuItem__setActionView_IMPL_22326(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setActionView_IMPL_22327(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_MenuItem__setAlphabeticShortcut(Android_android_view_MenuItem* __this, ::uChar arg0);
::uObject* Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_);
::uObject* Android_android_view_MenuItem__setCheckable(Android_android_view_MenuItem* __this, bool arg0);
::uObject* Android_android_view_MenuItem__setCheckable_IMPL_22312(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
::uObject* Android_android_view_MenuItem__setChecked(Android_android_view_MenuItem* __this, bool arg0);
::uObject* Android_android_view_MenuItem__setChecked_IMPL_22314(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
::uObject* Android_android_view_MenuItem__setEnabled(Android_android_view_MenuItem* __this, bool arg0);
::uObject* Android_android_view_MenuItem__setEnabled_IMPL_22318(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
::uObject* Android_android_view_MenuItem__setIcon(Android_android_view_MenuItem* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
::uObject* Android_android_view_MenuItem__setIcon_1(Android_android_view_MenuItem* __this, int arg0);
::uObject* Android_android_view_MenuItem__setIcon_IMPL_22302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setIcon_IMPL_22303(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_MenuItem__setIntent(Android_android_view_MenuItem* __this, ::app::Android::android::content::Intent* arg0);
::uObject* Android_android_view_MenuItem__setIntent_IMPL_22305(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setNumericShortcut(Android_android_view_MenuItem* __this, ::uChar arg0);
::uObject* Android_android_view_MenuItem__setNumericShortcut_IMPL_22308(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_);
::uObject* Android_android_view_MenuItem__setOnActionExpandListener(Android_android_view_MenuItem* __this, ::uObject* arg0);
::uObject* Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setOnMenuItemClickListener(Android_android_view_MenuItem* __this, ::uObject* arg0);
::uObject* Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setShortcut(Android_android_view_MenuItem* __this, ::uChar arg0, ::uChar arg1);
::uObject* Android_android_view_MenuItem__setShortcut_IMPL_22307(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_, ::uChar arg3_);
void Android_android_view_MenuItem__setShowAsAction(Android_android_view_MenuItem* __this, int arg0);
void Android_android_view_MenuItem__setShowAsAction_IMPL_22324(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_MenuItem__setShowAsActionFlags(Android_android_view_MenuItem* __this, int arg0);
::uObject* Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_MenuItem__setTitle(Android_android_view_MenuItem* __this, ::uObject* arg0);
::uObject* Android_android_view_MenuItem__setTitle_1(Android_android_view_MenuItem* __this, int arg0);
::uObject* Android_android_view_MenuItem__setTitle_IMPL_22297(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setTitle_IMPL_22298(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_MenuItem__setTitleCondensed(Android_android_view_MenuItem* __this, ::uObject* arg0);
::uObject* Android_android_view_MenuItem__setTitleCondensed_IMPL_22300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* Android_android_view_MenuItem__setVisible(Android_android_view_MenuItem* __this, bool arg0);
::uObject* Android_android_view_MenuItem__setVisible_IMPL_22316(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);

struct Android_android_view_MenuItem : ::app::Android::java::lang::Object
{
    bool collapseActionView() { return Android_android_view_MenuItem__collapseActionView(this); }
    bool expandActionView() { return Android_android_view_MenuItem__expandActionView(this); }
    ::app::Android::android::view::ActionProvider* getActionProvider() { return Android_android_view_MenuItem__getActionProvider(this); }
    ::app::Android::android::view::View* getActionView() { return Android_android_view_MenuItem__getActionView(this); }
    ::uChar getAlphabeticShortcut() { return Android_android_view_MenuItem__getAlphabeticShortcut(this); }
    int getGroupId() { return Android_android_view_MenuItem__getGroupId(this); }
    ::app::Android::android::graphics::drawable::Drawable* getIcon() { return Android_android_view_MenuItem__getIcon(this); }
    ::app::Android::android::content::Intent* getIntent() { return Android_android_view_MenuItem__getIntent(this); }
    int getItemId() { return Android_android_view_MenuItem__getItemId(this); }
    ::uObject* getMenuInfo() { return Android_android_view_MenuItem__getMenuInfo(this); }
    ::uChar getNumericShortcut() { return Android_android_view_MenuItem__getNumericShortcut(this); }
    int getOrder() { return Android_android_view_MenuItem__getOrder(this); }
    ::uObject* getSubMenu() { return Android_android_view_MenuItem__getSubMenu(this); }
    ::uObject* getTitle() { return Android_android_view_MenuItem__getTitle(this); }
    ::uObject* getTitleCondensed() { return Android_android_view_MenuItem__getTitleCondensed(this); }
    bool hasSubMenu() { return Android_android_view_MenuItem__hasSubMenu(this); }
    bool isActionViewExpanded() { return Android_android_view_MenuItem__isActionViewExpanded(this); }
    bool isCheckable() { return Android_android_view_MenuItem__isCheckable(this); }
    bool isChecked() { return Android_android_view_MenuItem__isChecked(this); }
    bool isEnabled() { return Android_android_view_MenuItem__isEnabled(this); }
    bool isVisible() { return Android_android_view_MenuItem__isVisible(this); }
    ::uObject* setActionProvider(::app::Android::android::view::ActionProvider* arg0) { return Android_android_view_MenuItem__setActionProvider(this, arg0); }
    ::uObject* setActionView(int arg0) { return Android_android_view_MenuItem__setActionView(this, arg0); }
    ::uObject* setActionView_1(::app::Android::android::view::View* arg0) { return Android_android_view_MenuItem__setActionView_1(this, arg0); }
    ::uObject* setAlphabeticShortcut(::uChar arg0) { return Android_android_view_MenuItem__setAlphabeticShortcut(this, arg0); }
    ::uObject* setCheckable(bool arg0) { return Android_android_view_MenuItem__setCheckable(this, arg0); }
    ::uObject* setChecked(bool arg0) { return Android_android_view_MenuItem__setChecked(this, arg0); }
    ::uObject* setEnabled(bool arg0) { return Android_android_view_MenuItem__setEnabled(this, arg0); }
    ::uObject* setIcon(::app::Android::android::graphics::drawable::Drawable* arg0) { return Android_android_view_MenuItem__setIcon(this, arg0); }
    ::uObject* setIcon_1(int arg0) { return Android_android_view_MenuItem__setIcon_1(this, arg0); }
    ::uObject* setIntent(::app::Android::android::content::Intent* arg0) { return Android_android_view_MenuItem__setIntent(this, arg0); }
    ::uObject* setNumericShortcut(::uChar arg0) { return Android_android_view_MenuItem__setNumericShortcut(this, arg0); }
    ::uObject* setOnActionExpandListener(::uObject* arg0) { return Android_android_view_MenuItem__setOnActionExpandListener(this, arg0); }
    ::uObject* setOnMenuItemClickListener(::uObject* arg0) { return Android_android_view_MenuItem__setOnMenuItemClickListener(this, arg0); }
    ::uObject* setShortcut(::uChar arg0, ::uChar arg1) { return Android_android_view_MenuItem__setShortcut(this, arg0, arg1); }
    void setShowAsAction(int arg0) { Android_android_view_MenuItem__setShowAsAction(this, arg0); }
    ::uObject* setShowAsActionFlags(int arg0) { return Android_android_view_MenuItem__setShowAsActionFlags(this, arg0); }
    ::uObject* setTitle(::uObject* arg0) { return Android_android_view_MenuItem__setTitle(this, arg0); }
    ::uObject* setTitle_1(int arg0) { return Android_android_view_MenuItem__setTitle_1(this, arg0); }
    ::uObject* setTitleCondensed(::uObject* arg0) { return Android_android_view_MenuItem__setTitleCondensed(this, arg0); }
    ::uObject* setVisible(bool arg0) { return Android_android_view_MenuItem__setVisible(this, arg0); }
};

}}}


#endif

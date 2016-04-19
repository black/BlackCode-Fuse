// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.MenuItem.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ActionProvider;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_MenuItem;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_MenuItem :19150
// {
struct Android_android_view_MenuItem_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::MenuItem interface2;
};

Android_android_view_MenuItem_type* Android_android_view_MenuItem_typeof();
void Android_android_view_MenuItem__collapseActionView_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__collapseActionView_IMPL_22332_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__expandActionView_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__expandActionView_IMPL_22331_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__getActionProvider_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::ActionProvider** __retval);
void Android_android_view_MenuItem__getActionProvider_IMPL_22330_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getActionView_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::View** __retval);
void Android_android_view_MenuItem__getActionView_IMPL_22328_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getAlphabeticShortcut_fn(Android_android_view_MenuItem* __this, uChar* __retval);
void Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311_fn(bool* arg0_, jobject* arg1_, uChar* __retval);
void Android_android_view_MenuItem__getGroupId_fn(Android_android_view_MenuItem* __this, int* __retval);
void Android_android_view_MenuItem__getGroupId_IMPL_22295_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_view_MenuItem__getIcon_fn(Android_android_view_MenuItem* __this, ::g::Android::android::graphics::drawable::Drawable** __retval);
void Android_android_view_MenuItem__getIcon_IMPL_22304_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getIntent_fn(Android_android_view_MenuItem* __this, ::g::Android::android::content::Intent** __retval);
void Android_android_view_MenuItem__getIntent_IMPL_22306_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getItemId_fn(Android_android_view_MenuItem* __this, int* __retval);
void Android_android_view_MenuItem__getItemId_IMPL_22294_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_view_MenuItem__getMenuInfo_fn(Android_android_view_MenuItem* __this, uObject** __retval);
void Android_android_view_MenuItem__getMenuInfo_IMPL_22323_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getNumericShortcut_fn(Android_android_view_MenuItem* __this, uChar* __retval);
void Android_android_view_MenuItem__getNumericShortcut_IMPL_22309_fn(bool* arg0_, jobject* arg1_, uChar* __retval);
void Android_android_view_MenuItem__getOrder_fn(Android_android_view_MenuItem* __this, int* __retval);
void Android_android_view_MenuItem__getOrder_IMPL_22296_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_view_MenuItem__getSubMenu_fn(Android_android_view_MenuItem* __this, uObject** __retval);
void Android_android_view_MenuItem__getSubMenu_IMPL_22321_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getTitle_fn(Android_android_view_MenuItem* __this, uObject** __retval);
void Android_android_view_MenuItem__getTitle_IMPL_22299_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__getTitleCondensed_fn(Android_android_view_MenuItem* __this, uObject** __retval);
void Android_android_view_MenuItem__getTitleCondensed_IMPL_22301_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_MenuItem__hasSubMenu_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__hasSubMenu_IMPL_22320_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__isActionViewExpanded_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__isCheckable_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__isCheckable_IMPL_22313_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__isChecked_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__isChecked_IMPL_22315_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__isEnabled_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__isEnabled_IMPL_22319_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__isVisible_fn(Android_android_view_MenuItem* __this, bool* __retval);
void Android_android_view_MenuItem__isVisible_IMPL_22317_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_MenuItem__setActionProvider_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::ActionProvider* arg0, uObject** __retval);
void Android_android_view_MenuItem__setActionProvider_IMPL_22329_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setActionView_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::View* arg0, uObject** __retval);
void Android_android_view_MenuItem__setActionView1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval);
void Android_android_view_MenuItem__setActionView_IMPL_22326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setActionView_IMPL_22327_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setAlphabeticShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uObject** __retval);
void Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setCheckable_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval);
void Android_android_view_MenuItem__setCheckable_IMPL_22312_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setChecked_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval);
void Android_android_view_MenuItem__setChecked_IMPL_22314_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setEnabled_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval);
void Android_android_view_MenuItem__setEnabled_IMPL_22318_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setIcon_fn(Android_android_view_MenuItem* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval);
void Android_android_view_MenuItem__setIcon1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval);
void Android_android_view_MenuItem__setIcon_IMPL_22302_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setIcon_IMPL_22303_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setIntent_fn(Android_android_view_MenuItem* __this, ::g::Android::android::content::Intent* arg0, uObject** __retval);
void Android_android_view_MenuItem__setIntent_IMPL_22305_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setNumericShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uObject** __retval);
void Android_android_view_MenuItem__setNumericShortcut_IMPL_22308_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setOnActionExpandListener_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval);
void Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setOnMenuItemClickListener_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval);
void Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uChar* arg1, uObject** __retval);
void Android_android_view_MenuItem__setShortcut_IMPL_22307_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uChar* arg3_, uObject** __retval);
void Android_android_view_MenuItem__setShowAsAction_fn(Android_android_view_MenuItem* __this, int* arg0);
void Android_android_view_MenuItem__setShowAsAction_IMPL_22324_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Android_android_view_MenuItem__setShowAsActionFlags_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval);
void Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setTitle_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval);
void Android_android_view_MenuItem__setTitle1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval);
void Android_android_view_MenuItem__setTitle_IMPL_22297_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setTitle_IMPL_22298_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setTitleCondensed_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval);
void Android_android_view_MenuItem__setTitleCondensed_IMPL_22300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_view_MenuItem__setVisible_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval);
void Android_android_view_MenuItem__setVisible_IMPL_22316_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval);

struct Android_android_view_MenuItem : ::g::Android::java::lang::Object
{
    static jmethodID collapseActionView_22332_ID_;
    static jmethodID& collapseActionView_22332_ID() { return collapseActionView_22332_ID_; }
    static jmethodID expandActionView_22331_ID_;
    static jmethodID& expandActionView_22331_ID() { return expandActionView_22331_ID_; }
    static jmethodID getActionProvider_22330_ID_;
    static jmethodID& getActionProvider_22330_ID() { return getActionProvider_22330_ID_; }
    static jmethodID getActionView_22328_ID_;
    static jmethodID& getActionView_22328_ID() { return getActionView_22328_ID_; }
    static jmethodID getAlphabeticShortcut_22311_ID_;
    static jmethodID& getAlphabeticShortcut_22311_ID() { return getAlphabeticShortcut_22311_ID_; }
    static jmethodID getGroupId_22295_ID_;
    static jmethodID& getGroupId_22295_ID() { return getGroupId_22295_ID_; }
    static jmethodID getIcon_22304_ID_;
    static jmethodID& getIcon_22304_ID() { return getIcon_22304_ID_; }
    static jmethodID getIntent_22306_ID_;
    static jmethodID& getIntent_22306_ID() { return getIntent_22306_ID_; }
    static jmethodID getItemId_22294_ID_;
    static jmethodID& getItemId_22294_ID() { return getItemId_22294_ID_; }
    static jmethodID getMenuInfo_22323_ID_;
    static jmethodID& getMenuInfo_22323_ID() { return getMenuInfo_22323_ID_; }
    static jmethodID getNumericShortcut_22309_ID_;
    static jmethodID& getNumericShortcut_22309_ID() { return getNumericShortcut_22309_ID_; }
    static jmethodID getOrder_22296_ID_;
    static jmethodID& getOrder_22296_ID() { return getOrder_22296_ID_; }
    static jmethodID getSubMenu_22321_ID_;
    static jmethodID& getSubMenu_22321_ID() { return getSubMenu_22321_ID_; }
    static jmethodID getTitle_22299_ID_;
    static jmethodID& getTitle_22299_ID() { return getTitle_22299_ID_; }
    static jmethodID getTitleCondensed_22301_ID_;
    static jmethodID& getTitleCondensed_22301_ID() { return getTitleCondensed_22301_ID_; }
    static jmethodID hasSubMenu_22320_ID_;
    static jmethodID& hasSubMenu_22320_ID() { return hasSubMenu_22320_ID_; }
    static jmethodID isActionViewExpanded_22333_ID_;
    static jmethodID& isActionViewExpanded_22333_ID() { return isActionViewExpanded_22333_ID_; }
    static jmethodID isCheckable_22313_ID_;
    static jmethodID& isCheckable_22313_ID() { return isCheckable_22313_ID_; }
    static jmethodID isChecked_22315_ID_;
    static jmethodID& isChecked_22315_ID() { return isChecked_22315_ID_; }
    static jmethodID isEnabled_22319_ID_;
    static jmethodID& isEnabled_22319_ID() { return isEnabled_22319_ID_; }
    static jmethodID isVisible_22317_ID_;
    static jmethodID& isVisible_22317_ID() { return isVisible_22317_ID_; }
    static jmethodID setActionProvider_22329_ID_;
    static jmethodID& setActionProvider_22329_ID() { return setActionProvider_22329_ID_; }
    static jmethodID setActionView_22326_ID_;
    static jmethodID& setActionView_22326_ID() { return setActionView_22326_ID_; }
    static jmethodID setActionView_22327_ID_;
    static jmethodID& setActionView_22327_ID() { return setActionView_22327_ID_; }
    static jmethodID setAlphabeticShortcut_22310_ID_;
    static jmethodID& setAlphabeticShortcut_22310_ID() { return setAlphabeticShortcut_22310_ID_; }
    static jmethodID setCheckable_22312_ID_;
    static jmethodID& setCheckable_22312_ID() { return setCheckable_22312_ID_; }
    static jmethodID setChecked_22314_ID_;
    static jmethodID& setChecked_22314_ID() { return setChecked_22314_ID_; }
    static jmethodID setEnabled_22318_ID_;
    static jmethodID& setEnabled_22318_ID() { return setEnabled_22318_ID_; }
    static jmethodID setIcon_22302_ID_;
    static jmethodID& setIcon_22302_ID() { return setIcon_22302_ID_; }
    static jmethodID setIcon_22303_ID_;
    static jmethodID& setIcon_22303_ID() { return setIcon_22303_ID_; }
    static jmethodID setIntent_22305_ID_;
    static jmethodID& setIntent_22305_ID() { return setIntent_22305_ID_; }
    static jmethodID setNumericShortcut_22308_ID_;
    static jmethodID& setNumericShortcut_22308_ID() { return setNumericShortcut_22308_ID_; }
    static jmethodID setOnActionExpandListener_22334_ID_;
    static jmethodID& setOnActionExpandListener_22334_ID() { return setOnActionExpandListener_22334_ID_; }
    static jmethodID setOnMenuItemClickListener_22322_ID_;
    static jmethodID& setOnMenuItemClickListener_22322_ID() { return setOnMenuItemClickListener_22322_ID_; }
    static jmethodID setShortcut_22307_ID_;
    static jmethodID& setShortcut_22307_ID() { return setShortcut_22307_ID_; }
    static jmethodID setShowAsAction_22324_ID_;
    static jmethodID& setShowAsAction_22324_ID() { return setShowAsAction_22324_ID_; }
    static jmethodID setShowAsActionFlags_22325_ID_;
    static jmethodID& setShowAsActionFlags_22325_ID() { return setShowAsActionFlags_22325_ID_; }
    static jmethodID setTitle_22297_ID_;
    static jmethodID& setTitle_22297_ID() { return setTitle_22297_ID_; }
    static jmethodID setTitle_22298_ID_;
    static jmethodID& setTitle_22298_ID() { return setTitle_22298_ID_; }
    static jmethodID setTitleCondensed_22300_ID_;
    static jmethodID& setTitleCondensed_22300_ID() { return setTitleCondensed_22300_ID_; }
    static jmethodID setVisible_22316_ID_;
    static jmethodID& setVisible_22316_ID() { return setVisible_22316_ID_; }

    bool collapseActionView();
    bool expandActionView();
    ::g::Android::android::view::ActionProvider* getActionProvider();
    ::g::Android::android::view::View* getActionView();
    uChar getAlphabeticShortcut();
    int getGroupId();
    ::g::Android::android::graphics::drawable::Drawable* getIcon();
    ::g::Android::android::content::Intent* getIntent();
    int getItemId();
    uObject* getMenuInfo();
    uChar getNumericShortcut();
    int getOrder();
    uObject* getSubMenu();
    uObject* getTitle();
    uObject* getTitleCondensed();
    bool hasSubMenu();
    bool isActionViewExpanded();
    bool isCheckable();
    bool isChecked();
    bool isEnabled();
    bool isVisible();
    uObject* setActionProvider(::g::Android::android::view::ActionProvider* arg0);
    uObject* setActionView(::g::Android::android::view::View* arg0);
    uObject* setActionView1(int arg0);
    uObject* setAlphabeticShortcut(uChar arg0);
    uObject* setCheckable(bool arg0);
    uObject* setChecked(bool arg0);
    uObject* setEnabled(bool arg0);
    uObject* setIcon(::g::Android::android::graphics::drawable::Drawable* arg0);
    uObject* setIcon1(int arg0);
    uObject* setIntent(::g::Android::android::content::Intent* arg0);
    uObject* setNumericShortcut(uChar arg0);
    uObject* setOnActionExpandListener(uObject* arg0);
    uObject* setOnMenuItemClickListener(uObject* arg0);
    uObject* setShortcut(uChar arg0, uChar arg1);
    void setShowAsAction(int arg0);
    uObject* setShowAsActionFlags(int arg0);
    uObject* setTitle(uObject* arg0);
    uObject* setTitle1(int arg0);
    uObject* setTitleCondensed(uObject* arg0);
    uObject* setVisible(bool arg0);
    static bool collapseActionView_IMPL_22332(bool arg0_, jobject arg1_);
    static bool expandActionView_IMPL_22331(bool arg0_, jobject arg1_);
    static uObject* getActionProvider_IMPL_22330(bool arg0_, jobject arg1_);
    static uObject* getActionView_IMPL_22328(bool arg0_, jobject arg1_);
    static uChar getAlphabeticShortcut_IMPL_22311(bool arg0_, jobject arg1_);
    static int getGroupId_IMPL_22295(bool arg0_, jobject arg1_);
    static uObject* getIcon_IMPL_22304(bool arg0_, jobject arg1_);
    static uObject* getIntent_IMPL_22306(bool arg0_, jobject arg1_);
    static int getItemId_IMPL_22294(bool arg0_, jobject arg1_);
    static uObject* getMenuInfo_IMPL_22323(bool arg0_, jobject arg1_);
    static uChar getNumericShortcut_IMPL_22309(bool arg0_, jobject arg1_);
    static int getOrder_IMPL_22296(bool arg0_, jobject arg1_);
    static uObject* getSubMenu_IMPL_22321(bool arg0_, jobject arg1_);
    static uObject* getTitle_IMPL_22299(bool arg0_, jobject arg1_);
    static uObject* getTitleCondensed_IMPL_22301(bool arg0_, jobject arg1_);
    static bool hasSubMenu_IMPL_22320(bool arg0_, jobject arg1_);
    static bool isActionViewExpanded_IMPL_22333(bool arg0_, jobject arg1_);
    static bool isCheckable_IMPL_22313(bool arg0_, jobject arg1_);
    static bool isChecked_IMPL_22315(bool arg0_, jobject arg1_);
    static bool isEnabled_IMPL_22319(bool arg0_, jobject arg1_);
    static bool isVisible_IMPL_22317(bool arg0_, jobject arg1_);
    static uObject* setActionProvider_IMPL_22329(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setActionView_IMPL_22326(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setActionView_IMPL_22327(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setAlphabeticShortcut_IMPL_22310(bool arg0_, jobject arg1_, uChar arg2_);
    static uObject* setCheckable_IMPL_22312(bool arg0_, jobject arg1_, bool arg2_);
    static uObject* setChecked_IMPL_22314(bool arg0_, jobject arg1_, bool arg2_);
    static uObject* setEnabled_IMPL_22318(bool arg0_, jobject arg1_, bool arg2_);
    static uObject* setIcon_IMPL_22302(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setIcon_IMPL_22303(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setIntent_IMPL_22305(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setNumericShortcut_IMPL_22308(bool arg0_, jobject arg1_, uChar arg2_);
    static uObject* setOnActionExpandListener_IMPL_22334(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setOnMenuItemClickListener_IMPL_22322(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setShortcut_IMPL_22307(bool arg0_, jobject arg1_, uChar arg2_, uChar arg3_);
    static void setShowAsAction_IMPL_22324(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setShowAsActionFlags_IMPL_22325(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setTitle_IMPL_22297(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setTitle_IMPL_22298(bool arg0_, jobject arg1_, int arg2_);
    static uObject* setTitleCondensed_IMPL_22300(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setVisible_IMPL_22316(bool arg0_, jobject arg1_, bool arg2_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_SYSTEM_UI_VISIBIL_1E6AE627_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_SYSTEM_UI_VISIBIL_1E6AE627_H__

#include <app/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnSystemUiVisibilityChangeListener;

extern jmethodID Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_22728_ID;

struct Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnSystemUiVisibilityChangeListener __interface_2;
};

Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType* Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__typeof();

void Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener* __this, int arg0);
void Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_IMPL_22728(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);

struct Android_android_view_ViewDLROnSystemUiVisibilityChangeListener : ::app::Android::java::lang::Object
{
    void onSystemUiVisibilityChange(int arg0) { Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange(this, arg0); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_FOCUS_CHANGE_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_FOCUS_CHANGE_LISTENER_H__

#include <app/Android.android.view.ViewDLROnFocusChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnFocusChangeListener;

extern jmethodID Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID;

struct Android_android_view_ViewDLROnFocusChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnFocusChangeListener __interface_2;
};

Android_android_view_ViewDLROnFocusChangeListener__uType* Android_android_view_ViewDLROnFocusChangeListener__typeof();

void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange(Android_android_view_ViewDLROnFocusChangeListener* __this, ::app::Android::android::view::View* arg0, bool arg1);
void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_);

struct Android_android_view_ViewDLROnFocusChangeListener : ::app::Android::java::lang::Object
{
    void onFocusChange(::app::Android::android::view::View* arg0, bool arg1) { Android_android_view_ViewDLROnFocusChangeListener__onFocusChange(this, arg0, arg1); }
};

}}}


#endif

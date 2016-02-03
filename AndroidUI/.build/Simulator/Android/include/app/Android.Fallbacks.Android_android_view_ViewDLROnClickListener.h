// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CLICK_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CLICK_LISTENER_H__

#include <app/Android.android.view.ViewDLROnClickListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnClickListener;

extern jmethodID Android_android_view_ViewDLROnClickListener__onClick_22719_ID;

struct Android_android_view_ViewDLROnClickListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnClickListener __interface_2;
};

Android_android_view_ViewDLROnClickListener__uType* Android_android_view_ViewDLROnClickListener__typeof();

void Android_android_view_ViewDLROnClickListener__onClick(Android_android_view_ViewDLROnClickListener* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewDLROnClickListener__onClick_IMPL_22719(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_ViewDLROnClickListener : ::app::Android::java::lang::Object
{
    void onClick(::app::Android::android::view::View* arg0) { Android_android_view_ViewDLROnClickListener__onClick(this, arg0); }
};

}}}


#endif

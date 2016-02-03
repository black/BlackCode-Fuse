// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_LAYOUT_CHANGE_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_LAYOUT_CHANGE_LISTENER_H__

#include <app/Android.android.view.ViewDLROnLayoutChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnLayoutChangeListener;

extern jmethodID Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_22726_ID;

struct Android_android_view_ViewDLROnLayoutChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnLayoutChangeListener __interface_2;
};

Android_android_view_ViewDLROnLayoutChangeListener__uType* Android_android_view_ViewDLROnLayoutChangeListener__typeof();

void Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange(Android_android_view_ViewDLROnLayoutChangeListener* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
void Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_IMPL_22726(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_, int arg7_, int arg8_, int arg9_, int arg10_);

struct Android_android_view_ViewDLROnLayoutChangeListener : ::app::Android::java::lang::Object
{
    void onLayoutChange(::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) { Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); }
};

}}}


#endif

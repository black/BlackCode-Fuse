// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_GENERIC_MOTION_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_GENERIC_MOTION_LISTENER_H__

#include <app/Android.android.view.ViewDLROnGenericMotionListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnGenericMotionListener;

extern jmethodID Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_22723_ID;

struct Android_android_view_ViewDLROnGenericMotionListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnGenericMotionListener __interface_2;
};

Android_android_view_ViewDLROnGenericMotionListener__uType* Android_android_view_ViewDLROnGenericMotionListener__typeof();

bool Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion(Android_android_view_ViewDLROnGenericMotionListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1);
bool Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_IMPL_22723(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct Android_android_view_ViewDLROnGenericMotionListener : ::app::Android::java::lang::Object
{
    bool onGenericMotion(::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1) { return Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion(this, arg0, arg1); }
};

}}}


#endif

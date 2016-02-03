// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_HOVER_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_HOVER_LISTENER_H__

#include <app/Android.android.view.ViewDLROnHoverListener.h>
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

struct Android_android_view_ViewDLROnHoverListener;

extern jmethodID Android_android_view_ViewDLROnHoverListener__onHover_22724_ID;

struct Android_android_view_ViewDLROnHoverListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnHoverListener __interface_2;
};

Android_android_view_ViewDLROnHoverListener__uType* Android_android_view_ViewDLROnHoverListener__typeof();

bool Android_android_view_ViewDLROnHoverListener__onHover(Android_android_view_ViewDLROnHoverListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1);
bool Android_android_view_ViewDLROnHoverListener__onHover_IMPL_22724(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct Android_android_view_ViewDLROnHoverListener : ::app::Android::java::lang::Object
{
    bool onHover(::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1) { return Android_android_view_ViewDLROnHoverListener__onHover(this, arg0, arg1); }
};

}}}


#endif

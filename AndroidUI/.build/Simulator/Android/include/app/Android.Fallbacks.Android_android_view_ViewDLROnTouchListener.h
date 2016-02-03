// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_TOUCH_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_TOUCH_LISTENER_H__

#include <app/Android.android.view.ViewDLROnTouchListener.h>
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

struct Android_android_view_ViewDLROnTouchListener;

extern jmethodID Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID;

struct Android_android_view_ViewDLROnTouchListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnTouchListener __interface_2;
};

Android_android_view_ViewDLROnTouchListener__uType* Android_android_view_ViewDLROnTouchListener__typeof();

bool Android_android_view_ViewDLROnTouchListener__onTouch(Android_android_view_ViewDLROnTouchListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1);
bool Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct Android_android_view_ViewDLROnTouchListener : ::app::Android::java::lang::Object
{
    bool onTouch(::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1) { return Android_android_view_ViewDLROnTouchListener__onTouch(this, arg0, arg1); }
};

}}}


#endif

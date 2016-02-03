// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_KEY_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_KEY_LISTENER_H__

#include <app/Android.android.view.ViewDLROnKeyListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnKeyListener;

extern jmethodID Android_android_view_ViewDLROnKeyListener__onKey_22725_ID;

struct Android_android_view_ViewDLROnKeyListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnKeyListener __interface_2;
};

Android_android_view_ViewDLROnKeyListener__uType* Android_android_view_ViewDLROnKeyListener__typeof();

bool Android_android_view_ViewDLROnKeyListener__onKey(Android_android_view_ViewDLROnKeyListener* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2);
bool Android_android_view_ViewDLROnKeyListener__onKey_IMPL_22725(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);

struct Android_android_view_ViewDLROnKeyListener : ::app::Android::java::lang::Object
{
    bool onKey(::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2) { return Android_android_view_ViewDLROnKeyListener__onKey(this, arg0, arg1, arg2); }
};

}}}


#endif

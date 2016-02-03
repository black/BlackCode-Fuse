// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_LONG_CLICK_LISTENER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_LONG_CLICK_LISTENER_H__

#include <app/Android.android.view.ViewDLROnLongClickListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnLongClickListener;

extern jmethodID Android_android_view_ViewDLROnLongClickListener__onLongClick_22727_ID;

struct Android_android_view_ViewDLROnLongClickListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnLongClickListener __interface_2;
};

Android_android_view_ViewDLROnLongClickListener__uType* Android_android_view_ViewDLROnLongClickListener__typeof();

bool Android_android_view_ViewDLROnLongClickListener__onLongClick(Android_android_view_ViewDLROnLongClickListener* __this, ::app::Android::android::view::View* arg0);
bool Android_android_view_ViewDLROnLongClickListener__onLongClick_IMPL_22727(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_ViewDLROnLongClickListener : ::app::Android::java::lang::Object
{
    bool onLongClick(::app::Android::android::view::View* arg0) { return Android_android_view_ViewDLROnLongClickListener__onLongClick(this, arg0); }
};

}}}


#endif

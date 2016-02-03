// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_ATTACH_STATE_CHAN_CAD4F1BE_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_ATTACH_STATE_CHAN_CAD4F1BE_H__

#include <app/Android.android.view.ViewDLROnAttachStateChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnAttachStateChangeListener;

extern jmethodID Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_22717_ID;
extern jmethodID Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_22718_ID;

struct Android_android_view_ViewDLROnAttachStateChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnAttachStateChangeListener __interface_2;
};

Android_android_view_ViewDLROnAttachStateChangeListener__uType* Android_android_view_ViewDLROnAttachStateChangeListener__typeof();

void Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow(Android_android_view_ViewDLROnAttachStateChangeListener* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_IMPL_22717(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow(Android_android_view_ViewDLROnAttachStateChangeListener* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_IMPL_22718(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_ViewDLROnAttachStateChangeListener : ::app::Android::java::lang::Object
{
    void onViewAttachedToWindow(::app::Android::android::view::View* arg0) { Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow(this, arg0); }
    void onViewDetachedFromWindow(::app::Android::android::view::View* arg0) { Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow(this, arg0); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CREATE_CONTEXT_ME_448F6A4B_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CREATE_CONTEXT_ME_448F6A4B_H__

#include <app/Android.android.view.ViewDLROnCreateContextMenuListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewDLROnCreateContextMenuListener;

extern jmethodID Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_22720_ID;

struct Android_android_view_ViewDLROnCreateContextMenuListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnCreateContextMenuListener __interface_2;
};

Android_android_view_ViewDLROnCreateContextMenuListener__uType* Android_android_view_ViewDLROnCreateContextMenuListener__typeof();

void Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu(Android_android_view_ViewDLROnCreateContextMenuListener* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2);
void Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_IMPL_22720(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_);

struct Android_android_view_ViewDLROnCreateContextMenuListener : ::app::Android::java::lang::Object
{
    void onCreateContextMenu(::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2) { Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu(this, arg0, arg1, arg2); }
};

}}}


#endif

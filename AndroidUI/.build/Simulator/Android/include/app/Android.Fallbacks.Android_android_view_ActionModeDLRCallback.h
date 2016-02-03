// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_ACTION_MODE_D_L_R_CALLBACK_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_ACTION_MODE_D_L_R_CALLBACK_H__

#include <app/Android.android.view.ActionModeDLRCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct ActionMode; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ActionModeDLRCallback;

extern jmethodID Android_android_view_ActionModeDLRCallback__onActionItemClicked_21611_ID;
extern jmethodID Android_android_view_ActionModeDLRCallback__onCreateActionMode_21609_ID;
extern jmethodID Android_android_view_ActionModeDLRCallback__onDestroyActionMode_21612_ID;
extern jmethodID Android_android_view_ActionModeDLRCallback__onPrepareActionMode_21610_ID;

struct Android_android_view_ActionModeDLRCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ActionModeDLRCallback __interface_2;
};

Android_android_view_ActionModeDLRCallback__uType* Android_android_view_ActionModeDLRCallback__typeof();

bool Android_android_view_ActionModeDLRCallback__onActionItemClicked(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1);
bool Android_android_view_ActionModeDLRCallback__onActionItemClicked_IMPL_21611(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool Android_android_view_ActionModeDLRCallback__onCreateActionMode(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1);
bool Android_android_view_ActionModeDLRCallback__onCreateActionMode_IMPL_21609(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void Android_android_view_ActionModeDLRCallback__onDestroyActionMode(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0);
void Android_android_view_ActionModeDLRCallback__onDestroyActionMode_IMPL_21612(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_ActionModeDLRCallback__onPrepareActionMode(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1);
bool Android_android_view_ActionModeDLRCallback__onPrepareActionMode_IMPL_21610(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct Android_android_view_ActionModeDLRCallback : ::app::Android::java::lang::Object
{
    bool onActionItemClicked(::app::Android::android::view::ActionMode* arg0, ::uObject* arg1) { return Android_android_view_ActionModeDLRCallback__onActionItemClicked(this, arg0, arg1); }
    bool onCreateActionMode(::app::Android::android::view::ActionMode* arg0, ::uObject* arg1) { return Android_android_view_ActionModeDLRCallback__onCreateActionMode(this, arg0, arg1); }
    void onDestroyActionMode(::app::Android::android::view::ActionMode* arg0) { Android_android_view_ActionModeDLRCallback__onDestroyActionMode(this, arg0); }
    bool onPrepareActionMode(::app::Android::android::view::ActionMode* arg0, ::uObject* arg1) { return Android_android_view_ActionModeDLRCallback__onPrepareActionMode(this, arg0, arg1); }
};

}}}


#endif

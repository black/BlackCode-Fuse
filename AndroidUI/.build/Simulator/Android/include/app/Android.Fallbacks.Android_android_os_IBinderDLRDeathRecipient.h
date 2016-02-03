// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_I_BINDER_D_L_R_DEATH_RECIPIENT_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_I_BINDER_D_L_R_DEATH_RECIPIENT_H__

#include <app/Android.android.os.IBinderDLRDeathRecipient.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_os_IBinderDLRDeathRecipient;

extern jmethodID Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID;

struct Android_android_os_IBinderDLRDeathRecipient__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::IBinderDLRDeathRecipient __interface_2;
};

Android_android_os_IBinderDLRDeathRecipient__uType* Android_android_os_IBinderDLRDeathRecipient__typeof();

void Android_android_os_IBinderDLRDeathRecipient__binderDied(Android_android_os_IBinderDLRDeathRecipient* __this);
void Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_os_IBinderDLRDeathRecipient : ::app::Android::java::lang::Object
{
    void binderDied() { Android_android_os_IBinderDLRDeathRecipient__binderDied(this); }
};

}}}


#endif

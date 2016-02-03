// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_I_INTERFACE_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_I_INTERFACE_H__

#include <app/Android.android.os.IInterface.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_os_IInterface;

extern jmethodID Android_android_os_IInterface__asBinder_13836_ID;

struct Android_android_os_IInterface__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::IInterface __interface_2;
};

Android_android_os_IInterface__uType* Android_android_os_IInterface__typeof();

::uObject* Android_android_os_IInterface__asBinder(Android_android_os_IInterface* __this);
::uObject* Android_android_os_IInterface__asBinder_IMPL_13836(::uStatic* __this, bool arg0_, jobject arg1_);

struct Android_android_os_IInterface : ::app::Android::java::lang::Object
{
    ::uObject* asBinder() { return Android_android_os_IInterface__asBinder(this); }
};

}}}


#endif

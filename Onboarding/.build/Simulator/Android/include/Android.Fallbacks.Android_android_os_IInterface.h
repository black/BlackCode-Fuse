// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.IInterface.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_IInterface;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_os_IInterface :22103
// {
struct Android_android_os_IInterface_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::IInterface interface2;
};

Android_android_os_IInterface_type* Android_android_os_IInterface_typeof();
void Android_android_os_IInterface__asBinder_fn(Android_android_os_IInterface* __this, uObject** __retval);
void Android_android_os_IInterface__asBinder_IMPL_13836_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Android_android_os_IInterface : ::g::Android::java::lang::Object
{
    static jmethodID asBinder_13836_ID_;
    static jmethodID& asBinder_13836_ID() { return asBinder_13836_ID_; }

    uObject* asBinder();
    static uObject* asBinder_IMPL_13836(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.IBinderDLRDeathRecipient.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_IBinderDLRDeathRecipient;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_os_IBinderDLRDeathRecipient :21989
// {
struct Android_android_os_IBinderDLRDeathRecipient_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::IBinderDLRDeathRecipient interface2;
};

Android_android_os_IBinderDLRDeathRecipient_type* Android_android_os_IBinderDLRDeathRecipient_typeof();
void Android_android_os_IBinderDLRDeathRecipient__binderDied_fn(Android_android_os_IBinderDLRDeathRecipient* __this);
void Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818_fn(bool* arg0_, jobject* arg1_);

struct Android_android_os_IBinderDLRDeathRecipient : ::g::Android::java::lang::Object
{
    static jmethodID binderDied_13818_ID_;
    static jmethodID& binderDied_13818_ID() { return binderDied_13818_ID_; }

    void binderDied();
    static void binderDied_IMPL_13818(bool arg0_, jobject arg1_);
};
// }

}}} // ::g::Android::Fallbacks

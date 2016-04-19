// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Vibrator.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_Vibrator;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_os_Vibrator :2802
// {
::g::Android::android::os::Vibrator_type* Android_android_os_Vibrator_typeof();
void Android_android_os_Vibrator__vibrate1_fn(Android_android_os_Vibrator* __this, int64_t* arg0);
void Android_android_os_Vibrator__vibrate_IMPL_44559_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_);

struct Android_android_os_Vibrator : ::g::Android::android::os::Vibrator
{
    static jmethodID vibrate_44559_ID_;
    static jmethodID& vibrate_44559_ID() { return vibrate_44559_ID_; }

    static void vibrate_IMPL_44559(bool arg0_, jobject arg1_, int64_t arg2_);
};
// }

}}} // ::g::Android::Fallbacks

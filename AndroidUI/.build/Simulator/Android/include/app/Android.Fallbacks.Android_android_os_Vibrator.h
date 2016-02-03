// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_VIBRATOR_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_VIBRATOR_H__

#include <app/Android.android.os.Vibrator.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_os_Vibrator;

extern jmethodID Android_android_os_Vibrator__vibrate_44559_ID;

struct Android_android_os_Vibrator__uType : ::app::Android::android::os::Vibrator__uType
{
};

Android_android_os_Vibrator__uType* Android_android_os_Vibrator__typeof();

void Android_android_os_Vibrator__vibrate(Android_android_os_Vibrator* __this, ::uLong arg0);
void Android_android_os_Vibrator__vibrate_IMPL_44559(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_);

struct Android_android_os_Vibrator : ::app::Android::android::os::Vibrator
{
};

}}}


#endif

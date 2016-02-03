// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_PARCELABLE_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_PARCELABLE_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_os_Parcelable;

extern jmethodID Android_android_os_Parcelable__describeContents_14065_ID;
extern jmethodID Android_android_os_Parcelable__writeToParcel_14066_ID;

struct Android_android_os_Parcelable__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Android_android_os_Parcelable__uType* Android_android_os_Parcelable__typeof();

int Android_android_os_Parcelable__describeContents(Android_android_os_Parcelable* __this);
int Android_android_os_Parcelable__describeContents_IMPL_14065(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_os_Parcelable__writeToParcel(Android_android_os_Parcelable* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Android_android_os_Parcelable__writeToParcel_IMPL_14066(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Android_android_os_Parcelable : ::app::Android::java::lang::Object
{
    int describeContents() { return Android_android_os_Parcelable__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Android_android_os_Parcelable__writeToParcel(this, arg0, arg1); }
};

}}}


#endif

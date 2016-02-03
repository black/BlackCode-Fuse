// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_Parcelable;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_os_Parcelable :22252
// {
struct Android_android_os_Parcelable_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Android_android_os_Parcelable_type* Android_android_os_Parcelable_typeof();
void Android_android_os_Parcelable__describeContents_fn(Android_android_os_Parcelable* __this, int* __retval);
void Android_android_os_Parcelable__describeContents_IMPL_14065_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_os_Parcelable__writeToParcel_fn(Android_android_os_Parcelable* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Android_android_os_Parcelable__writeToParcel_IMPL_14066_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Android_android_os_Parcelable : ::g::Android::java::lang::Object
{
    static jmethodID describeContents_14065_ID_;
    static jmethodID& describeContents_14065_ID() { return describeContents_14065_ID_; }
    static jmethodID writeToParcel_14066_ID_;
    static jmethodID& writeToParcel_14066_ID() { return writeToParcel_14066_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static int describeContents_IMPL_14065(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_14066(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks

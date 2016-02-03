// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.net.Uri.h>
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_net_Uri;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_net_Uri :3568
// {
::g::Android::android::net::Uri_type* Android_android_net_Uri_typeof();
void Android_android_net_Uri__describeContents_fn(Android_android_net_Uri* __this, int* __retval);
void Android_android_net_Uri__describeContents_IMPL_45669_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_net_Uri__writeToParcel1_fn(Android_android_net_Uri* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Android_android_net_Uri__writeToParcel_IMPL_45670_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Android_android_net_Uri : ::g::Android::android::net::Uri
{
    static jmethodID describeContents_45669_ID_;
    static jmethodID& describeContents_45669_ID() { return describeContents_45669_ID_; }
    static jmethodID writeToParcel_45670_ID_;
    static jmethodID& writeToParcel_45670_ID() { return writeToParcel_45670_ID_; }

    static int describeContents_IMPL_45669(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_45670(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks

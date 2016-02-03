// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.location.LocationListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct Location;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_location_LocationListener;}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_location_LocationListener :27337
// {
struct Android_android_location_LocationListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::location::LocationListener interface2;
};

Android_android_location_LocationListener_type* Android_android_location_LocationListener_typeof();
void Android_android_location_LocationListener__onLocationChanged_fn(Android_android_location_LocationListener* __this, ::g::Android::android::location::Location* arg0);
void Android_android_location_LocationListener__onLocationChanged_IMPL_8298_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_location_LocationListener__onProviderDisabled_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0);
void Android_android_location_LocationListener__onProviderDisabled_IMPL_8301_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_location_LocationListener__onProviderEnabled_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0);
void Android_android_location_LocationListener__onProviderEnabled_IMPL_8300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_location_LocationListener__onStatusChanged_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0, int* arg1, ::g::Android::android::os::Bundle* arg2);
void Android_android_location_LocationListener__onStatusChanged_IMPL_8299_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);

struct Android_android_location_LocationListener : ::g::Android::java::lang::Object
{
    static jmethodID onLocationChanged_8298_ID_;
    static jmethodID& onLocationChanged_8298_ID() { return onLocationChanged_8298_ID_; }
    static jmethodID onProviderDisabled_8301_ID_;
    static jmethodID& onProviderDisabled_8301_ID() { return onProviderDisabled_8301_ID_; }
    static jmethodID onProviderEnabled_8300_ID_;
    static jmethodID& onProviderEnabled_8300_ID() { return onProviderEnabled_8300_ID_; }
    static jmethodID onStatusChanged_8299_ID_;
    static jmethodID& onStatusChanged_8299_ID() { return onStatusChanged_8299_ID_; }

    void onLocationChanged(::g::Android::android::location::Location* arg0);
    void onProviderDisabled(::g::Android::java::lang::String* arg0);
    void onProviderEnabled(::g::Android::java::lang::String* arg0);
    void onStatusChanged(::g::Android::java::lang::String* arg0, int arg1, ::g::Android::android::os::Bundle* arg2);
    static void onLocationChanged_IMPL_8298(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onProviderDisabled_IMPL_8301(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onProviderEnabled_IMPL_8300(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onStatusChanged_IMPL_8299(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
};
// }

}}} // ::g::Android::Fallbacks

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\location\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct Location;}}}}
namespace g{namespace Android{namespace android{namespace location{struct LocationManager;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Looper;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace location{

// public sealed extern class LocationManager :1794
// {
::g::Android::java::lang::Object_type* LocationManager_typeof();
void LocationManager___Init2_fn();
void LocationManager__getAllProviders_fn(LocationManager* __this, uObject** __retval);
void LocationManager__getAllProviders_IMPL_8312_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void LocationManager__getLastKnownLocation_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::location::Location** __retval);
void LocationManager__getLastKnownLocation_IMPL_8331_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void LocationManager__get_GPS_PROVIDER_fn(::g::Android::java::lang::String** __retval);
void LocationManager__isProviderEnabled_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, bool* __retval);
void LocationManager__isProviderEnabled_IMPL_8330_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void LocationManager__get_NETWORK_PROVIDER_fn(::g::Android::java::lang::String** __retval);
void LocationManager__removeUpdates1_fn(LocationManager* __this, uObject* arg0);
void LocationManager__removeUpdates_IMPL_8326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void LocationManager__requestLocationUpdates2_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, int64_t* arg1, float* arg2, uObject* arg3, ::g::Android::android::os::Looper* arg4);
void LocationManager__requestLocationUpdates_IMPL_8318_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, float* arg4_, uObject* arg5_, uObject* arg6_);
void LocationManager__requestSingleUpdate3_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, uObject* arg1, ::g::Android::android::os::Looper* arg2);
void LocationManager__requestSingleUpdate_IMPL_8322_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);

struct LocationManager : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getAllProviders_8312_ID_;
    static jmethodID& getAllProviders_8312_ID() { return getAllProviders_8312_ID_; }
    static jmethodID getLastKnownLocation_8331_ID_;
    static jmethodID& getLastKnownLocation_8331_ID() { return getLastKnownLocation_8331_ID_; }
    static jfieldID GPS_PROVIDER_8303_ID_;
    static jfieldID& GPS_PROVIDER_8303_ID() { return GPS_PROVIDER_8303_ID_; }
    static jmethodID isProviderEnabled_8330_ID_;
    static jmethodID& isProviderEnabled_8330_ID() { return isProviderEnabled_8330_ID_; }
    static jfieldID NETWORK_PROVIDER_8302_ID_;
    static jfieldID& NETWORK_PROVIDER_8302_ID() { return NETWORK_PROVIDER_8302_ID_; }
    static jmethodID removeUpdates_8326_ID_;
    static jmethodID& removeUpdates_8326_ID() { return removeUpdates_8326_ID_; }
    static jmethodID requestLocationUpdates_8318_ID_;
    static jmethodID& requestLocationUpdates_8318_ID() { return requestLocationUpdates_8318_ID_; }
    static jmethodID requestSingleUpdate_8322_ID_;
    static jmethodID& requestSingleUpdate_8322_ID() { return requestSingleUpdate_8322_ID_; }

    uObject* getAllProviders();
    ::g::Android::android::location::Location* getLastKnownLocation(::g::Android::java::lang::String* arg0);
    bool isProviderEnabled(::g::Android::java::lang::String* arg0);
    void removeUpdates1(uObject* arg0);
    void requestLocationUpdates2(::g::Android::java::lang::String* arg0, int64_t arg1, float arg2, uObject* arg3, ::g::Android::android::os::Looper* arg4);
    void requestSingleUpdate3(::g::Android::java::lang::String* arg0, uObject* arg1, ::g::Android::android::os::Looper* arg2);
    static void _Init2();
    static uObject* getAllProviders_IMPL_8312(bool arg0_, jobject arg1_);
    static uObject* getLastKnownLocation_IMPL_8331(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool isProviderEnabled_IMPL_8330(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeUpdates_IMPL_8326(bool arg0_, jobject arg1_, uObject* arg2_);
    static void requestLocationUpdates_IMPL_8318(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_, float arg4_, uObject* arg5_, uObject* arg6_);
    static void requestSingleUpdate_IMPL_8322(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static ::g::Android::java::lang::String* GPS_PROVIDER();
    static ::g::Android::java::lang::String* NETWORK_PROVIDER();
};
// }

}}}} // ::g::Android::android::location

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\location\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct Location;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace location{

// public sealed extern class Location :1311
// {
struct Location_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Location_type* Location_typeof();
void Location___Init2_fn();
void Location__describeContents_fn(Location* __this, int* __retval);
void Location__describeContents_IMPL_8295_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Location__getAccuracy_fn(Location* __this, float* __retval);
void Location__getAccuracy_IMPL_8288_fn(bool* arg0_, jobject* arg1_, float* __retval);
void Location__getLatitude_fn(Location* __this, double* __retval);
void Location__getLatitude_IMPL_8271_fn(bool* arg0_, jobject* arg1_, double* __retval);
void Location__getLongitude_fn(Location* __this, double* __retval);
void Location__getLongitude_IMPL_8273_fn(bool* arg0_, jobject* arg1_, double* __retval);
void Location__getTime_fn(Location* __this, int64_t* __retval);
void Location__getTime_IMPL_8267_fn(bool* arg0_, jobject* arg1_, int64_t* __retval);
void Location__toString_fn(Location* __this, ::g::Android::java::lang::String** __retval);
void Location__toString_IMPL_8293_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Location__writeToParcel_fn(Location* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Location__writeToParcel_IMPL_8296_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Location : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_8295_ID_;
    static jmethodID& describeContents_8295_ID() { return describeContents_8295_ID_; }
    static jmethodID getAccuracy_8288_ID_;
    static jmethodID& getAccuracy_8288_ID() { return getAccuracy_8288_ID_; }
    static jmethodID getLatitude_8271_ID_;
    static jmethodID& getLatitude_8271_ID() { return getLatitude_8271_ID_; }
    static jmethodID getLongitude_8273_ID_;
    static jmethodID& getLongitude_8273_ID() { return getLongitude_8273_ID_; }
    static jmethodID getTime_8267_ID_;
    static jmethodID& getTime_8267_ID() { return getTime_8267_ID_; }
    static jmethodID toString_8293_ID_;
    static jmethodID& toString_8293_ID() { return toString_8293_ID_; }
    static jmethodID writeToParcel_8296_ID_;
    static jmethodID& writeToParcel_8296_ID() { return writeToParcel_8296_ID_; }

    int describeContents();
    float getAccuracy();
    double getLatitude();
    double getLongitude();
    int64_t getTime();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_8295(bool arg0_, jobject arg1_);
    static float getAccuracy_IMPL_8288(bool arg0_, jobject arg1_);
    static double getLatitude_IMPL_8271(bool arg0_, jobject arg1_);
    static double getLongitude_IMPL_8273(bool arg0_, jobject arg1_);
    static int64_t getTime_IMPL_8267(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_8293(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_8296(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::location

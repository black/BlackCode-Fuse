// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct ClipData;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public sealed extern class ClipData :10015
// {
struct ClipData_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

ClipData_type* ClipData_typeof();
void ClipData___Init2_fn();
void ClipData__describeContents_fn(ClipData* __this, int* __retval);
void ClipData__describeContents_IMPL_3828_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ClipData__toString_fn(ClipData* __this, ::g::Android::java::lang::String** __retval);
void ClipData__toString_IMPL_3827_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ClipData__writeToParcel_fn(ClipData* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void ClipData__writeToParcel_IMPL_3829_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct ClipData : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_3828_ID_;
    static jmethodID& describeContents_3828_ID() { return describeContents_3828_ID_; }
    static jmethodID toString_3827_ID_;
    static jmethodID& toString_3827_ID() { return toString_3827_ID_; }
    static jmethodID writeToParcel_3829_ID_;
    static jmethodID& writeToParcel_3829_ID() { return writeToParcel_3829_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_3828(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3827(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_3829(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::content

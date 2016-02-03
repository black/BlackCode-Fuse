// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public sealed extern class Bundle :3053
// {
struct Bundle_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Bundle_type* Bundle_typeof();
void Bundle___Init2_fn();
void Bundle__describeContents_fn(Bundle* __this, int* __retval);
void Bundle__describeContents_IMPL_13584_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Bundle__toString_fn(Bundle* __this, ::g::Android::java::lang::String** __retval);
void Bundle__toString_IMPL_13587_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Bundle__writeToParcel_fn(Bundle* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Bundle__writeToParcel_IMPL_13585_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Bundle : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_13584_ID_;
    static jmethodID& describeContents_13584_ID() { return describeContents_13584_ID_; }
    static jmethodID toString_13587_ID_;
    static jmethodID& toString_13587_ID() { return toString_13587_ID_; }
    static jmethodID writeToParcel_13585_ID_;
    static jmethodID& writeToParcel_13585_ID() { return writeToParcel_13585_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_13584(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_13587(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_13585(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::os

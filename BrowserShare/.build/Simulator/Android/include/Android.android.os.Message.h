// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Message;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public sealed extern class Message :6586
// {
struct Message_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Message_type* Message_typeof();
void Message___Init2_fn();
void Message__describeContents_fn(Message* __this, int* __retval);
void Message__describeContents_IMPL_13886_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Message__toString_fn(Message* __this, ::g::Android::java::lang::String** __retval);
void Message__toString_IMPL_13885_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Message__writeToParcel_fn(Message* __this, ::g::Android::android::os::Parcel* arg0, int* arg11);
void Message__writeToParcel_IMPL_13887_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Message : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_13886_ID_;
    static jmethodID& describeContents_13886_ID() { return describeContents_13886_ID_; }
    static jmethodID toString_13885_ID_;
    static jmethodID& toString_13885_ID() { return toString_13885_ID_; }
    static jmethodID writeToParcel_13887_ID_;
    static jmethodID& writeToParcel_13887_ID() { return writeToParcel_13887_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg11);
    static void _Init2();
    static int describeContents_IMPL_13886(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_13885(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_13887(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::os

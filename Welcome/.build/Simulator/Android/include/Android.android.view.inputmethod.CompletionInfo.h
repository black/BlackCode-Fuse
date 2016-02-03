// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct CompletionInfo;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// public sealed extern class CompletionInfo :282
// {
struct CompletionInfo_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

CompletionInfo_type* CompletionInfo_typeof();
void CompletionInfo___Init2_fn();
void CompletionInfo__describeContents_fn(CompletionInfo* __this, int* __retval);
void CompletionInfo__describeContents_IMPL_21284_fn(bool* arg0_, jobject* arg1_, int* __retval);
void CompletionInfo__toString_fn(CompletionInfo* __this, ::g::Android::java::lang::String** __retval);
void CompletionInfo__toString_IMPL_21282_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void CompletionInfo__writeToParcel_fn(CompletionInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void CompletionInfo__writeToParcel_IMPL_21283_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct CompletionInfo : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_21284_ID_;
    static jmethodID& describeContents_21284_ID() { return describeContents_21284_ID_; }
    static jmethodID toString_21282_ID_;
    static jmethodID& toString_21282_ID() { return toString_21282_ID_; }
    static jmethodID writeToParcel_21283_ID_;
    static jmethodID& writeToParcel_21283_ID() { return writeToParcel_21283_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_21284(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_21282(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_21283(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::view::inputmethod

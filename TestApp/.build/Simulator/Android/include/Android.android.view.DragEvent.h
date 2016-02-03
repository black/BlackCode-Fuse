// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct DragEvent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class DragEvent :9999
// {
struct DragEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

DragEvent_type* DragEvent_typeof();
void DragEvent___Init2_fn();
void DragEvent__describeContents_fn(DragEvent* __this, int* __retval);
void DragEvent__describeContents_IMPL_21704_fn(bool* arg0_, jobject* arg1_, int* __retval);
void DragEvent__toString_fn(DragEvent* __this, ::g::Android::java::lang::String** __retval);
void DragEvent__toString_IMPL_21703_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void DragEvent__writeToParcel_fn(DragEvent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void DragEvent__writeToParcel_IMPL_21705_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct DragEvent : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_21704_ID_;
    static jmethodID& describeContents_21704_ID() { return describeContents_21704_ID_; }
    static jmethodID toString_21703_ID_;
    static jmethodID& toString_21703_ID() { return toString_21703_ID_; }
    static jmethodID writeToParcel_21705_ID_;
    static jmethodID& writeToParcel_21705_ID() { return writeToParcel_21705_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_21704(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_21703(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_21705(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::view

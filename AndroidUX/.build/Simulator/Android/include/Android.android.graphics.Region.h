// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Region;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Region :11369
// {
struct Region_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Region_type* Region_typeof();
void Region___Init2_fn();
void Region__describeContents_fn(Region* __this, int* __retval);
void Region__describeContents_IMPL_7278_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Region__equals1_fn(Region* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Region__equals_IMPL_7280_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Region__toString_fn(Region* __this, ::g::Android::java::lang::String** __retval);
void Region__toString_IMPL_7277_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Region__writeToParcel_fn(Region* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Region__writeToParcel_IMPL_7279_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Region : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_7278_ID_;
    static jmethodID& describeContents_7278_ID() { return describeContents_7278_ID_; }
    static jmethodID equals_7280_ID_;
    static jmethodID& equals_7280_ID() { return equals_7280_ID_; }
    static jmethodID toString_7277_ID_;
    static jmethodID& toString_7277_ID() { return toString_7277_ID_; }
    static jmethodID writeToParcel_7279_ID_;
    static jmethodID& writeToParcel_7279_ID() { return writeToParcel_7279_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_7278(bool arg0_, jobject arg1_);
    static bool equals_IMPL_7280(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* toString_IMPL_7277(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_7279(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::graphics

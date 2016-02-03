// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct ColorStateList;}}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class ColorStateList :688
// {
struct ColorStateList_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

ColorStateList_type* ColorStateList_typeof();
void ColorStateList___Init2_fn();
void ColorStateList__describeContents_fn(ColorStateList* __this, int* __retval);
void ColorStateList__describeContents_IMPL_3527_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ColorStateList__getDefaultColor_fn(ColorStateList* __this, int* __retval);
void ColorStateList__getDefaultColor_IMPL_3525_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ColorStateList__toString_fn(ColorStateList* __this, ::g::Android::java::lang::String** __retval);
void ColorStateList__toString_IMPL_3526_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ColorStateList__writeToParcel_fn(ColorStateList* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void ColorStateList__writeToParcel_IMPL_3528_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct ColorStateList : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_3527_ID_;
    static jmethodID& describeContents_3527_ID() { return describeContents_3527_ID_; }
    static jmethodID getDefaultColor_3525_ID_;
    static jmethodID& getDefaultColor_3525_ID() { return getDefaultColor_3525_ID_; }
    static jmethodID toString_3526_ID_;
    static jmethodID& toString_3526_ID() { return toString_3526_ID_; }
    static jmethodID writeToParcel_3528_ID_;
    static jmethodID& writeToParcel_3528_ID() { return writeToParcel_3528_ID_; }

    int describeContents();
    int getDefaultColor();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_3527(bool arg0_, jobject arg1_);
    static int getDefaultColor_IMPL_3525(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3526(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_3528(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::content::res

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct RectF;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class RectF :10868
// {
struct RectF_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

RectF_type* RectF_typeof();
void RectF___Init2_fn();
void RectF__describeContents_fn(RectF* __this, int* __retval);
void RectF__describeContents_IMPL_7235_fn(bool* arg0_, jobject* arg1_, int* __retval);
void RectF__equals1_fn(RectF* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void RectF__equals_IMPL_7205_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void RectF__hashCode1_fn(RectF* __this, int* __retval);
void RectF__hashCode_IMPL_7206_fn(bool* arg0_, jobject* arg1_, int* __retval);
void RectF__toString_fn(RectF* __this, ::g::Android::java::lang::String** __retval);
void RectF__toString_IMPL_7207_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void RectF__writeToParcel_fn(RectF* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void RectF__writeToParcel_IMPL_7236_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct RectF : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_7235_ID_;
    static jmethodID& describeContents_7235_ID() { return describeContents_7235_ID_; }
    static jmethodID equals_7205_ID_;
    static jmethodID& equals_7205_ID() { return equals_7205_ID_; }
    static jmethodID hashCode_7206_ID_;
    static jmethodID& hashCode_7206_ID() { return hashCode_7206_ID_; }
    static jmethodID toString_7207_ID_;
    static jmethodID& toString_7207_ID() { return toString_7207_ID_; }
    static jmethodID writeToParcel_7236_ID_;
    static jmethodID& writeToParcel_7236_ID() { return writeToParcel_7236_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_7235(bool arg0_, jobject arg1_);
    static bool equals_IMPL_7205(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_7206(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_7207(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_7236(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::graphics

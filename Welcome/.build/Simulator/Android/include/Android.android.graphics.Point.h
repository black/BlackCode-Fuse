// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Point;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Point :9728
// {
struct Point_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Point_type* Point_typeof();
void Point___Init2_fn();
void Point__describeContents_fn(Point* __this, int* __retval);
void Point__describeContents_IMPL_7105_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Point__equals1_fn(Point* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Point__equals_IMPL_7102_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Point__hashCode1_fn(Point* __this, int* __retval);
void Point__hashCode_IMPL_7103_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Point__toString_fn(Point* __this, ::g::Android::java::lang::String** __retval);
void Point__toString_IMPL_7104_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Point__writeToParcel_fn(Point* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Point__writeToParcel_IMPL_7106_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Point : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_7105_ID_;
    static jmethodID& describeContents_7105_ID() { return describeContents_7105_ID_; }
    static jmethodID equals_7102_ID_;
    static jmethodID& equals_7102_ID() { return equals_7102_ID_; }
    static jmethodID hashCode_7103_ID_;
    static jmethodID& hashCode_7103_ID() { return hashCode_7103_ID_; }
    static jmethodID toString_7104_ID_;
    static jmethodID& toString_7104_ID() { return toString_7104_ID_; }
    static jmethodID writeToParcel_7106_ID_;
    static jmethodID& writeToParcel_7106_ID() { return writeToParcel_7106_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_7105(bool arg0_, jobject arg1_);
    static bool equals_IMPL_7102(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_7103(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_7104(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_7106(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::graphics

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Configuration;}}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class Configuration :825
// {
struct Configuration_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Configuration_type* Configuration_typeof();
void Configuration___Init2_fn();
void Configuration__describeContents_fn(Configuration* __this, int* __retval);
void Configuration__describeContents_IMPL_3614_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Configuration__equals1_fn(Configuration* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Configuration__equals_IMPL_3619_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Configuration__hashCode1_fn(Configuration* __this, int* __retval);
void Configuration__hashCode_IMPL_3620_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Configuration__toString_fn(Configuration* __this, ::g::Android::java::lang::String** __retval);
void Configuration__toString_IMPL_3609_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Configuration__writeToParcel_fn(Configuration* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Configuration__writeToParcel_IMPL_3615_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Configuration : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_3614_ID_;
    static jmethodID& describeContents_3614_ID() { return describeContents_3614_ID_; }
    static jmethodID equals_3619_ID_;
    static jmethodID& equals_3619_ID() { return equals_3619_ID_; }
    static jmethodID hashCode_3620_ID_;
    static jmethodID& hashCode_3620_ID() { return hashCode_3620_ID_; }
    static jmethodID toString_3609_ID_;
    static jmethodID& toString_3609_ID() { return toString_3609_ID_; }
    static jmethodID writeToParcel_3615_ID_;
    static jmethodID& writeToParcel_3615_ID() { return writeToParcel_3615_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_3614(bool arg0_, jobject arg1_);
    static bool equals_IMPL_3619(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_3620(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3609(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_3615(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::content::res

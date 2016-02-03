// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct ComponentName;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public sealed extern class ComponentName :10538
// {
struct ComponentName_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

ComponentName_type* ComponentName_typeof();
void ComponentName___Init2_fn();
void ComponentName__describeContents_fn(ComponentName* __this, int* __retval);
void ComponentName__describeContents_IMPL_3884_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ComponentName__equals1_fn(ComponentName* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void ComponentName__equals_IMPL_3881_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ComponentName__hashCode1_fn(ComponentName* __this, int* __retval);
void ComponentName__hashCode_IMPL_3882_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ComponentName__toString_fn(ComponentName* __this, ::g::Android::java::lang::String** __retval);
void ComponentName__toString_IMPL_3880_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ComponentName__writeToParcel1_fn(ComponentName* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void ComponentName__writeToParcel_IMPL_3885_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct ComponentName : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_3884_ID_;
    static jmethodID& describeContents_3884_ID() { return describeContents_3884_ID_; }
    static jmethodID equals_3881_ID_;
    static jmethodID& equals_3881_ID() { return equals_3881_ID_; }
    static jmethodID hashCode_3882_ID_;
    static jmethodID& hashCode_3882_ID() { return hashCode_3882_ID_; }
    static jmethodID toString_3880_ID_;
    static jmethodID& toString_3880_ID() { return toString_3880_ID_; }
    static jmethodID writeToParcel_3885_ID_;
    static jmethodID& writeToParcel_3885_ID() { return writeToParcel_3885_ID_; }

    int describeContents();
    void writeToParcel1(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_3884(bool arg0_, jobject arg1_);
    static bool equals_IMPL_3881(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_3882(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3880(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_3885(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::content

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace accessibility{

// public sealed extern class AccessibilityNodeInfo :1710
// {
struct AccessibilityNodeInfo_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

AccessibilityNodeInfo_type* AccessibilityNodeInfo_typeof();
void AccessibilityNodeInfo___Init2_fn();
void AccessibilityNodeInfo__describeContents_fn(AccessibilityNodeInfo* __this, int* __retval);
void AccessibilityNodeInfo__describeContents_IMPL_20948_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AccessibilityNodeInfo__equals1_fn(AccessibilityNodeInfo* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void AccessibilityNodeInfo__equals_IMPL_20955_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AccessibilityNodeInfo__hashCode1_fn(AccessibilityNodeInfo* __this, int* __retval);
void AccessibilityNodeInfo__hashCode_IMPL_20956_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AccessibilityNodeInfo__toString_fn(AccessibilityNodeInfo* __this, ::g::Android::java::lang::String** __retval);
void AccessibilityNodeInfo__toString_IMPL_20957_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AccessibilityNodeInfo__writeToParcel_fn(AccessibilityNodeInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void AccessibilityNodeInfo__writeToParcel_IMPL_20954_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct AccessibilityNodeInfo : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_20948_ID_;
    static jmethodID& describeContents_20948_ID() { return describeContents_20948_ID_; }
    static jmethodID equals_20955_ID_;
    static jmethodID& equals_20955_ID() { return equals_20955_ID_; }
    static jmethodID hashCode_20956_ID_;
    static jmethodID& hashCode_20956_ID() { return hashCode_20956_ID_; }
    static jmethodID toString_20957_ID_;
    static jmethodID& toString_20957_ID() { return toString_20957_ID_; }
    static jmethodID writeToParcel_20954_ID_;
    static jmethodID& writeToParcel_20954_ID() { return writeToParcel_20954_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_20948(bool arg0_, jobject arg1_);
    static bool equals_IMPL_20955(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_20956(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_20957(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_20954(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}}} // ::g::Android::android::view::accessibility

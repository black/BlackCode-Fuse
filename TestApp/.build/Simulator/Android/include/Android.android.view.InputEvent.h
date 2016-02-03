// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct InputEvent;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern class InputEvent :473
// {
struct InputEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
    void(*fp_writeToParcel)(::g::Android::android::view::InputEvent*, ::g::Android::android::os::Parcel*, int*);
};

InputEvent_type* InputEvent_typeof();
void InputEvent___Init2_fn();
void InputEvent__describeContents_fn(InputEvent* __this, int* __retval);
void InputEvent__describeContents_IMPL_21856_fn(bool* arg0_, jobject* arg1_, int* __retval);

struct InputEvent : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_21856_ID_;
    static jmethodID& describeContents_21856_ID() { return describeContents_21856_ID_; }

    int describeContents();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1) { (((InputEvent_type*)__type)->fp_writeToParcel)(this, arg0, &arg1); }
    static void _Init2();
    static int describeContents_IMPL_21856(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::view

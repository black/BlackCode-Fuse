// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct Surface;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class Surface :21045
// {
struct Surface_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Surface_type* Surface_typeof();
void Surface__ctor_4_fn(Surface* __this, ::g::Android::android::graphics::SurfaceTexture* arg0);
void Surface___Init2_fn();
void Surface__describeContents_fn(Surface* __this, int* __retval);
void Surface__describeContents_IMPL_22600_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Surface__New5_fn(::g::Android::android::graphics::SurfaceTexture* arg0, Surface** __retval);
void Surface__release_fn(Surface* __this);
void Surface__release_IMPL_22595_fn(bool* arg0_, jobject* arg1_);
void Surface__toString_fn(Surface* __this, ::g::Android::java::lang::String** __retval);
void Surface__toString_IMPL_22603_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Surface__writeToParcel_fn(Surface* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Surface__writeToParcel_IMPL_22602_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Surface : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID describeContents_22600_ID_;
    static jmethodID& describeContents_22600_ID() { return describeContents_22600_ID_; }
    static jmethodID release_22595_ID_;
    static jmethodID& release_22595_ID() { return release_22595_ID_; }
    static jmethodID Surface_22593_ID_c_;
    static jmethodID& Surface_22593_ID_c() { return Surface_22593_ID_c_; }
    static jmethodID toString_22603_ID_;
    static jmethodID& toString_22603_ID() { return toString_22603_ID_; }
    static jmethodID writeToParcel_22602_ID_;
    static jmethodID& writeToParcel_22602_ID() { return writeToParcel_22602_ID_; }

    void ctor_4(::g::Android::android::graphics::SurfaceTexture* arg0);
    int describeContents();
    void release();
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static int describeContents_IMPL_22600(bool arg0_, jobject arg1_);
    static Surface* New5(::g::Android::android::graphics::SurfaceTexture* arg0);
    static void release_IMPL_22595(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_22603(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_22602(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::view

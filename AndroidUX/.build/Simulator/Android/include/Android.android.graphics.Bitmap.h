// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct BitmapDLRConfig;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Bitmap :2141
// {
struct Bitmap_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::Parcelable interface2;
};

Bitmap_type* Bitmap_typeof();
void Bitmap___Init2_fn();
void Bitmap__createBitmap8_fn(int* arg0, int* arg1, ::g::Android::android::graphics::BitmapDLRConfig* arg2, Bitmap** __retval);
void Bitmap__createBitmap_IMPL_6455_fn(int* arg0_, int* arg1_, uObject* arg2_, uObject** __retval);
void Bitmap__describeContents_fn(Bitmap* __this, int* __retval);
void Bitmap__describeContents_IMPL_6487_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Bitmap__eraseColor_fn(Bitmap* __this, int* arg0);
void Bitmap__eraseColor_IMPL_6482_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Bitmap__recycle_fn(Bitmap* __this);
void Bitmap__recycle_IMPL_6445_fn(bool* arg0_, jobject* arg1_);
void Bitmap__setHasMipMap_fn(Bitmap* __this, bool* arg0);
void Bitmap__setHasMipMap_IMPL_6481_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void Bitmap__writeToParcel_fn(Bitmap* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void Bitmap__writeToParcel_IMPL_6488_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Bitmap : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID createBitmap_6455_ID_;
    static jmethodID& createBitmap_6455_ID() { return createBitmap_6455_ID_; }
    static jmethodID describeContents_6487_ID_;
    static jmethodID& describeContents_6487_ID() { return describeContents_6487_ID_; }
    static jmethodID eraseColor_6482_ID_;
    static jmethodID& eraseColor_6482_ID() { return eraseColor_6482_ID_; }
    static jmethodID recycle_6445_ID_;
    static jmethodID& recycle_6445_ID() { return recycle_6445_ID_; }
    static jmethodID setHasMipMap_6481_ID_;
    static jmethodID& setHasMipMap_6481_ID() { return setHasMipMap_6481_ID_; }
    static jmethodID writeToParcel_6488_ID_;
    static jmethodID& writeToParcel_6488_ID() { return writeToParcel_6488_ID_; }

    int describeContents();
    void eraseColor(int arg0);
    void recycle();
    void setHasMipMap(bool arg0);
    void writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1);
    static void _Init2();
    static Bitmap* createBitmap8(int arg0, int arg1, ::g::Android::android::graphics::BitmapDLRConfig* arg2);
    static uObject* createBitmap_IMPL_6455(int arg0_, int arg1_, uObject* arg2_);
    static int describeContents_IMPL_6487(bool arg0_, jobject arg1_);
    static void eraseColor_IMPL_6482(bool arg0_, jobject arg1_, int arg2_);
    static void recycle_IMPL_6445(bool arg0_, jobject arg1_);
    static void setHasMipMap_IMPL_6481(bool arg0_, jobject arg1_, bool arg2_);
    static void writeToParcel_IMPL_6488(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::graphics

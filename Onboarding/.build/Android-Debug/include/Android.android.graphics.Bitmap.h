// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct BitmapDLRConfig;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Bitmap :2141
// {
::g::Android::java::lang::Object_type* Bitmap_typeof();
void Bitmap___Init2_fn();
void Bitmap__createBitmap8_fn(int* arg0, int* arg1, ::g::Android::android::graphics::BitmapDLRConfig* arg2, Bitmap** __retval);
void Bitmap__createBitmap_IMPL_6455_fn(int* arg0_, int* arg1_, uObject* arg2_, uObject** __retval);
void Bitmap__eraseColor_fn(Bitmap* __this, int* arg0);
void Bitmap__eraseColor_IMPL_6482_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Bitmap__recycle_fn(Bitmap* __this);
void Bitmap__recycle_IMPL_6445_fn(bool* arg0_, jobject* arg1_);
void Bitmap__setHasMipMap_fn(Bitmap* __this, bool* arg0);
void Bitmap__setHasMipMap_IMPL_6481_fn(bool* arg0_, jobject* arg1_, bool* arg2_);

struct Bitmap : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID createBitmap_6455_ID_;
    static jmethodID& createBitmap_6455_ID() { return createBitmap_6455_ID_; }
    static jmethodID eraseColor_6482_ID_;
    static jmethodID& eraseColor_6482_ID() { return eraseColor_6482_ID_; }
    static jmethodID recycle_6445_ID_;
    static jmethodID& recycle_6445_ID() { return recycle_6445_ID_; }
    static jmethodID setHasMipMap_6481_ID_;
    static jmethodID& setHasMipMap_6481_ID() { return setHasMipMap_6481_ID_; }

    void eraseColor(int arg0);
    void recycle();
    void setHasMipMap(bool arg0);
    static void _Init2();
    static Bitmap* createBitmap8(int arg0, int arg1, ::g::Android::android::graphics::BitmapDLRConfig* arg2);
    static uObject* createBitmap_IMPL_6455(int arg0_, int arg1_, uObject* arg2_);
    static void eraseColor_IMPL_6482(bool arg0_, jobject arg1_, int arg2_);
    static void recycle_IMPL_6445(bool arg0_, jobject arg1_);
    static void setHasMipMap_IMPL_6481(bool arg0_, jobject arg1_, bool arg2_);
};
// }

}}}} // ::g::Android::android::graphics

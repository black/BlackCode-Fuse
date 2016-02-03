// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_BITMAP_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_BITMAP_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct BitmapDLRConfig; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Bitmap;

extern jclass Bitmap___javaClass_2;
extern jmethodID Bitmap__createBitmap_6455_ID;
extern jmethodID Bitmap__describeContents_6487_ID;
extern jmethodID Bitmap__eraseColor_6482_ID;
extern jmethodID Bitmap__recycle_6445_ID;
extern jmethodID Bitmap__setHasMipMap_6481_ID;
extern jmethodID Bitmap__writeToParcel_6488_ID;

struct Bitmap__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Bitmap__uType* Bitmap__typeof();

void Bitmap___Init_2(::uStatic* __this);
Bitmap* Bitmap__createBitmap_6(::uStatic* __this, int arg0, int arg1, ::app::Android::android::graphics::BitmapDLRConfig* arg2);
::uObject* Bitmap__createBitmap_IMPL_6455(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_);
int Bitmap__describeContents(Bitmap* __this);
int Bitmap__describeContents_IMPL_6487(::uStatic* __this, bool arg0_, jobject arg1_);
void Bitmap__eraseColor(Bitmap* __this, int arg0);
void Bitmap__eraseColor_IMPL_6482(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Bitmap__recycle(Bitmap* __this);
void Bitmap__recycle_IMPL_6445(::uStatic* __this, bool arg0_, jobject arg1_);
void Bitmap__setHasMipMap(Bitmap* __this, bool arg0);
void Bitmap__setHasMipMap_IMPL_6481(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void Bitmap__writeToParcel(Bitmap* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Bitmap__writeToParcel_IMPL_6488(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Bitmap : ::app::Android::java::lang::Object
{
    int describeContents() { return Bitmap__describeContents(this); }
    void eraseColor(int arg0) { Bitmap__eraseColor(this, arg0); }
    void recycle() { Bitmap__recycle(this); }
    void setHasMipMap(bool arg0) { Bitmap__setHasMipMap(this, arg0); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Bitmap__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

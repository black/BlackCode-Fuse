// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct Surface;

extern jclass Surface___javaClass_2;
extern jmethodID Surface__describeContents_22600_ID;
extern jmethodID Surface__finalize_22594_ID;
extern jmethodID Surface__release_22595_ID;
extern jmethodID Surface__Surface_22593_ID_c;
extern jmethodID Surface__toString_22603_ID;
extern jmethodID Surface__writeToParcel_22602_ID;

struct Surface__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Surface__uType* Surface__typeof();

void Surface___Init_2(::uStatic* __this);
void Surface___ObjInit_4(Surface* __this, ::app::Android::android::graphics::SurfaceTexture* arg0);
int Surface__describeContents(Surface* __this);
int Surface__describeContents_IMPL_22600(::uStatic* __this, bool arg0_, jobject arg1_);
void Surface__finalize(Surface* __this);
void Surface__finalize_IMPL_22594(::uStatic* __this, bool arg0_, jobject arg1_);
Surface* Surface__New_5(::uStatic* __this, ::app::Android::android::graphics::SurfaceTexture* arg0);
void Surface__release(Surface* __this);
void Surface__release_IMPL_22595(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Surface__toString(Surface* __this);
::uObject* Surface__toString_IMPL_22603(::uStatic* __this, bool arg0_, jobject arg1_);
void Surface__writeToParcel(Surface* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Surface__writeToParcel_IMPL_22602(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Surface : ::app::Android::java::lang::Object
{
    void _ObjInit_4(::app::Android::android::graphics::SurfaceTexture* arg0) { Surface___ObjInit_4(this, arg0); }
    int describeContents() { return Surface__describeContents(this); }
    void release() { Surface__release(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Surface__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

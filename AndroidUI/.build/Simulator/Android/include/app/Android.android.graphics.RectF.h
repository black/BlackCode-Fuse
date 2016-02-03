// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_RECT_F_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_RECT_F_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct RectF;

extern jclass RectF___javaClass_2;
extern jmethodID RectF__describeContents_7235_ID;
extern jmethodID RectF__equals_7205_ID;
extern jmethodID RectF__hashCode_7206_ID;
extern jmethodID RectF__toString_7207_ID;
extern jmethodID RectF__writeToParcel_7236_ID;

struct RectF__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

RectF__uType* RectF__typeof();

void RectF___Init_2(::uStatic* __this);
int RectF__describeContents(RectF* __this);
int RectF__describeContents_IMPL_7235(::uStatic* __this, bool arg0_, jobject arg1_);
bool RectF__equals_1(RectF* __this, ::app::Android::java::lang::Object* arg0);
bool RectF__equals_IMPL_7205(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int RectF__hashCode_1(RectF* __this);
int RectF__hashCode_IMPL_7206(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* RectF__toString(RectF* __this);
::uObject* RectF__toString_IMPL_7207(::uStatic* __this, bool arg0_, jobject arg1_);
void RectF__writeToParcel(RectF* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void RectF__writeToParcel_IMPL_7236(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct RectF : ::app::Android::java::lang::Object
{
    int describeContents() { return RectF__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { RectF__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_POINT_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_POINT_H__

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

struct Point;

extern jclass Point___javaClass_2;
extern jmethodID Point__describeContents_7105_ID;
extern jmethodID Point__equals_7102_ID;
extern jmethodID Point__hashCode_7103_ID;
extern jmethodID Point__toString_7104_ID;
extern jmethodID Point__writeToParcel_7106_ID;

struct Point__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Point__uType* Point__typeof();

void Point___Init_2(::uStatic* __this);
int Point__describeContents(Point* __this);
int Point__describeContents_IMPL_7105(::uStatic* __this, bool arg0_, jobject arg1_);
bool Point__equals_1(Point* __this, ::app::Android::java::lang::Object* arg0);
bool Point__equals_IMPL_7102(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Point__hashCode_1(Point* __this);
int Point__hashCode_IMPL_7103(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Point__toString(Point* __this);
::uObject* Point__toString_IMPL_7104(::uStatic* __this, bool arg0_, jobject arg1_);
void Point__writeToParcel(Point* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Point__writeToParcel_IMPL_7106(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Point : ::app::Android::java::lang::Object
{
    int describeContents() { return Point__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Point__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

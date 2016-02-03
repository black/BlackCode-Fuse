// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_RECT_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_RECT_H__

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

struct Rect;

extern jclass Rect___javaClass_2;
extern jfieldID Rect__bottom_7157_ID;
extern jmethodID Rect__describeContents_7193_ID;
extern jmethodID Rect__equals_7162_ID;
extern jmethodID Rect__hashCode_7163_ID;
extern jfieldID Rect__left_7154_ID;
extern jmethodID Rect__Rect_7159_ID_c;
extern jfieldID Rect__right_7156_ID;
extern jfieldID Rect__top_7155_ID;
extern jmethodID Rect__toString_7164_ID;
extern jmethodID Rect__writeToParcel_7194_ID;

struct Rect__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Rect__uType* Rect__typeof();

void Rect___Init_2(::uStatic* __this);
void Rect___ObjInit_4(Rect* __this);
int Rect__describeContents(Rect* __this);
int Rect__describeContents_IMPL_7193(::uStatic* __this, bool arg0_, jobject arg1_);
bool Rect__equals_1(Rect* __this, ::app::Android::java::lang::Object* arg0);
bool Rect__equals_IMPL_7162(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Rect__get_bottom(Rect* __this);
int Rect__get_left(Rect* __this);
int Rect__get_right(Rect* __this);
int Rect__get_top(Rect* __this);
int Rect__hashCode_1(Rect* __this);
int Rect__hashCode_IMPL_7163(::uStatic* __this, bool arg0_, jobject arg1_);
Rect* Rect__New_5(::uStatic* __this);
void Rect__set_bottom(Rect* __this, int value);
void Rect__set_left(Rect* __this, int value);
void Rect__set_right(Rect* __this, int value);
void Rect__set_top(Rect* __this, int value);
::app::Android::java::lang::String* Rect__toString(Rect* __this);
::uObject* Rect__toString_IMPL_7164(::uStatic* __this, bool arg0_, jobject arg1_);
void Rect__writeToParcel(Rect* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Rect__writeToParcel_IMPL_7194(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Rect : ::app::Android::java::lang::Object
{
    void _ObjInit_4() { Rect___ObjInit_4(this); }
    int describeContents() { return Rect__describeContents(this); }
    int bottom() { return Rect__get_bottom(this); }
    int left() { return Rect__get_left(this); }
    int right() { return Rect__get_right(this); }
    int top() { return Rect__get_top(this); }
    void bottom(int value) { Rect__set_bottom(this, value); }
    void left(int value) { Rect__set_left(this, value); }
    void right(int value) { Rect__set_right(this, value); }
    void top(int value) { Rect__set_top(this, value); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Rect__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

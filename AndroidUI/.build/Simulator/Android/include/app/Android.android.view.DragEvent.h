// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_DRAG_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_DRAG_EVENT_H__

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
namespace view {

struct DragEvent;

extern jclass DragEvent___javaClass_2;
extern jmethodID DragEvent__describeContents_21704_ID;
extern jmethodID DragEvent__toString_21703_ID;
extern jmethodID DragEvent__writeToParcel_21705_ID;

struct DragEvent__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

DragEvent__uType* DragEvent__typeof();

void DragEvent___Init_2(::uStatic* __this);
int DragEvent__describeContents(DragEvent* __this);
int DragEvent__describeContents_IMPL_21704(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* DragEvent__toString(DragEvent* __this);
::uObject* DragEvent__toString_IMPL_21703(::uStatic* __this, bool arg0_, jobject arg1_);
void DragEvent__writeToParcel(DragEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void DragEvent__writeToParcel_IMPL_21705(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct DragEvent : ::app::Android::java::lang::Object
{
    int describeContents() { return DragEvent__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { DragEvent__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

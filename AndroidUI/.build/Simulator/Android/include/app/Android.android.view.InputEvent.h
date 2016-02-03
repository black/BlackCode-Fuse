// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUT_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUT_EVENT_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct InputEvent;

extern jclass InputEvent___javaClass_2;
extern jmethodID InputEvent__describeContents_21856_ID;

struct InputEvent__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
    void(*__fp_writeToParcel)(InputEvent*, ::app::Android::android::os::Parcel*, int);
};

InputEvent__uType* InputEvent__typeof();

void InputEvent___Init_2(::uStatic* __this);
int InputEvent__describeContents(InputEvent* __this);
int InputEvent__describeContents_IMPL_21856(::uStatic* __this, bool arg0_, jobject arg1_);

struct InputEvent : ::app::Android::java::lang::Object
{
    int describeContents() { return InputEvent__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { (((InputEvent__uType*)this->__obj_type)->__fp_writeToParcel)(this, arg0, arg1); }
};

}}}}


#endif

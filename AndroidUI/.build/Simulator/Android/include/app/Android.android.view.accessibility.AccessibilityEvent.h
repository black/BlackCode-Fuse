// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITY_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITY_EVENT_H__

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
namespace accessibility {

struct AccessibilityEvent;

extern jclass AccessibilityEvent___javaClass_3;
extern jmethodID AccessibilityEvent__describeContents_20784_ID;
extern jmethodID AccessibilityEvent__toString_20785_ID;
extern jmethodID AccessibilityEvent__writeToParcel_20783_ID;

struct AccessibilityEvent__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

AccessibilityEvent__uType* AccessibilityEvent__typeof();

void AccessibilityEvent___Init_3(::uStatic* __this);
int AccessibilityEvent__describeContents(AccessibilityEvent* __this);
int AccessibilityEvent__describeContents_IMPL_20784(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* AccessibilityEvent__toString(AccessibilityEvent* __this);
::uObject* AccessibilityEvent__toString_IMPL_20785(::uStatic* __this, bool arg0_, jobject arg1_);
void AccessibilityEvent__writeToParcel(AccessibilityEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void AccessibilityEvent__writeToParcel_IMPL_20783(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct AccessibilityEvent : ::app::Android::java::lang::Object
{
    int describeContents() { return AccessibilityEvent__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { AccessibilityEvent__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif

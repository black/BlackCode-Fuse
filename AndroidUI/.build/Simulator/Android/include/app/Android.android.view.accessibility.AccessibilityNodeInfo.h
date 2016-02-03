// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITY_NODE_INFO_H__
#define __APP_ANDROID_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITY_NODE_INFO_H__

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

struct AccessibilityNodeInfo;

extern jclass AccessibilityNodeInfo___javaClass_2;
extern jmethodID AccessibilityNodeInfo__describeContents_20948_ID;
extern jmethodID AccessibilityNodeInfo__equals_20955_ID;
extern jmethodID AccessibilityNodeInfo__hashCode_20956_ID;
extern jmethodID AccessibilityNodeInfo__toString_20957_ID;
extern jmethodID AccessibilityNodeInfo__writeToParcel_20954_ID;

struct AccessibilityNodeInfo__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

AccessibilityNodeInfo__uType* AccessibilityNodeInfo__typeof();

void AccessibilityNodeInfo___Init_2(::uStatic* __this);
int AccessibilityNodeInfo__describeContents(AccessibilityNodeInfo* __this);
int AccessibilityNodeInfo__describeContents_IMPL_20948(::uStatic* __this, bool arg0_, jobject arg1_);
bool AccessibilityNodeInfo__equals_1(AccessibilityNodeInfo* __this, ::app::Android::java::lang::Object* arg0);
bool AccessibilityNodeInfo__equals_IMPL_20955(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int AccessibilityNodeInfo__hashCode_1(AccessibilityNodeInfo* __this);
int AccessibilityNodeInfo__hashCode_IMPL_20956(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* AccessibilityNodeInfo__toString(AccessibilityNodeInfo* __this);
::uObject* AccessibilityNodeInfo__toString_IMPL_20957(::uStatic* __this, bool arg0_, jobject arg1_);
void AccessibilityNodeInfo__writeToParcel(AccessibilityNodeInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void AccessibilityNodeInfo__writeToParcel_IMPL_20954(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct AccessibilityNodeInfo : ::app::Android::java::lang::Object
{
    int describeContents() { return AccessibilityNodeInfo__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { AccessibilityNodeInfo__writeToParcel(this, arg0, arg1); }
};

}}}}}


#endif

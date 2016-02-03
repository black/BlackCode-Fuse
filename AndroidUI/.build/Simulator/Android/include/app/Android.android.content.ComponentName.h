// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_COMPONENT_NAME_H__
#define __APP_ANDROID_ANDROID_CONTENT_COMPONENT_NAME_H__

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
namespace content {

struct ComponentName;

extern jclass ComponentName___javaClass_2;
extern jmethodID ComponentName__describeContents_3884_ID;
extern jmethodID ComponentName__equals_3881_ID;
extern jmethodID ComponentName__hashCode_3882_ID;
extern jmethodID ComponentName__toString_3880_ID;
extern jmethodID ComponentName__writeToParcel_3885_ID;

struct ComponentName__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

ComponentName__uType* ComponentName__typeof();

void ComponentName___Init_2(::uStatic* __this);
int ComponentName__describeContents(ComponentName* __this);
int ComponentName__describeContents_IMPL_3884(::uStatic* __this, bool arg0_, jobject arg1_);
bool ComponentName__equals_1(ComponentName* __this, ::app::Android::java::lang::Object* arg0);
bool ComponentName__equals_IMPL_3881(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int ComponentName__hashCode_1(ComponentName* __this);
int ComponentName__hashCode_IMPL_3882(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* ComponentName__toString(ComponentName* __this);
::uObject* ComponentName__toString_IMPL_3880(::uStatic* __this, bool arg0_, jobject arg1_);
void ComponentName__writeToParcel_1(ComponentName* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void ComponentName__writeToParcel_IMPL_3885(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct ComponentName : ::app::Android::java::lang::Object
{
    int describeContents() { return ComponentName__describeContents(this); }
    void writeToParcel_1(::app::Android::android::os::Parcel* arg0, int arg1) { ComponentName__writeToParcel_1(this, arg0, arg1); }
};

}}}}


#endif

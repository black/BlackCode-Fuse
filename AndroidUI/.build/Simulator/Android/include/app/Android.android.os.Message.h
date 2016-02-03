// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_MESSAGE_H__
#define __APP_ANDROID_ANDROID_OS_MESSAGE_H__

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
namespace os {

struct Message;

extern jclass Message___javaClass_2;
extern jmethodID Message__describeContents_13886_ID;
extern jmethodID Message__toString_13885_ID;
extern jmethodID Message__writeToParcel_13887_ID;

struct Message__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
};

Message__uType* Message__typeof();

void Message___Init_2(::uStatic* __this);
int Message__describeContents(Message* __this);
int Message__describeContents_IMPL_13886(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Message__toString(Message* __this);
::uObject* Message__toString_IMPL_13885(::uStatic* __this, bool arg0_, jobject arg1_);
void Message__writeToParcel(Message* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void Message__writeToParcel_IMPL_13887(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Message : ::app::Android::java::lang::Object
{
    int describeContents() { return Message__describeContents(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { Message__writeToParcel(this, arg0, arg1); }
};

}}}}


#endif

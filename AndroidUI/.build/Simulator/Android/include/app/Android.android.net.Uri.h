// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\net\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_NET_URI_H__
#define __APP_ANDROID_ANDROID_NET_URI_H__

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
namespace net {

struct Uri;

extern jclass Uri___javaClass_2;
extern jmethodID Uri__equals_10991_ID;
extern jmethodID Uri__hashCode_10992_ID;
extern jmethodID Uri__parse_10996_ID;

struct Uri__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::Parcelable __interface_2;
    int(*__fp_describeContents)(Uri*);
    void(*__fp_writeToParcel)(Uri*, ::app::Android::android::os::Parcel*, int);
};

Uri__uType* Uri__typeof();

void Uri___Init_2(::uStatic* __this);
bool Uri__equals_1(Uri* __this, ::app::Android::java::lang::Object* arg0);
bool Uri__equals_IMPL_10991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Uri__hashCode_1(Uri* __this);
int Uri__hashCode_IMPL_10992(::uStatic* __this, bool arg0_, jobject arg1_);
Uri* Uri__parse(::uStatic* __this, ::app::Android::java::lang::String* arg0);
::uObject* Uri__parse_IMPL_10996(::uStatic* __this, ::uObject* arg0_);

struct Uri : ::app::Android::java::lang::Object
{
    int describeContents() { return (((Uri__uType*)this->__obj_type)->__fp_describeContents)(this); }
    void writeToParcel(::app::Android::android::os::Parcel* arg0, int arg1) { (((Uri__uType*)this->__obj_type)->__fp_writeToParcel)(this, arg0, arg1); }
};

}}}}


#endif

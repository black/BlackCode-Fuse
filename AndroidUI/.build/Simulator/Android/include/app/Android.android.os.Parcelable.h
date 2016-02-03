// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_PARCELABLE_H__
#define __APP_ANDROID_ANDROID_OS_PARCELABLE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }

namespace app {
namespace Android {
namespace android {
namespace os {

::uInterfaceType* Parcelable__typeof();

struct Parcelable
{
    int(*__fp_describeContents)(void*);
    void(*__fp_writeToParcel)(void*, ::app::Android::android::os::Parcel*, int);

    static int describeContents(::uObject* __this) { return ((Parcelable*)uGetInterfacePtr(__this, Parcelable__typeof()))->__fp_describeContents((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void writeToParcel(::uObject* __this, ::app::Android::android::os::Parcel* arg0, int arg1) { ((Parcelable*)uGetInterfacePtr(__this, Parcelable__typeof()))->__fp_writeToParcel((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif

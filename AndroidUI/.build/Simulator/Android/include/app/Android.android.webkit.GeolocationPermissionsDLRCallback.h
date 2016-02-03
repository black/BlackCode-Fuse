// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_GEOLOCATION_PERMISSIONS_D_L_R_CALLBACK_H__
#define __APP_ANDROID_ANDROID_WEBKIT_GEOLOCATION_PERMISSIONS_D_L_R_CALLBACK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace webkit {

::uInterfaceType* GeolocationPermissionsDLRCallback__typeof();

struct GeolocationPermissionsDLRCallback
{
    void(*__fp_invoke)(void*, ::app::Android::java::lang::String*, bool, bool);

    static void invoke(::uObject* __this, ::app::Android::java::lang::String* arg0, bool arg1, bool arg2) { ((GeolocationPermissionsDLRCallback*)uGetInterfacePtr(__this, GeolocationPermissionsDLRCallback__typeof()))->__fp_invoke((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
};

}}}}


#endif

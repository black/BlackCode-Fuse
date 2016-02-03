// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_I_INTERFACE_H__
#define __APP_ANDROID_ANDROID_OS_I_INTERFACE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace os {

::uInterfaceType* IInterface__typeof();

struct IInterface
{
    ::uObject*(*__fp_asBinder)(void*);

    static ::uObject* asBinder(::uObject* __this) { return ((IInterface*)uGetInterfacePtr(__this, IInterface__typeof()))->__fp_asBinder((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif

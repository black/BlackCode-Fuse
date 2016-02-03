// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_WRAPPERS_I_J_WRAPPER_H__
#define __APP_ANDROID_BASE_WRAPPERS_I_J_WRAPPER_H__

#include <app/Uno.Object.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Base {
namespace Wrappers {

::uInterfaceType* IJWrapper__typeof();

struct IJWrapper
{
    jobject(*__fp__GetJavaObject)(void*);
    bool(*__fp__IsSubclassed)(void*);

    static jobject _GetJavaObject(::uObject* __this) { return ((IJWrapper*)uGetInterfacePtr(__this, IJWrapper__typeof()))->__fp__GetJavaObject((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool _IsSubclassed(::uObject* __this) { return ((IJWrapper*)uGetInterfacePtr(__this, IJWrapper__typeof()))->__fp__IsSubclassed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif

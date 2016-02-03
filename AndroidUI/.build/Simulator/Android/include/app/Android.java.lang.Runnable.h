// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_RUNNABLE_H__
#define __APP_ANDROID_JAVA_LANG_RUNNABLE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace java {
namespace lang {

::uInterfaceType* Runnable__typeof();

struct Runnable
{
    void(*__fp_run)(void*);

    static void run(::uObject* __this) { ((Runnable*)uGetInterfacePtr(__this, Runnable__typeof()))->__fp_run((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif

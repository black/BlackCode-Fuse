// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_VALUE_CALLBACK_H__
#define __APP_ANDROID_ANDROID_WEBKIT_VALUE_CALLBACK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }

namespace app {
namespace Android {
namespace android {
namespace webkit {

::uInterfaceType* ValueCallback__typeof();

struct ValueCallback
{
    void(*__fp_onReceiveValue)(void*, ::app::Android::java::lang::Object*);

    static void onReceiveValue(::uObject* __this, ::app::Android::java::lang::Object* arg0) { ((ValueCallback*)uGetInterfacePtr(__this, ValueCallback__typeof()))->__fp_onReceiveValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif

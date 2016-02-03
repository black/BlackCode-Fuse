// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_INPUT_FILTER_H__
#define __APP_ANDROID_ANDROID_TEXT_INPUT_FILTER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace text {

::uInterfaceType* InputFilter__typeof();

struct InputFilter
{
    ::uObject*(*__fp_filter)(void*, ::uObject*, int, int, ::uObject*, int, int);

    static ::uObject* filter(::uObject* __this, ::uObject* arg0, int arg1, int arg2, ::uObject* arg3, int arg4, int arg5) { return ((InputFilter*)uGetInterfacePtr(__this, InputFilter__typeof()))->__fp_filter((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3, arg4, arg5); }
};

}}}}


#endif

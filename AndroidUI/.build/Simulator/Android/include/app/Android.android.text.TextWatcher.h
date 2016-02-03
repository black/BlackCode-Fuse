// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_TEXT_WATCHER_H__
#define __APP_ANDROID_ANDROID_TEXT_TEXT_WATCHER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace text {

::uInterfaceType* TextWatcher__typeof();

struct TextWatcher
{
    void(*__fp_afterTextChanged)(void*, ::uObject*);
    void(*__fp_beforeTextChanged)(void*, ::uObject*, int, int, int);
    void(*__fp_onTextChanged)(void*, ::uObject*, int, int, int);

    static void afterTextChanged(::uObject* __this, ::uObject* arg0) { ((TextWatcher*)uGetInterfacePtr(__this, TextWatcher__typeof()))->__fp_afterTextChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void beforeTextChanged(::uObject* __this, ::uObject* arg0, int arg1, int arg2, int arg3) { ((TextWatcher*)uGetInterfacePtr(__this, TextWatcher__typeof()))->__fp_beforeTextChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static void onTextChanged(::uObject* __this, ::uObject* arg0, int arg1, int arg2, int arg3) { ((TextWatcher*)uGetInterfacePtr(__this, TextWatcher__typeof()))->__fp_onTextChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
};

}}}}


#endif

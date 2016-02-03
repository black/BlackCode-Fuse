// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_GET_CHARS_H__
#define __APP_ANDROID_ANDROID_TEXT_GET_CHARS_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace Runtime { struct CharArray; } } }

namespace app {
namespace Android {
namespace android {
namespace text {

::uInterfaceType* GetChars__typeof();

struct GetChars
{
    void(*__fp_getChars)(void*, int, int, ::app::Android::Runtime::CharArray*, int);

    static void getChars(::uObject* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3) { ((GetChars*)uGetInterfacePtr(__this, GetChars__typeof()))->__fp_getChars((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_SPANNABLE_H__
#define __APP_ANDROID_ANDROID_TEXT_SPANNABLE_H__

#include <app/Android.android.text.Spanned.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }

namespace app {
namespace Android {
namespace android {
namespace text {

::uInterfaceType* Spannable__typeof();

struct Spannable
{
    void(*__fp_removeSpan)(void*, ::app::Android::java::lang::Object*);
    void(*__fp_setSpan)(void*, ::app::Android::java::lang::Object*, int, int, int);

    static void removeSpan(::uObject* __this, ::app::Android::java::lang::Object* arg0) { ((Spannable*)uGetInterfacePtr(__this, Spannable__typeof()))->__fp_removeSpan((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void setSpan(::uObject* __this, ::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3) { ((Spannable*)uGetInterfacePtr(__this, Spannable__typeof()))->__fp_setSpan((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
};

}}}}


#endif

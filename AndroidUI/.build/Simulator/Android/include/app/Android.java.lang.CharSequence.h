// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_CHAR_SEQUENCE_H__
#define __APP_ANDROID_JAVA_LANG_CHAR_SEQUENCE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace lang {

::uInterfaceType* CharSequence__typeof();

struct CharSequence
{
    ::uChar(*__fp_charAt)(void*, int);
    int(*__fp_length)(void*);
    ::uObject*(*__fp_subSequence)(void*, int, int);
    ::app::Android::java::lang::String*(*__fp_toString)(void*);

    static ::uChar charAt(::uObject* __this, int arg0) { return ((CharSequence*)uGetInterfacePtr(__this, CharSequence__typeof()))->__fp_charAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static int length(::uObject* __this) { return ((CharSequence*)uGetInterfacePtr(__this, CharSequence__typeof()))->__fp_length((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* subSequence(::uObject* __this, int arg0, int arg1) { return ((CharSequence*)uGetInterfacePtr(__this, CharSequence__typeof()))->__fp_subSequence((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::app::Android::java::lang::String* toString(::uObject* __this) { return ((CharSequence*)uGetInterfacePtr(__this, CharSequence__typeof()))->__fp_toString((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif

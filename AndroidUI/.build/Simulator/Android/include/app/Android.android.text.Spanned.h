// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_SPANNED_H__
#define __APP_ANDROID_ANDROID_TEXT_SPANNED_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Class; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_Object; } } }

namespace app {
namespace Android {
namespace android {
namespace text {

::uInterfaceType* Spanned__typeof();

struct Spanned
{
    int(*__fp_getSpanEnd)(void*, ::app::Android::java::lang::Object*);
    int(*__fp_getSpanFlags)(void*, ::app::Android::java::lang::Object*);
    ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*__fp_getSpans)(void*, int, int, ::app::Android::java::lang::Class*);
    int(*__fp_getSpanStart)(void*, ::app::Android::java::lang::Object*);
    int(*__fp_nextSpanTransition)(void*, int, int, ::app::Android::java::lang::Class*);

    static int getSpanEnd(::uObject* __this, ::app::Android::java::lang::Object* arg0) { return ((Spanned*)uGetInterfacePtr(__this, Spanned__typeof()))->__fp_getSpanEnd((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static int getSpanFlags(::uObject* __this, ::app::Android::java::lang::Object* arg0) { return ((Spanned*)uGetInterfacePtr(__this, Spanned__typeof()))->__fp_getSpanFlags((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::Runtime::ObjectArray__Android_java_lang_Object* getSpans(::uObject* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2) { return ((Spanned*)uGetInterfacePtr(__this, Spanned__typeof()))->__fp_getSpans((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getSpanStart(::uObject* __this, ::app::Android::java::lang::Object* arg0) { return ((Spanned*)uGetInterfacePtr(__this, Spanned__typeof()))->__fp_getSpanStart((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static int nextSpanTransition(::uObject* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2) { return ((Spanned*)uGetInterfacePtr(__this, Spanned__typeof()))->__fp_nextSpanTransition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
};

}}}}


#endif

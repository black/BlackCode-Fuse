// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_UTIL_ATTRIBUTE_SET_H__
#define __APP_ANDROID_ANDROID_UTIL_ATTRIBUTE_SET_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_String; } } }

namespace app {
namespace Android {
namespace android {
namespace util {

::uInterfaceType* AttributeSet__typeof();

struct AttributeSet
{
    bool(*__fp_getAttributeBooleanValue)(void*, int, bool);
    bool(*__fp_getAttributeBooleanValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, bool);
    int(*__fp_getAttributeCount)(void*);
    float(*__fp_getAttributeFloatValue)(void*, int, float);
    float(*__fp_getAttributeFloatValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, float);
    int(*__fp_getAttributeIntValue)(void*, int, int);
    int(*__fp_getAttributeIntValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int);
    int(*__fp_getAttributeListValue)(void*, int, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*, int);
    int(*__fp_getAttributeListValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*, int);
    ::app::Android::java::lang::String*(*__fp_getAttributeName)(void*, int);
    int(*__fp_getAttributeNameResource)(void*, int);
    int(*__fp_getAttributeResourceValue)(void*, int, int);
    int(*__fp_getAttributeResourceValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int);
    int(*__fp_getAttributeUnsignedIntValue)(void*, int, int);
    int(*__fp_getAttributeUnsignedIntValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int);
    ::app::Android::java::lang::String*(*__fp_getAttributeValue)(void*, int);
    ::app::Android::java::lang::String*(*__fp_getAttributeValue_1)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*);
    ::app::Android::java::lang::String*(*__fp_getClassAttribute)(void*);
    ::app::Android::java::lang::String*(*__fp_getIdAttribute)(void*);
    int(*__fp_getIdAttributeResourceValue)(void*, int);
    ::app::Android::java::lang::String*(*__fp_getPositionDescription)(void*);
    int(*__fp_getStyleAttribute)(void*);

    static bool getAttributeBooleanValue(::uObject* __this, int arg0, bool arg1) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeBooleanValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool getAttributeBooleanValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, bool arg2) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeBooleanValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getAttributeCount(::uObject* __this) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeCount((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static float getAttributeFloatValue(::uObject* __this, int arg0, float arg1) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeFloatValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static float getAttributeFloatValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, float arg2) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeFloatValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getAttributeIntValue(::uObject* __this, int arg0, int arg1) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeIntValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static int getAttributeIntValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeIntValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getAttributeListValue(::uObject* __this, int arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1, int arg2) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeListValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getAttributeListValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg2, int arg3) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeListValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static ::app::Android::java::lang::String* getAttributeName(::uObject* __this, int arg0) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeName((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static int getAttributeNameResource(::uObject* __this, int arg0) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeNameResource((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static int getAttributeResourceValue(::uObject* __this, int arg0, int arg1) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeResourceValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static int getAttributeResourceValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeResourceValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getAttributeUnsignedIntValue(::uObject* __this, int arg0, int arg1) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeUnsignedIntValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static int getAttributeUnsignedIntValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeUnsignedIntValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static ::app::Android::java::lang::String* getAttributeValue(::uObject* __this, int arg0) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::java::lang::String* getAttributeValue_1(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getAttributeValue_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::app::Android::java::lang::String* getClassAttribute(::uObject* __this) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getClassAttribute((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::java::lang::String* getIdAttribute(::uObject* __this) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getIdAttribute((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getIdAttributeResourceValue(::uObject* __this, int arg0) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getIdAttributeResourceValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::java::lang::String* getPositionDescription(::uObject* __this) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getPositionDescription((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getStyleAttribute(::uObject* __this) { return ((AttributeSet*)uGetInterfacePtr(__this, AttributeSet__typeof()))->__fp_getStyleAttribute((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif

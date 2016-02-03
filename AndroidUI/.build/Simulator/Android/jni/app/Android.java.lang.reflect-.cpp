#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.reflect.AccessibleObject.h>
#include <app/Android.java.lang.reflect.Field.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace java {
namespace lang {
namespace reflect {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\reflect\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AccessibleObject___javaClass_2;
jmethodID AccessibleObject__setAccessible_30251_ID;

AccessibleObject__uType* AccessibleObject__typeof()
{
    static ::uStaticStrong<AccessibleObject__uType*> type;
    if (type != NULL) return type;

    type = (AccessibleObject__uType*)::uAllocClassType(sizeof(AccessibleObject__uType), "Android.java.lang.reflect.AccessibleObject", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AccessibleObject__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AccessibleObject__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &AccessibleObject___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("setAccessible_30251_ID", &AccessibleObject__setAccessible_30251_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", AccessibleObject___Init_2, 0, true),
        ::uNewFunctionVoid("setAccessible", AccessibleObject__setAccessible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setAccessible_IMPL_30251", AccessibleObject__setAccessible_IMPL_30251, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void AccessibleObject___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::reflect::AccessibleObject___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::reflect::AccessibleObject___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/reflect/AccessibleObject"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::reflect::AccessibleObject___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.reflect.AccessibleObject'", 58);; }
}

void AccessibleObject__setAccessible(AccessibleObject* __this, bool arg0)
{
    AccessibleObject__setAccessible_IMPL_30251(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void AccessibleObject__setAccessible_IMPL_30251(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::AccessibleObject___javaClass_2,::app::Android::java::lang::reflect::AccessibleObject___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::reflect::AccessibleObject__setAccessible_30251_ID,::app::Android::java::lang::reflect::AccessibleObject___javaClass_2,"setAccessible","(Z)V",GetMethodID,"Id for fallback method java.lang.reflect.AccessibleObject.setAccessible could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::reflect::AccessibleObject___javaClass_2, ::app::Android::java::lang::reflect::AccessibleObject__setAccessible_30251_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::reflect::AccessibleObject__setAccessible_30251_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\reflect\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Field___javaClass_3;
jmethodID Field__equals_30310_ID;
jmethodID Field__get_30311_ID;
jmethodID Field__getInt_30318_ID;
jmethodID Field__hashCode_30324_ID;
jmethodID Field__set_30325_ID;
jmethodID Field__toString_30334_ID;

Field__uType* Field__typeof()
{
    static ::uStaticStrong<Field__uType*> type;
    if (type != NULL) return type;

    type = (Field__uType*)::uAllocClassType(sizeof(Field__uType), "Android.java.lang.reflect.Field", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::reflect::AccessibleObject__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Field__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Field__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Field__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Field__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Field__uType, __interface_1));

    type->SetFields(7,
        ::uNewField("_javaClass", &Field___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("equals_30310_ID", &Field__equals_30310_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("get_30311_ID", &Field__get_30311_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getInt_30318_ID", &Field__getInt_30318_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_30324_ID", &Field__hashCode_30324_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("set_30325_ID", &Field__set_30325_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30334_ID", &Field__toString_30334_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("_Init", Field___Init_3, 0, true),
        ::uNewFunction("equals_IMPL_30310", Field__equals_IMPL_30310, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("get", Field__get, 0, false, ::app::Android::java::lang::Object__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("get_IMPL_30311", Field__get_IMPL_30311, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getInt", Field__getInt, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getInt_IMPL_30318", Field__getInt_IMPL_30318, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_30324", Field__hashCode_IMPL_30324, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("set", Field__set, 0, false, ::app::Android::java::lang::Object__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunctionVoid("set_IMPL_30325", Field__set_IMPL_30325, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("toString_IMPL_30334", Field__toString_IMPL_30334, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Field___Init_3(::uStatic* __this)
{
    if (::app::Android::java::lang::reflect::Field___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::java::lang::reflect::Field___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/reflect/Field"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::reflect::Field___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.reflect.Field'", 47);; }
}

bool Field__equals_1(Field* __this, ::app::Android::java::lang::Object* arg0)
{
    return Field__equals_IMPL_30310(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Field__equals_IMPL_30310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::Field___javaClass_3,::app::Android::java::lang::reflect::Field___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::java::lang::reflect::Field__equals_30310_ID,::app::Android::java::lang::reflect::Field___javaClass_3,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.lang.reflect.Field.equals could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::java::lang::reflect::Field___javaClass_3, ::app::Android::java::lang::reflect::Field__equals_30310_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::java::lang::reflect::Field__equals_30310_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* Field__get(Field* __this, ::app::Android::java::lang::Object* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(Field__get_IMPL_30311(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* Field__get_IMPL_30311(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::Field___javaClass_3,::app::Android::java::lang::reflect::Field___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::reflect::Field__get_30311_ID,::app::Android::java::lang::reflect::Field___javaClass_3,"get","(Ljava/lang/Object;)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.lang.reflect.Field.get could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::reflect::Field___javaClass_3, ::app::Android::java::lang::reflect::Field__get_30311_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::reflect::Field__get_30311_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Field__getInt(Field* __this, ::app::Android::java::lang::Object* arg0)
{
    return Field__getInt_IMPL_30318(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Field__getInt_IMPL_30318(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::Field___javaClass_3,::app::Android::java::lang::reflect::Field___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    CACHE_METHOD(::app::Android::java::lang::reflect::Field__getInt_30318_ID,::app::Android::java::lang::reflect::Field___javaClass_3,"getInt","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.lang.reflect.Field.getInt could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::reflect::Field___javaClass_3, ::app::Android::java::lang::reflect::Field__getInt_30318_ID, _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::reflect::Field__getInt_30318_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Field__hashCode_1(Field* __this)
{
    return Field__hashCode_IMPL_30324(NULL, __this->_subclassed, __this->_javaObject);
}

int Field__hashCode_IMPL_30324(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::Field___javaClass_3,::app::Android::java::lang::reflect::Field___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::reflect::Field__hashCode_30324_ID,::app::Android::java::lang::reflect::Field___javaClass_3,"hashCode","()I",GetMethodID,"Id for fallback method java.lang.reflect.Field.hashCode could not be cached",75);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::reflect::Field___javaClass_3, ::app::Android::java::lang::reflect::Field__hashCode_30324_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::reflect::Field__hashCode_30324_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Field__set(Field* __this, ::app::Android::java::lang::Object* arg0, ::app::Android::java::lang::Object* arg1)
{
    Field__set_IMPL_30325(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Field__set_IMPL_30325(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::Field___javaClass_3,::app::Android::java::lang::reflect::Field___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::java::lang::reflect::Field__set_30325_ID,::app::Android::java::lang::reflect::Field___javaClass_3,"set","(Ljava/lang/Object;Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.lang.reflect.Field.set could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::reflect::Field___javaClass_3, ::app::Android::java::lang::reflect::Field__set_30325_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::reflect::Field__set_30325_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Field__toString(Field* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Field__toString_IMPL_30334(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Field__toString_IMPL_30334(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::reflect::Field___javaClass_3,::app::Android::java::lang::reflect::Field___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::reflect::Field__toString_30334_ID,::app::Android::java::lang::reflect::Field___javaClass_3,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.reflect.Field.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::reflect::Field___javaClass_3, ::app::Android::java::lang::reflect::Field__toString_30334_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::reflect::Field__toString_30334_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}}

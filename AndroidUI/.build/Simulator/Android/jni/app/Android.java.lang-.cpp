#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <app/Android.Fallbacks.Android_java_lang_Runnable.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.reflect.Field.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.java.lang.System.h>
#include <app/Android.java.lang.Thread.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace java {
namespace lang {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* CharSequence__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.java.lang.CharSequence");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Class___javaClass_2;
jmethodID Class__forName_30884_ID;
jmethodID Class__getDeclaredField_30898_ID;
jmethodID Class__toString_30936_ID;

Class__uType* Class__typeof()
{
    static ::uStaticStrong<Class__uType*> type;
    if (type != NULL) return type;

    type = (Class__uType*)::uAllocClassType(sizeof(Class__uType), "Android.java.lang.Class", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Class__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Class__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Class__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &Class___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("forName_30884_ID", &Class__forName_30884_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getDeclaredField_30898_ID", &Class__getDeclaredField_30898_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30936_ID", &Class__toString_30936_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", Class___Init_2, 0, true),
        ::uNewFunction("forName", Class__forName, 0, true, Class__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("forName_IMPL_30884", Class__forName_IMPL_30884, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getDeclaredField", Class__getDeclaredField, 0, false, ::app::Android::java::lang::reflect::Field__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getDeclaredField_IMPL_30898", Class__getDeclaredField_IMPL_30898, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("toString_IMPL_30936", Class__toString_IMPL_30936, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Class___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::Class___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::Class___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Class"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::Class___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Class'", 39);; }
}

Class* Class__forName(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< Class*>(Class__forName_IMPL_30884(NULL, (::uObject*)arg0), Class__typeof());
}

::uObject* Class__forName_IMPL_30884(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Class___javaClass_2,::app::Android::java::lang::Class___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Class__forName_30884_ID,::app::Android::java::lang::Class___javaClass_2,"forName","(Ljava/lang/String;)Ljava/lang/Class;",GetStaticMethodID,"Id for fallback method java.lang.Class.forName could not be cached",66);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::java::lang::Class___javaClass_2, ::app::Android::java::lang::Class__forName_30884_ID, _obArg0),result,::app::Android::java::lang::Class__typeof(),Class*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::reflect::Field* Class__getDeclaredField(Class* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::reflect::Field*>(Class__getDeclaredField_IMPL_30898(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::reflect::Field__typeof());
}

::uObject* Class__getDeclaredField_IMPL_30898(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Class___javaClass_2,::app::Android::java::lang::Class___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Class__getDeclaredField_30898_ID,::app::Android::java::lang::Class___javaClass_2,"getDeclaredField","(Ljava/lang/String;)Ljava/lang/reflect/Field;",GetMethodID,"Id for fallback method java.lang.Class.getDeclaredField could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Class___javaClass_2, ::app::Android::java::lang::Class__getDeclaredField_30898_ID, _obArg2),result,::app::Android::java::lang::reflect::Field__typeof(),::app::Android::java::lang::reflect::Field*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Class__getDeclaredField_30898_ID, _obArg2),result,::app::Android::java::lang::reflect::Field__typeof(),::app::Android::java::lang::reflect::Field*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Class__toString(Class* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Class__toString_IMPL_30936(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Class__toString_IMPL_30936(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Class___javaClass_2,::app::Android::java::lang::Class___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Class__toString_30936_ID,::app::Android::java::lang::Class___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Class.toString could not be cached",67);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Class___javaClass_2, ::app::Android::java::lang::Class__toString_30936_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Class__toString_30936_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Object___javaClass_1;
jmethodID Object__clone_31287_ID;
jmethodID Object__equals_31288_ID;
jmethodID Object__finalize_31289_ID;
jmethodID Object__getClass_31290_ID;
jmethodID Object__hashCode_31291_ID;
jmethodID Object__notify_31292_ID;
jmethodID Object__notifyAll_31293_ID;
jmethodID Object__Object_31286_ID_c;
jmethodID Object__toString_31294_ID;
jmethodID Object__wait_31295_ID;
jmethodID Object__wait_31296_ID;
jmethodID Object__wait_31297_ID;

Object__uType* Object__typeof()
{
    static ::uStaticStrong<Object__uType*> type;
    if (type != NULL) return type;

    type = (Object__uType*)::uAllocClassType(sizeof(Object__uType), "Android.java.lang.Object", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Object__Equals;
    type->__fp_equals_1 = Object__equals_1;
    type->__fp_finalize = Object__finalize;
    type->__fp_GetHashCode = (int(*)(::uObject*))Object__GetHashCode;
    type->__fp_hashCode_1 = Object__hashCode_1;
    type->__fp_toString = Object__toString;
    type->__fp_ToString = (::uString*(*)(::uObject*))Object__ToString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Object__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Object__uType, __interface_1));

    type->SetFields(13,
        ::uNewField("_javaClass", &Object___javaClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("clone_31287_ID", &Object__clone_31287_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_31288_ID", &Object__equals_31288_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("finalize_31289_ID", &Object__finalize_31289_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getClass_31290_ID", &Object__getClass_31290_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_31291_ID", &Object__hashCode_31291_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("notify_31292_ID", &Object__notify_31292_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("notifyAll_31293_ID", &Object__notifyAll_31293_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("Object_31286_ID_c", &Object__Object_31286_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_31294_ID", &Object__toString_31294_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("wait_31295_ID", &Object__wait_31295_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("wait_31296_ID", &Object__wait_31296_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("wait_31297_ID", &Object__wait_31297_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(25,
        ::uNewFunctionVoid("_Init", Object___Init_1, 0, true),
        ::uNewFunction("clone", Object__clone, 0, false, Object__typeof()),
        ::uNewFunction("clone_IMPL_31287", Object__clone_IMPL_31287, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals", type->__fp_equals_1, offsetof(Object__uType, __fp_equals_1), false, ::app::Uno::Bool__typeof(), Object__typeof()),
        ::uNewFunction("equals_IMPL_31288", Object__equals_IMPL_31288, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("finalize", type->__fp_finalize, offsetof(Object__uType, __fp_finalize), false),
        ::uNewFunctionVoid("finalize_IMPL_31289", Object__finalize_IMPL_31289, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getClass", Object__getClass, 0, false, ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("getClass_IMPL_31290", Object__getClass_IMPL_31290, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hashCode", type->__fp_hashCode_1, offsetof(Object__uType, __fp_hashCode_1), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("hashCode_IMPL_31291", Object__hashCode_IMPL_31291, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", Object__New_3, 0, true, Object__typeof()),
        ::uNewFunction(".ctor", Object__New_4, 0, true, Object__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("notify", Object__notify, 0, false),
        ::uNewFunctionVoid("notify_IMPL_31292", Object__notify_IMPL_31292, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("notifyAll", Object__notifyAll, 0, false),
        ::uNewFunctionVoid("notifyAll_IMPL_31293", Object__notifyAll_IMPL_31293, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString", type->__fp_toString, offsetof(Object__uType, __fp_toString), false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("toString_IMPL_31294", Object__toString_IMPL_31294, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("wait", Object__wait, 0, false),
        ::uNewFunctionVoid("wait", Object__wait_1, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("wait", Object__wait_2, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("wait_IMPL_31295", Object__wait_IMPL_31295, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("wait_IMPL_31296", Object__wait_IMPL_31296, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("wait_IMPL_31297", Object__wait_IMPL_31297, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Object___Init_1(::uStatic* __this)
{
    if (::app::Android::java::lang::Object___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::java::lang::Object___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::Object___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object'", 40);; }
}

void Object___ObjInit_2(Object* __this)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));;
    CACHE_METHOD(::app::Android::java::lang::Object__Object_31286_ID_c,::app::Android::java::lang::Object___javaClass_1,"<init>","()V",GetMethodID,"Id for fallback method java.lang.Object.<init> could not be cached",66);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__Object_31286_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void Object___ObjInit_3(Object* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, obj, utype, hasFallbackClass, resolveType);
}

Object* Object__clone(Object* __this)
{
    return ::uCast< Object*>(Object__clone_IMPL_31287(NULL, __this->_subclassed, __this->_javaObject), Object__typeof());
}

::uObject* Object__clone_IMPL_31287(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Object__clone_31287_ID,::app::Android::java::lang::Object___javaClass_1,"clone","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.lang.Object.clone could not be cached",65);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__clone_31287_ID),result,::app::Android::java::lang::Object__typeof(),Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Object__clone_31287_ID),result,::app::Android::java::lang::Object__typeof(),Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Object__Equals(Object* __this, ::uObject* obj)
{
    if (obj != NULL)
    {
        ::uObject* tmp = ::uAs< ::uObject*>(obj, ::app::Android::Base::Wrappers::IJWrapper__typeof());

        if (tmp != NULL)
        {
            return ::app::Android::Base::JNI__IsSameObject(NULL, __this->_javaObject, ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(tmp)));
        }
    }

    return false;
}

bool Object__equals_1(Object* __this, Object* arg0)
{
    return Object__equals_IMPL_31288(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Object__equals_IMPL_31288(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::java::lang::Object__equals_31288_ID,::app::Android::java::lang::Object___javaClass_1,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.lang.Object.equals could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__equals_31288_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::java::lang::Object__equals_31288_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Object__finalize(Object* __this)
{
    Object__finalize_IMPL_31289(NULL, __this->_subclassed, __this->_javaObject);
}

void Object__finalize_IMPL_31289(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Object__finalize_31289_ID,::app::Android::java::lang::Object___javaClass_1,"finalize","()V",GetMethodID,"Id for fallback method java.lang.Object.finalize could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__finalize_31289_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Object__finalize_31289_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::Class* Object__getClass(Object* __this)
{
    return ::uCast< ::app::Android::java::lang::Class*>(Object__getClass_IMPL_31290(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::Class__typeof());
}

::uObject* Object__getClass_IMPL_31290(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Object__getClass_31290_ID,::app::Android::java::lang::Object___javaClass_1,"getClass","()Ljava/lang/Class;",GetMethodID,"Id for fallback method java.lang.Object.getClass could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__getClass_31290_ID),result,::app::Android::java::lang::Class__typeof(),::app::Android::java::lang::Class*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Object__getClass_31290_ID),result,::app::Android::java::lang::Class__typeof(),::app::Android::java::lang::Class*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Object__GetHashCode(Object* __this)
{
    return __this->hashCode_1();
}

int Object__hashCode_1(Object* __this)
{
    return Object__hashCode_IMPL_31291(NULL, __this->_subclassed, __this->_javaObject);
}

int Object__hashCode_IMPL_31291(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::Object__hashCode_31291_ID,::app::Android::java::lang::Object___javaClass_1,"hashCode","()I",GetMethodID,"Id for fallback method java.lang.Object.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__hashCode_31291_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::Object__hashCode_31291_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

Object* Object__New_3(::uStatic* __this)
{
    Object* inst = (Object*)::uAllocObject(sizeof(Object), Object__typeof());
    inst->_ObjInit_2();
    return inst;
}

Object* Object__New_4(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    Object* inst = (Object*)::uAllocObject(sizeof(Object), Object__typeof());
    inst->_ObjInit_3(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void Object__notify(Object* __this)
{
    Object__notify_IMPL_31292(NULL, __this->_subclassed, __this->_javaObject);
}

void Object__notify_IMPL_31292(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Object__notify_31292_ID,::app::Android::java::lang::Object___javaClass_1,"notify","()V",GetMethodID,"Id for fallback method java.lang.Object.notify could not be cached",66);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__notify_31292_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Object__notify_31292_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Object__notifyAll(Object* __this)
{
    Object__notifyAll_IMPL_31293(NULL, __this->_subclassed, __this->_javaObject);
}

void Object__notifyAll_IMPL_31293(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Object__notifyAll_31293_ID,::app::Android::java::lang::Object___javaClass_1,"notifyAll","()V",GetMethodID,"Id for fallback method java.lang.Object.notifyAll could not be cached",69);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__notifyAll_31293_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Object__notifyAll_31293_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Object__op_Equality_1(::uStatic* __this, Object* a, Object* b)
{
    if (((::uObject*)a == NULL) || ((::uObject*)b == NULL))
    {
        return (::uObject*)b == (::uObject*)a;
    }
    else
    {
        return ::app::Android::Base::JNI__IsSameObject(NULL, ::uPtr< Object*>(a)->_GetJavaObject(), ::uPtr< Object*>(b)->_GetJavaObject());
    }
}

bool Object__op_Inequality_1(::uStatic* __this, Object* a, Object* b)
{
    return !Object__op_Equality_1(NULL, a, b);
}

::app::Android::java::lang::String* Object__toString(Object* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Object__toString_IMPL_31294(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uString* Object__ToString(Object* __this)
{
    return ::app::Android::java::lang::String__op_Implicit_1(NULL, __this->toString());
}

::uObject* Object__toString_IMPL_31294(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Object__toString_31294_ID,::app::Android::java::lang::Object___javaClass_1,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Object.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__toString_31294_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Object__toString_31294_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Object__wait(Object* __this)
{
    Object__wait_IMPL_31295(NULL, __this->_subclassed, __this->_javaObject);
}

void Object__wait_1(Object* __this, ::uLong arg0)
{
    Object__wait_IMPL_31296(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Object__wait_2(Object* __this, ::uLong arg0, int arg1)
{
    Object__wait_IMPL_31297(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Object__wait_IMPL_31295(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Object__wait_31295_ID,::app::Android::java::lang::Object___javaClass_1,"wait","()V",GetMethodID,"Id for fallback method java.lang.Object.wait could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__wait_31295_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Object__wait_31295_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Object__wait_IMPL_31296(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Object__wait_31296_ID,::app::Android::java::lang::Object___javaClass_1,"wait","(J)V",GetMethodID,"Id for fallback method java.lang.Object.wait could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__wait_31296_ID, ((jlong)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Object__wait_31296_ID, ((jlong)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Object__wait_IMPL_31297(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Object__wait_31297_ID,::app::Android::java::lang::Object___javaClass_1,"wait","(JI)V",GetMethodID,"Id for fallback method java.lang.Object.wait could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__wait_31297_ID, ((jlong)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Object__wait_31297_ID, ((jlong)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Runnable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.java.lang.Runnable");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass String___javaClass_2;
jmethodID String__charAt_31531_ID;
jmethodID String__equals_31538_ID;
jmethodID String__hashCode_31545_ID;
jmethodID String__length_31556_ID;
jmethodID String__subSequence_31588_ID;
jmethodID String__toString_31568_ID;

String__uType* String__typeof()
{
    static ::uStaticStrong<String__uType*> type;
    if (type != NULL) return type;

    type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Android.java.lang.String", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))String__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))String__hashCode_1;
    type->__fp_toString = (String*(*)(::app::Android::java::lang::Object*))String__toString;
    type->__interface_2.__fp_length = (int(*)(void*))String__length;
    type->__interface_2.__fp_charAt = (::uChar(*)(void*, int))String__charAt;
    type->__interface_2.__fp_subSequence = (::uObject*(*)(void*, int, int))String__subSequence;
    type->__interface_2.__fp_toString = (String*(*)(void*))String__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(String__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(String__uType, __interface_1),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(String__uType, __interface_2));

    type->SetFields(7,
        ::uNewField("_javaClass", &String___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("charAt_31531_ID", &String__charAt_31531_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_31538_ID", &String__equals_31538_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_31545_ID", &String__hashCode_31545_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("length_31556_ID", &String__length_31556_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("subSequence_31588_ID", &String__subSequence_31588_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_31568_ID", &String__toString_31568_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("_Init", String___Init_2, 0, true),
        ::uNewFunction("charAt", String__charAt, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("charAt_IMPL_31531", String__charAt_IMPL_31531, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("equals_IMPL_31538", String__equals_IMPL_31538, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_31545", String__hashCode_IMPL_31545, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("length", String__length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("length_IMPL_31556", String__length_IMPL_31556, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", String__New_20, 0, true, String__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("subSequence", String__subSequence, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence_IMPL_31588", String__subSequence_IMPL_31588, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_31568", String__toString_IMPL_31568, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void String___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::String___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::String___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/String"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::String___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.String'", 40);; }
}

void String___ObjInit_19(String* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

::uChar String__charAt(String* __this, int arg0)
{
    return String__charAt_IMPL_31531(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar String__charAt_IMPL_31531(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    ::uChar result;
    CACHE_METHOD(::app::Android::java::lang::String__charAt_31531_ID,::app::Android::java::lang::String___javaClass_2,"charAt","(I)C",GetMethodID,"Id for fallback method java.lang.String.charAt could not be cached",66);
    if (arg0_) {
        result = ((::uChar)U_JNIVAR->CallNonvirtualCharMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__charAt_31531_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::java::lang::String__charAt_31531_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool String__equals_1(String* __this, ::app::Android::java::lang::Object* arg0)
{
    return String__equals_IMPL_31538(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool String__equals_IMPL_31538(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::java::lang::String__equals_31538_ID,::app::Android::java::lang::String___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.lang.String.equals could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__equals_31538_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::java::lang::String__equals_31538_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int String__hashCode_1(String* __this)
{
    return String__hashCode_IMPL_31545(NULL, __this->_subclassed, __this->_javaObject);
}

int String__hashCode_IMPL_31545(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::String__hashCode_31545_ID,::app::Android::java::lang::String___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method java.lang.String.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__hashCode_31545_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::String__hashCode_31545_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int String__length(String* __this)
{
    return String__length_IMPL_31556(NULL, __this->_subclassed, __this->_javaObject);
}

int String__length_IMPL_31556(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::String__length_31556_ID,::app::Android::java::lang::String___javaClass_2,"length","()I",GetMethodID,"Id for fallback method java.lang.String.length could not be cached",66);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__length_31556_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::String__length_31556_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

String* String__New_20(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    String* inst = (String*)::uAllocObject(sizeof(String), String__typeof());
    inst->_ObjInit_19(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

String* String__op_Implicit(::uStatic* __this, ::uString* str)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)str, NULL))
    {
        return NULL;
    }
    else
    {
        return String__New_20(NULL, ::app::Android::Base::Types::String__UnoToJava(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), str), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    }
}

::uString* String__op_Implicit_1(::uStatic* __this, String* str)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)str, NULL))
    {
        return NULL;
    }
    else
    {
        return ::app::Android::Base::Types::String__JavaToUno_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), ::uPtr< String*>(str)->_GetJavaObject());
    }
}

::uObject* String__subSequence(String* __this, int arg0, int arg1)
{
    return (::uObject*)String__subSequence_IMPL_31588(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* String__subSequence_IMPL_31588(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::String__subSequence_31588_ID,::app::Android::java::lang::String___javaClass_2,"subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.String.subSequence could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__subSequence_31588_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::String__subSequence_31588_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

String* String__toString(String* __this)
{
    return ::uCast< String*>(String__toString_IMPL_31568(NULL, __this->_subclassed, __this->_javaObject), String__typeof());
}

::uObject* String__toString_IMPL_31568(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::String__toString_31568_ID,::app::Android::java::lang::String___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.String.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__toString_31568_ID),result,::app::Android::java::lang::String__typeof(),String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::String__toString_31568_ID),result,::app::Android::java::lang::String__typeof(),String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass System___javaClass_2;
jmethodID System__nanoTime_31693_ID;

System__uType* System__typeof()
{
    static ::uStaticStrong<System__uType*> type;
    if (type != NULL) return type;

    type = (System__uType*)::uAllocClassType(sizeof(System__uType), "Android.java.lang.System", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(System__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(System__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &System___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("nanoTime_31693_ID", &System__nanoTime_31693_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", System___Init_2, 0, true),
        ::uNewFunction("nanoTime", System__nanoTime, 0, true, ::app::Uno::Long__typeof()),
        ::uNewFunction("nanoTime_IMPL_31693", System__nanoTime_IMPL_31693, 0, true, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void System___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::System___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::System___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/System"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::System___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.System'", 40);; }
}

::uLong System__nanoTime(::uStatic* __this)
{
    return System__nanoTime_IMPL_31693(NULL);
}

::uLong System__nanoTime_IMPL_31693(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::System___javaClass_2,::app::Android::java::lang::System___Init_2(NULL));
    
    ::uLong result;
    CACHE_METHOD(::app::Android::java::lang::System__nanoTime_31693_ID,::app::Android::java::lang::System___javaClass_2,"nanoTime","()J",GetStaticMethodID,"Id for fallback method java.lang.System.nanoTime could not be cached",68);
    result = ((::uLong)U_JNIVAR->CallStaticLongMethod(::app::Android::java::lang::System___javaClass_2, ::app::Android::java::lang::System__nanoTime_31693_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Thread___javaClass_2;
jmethodID Thread__run_31761_ID;
jmethodID Thread__start_31770_ID;
jmethodID Thread__stop_31771_ID;
jmethodID Thread__Thread_31728_ID_c;
jmethodID Thread__toString_31774_ID;

Thread__uType* Thread__typeof()
{
    static ::uStaticStrong<Thread__uType*> type;
    if (type != NULL) return type;

    type = (Thread__uType*)::uAllocClassType(sizeof(Thread__uType), "Android.java.lang.Thread", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Thread__toString;
    type->__interface_2.__fp_run = (void(*)(void*))Thread__run;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Thread__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Thread__uType, __interface_1),
        ::app::Android::java::lang::Runnable__typeof(), offsetof(Thread__uType, __interface_2));

    type->SetFields(6,
        ::uNewField("_javaClass", &Thread___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("run_31761_ID", &Thread__run_31761_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("start_31770_ID", &Thread__start_31770_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("stop_31771_ID", &Thread__stop_31771_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("Thread_31728_ID_c", &Thread__Thread_31728_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_31774_ID", &Thread__toString_31774_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("_Init", Thread___Init_2, 0, true),
        ::uNewFunction(".ctor", Thread__New_6, 0, true, Thread__typeof(), ::app::Android::java::lang::Runnable__typeof()),
        ::uNewFunctionVoid("run", Thread__run, 0, false),
        ::uNewFunctionVoid("run_IMPL_31761", Thread__run_IMPL_31761, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("start", Thread__start, 0, false),
        ::uNewFunctionVoid("start_IMPL_31770", Thread__start_IMPL_31770, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("stop", Thread__stop, 0, false),
        ::uNewFunctionVoid("stop_IMPL_31771", Thread__stop_IMPL_31771, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_31774", Thread__toString_IMPL_31774, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Thread___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::Thread___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::Thread___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Thread"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::Thread___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Thread'", 40);; }
}

void Thread___ObjInit_5(Thread* __this, ::uObject* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));;
    CACHE_METHOD(::app::Android::java::lang::Thread__Thread_31728_ID_c,::app::Android::java::lang::Thread___javaClass_2,"<init>","(Ljava/lang/Runnable;)V",GetMethodID,"Id for fallback method java.lang.Thread.<init> could not be cached",66);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__Thread_31728_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

Thread* Thread__New_6(::uStatic* __this, ::uObject* arg0)
{
    Thread* inst = (Thread*)::uAllocObject(sizeof(Thread), Thread__typeof());
    inst->_ObjInit_5(arg0);
    return inst;
}

void Thread__run(Thread* __this)
{
    Thread__run_IMPL_31761(NULL, __this->_subclassed, __this->_javaObject);
}

void Thread__run_IMPL_31761(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Thread__run_31761_ID,::app::Android::java::lang::Thread___javaClass_2,"run","()V",GetMethodID,"Id for fallback method java.lang.Thread.run could not be cached",63);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__run_31761_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Thread__run_31761_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Thread__start(Thread* __this)
{
    Thread__start_IMPL_31770(NULL, __this->_subclassed, __this->_javaObject);
}

void Thread__start_IMPL_31770(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Thread__start_31770_ID,::app::Android::java::lang::Thread___javaClass_2,"start","()V",GetMethodID,"Id for fallback method java.lang.Thread.start could not be cached",65);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__start_31770_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Thread__start_31770_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Thread__stop(Thread* __this)
{
    Thread__stop_IMPL_31771(NULL, __this->_subclassed, __this->_javaObject);
}

void Thread__stop_IMPL_31771(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Thread__stop_31771_ID,::app::Android::java::lang::Thread___javaClass_2,"stop","()V",GetMethodID,"Id for fallback method java.lang.Thread.stop could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__stop_31771_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Thread__stop_31771_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Thread__toString(Thread* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Thread__toString_IMPL_31774(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Thread__toString_IMPL_31774(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Thread__toString_31774_ID,::app::Android::java::lang::Thread___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Thread.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__toString_31774_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Thread__toString_31774_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}

#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.java.net.URL.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace java {
namespace net {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\net\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass URL___javaClass_2;
jmethodID URL__equals_32566_ID;
jmethodID URL__getContent_32569_ID;
jmethodID URL__hashCode_32568_ID;
jmethodID URL__toString_32575_ID;
jmethodID URL__URL_32558_ID_c;

URL__uType* URL__typeof()
{
    static ::uStaticStrong<URL__uType*> type;
    if (type != NULL) return type;

    type = (URL__uType*)::uAllocClassType(sizeof(URL__uType), "Android.java.net.URL", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))URL__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))URL__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))URL__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(URL__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(URL__uType, __interface_1));

    type->SetFields(6,
        ::uNewField("_javaClass", &URL___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("equals_32566_ID", &URL__equals_32566_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getContent_32569_ID", &URL__getContent_32569_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_32568_ID", &URL__hashCode_32568_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_32575_ID", &URL__toString_32575_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("URL_32558_ID_c", &URL__URL_32558_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("_Init", URL___Init_2, 0, true),
        ::uNewFunction("equals_IMPL_32566", URL__equals_IMPL_32566, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getContent", URL__getContent, 0, false, ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getContent_IMPL_32569", URL__getContent_IMPL_32569, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hashCode_IMPL_32568", URL__hashCode_IMPL_32568, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", URL__New_5, 0, true, URL__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("toString_IMPL_32575", URL__toString_IMPL_32575, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void URL___Init_2(::uStatic* __this)
{
    if (::app::Android::java::net::URL___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::net::URL___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/net/URL"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::net::URL___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.net.URL'", 36);; }
}

void URL___ObjInit_4(URL* __this, ::app::Android::java::lang::String* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::java::net::URL___javaClass_2,::app::Android::java::net::URL___Init_2(NULL));;
    CACHE_METHOD(::app::Android::java::net::URL__URL_32558_ID_c,::app::Android::java::net::URL___javaClass_2,"<init>","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method java.net.URL.<init> could not be cached",62);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::java::net::URL___javaClass_2, ::app::Android::java::net::URL__URL_32558_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

bool URL__equals_1(URL* __this, ::app::Android::java::lang::Object* arg0)
{
    return URL__equals_IMPL_32566(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool URL__equals_IMPL_32566(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::net::URL___javaClass_2,::app::Android::java::net::URL___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::java::net::URL__equals_32566_ID,::app::Android::java::net::URL___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.net.URL.equals could not be cached",62);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::java::net::URL___javaClass_2, ::app::Android::java::net::URL__equals_32566_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::java::net::URL__equals_32566_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* URL__getContent(URL* __this)
{
    return ::uCast< ::app::Android::java::lang::Object*>(URL__getContent_IMPL_32569(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::Object__typeof());
}

::uObject* URL__getContent_IMPL_32569(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::net::URL___javaClass_2,::app::Android::java::net::URL___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::net::URL__getContent_32569_ID,::app::Android::java::net::URL___javaClass_2,"getContent","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.net.URL.getContent could not be cached",66);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::net::URL___javaClass_2, ::app::Android::java::net::URL__getContent_32569_ID),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::net::URL__getContent_32569_ID),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int URL__hashCode_1(URL* __this)
{
    return URL__hashCode_IMPL_32568(NULL, __this->_subclassed, __this->_javaObject);
}

int URL__hashCode_IMPL_32568(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::net::URL___javaClass_2,::app::Android::java::net::URL___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::net::URL__hashCode_32568_ID,::app::Android::java::net::URL___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method java.net.URL.hashCode could not be cached",64);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::net::URL___javaClass_2, ::app::Android::java::net::URL__hashCode_32568_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::net::URL__hashCode_32568_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

URL* URL__New_5(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    URL* inst = (URL*)::uAllocObject(sizeof(URL), URL__typeof());
    inst->_ObjInit_4(arg0);
    return inst;
}

::app::Android::java::lang::String* URL__toString(URL* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(URL__toString_IMPL_32575(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* URL__toString_IMPL_32575(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::net::URL___javaClass_2,::app::Android::java::net::URL___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::net::URL__toString_32575_ID,::app::Android::java::net::URL___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.net.URL.toString could not be cached",64);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::net::URL___javaClass_2, ::app::Android::java::net::URL__toString_32575_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::net::URL__toString_32575_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}

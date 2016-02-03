#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.util.ArrayList.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace java {
namespace util {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ArrayList___javaClass_4;
jmethodID ArrayList__equals_37575_ID;
jmethodID ArrayList__hashCode_37574_ID;

ArrayList__uType* ArrayList__typeof()
{
    static ::uStaticStrong<ArrayList__uType*> type;
    if (type != NULL) return type;

    type = (ArrayList__uType*)::uAllocClassType(sizeof(ArrayList__uType), "Android.java.util.ArrayList", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))ArrayList__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))ArrayList__hashCode_1;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ArrayList__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayList__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &ArrayList___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("equals_37575_ID", &ArrayList__equals_37575_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_37574_ID", &ArrayList__hashCode_37574_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", ArrayList___Init_4, 0, true),
        ::uNewFunction("equals_IMPL_37575", ArrayList__equals_IMPL_37575, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_37574", ArrayList__hashCode_IMPL_37574, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ArrayList___Init_4(::uStatic* __this)
{
    if (::app::Android::java::util::ArrayList___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::java::util::ArrayList___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/ArrayList"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::util::ArrayList___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.ArrayList'", 43);; }
}

bool ArrayList__equals_1(ArrayList* __this, ::app::Android::java::lang::Object* arg0)
{
    return ArrayList__equals_IMPL_37575(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ArrayList__equals_IMPL_37575(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::util::ArrayList___javaClass_4,::app::Android::java::util::ArrayList___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::java::util::ArrayList__equals_37575_ID,::app::Android::java::util::ArrayList___javaClass_4,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.ArrayList.equals could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::java::util::ArrayList___javaClass_4, ::app::Android::java::util::ArrayList__equals_37575_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::java::util::ArrayList__equals_37575_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ArrayList__hashCode_1(ArrayList* __this)
{
    return ArrayList__hashCode_IMPL_37574(NULL, __this->_subclassed, __this->_javaObject);
}

int ArrayList__hashCode_IMPL_37574(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::util::ArrayList___javaClass_4,::app::Android::java::util::ArrayList___Init_4(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::util::ArrayList__hashCode_37574_ID,::app::Android::java::util::ArrayList___javaClass_4,"hashCode","()I",GetMethodID,"Id for fallback method java.util.ArrayList.hashCode could not be cached",71);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::util::ArrayList___javaClass_4, ::app::Android::java::util::ArrayList__hashCode_37574_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::util::ArrayList__hashCode_37574_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}

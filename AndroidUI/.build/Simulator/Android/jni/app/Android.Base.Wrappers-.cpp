#include <app/Android.Base.JNI.h>
#include <app/Android.Base.JNI_RefType.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.uweakptr.h>
#include <app/Android.Base.Types.Bridge.h>
#include <app/Android.Base.Wrappers.BindingIDAttribute.h>
#include <app/Android.Base.Wrappers.BindingSubclassAttribute.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
//~
        bool __JWrapper_Callbacks_Registered = false;
        void __JWrapper_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
        {
        uWeakObject* weak = (uWeakObject*)ptr;
        uAutoReleasePool pool;
        ::app::Android::Base::Wrappers::JWrapper* wrapper = (::app::Android::Base::Wrappers::JWrapper*)uLoadWeakObject(weak);
        uStoreWeakObject(&weak, 0);
        }
        void __Register_Finalizer()
        {
            JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
            JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JWrapper_Finalizer};
            jclass cls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper")));
            jint attached = ::app::Android::Base::JNI__GetEnvPtr(NULL)->RegisterNatives(cls, &nativeFunc, 1);
            if (attached < 0) {
                U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not register the instantiation callback function",54)));
            }
        }
//~
        bool __JWrapper_WeakCallback(uWeakStateIntercept::Event e, uObject* obj)
        {
            ::app::Android::Base::JNI__CheckException(NULL);
            ::app::Android::Base::Wrappers::JWrapper* wrapper = (::app::Android::Base::Wrappers::JWrapper*)obj;
            jobject jobj = wrapper->_javaObject;
            if (!jobj) return true;

            bool subclassed = wrapper->_subclassed;

            if (e == uWeakStateIntercept::OnLoad) {
                // retain went from 0 to 1
                if (subclassed) {
                    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
                    wrapper->_javaObject = jni->NewGlobalRef(jobj);
                    jni->DeleteWeakGlobalRef(jobj);
                    return true;
                } else {
                    return true;
                }
            } else {
                // retain went from 1 to 0
                if (subclassed) {
                    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
                    wrapper->_javaObject = jni->NewWeakGlobalRef(jobj);
                    jni->DeleteGlobalRef(jobj);
                    return false;
                } else {
                    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
                    jni->DeleteGlobalRef(jobj);
                    return true;
                }
            }
            return false;
        }

namespace app {
namespace Android {
namespace Base {
namespace Wrappers {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BindingIDAttribute__uType* BindingIDAttribute__typeof()
{
    static ::uStaticStrong<BindingIDAttribute__uType*> type;
    if (type != NULL) return type;

    type = (BindingIDAttribute__uType*)::uAllocClassType(sizeof(BindingIDAttribute__uType), "Android.Base.Wrappers.BindingIDAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BindingIDAttribute__New_1, 0, true, BindingIDAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void BindingIDAttribute___ObjInit_1(BindingIDAttribute* __this, ::uString* id)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

BindingIDAttribute* BindingIDAttribute__New_1(::uStatic* __this, ::uString* id)
{
    BindingIDAttribute* inst = (BindingIDAttribute*)::uAllocObject(sizeof(BindingIDAttribute), BindingIDAttribute__typeof());
    inst->_ObjInit_1(id);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BindingSubclassAttribute__uType* BindingSubclassAttribute__typeof()
{
    static ::uStaticStrong<BindingSubclassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (BindingSubclassAttribute__uType*)::uAllocClassType(sizeof(BindingSubclassAttribute__uType), "Android.Base.Wrappers.BindingSubclassAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BindingSubclassAttribute__New_1, 0, true, BindingSubclassAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void BindingSubclassAttribute___ObjInit_1(BindingSubclassAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

BindingSubclassAttribute* BindingSubclassAttribute__New_1(::uStatic* __this)
{
    BindingSubclassAttribute* inst = (BindingSubclassAttribute*)::uAllocObject(sizeof(BindingSubclassAttribute), BindingSubclassAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IJWrapper__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.Base.Wrappers.IJWrapper");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass JWrapper___jlangObjectClass;
jmethodID JWrapper___jlangObjectEqualsMid;
jmethodID JWrapper___jlangObjectHashCodeMid;

JWrapper__uType* JWrapper__typeof()
{
    static ::uStaticStrong<JWrapper__uType*> type;
    if (type != NULL) return type;

    type = (JWrapper__uType*)::uAllocClassType(sizeof(JWrapper__uType), "Android.Base.Wrappers.JWrapper", false, 2, 1, 0);

    type->__fp_Finalize = (void(*)(::uObject*))JWrapper__Finalize;
    type->__interface_1.__fp_Dispose = (void(*)(void*))JWrapper__Uno_IDisposable_Dispose;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(JWrapper__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(JWrapper__uType, __interface_1));

    type->SetStrongRefs(
        "_javaClassName", offsetof(JWrapper, _javaClassName));

    type->SetFields(8,
        ::uNewField("_javaClassName", NULL, offsetof(JWrapper, _javaClassName), ::app::Uno::String__typeof()),
        ::uNewField("_javaObject", NULL, offsetof(JWrapper, _javaObject), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewField("_jlangObjectClass", &JWrapper___jlangObjectClass, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_jlangObjectEqualsMid", &JWrapper___jlangObjectEqualsMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("_jlangObjectHashCodeMid", &JWrapper___jlangObjectHashCodeMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("_subclassed", NULL, offsetof(JWrapper, _subclassed), ::app::Uno::Bool__typeof()),
        ::uNewField("_weakptr", NULL, offsetof(JWrapper, _weakptr), ::app::Android::Base::Primitives::uweakptr__typeof()),
        ::uNewField("disposed", NULL, offsetof(JWrapper, disposed), ::app::Uno::Bool__typeof()));

    type->SetFunctions(15,
        ::uNewFunctionVoid("_DisposeJavaObject", JWrapper___DisposeJavaObject, 0, false),
        ::uNewFunction("_GetJavaObject", JWrapper___GetJavaObject, 0, false, ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("_Init", JWrapper___Init, 0, true),
        ::uNewFunctionVoid("_InitProxy", JWrapper___InitProxy, 0, true),
        ::uNewFunction("_IsSubclassed", JWrapper___IsSubclassed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("_IsThisType", JWrapper___IsThisType, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("_onConstruct", JWrapper___onConstruct, 0, false),
        ::uNewFunctionVoid("Dispose", JWrapper__Dispose, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("equals", JWrapper__equals, 0, false, ::app::Uno::Bool__typeof(), JWrapper__typeof()),
        ::uNewFunction("hashCode", JWrapper__hashCode, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", JWrapper__New_1, 0, true, JWrapper__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", JWrapper__New_2, 0, true, JWrapper__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetInternalObj", JWrapper__SetInternalObj, 0, false, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Uno.IDisposable.Dispose", JWrapper__Uno_IDisposable_Dispose, 0, false),
        ::uNewFunction("Wrap", JWrapper__Wrap, 0, true, JWrapper__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void JWrapper__Finalize(JWrapper* __this)
{
    __this->Dispose(false);
}

void JWrapper___DisposeJavaObject(JWrapper* __this)
{
    if (!__this->_javaObject) return;
    ::app::Android::Base::JNI__DeleteGlobalRef(NULL, __this->_javaObject);
    __this->_javaObject = 0;
}

jobject JWrapper___GetJavaObject(JWrapper* __this)
{
    return __this->_javaObject;
}

void JWrapper___Init(::uStatic* __this)
{
    if (::app::Android::Base::Wrappers::JWrapper___jlangObjectClass) { return; }
    INIT_JNI;
    ::app::Android::Base::Wrappers::JWrapper___jlangObjectClass = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::Base::Wrappers::JWrapper___jlangObjectClass) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object' for JWrapper", 53); }
}

void JWrapper___InitProxy(::uStatic* __this)
{
}

bool JWrapper___IsSubclassed(JWrapper* __this)
{
    return __this->_subclassed;
}

bool JWrapper___IsThisType(::uStatic* __this, ::uObject* obj)
{
    return false;
}

void JWrapper___ObjInit(JWrapper* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    __this->_ObjInit_1(obj, typePtr, typeHasFallbackClass, resolveType, false);
}

void JWrapper___ObjInit_1(JWrapper* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    __this->_onConstruct();
    ::app::Android::Base::Types::Bridge__SetWrapperType(NULL, __this, obj, typePtr, typeHasFallbackClass, resolveType);
    __this->SetInternalObj(obj, stackArg);
}

void JWrapper___onConstruct(JWrapper* __this)
{
    __this->_weakptr = 0;
}

void JWrapper__Dispose(JWrapper* __this, bool disposing)
{
    if (!__this->disposed)
    {
        if (disposing)
        {
            __this->_DisposeJavaObject();
        }

        __this->disposed = true;
    }
}

bool JWrapper__equals(JWrapper* __this, JWrapper* arg0_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    CLASS_INIT(::app::Android::Base::Wrappers::JWrapper___jlangObjectClass,::app::Android::Base::Wrappers::JWrapper___Init(NULL));
    CACHE_METHOD(::app::Android::Base::Wrappers::JWrapper___jlangObjectEqualsMid,::app::Android::Base::Wrappers::JWrapper___jlangObjectClass,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for method java.lang.Object.equals could not be cached for jwrapper",79);
    bool result = ((bool)U_JNIVAR->CallBooleanMethod(__this->_javaObject, ::app::Android::Base::Wrappers::JWrapper___jlangObjectEqualsMid, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int JWrapper__hashCode(JWrapper* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::Base::Wrappers::JWrapper___jlangObjectClass,::app::Android::Base::Wrappers::JWrapper___Init(NULL));
    CACHE_METHOD(::app::Android::Base::Wrappers::JWrapper___jlangObjectHashCodeMid,::app::Android::Base::Wrappers::JWrapper___jlangObjectClass,"hashCode","()I",GetMethodID,"Id for method java.lang.Object.hashCode could not be cached for jwrapper",81);
    int result = ((int)U_JNIVAR->CallIntMethod(__this->_javaObject, ::app::Android::Base::Wrappers::JWrapper___jlangObjectHashCodeMid));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

JWrapper* JWrapper__New_1(::uStatic* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    JWrapper* inst = (JWrapper*)::uAllocObject(sizeof(JWrapper), JWrapper__typeof());
    inst->_ObjInit(obj, typePtr, typeHasFallbackClass, resolveType);
    return inst;
}

JWrapper* JWrapper__New_2(::uStatic* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    JWrapper* inst = (JWrapper*)::uAllocObject(sizeof(JWrapper), JWrapper__typeof());
    inst->_ObjInit_1(obj, typePtr, typeHasFallbackClass, resolveType, stackArg);
    return inst;
}

bool JWrapper__op_Equality(::uStatic* __this, JWrapper* a, JWrapper* b)
{
    if (((::uObject*)a == NULL) || ((::uObject*)b == NULL))
    {
        return (::uObject*)b == (::uObject*)a;
    }
    else
    {
        return ::app::Android::Base::JNI__IsSameObject(NULL, ::uPtr< JWrapper*>(a)->_GetJavaObject(), ::uPtr< JWrapper*>(b)->_GetJavaObject());
    }
}

bool JWrapper__op_Inequality(::uStatic* __this, JWrapper* a, JWrapper* b)
{
    return !JWrapper__op_Equality(NULL, a, b);
}

void JWrapper__SetInternalObj(JWrapper* __this, jobject obj, bool stackArg)
{
    if (!__JWrapper_Callbacks_Registered)
    {
        __JWrapper_Callbacks_Registered = true;
        __Register_Finalizer();
    }

    if (!__this->_weakptr)
    {
        uStoreWeakObject(&__this->_weakptr, __this);
        uWeakStateIntercept::SetCallback(__this->_weakptr, (uWeakStateIntercept::Callback)__JWrapper_WeakCallback);
    }

    if (obj)
    {
        __this->_javaObject = ::app::Android::Base::JNI__NewGlobalRef_1(NULL, obj);

        if (!stackArg && (::app::Android::Base::JNI__GetRefType_1(NULL, obj) == 1))
        {
            ::app::Android::Base::JNI__DeleteLocalRef_1(NULL, obj);
        }
    }
}

void JWrapper__Uno_IDisposable_Dispose(JWrapper* __this)
{
    __this->Dispose(true);
}

JWrapper* JWrapper__Wrap(::uStatic* __this, jobject obj, bool resolveType, bool typeHasFallbackClass)
{
    return JWrapper__New_1(NULL, obj, NULL, typeHasFallbackClass, resolveType);
}

}}}}

#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.com.fuse.Native.Camera.h>
#include <app/Android.com.fuse.Native.CameraTask.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>
//~Callbacks forCameraTask


JNFUN(void,Android_com_fuse_Native_CameraTask__OnSuccess44280,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::Native::CameraTask*);
    JARG_TO_UNO(arg1,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnSuccess(tmparg1);
    JCATCH
}



JNFUN(void,Android_com_fuse_Native_CameraTask__OnFailed44281,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::Native::CameraTask*);
    JARG_TO_UNO(arg1,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnFailed(tmparg1);
    JCATCH
}

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace Native {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\AndroidImpl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Camera___javaClass_1;
jclass Camera___javaProxyClass_1;
jmethodID Camera__Camera_44276_ID_c;
jmethodID Camera__Camera_44276_ID_c_prox;
jmethodID Camera__IntentCallback_44278_ID;
jmethodID Camera__TakePicture_44277_ID;

Camera__uType* Camera__typeof()
{
    static ::uStaticStrong<Camera__uType*> type;
    if (type != NULL) return type;

    type = (Camera__uType*)::uAllocClassType(sizeof(Camera__uType), "Android.com.fuse.Native.Camera", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Camera__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Camera__uType, __interface_1));

    type->SetFields(6,
        ::uNewField("_javaClass", &Camera___javaClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_javaProxyClass", &Camera___javaProxyClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("Camera_44276_ID_c", &Camera__Camera_44276_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("Camera_44276_ID_c_prox", &Camera__Camera_44276_ID_c_prox, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("IntentCallback_44278_ID", &Camera__IntentCallback_44278_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("TakePicture_44277_ID", &Camera__TakePicture_44277_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("_Init", Camera___Init_1, 0, true),
        ::uNewFunctionVoid("_InitProxy", Camera___InitProxy_1, 0, true),
        ::uNewFunction("_IsThisType", Camera___IsThisType_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("Camera_IMPL_44276", Camera__Camera_IMPL_44276, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("IntentCallback", Camera__IntentCallback, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("IntentCallback_IMPL_44278", Camera__IntentCallback_IMPL_44278, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction(".ctor", Camera__New_3, 0, true, Camera__typeof()),
        ::uNewFunction(".ctor", Camera__New_4, 0, true, Camera__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("TakePicture", Camera__TakePicture, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("TakePicture_IMPL_44277", Camera__TakePicture_IMPL_44277, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Camera___Init_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::Camera___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::Camera___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/Native/Camera"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::Camera___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.Native.Camera'", 46);; }
}

void Camera___InitProxy_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::Camera___javaProxyClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::Camera___javaProxyClass_1 = NEW_GLOBAL_REF(jclass,::app::Android::Base::JNI__LoadClass(NULL, jni, "com.Bindings.Android_com_fuse_Native_Camera"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::Camera___javaProxyClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_Native_Camera'", 54);; }
    
    BEGIN_REG_MTD(0);
    COMMIT_REG_MTD(::app::Android::com::fuse::Native::Camera___javaProxyClass_1);
}

bool Camera___IsThisType_1(::uStatic* __this, ::uObject* obj_)
{
    int N = 29;
    const char* typ = "Android.com.fuse.Native.Camera";
    const char* potential = obj_->__obj_type->TypeName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

void Camera___ObjInit_2(Camera* __this)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    __this->_subclassed = Camera___IsThisType_1(NULL, (::uObject*)__this);
    Camera* wrapper = __this->_subclassed ? __this : NULL;
    __this->_javaObject = Camera__Camera_IMPL_44276(NULL, (::uObject*)wrapper);
}

void Camera___ObjInit_3(Camera* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, obj, utype, hasFallbackClass, resolveType);
}

jobject Camera__Camera_IMPL_44276(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::Native::Camera___javaClass_1,::app::Android::com::fuse::Native::Camera___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::Camera__Camera_44276_ID_c,::app::Android::com::fuse::Native::Camera___javaClass_1,"<init>","()V",GetMethodID,"Id for fallback method com.fuse.Native.Camera.<init> could not be cached",72);
    if (arg0_) {
        CLASS_INIT(::app::Android::com::fuse::Native::Camera___javaProxyClass_1,::app::Android::com::fuse::Native::Camera___InitProxy_1(NULL));
        CACHE_METHOD(::app::Android::com::fuse::Native::Camera__Camera_44276_ID_c_prox,::app::Android::com::fuse::Native::Camera___javaProxyClass_1,"<init>","(J)V",GetMethodID,"Proxy Id for method Android_com_fuse_Native_Camera.Camera_44276_ID_c_prox could not be cached",93);
    }
    
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::Native::Camera___javaClass_1, ::app::Android::com::fuse::Native::Camera__Camera_44276_ID_c);
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    } else {
        THROW_UNO_EXCEPTION("You have subclassed a class that should have been marked final. Please let us know at the Outracks Forums", 105);;
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

void Camera__IntentCallback(::uStatic* __this, int arg0, int arg1, ::uObject* arg2)
{
    Camera__IntentCallback_IMPL_44278(NULL, arg0, arg1, arg2);
}

void Camera__IntentCallback_IMPL_44278(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CLASS_INIT(::app::Android::com::fuse::Native::Camera___javaClass_1,::app::Android::com::fuse::Native::Camera___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::Camera__IntentCallback_44278_ID,::app::Android::com::fuse::Native::Camera___javaClass_1,"IntentCallback","(IILandroid/content/Intent;)V",GetStaticMethodID,"Id for fallback method com.fuse.Native.Camera.IntentCallback could not be cached",80);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::Native::Camera___javaClass_1, ::app::Android::com::fuse::Native::Camera__IntentCallback_44278_ID, ((jint)arg0_), ((jint)arg1_), _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

Camera* Camera__New_3(::uStatic* __this)
{
    Camera* inst = (Camera*)::uAllocObject(sizeof(Camera), Camera__typeof());
    inst->_ObjInit_2();
    return inst;
}

Camera* Camera__New_4(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    Camera* inst = (Camera*)::uAllocObject(sizeof(Camera), Camera__typeof());
    inst->_ObjInit_3(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void Camera__TakePicture(::uStatic* __this, ::uObject* arg0)
{
    Camera__TakePicture_IMPL_44277(NULL, arg0);
}

void Camera__TakePicture_IMPL_44277(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    CLASS_INIT(::app::Android::com::fuse::Native::Camera___javaClass_1,::app::Android::com::fuse::Native::Camera___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::Camera__TakePicture_44277_ID,::app::Android::com::fuse::Native::Camera___javaClass_1,"TakePicture","(Lcom/fuse/Native/CameraTask;)V",GetStaticMethodID,"Id for fallback method com.fuse.Native.Camera.TakePicture could not be cached",77);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::Native::Camera___javaClass_1, ::app::Android::com::fuse::Native::Camera__TakePicture_44277_ID, _obArg0);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\AndroidImpl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CameraTask___javaClass_1;
jclass CameraTask___javaProxyClass_1;
jmethodID CameraTask__CameraTask_44283_ID_c;
jmethodID CameraTask__CameraTask_44283_ID_c_prox;
jmethodID CameraTask__getURI_44282_ID;
jfieldID CameraTask__ID_44279_ID;

CameraTask__uType* CameraTask__typeof()
{
    static ::uStaticStrong<CameraTask__uType*> type;
    if (type != NULL) return type;

    type = (CameraTask__uType*)::uAllocClassType(sizeof(CameraTask__uType), "Android.com.fuse.Native.CameraTask", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CameraTask__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CameraTask__uType, __interface_1));

    type->SetFields(6,
        ::uNewField("_javaClass", &CameraTask___javaClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_javaProxyClass", &CameraTask___javaProxyClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("CameraTask_44283_ID_c", &CameraTask__CameraTask_44283_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("CameraTask_44283_ID_c_prox", &CameraTask__CameraTask_44283_ID_c_prox, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getURI_44282_ID", &CameraTask__getURI_44282_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ID_44279_ID", &CameraTask__ID_44279_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("_Init", CameraTask___Init_1, 0, true),
        ::uNewFunctionVoid("_InitProxy", CameraTask___InitProxy_1, 0, true),
        ::uNewFunction("_IsThisType", CameraTask___IsThisType_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("CameraTask_IMPL_44283", CameraTask__CameraTask_IMPL_44283, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_ID", CameraTask__get_ID, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getURI", CameraTask__getURI, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getURI_IMPL_44282", CameraTask__getURI_IMPL_44282, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("ID_GET_44279", CameraTask__ID_GET_44279, 0, true, ::app::Uno::Int__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("OnFailed", type->__fp_OnFailed, offsetof(CameraTask__uType, __fp_OnFailed), false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("OnSuccess", type->__fp_OnSuccess, offsetof(CameraTask__uType, __fp_OnSuccess), false, ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void CameraTask___Init_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::CameraTask___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::CameraTask___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/Native/CameraTask"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::CameraTask___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.Native.CameraTask'", 50);; }
}

void CameraTask___InitProxy_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1 = NEW_GLOBAL_REF(jclass,::app::Android::Base::JNI__LoadClass(NULL, jni, "com.Bindings.Android_com_fuse_Native_CameraTask"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_Native_CameraTask'", 58);; }
    
    BEGIN_REG_MTD(2);
    
    REG_MTD(0,"__n_OnSuccess","(JLjava/lang/String;J)V",::Android_com_fuse_Native_CameraTask__OnSuccess44280);
    
    
    REG_MTD(1,"__n_OnFailed","(JLjava/lang/String;J)V",::Android_com_fuse_Native_CameraTask__OnFailed44281);
    
    COMMIT_REG_MTD(::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1);
}

bool CameraTask___IsThisType_1(::uStatic* __this, ::uObject* obj_)
{
    int N = 33;
    const char* typ = "Android.com.fuse.Native.CameraTask";
    const char* potential = obj_->__obj_type->TypeName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

void CameraTask___ObjInit_2(CameraTask* __this, int arg0, int arg1, bool arg2)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    __this->_subclassed = CameraTask___IsThisType_1(NULL, (::uObject*)__this);
    CameraTask* wrapper = __this->_subclassed ? __this : NULL;
    __this->_javaObject = CameraTask__CameraTask_IMPL_44283(NULL, (::uObject*)wrapper, arg0, arg1, arg2);
}

void CameraTask___ObjInit_3(CameraTask* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, obj, utype, hasFallbackClass, resolveType);
}

jobject CameraTask__CameraTask_IMPL_44283(::uStatic* __this, ::uObject* arg0_, int arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::Native::CameraTask___javaClass_1,::app::Android::com::fuse::Native::CameraTask___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c,::app::Android::com::fuse::Native::CameraTask___javaClass_1,"<init>","(IIZ)V",GetMethodID,"Id for fallback method com.fuse.Native.CameraTask.<init> could not be cached",76);
    if (arg0_) {
        CLASS_INIT(::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1,::app::Android::com::fuse::Native::CameraTask___InitProxy_1(NULL));
        CACHE_METHOD(::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c_prox,::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1,"<init>","(JIIZ)V",GetMethodID,"Proxy Id for method Android_com_fuse_Native_CameraTask.CameraTask_44283_ID_c_prox could not be cached",101);
    }
    
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::Native::CameraTask___javaClass_1, ::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c, ((jint)arg1_), ((jint)arg2_), ((jboolean)arg3_));
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1, ::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c_prox, (jlong)arg0_->__obj_weak, ((jint)arg1_), ((jint)arg2_), ((jboolean)arg3_));
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

int CameraTask__get_ID(CameraTask* __this)
{
    return CameraTask__ID_GET_44279(NULL, __this->_javaObject);
}

::uObject* CameraTask__getURI(CameraTask* __this)
{
    return CameraTask__getURI_IMPL_44282(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* CameraTask__getURI_IMPL_44282(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    ::uObject* result;
    CLASS_INIT(::app::Android::com::fuse::Native::CameraTask___javaClass_1,::app::Android::com::fuse::Native::CameraTask___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::CameraTask__getURI_44282_ID,::app::Android::com::fuse::Native::CameraTask___javaClass_1,"getURI","()Landroid/net/Uri;",GetMethodID,"Id for fallback method com.fuse.Native.CameraTask.getURI could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::com::fuse::Native::CameraTask___javaClass_1, ::app::Android::com::fuse::Native::CameraTask__getURI_44282_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::com::fuse::Native::CameraTask__getURI_44282_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    
    return result;
}

int CameraTask__ID_GET_44279(::uStatic* __this, jobject arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::Native::CameraTask___javaClass_1,::app::Android::com::fuse::Native::CameraTask___Init_1(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::com::fuse::Native::CameraTask__ID_44279_ID)) {
        CACHE_FIELD(::app::Android::com::fuse::Native::CameraTask__ID_44279_ID,::app::Android::com::fuse::Native::CameraTask___javaClass_1,"ID","I",GetFieldID,"Id for field CameraTask.ID could not be cached",46);
        ::uExitCritical();
    }
    int result;
    result = ((int)U_JNIVAR->GetIntField(arg0_, ::app::Android::com::fuse::Native::CameraTask__ID_44279_ID));
    return result;
}

}}}}}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_WRAPPERS_J_WRAPPER_H__
#define __APP_ANDROID_BASE_WRAPPERS_J_WRAPPER_H__

#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <jni.h>
#include <Uno.h>
//~
#define MAYBEPROXIFYARG(NUM,ID,NEW) bool subclassed ## NUM = (!ID) ? false : (::app::Android::Base::Wrappers::IJWrapper::_IsSubclassed(ID)); jobject _iProx ## NUM = (!ID) ? NULL : (subclassed ## NUM ? NEW : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(ID));

#define FREEPROXIED(NUM)if (subclassed ## NUM) { U_JNIVAR->DeleteLocalRef(_iProx ## NUM); }

#define UNOCALLANDRETURN(CALL) JNIEnv* _cb_jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);::app::Android::Base::Wrappers::JWrapper* _res = (::app::Android::Base::Wrappers::JWrapper*)CALL;if (_res) { return _cb_jni->NewLocalRef(_res->_javaObject); } else { return NULL; }

#define NEW_UNO(LINE,RETURNVAR,TYPEOF,UNOTYPE,FALLBACK,RESOLVE) U_JOBJECT tmpRes = LINE; ::app::Android::Base::JNI__CheckException(NULL); ::uLong unoRef = ::app::Android::Base::JNI__GetUnoRef(NULL, tmpRes); if (unoRef==0) { RETURNVAR = NULL; } else if (unoRef>0) { RETURNVAR = (UNOTYPE)uLoadWeakObject((uWeakObject*)unoRef); } else { RETURNVAR = ((UNOTYPE)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, tmpRes, (::uType*)TYPEOF, FALLBACK, RESOLVE)); }

namespace app {
namespace Android {
namespace Base {
namespace Wrappers {

struct JWrapper;

extern jclass JWrapper___jlangObjectClass;
extern jmethodID JWrapper___jlangObjectEqualsMid;
extern jmethodID JWrapper___jlangObjectHashCodeMid;

struct JWrapper__uType : ::uClassType
{
    ::app::Android::Base::Wrappers::IJWrapper __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

JWrapper__uType* JWrapper__typeof();

void JWrapper__Finalize(JWrapper* __this);
void JWrapper___DisposeJavaObject(JWrapper* __this);
jobject JWrapper___GetJavaObject(JWrapper* __this);
void JWrapper___Init(::uStatic* __this);
void JWrapper___InitProxy(::uStatic* __this);
bool JWrapper___IsSubclassed(JWrapper* __this);
bool JWrapper___IsThisType(::uStatic* __this, ::uObject* obj);
void JWrapper___ObjInit(JWrapper* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType);
void JWrapper___ObjInit_1(JWrapper* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg);
void JWrapper___onConstruct(JWrapper* __this);
void JWrapper__Dispose(JWrapper* __this, bool disposing);
bool JWrapper__equals(JWrapper* __this, JWrapper* arg0_);
int JWrapper__hashCode(JWrapper* __this);
JWrapper* JWrapper__New_1(::uStatic* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType);
JWrapper* JWrapper__New_2(::uStatic* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg);
bool JWrapper__op_Equality(::uStatic* __this, JWrapper* a, JWrapper* b);
bool JWrapper__op_Inequality(::uStatic* __this, JWrapper* a, JWrapper* b);
void JWrapper__SetInternalObj(JWrapper* __this, jobject obj, bool stackArg);
void JWrapper__Uno_IDisposable_Dispose(JWrapper* __this);
JWrapper* JWrapper__Wrap(::uStatic* __this, jobject obj, bool resolveType, bool typeHasFallbackClass);

struct JWrapper : ::uObject
{
    uWeakObject* _weakptr;
    bool disposed;
    jobject _javaObject;
    bool _subclassed;
    ::uStrong< ::uString*> _javaClassName;

    void _DisposeJavaObject() { JWrapper___DisposeJavaObject(this); }
    jobject _GetJavaObject() { return JWrapper___GetJavaObject(this); }
    bool _IsSubclassed() { return JWrapper___IsSubclassed(this); }
    void _ObjInit(jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType) { JWrapper___ObjInit(this, obj, typePtr, typeHasFallbackClass, resolveType); }
    void _ObjInit_1(jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) { JWrapper___ObjInit_1(this, obj, typePtr, typeHasFallbackClass, resolveType, stackArg); }
    void _onConstruct() { JWrapper___onConstruct(this); }
    void Dispose(bool disposing) { JWrapper__Dispose(this, disposing); }
    bool equals(JWrapper* arg0_) { return JWrapper__equals(this, arg0_); }
    int hashCode() { return JWrapper__hashCode(this); }
    void SetInternalObj(jobject obj, bool stackArg) { JWrapper__SetInternalObj(this, obj, stackArg); }
};

}}}}


#endif

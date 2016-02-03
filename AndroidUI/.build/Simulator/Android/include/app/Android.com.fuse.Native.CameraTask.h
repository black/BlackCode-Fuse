// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\AndroidImpl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_COM_FUSE_NATIVE_CAMERA_TASK_H__
#define __APP_ANDROID_COM_FUSE_NATIVE_CAMERA_TASK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace Native {

struct CameraTask;

extern jclass CameraTask___javaClass_1;
extern jclass CameraTask___javaProxyClass_1;
extern jmethodID CameraTask__CameraTask_44283_ID_c;
extern jmethodID CameraTask__CameraTask_44283_ID_c_prox;
extern jmethodID CameraTask__getURI_44282_ID;
extern jfieldID CameraTask__ID_44279_ID;

struct CameraTask__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
    void(*__fp_OnFailed)(CameraTask*, ::uObject*);
    void(*__fp_OnSuccess)(CameraTask*, ::uObject*);
};

CameraTask__uType* CameraTask__typeof();

void CameraTask___Init_1(::uStatic* __this);
void CameraTask___InitProxy_1(::uStatic* __this);
bool CameraTask___IsThisType_1(::uStatic* __this, ::uObject* obj_);
void CameraTask___ObjInit_2(CameraTask* __this, int arg0, int arg1, bool arg2);
void CameraTask___ObjInit_3(CameraTask* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
jobject CameraTask__CameraTask_IMPL_44283(::uStatic* __this, ::uObject* arg0_, int arg1_, int arg2_, bool arg3_);
int CameraTask__get_ID(CameraTask* __this);
::uObject* CameraTask__getURI(CameraTask* __this);
::uObject* CameraTask__getURI_IMPL_44282(::uStatic* __this, bool arg0_, jobject arg1_);
int CameraTask__ID_GET_44279(::uStatic* __this, jobject arg0_);

struct CameraTask : ::app::Android::Base::Wrappers::JWrapper
{
    void _ObjInit_2(int arg0, int arg1, bool arg2) { CameraTask___ObjInit_2(this, arg0, arg1, arg2); }
    void _ObjInit_3(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { CameraTask___ObjInit_3(this, obj, utype, hasFallbackClass, resolveType); }
    int ID() { return CameraTask__get_ID(this); }
    ::uObject* getURI() { return CameraTask__getURI(this); }
    void OnFailed(::uObject* arg0) { (((CameraTask__uType*)this->__obj_type)->__fp_OnFailed)(this, arg0); }
    void OnSuccess(::uObject* arg0) { (((CameraTask__uType*)this->__obj_type)->__fp_OnSuccess)(this, arg0); }
};

}}}}}


#endif

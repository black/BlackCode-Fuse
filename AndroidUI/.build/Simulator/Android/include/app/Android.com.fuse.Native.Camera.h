// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\AndroidImpl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_COM_FUSE_NATIVE_CAMERA_H__
#define __APP_ANDROID_COM_FUSE_NATIVE_CAMERA_H__

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

struct Camera;

extern jclass Camera___javaClass_1;
extern jclass Camera___javaProxyClass_1;
extern jmethodID Camera__Camera_44276_ID_c;
extern jmethodID Camera__Camera_44276_ID_c_prox;
extern jmethodID Camera__IntentCallback_44278_ID;
extern jmethodID Camera__TakePicture_44277_ID;

struct Camera__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
};

Camera__uType* Camera__typeof();

void Camera___Init_1(::uStatic* __this);
void Camera___InitProxy_1(::uStatic* __this);
bool Camera___IsThisType_1(::uStatic* __this, ::uObject* obj_);
void Camera___ObjInit_2(Camera* __this);
void Camera___ObjInit_3(Camera* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
jobject Camera__Camera_IMPL_44276(::uStatic* __this, ::uObject* arg0_);
void Camera__IntentCallback(::uStatic* __this, int arg0, int arg1, ::uObject* arg2);
void Camera__IntentCallback_IMPL_44278(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_);
Camera* Camera__New_3(::uStatic* __this);
Camera* Camera__New_4(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Camera__TakePicture(::uStatic* __this, ::uObject* arg0);
void Camera__TakePicture_IMPL_44277(::uStatic* __this, ::uObject* arg0_);

struct Camera : ::app::Android::Base::Wrappers::JWrapper
{
    void _ObjInit_2() { Camera___ObjInit_2(this); }
    void _ObjInit_3(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Camera___ObjInit_3(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}}


#endif

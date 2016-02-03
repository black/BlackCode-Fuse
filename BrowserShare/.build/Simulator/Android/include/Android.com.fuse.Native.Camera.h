// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.19.3\AndroidImpl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace com{namespace fuse{namespace Native{struct Camera;}}}}}

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace Native{

// public sealed extern class Camera :9
// {
::g::Android::Base::Wrappers::JWrapper_type* Camera_typeof();
void Camera__ctor_2_fn(Camera* __this);
void Camera__ctor_3_fn(Camera* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Camera___Init1_fn();
void Camera___InitProxy1_fn();
void Camera___IsThisType1_fn(uObject* obj_, bool* __retval);
void Camera__Camera_IMPL_44276_fn(uObject* arg0_, jobject* __retval);
void Camera__IntentCallback_fn(int* arg0, int* arg1, uObject* arg2);
void Camera__IntentCallback_IMPL_44278_fn(int* arg0_, int* arg1_, uObject* arg2_);
void Camera__New3_fn(Camera** __retval);
void Camera__New4_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Camera** __retval);
void Camera__TakePicture_fn(uObject* arg0);
void Camera__TakePicture_IMPL_44277_fn(uObject* arg0_);

struct Camera : ::g::Android::Base::Wrappers::JWrapper
{
    static jclass _javaClass1_;
    static jclass& _javaClass1() { return _javaClass1_; }
    static jclass _javaProxyClass1_;
    static jclass& _javaProxyClass1() { return _javaProxyClass1_; }
    static jmethodID Camera_44276_ID_c_;
    static jmethodID& Camera_44276_ID_c() { return Camera_44276_ID_c_; }
    static jmethodID Camera_44276_ID_c_prox_;
    static jmethodID& Camera_44276_ID_c_prox() { return Camera_44276_ID_c_prox_; }
    static jmethodID IntentCallback_44278_ID_;
    static jmethodID& IntentCallback_44278_ID() { return IntentCallback_44278_ID_; }
    static jmethodID TakePicture_44277_ID_;
    static jmethodID& TakePicture_44277_ID() { return TakePicture_44277_ID_; }

    void ctor_2();
    void ctor_3(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init1();
    static void _InitProxy1();
    static bool _IsThisType1(uObject* obj_);
    static jobject Camera_IMPL_44276(uObject* arg0_);
    static void IntentCallback(int arg0, int arg1, uObject* arg2);
    static void IntentCallback_IMPL_44278(int arg0_, int arg1_, uObject* arg2_);
    static Camera* New3();
    static Camera* New4(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void TakePicture(uObject* arg0);
    static void TakePicture_IMPL_44277(uObject* arg0_);
};
// }

}}}}} // ::g::Android::com::fuse::Native

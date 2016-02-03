// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.19.3\AndroidImpl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace com{namespace fuse{namespace Native{struct CameraTask;}}}}}

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace Native{

// public abstract extern class CameraTask :61
// {
struct CameraTask_type : ::g::Android::Base::Wrappers::JWrapper_type
{
    void(*fp_OnFailed)(::g::Android::com::fuse::Native::CameraTask*, uObject*);
    void(*fp_OnSuccess)(::g::Android::com::fuse::Native::CameraTask*, uObject*);
};

CameraTask_type* CameraTask_typeof();
void CameraTask__ctor_3_fn(CameraTask* __this, int* arg0, int* arg1, bool* arg2);
void CameraTask___Init1_fn();
void CameraTask___InitProxy1_fn();
void CameraTask___IsThisType1_fn(uObject* obj_, bool* __retval);
void CameraTask__CameraTask_IMPL_44283_fn(uObject* arg0_, int* arg1_, int* arg2_, bool* arg3_, jobject* __retval);

struct CameraTask : ::g::Android::Base::Wrappers::JWrapper
{
    static jclass _javaClass1_;
    static jclass& _javaClass1() { return _javaClass1_; }
    static jclass _javaProxyClass1_;
    static jclass& _javaProxyClass1() { return _javaProxyClass1_; }
    static jmethodID CameraTask_44283_ID_c_;
    static jmethodID& CameraTask_44283_ID_c() { return CameraTask_44283_ID_c_; }
    static jmethodID CameraTask_44283_ID_c_prox_;
    static jmethodID& CameraTask_44283_ID_c_prox() { return CameraTask_44283_ID_c_prox_; }

    void ctor_3(int arg0, int arg1, bool arg2);
    void OnFailed(uObject* arg0) { (((CameraTask_type*)__type)->fp_OnFailed)(this, arg0); }
    void OnSuccess(uObject* arg0) { (((CameraTask_type*)__type)->fp_OnSuccess)(this, arg0); }
    static void _Init1();
    static void _InitProxy1();
    static bool _IsThisType1(uObject* obj_);
    static jobject CameraTask_IMPL_44283(uObject* arg0_, int arg1_, int arg2_, bool arg3_);
};
// }

}}}}} // ::g::Android::com::fuse::Native

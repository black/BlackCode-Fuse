// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class SurfaceTexture :11898
// {
::g::Android::java::lang::Object_type* SurfaceTexture_typeof();
void SurfaceTexture__ctor_5_fn(SurfaceTexture* __this, int* arg0);
void SurfaceTexture___Init2_fn();
void SurfaceTexture__New6_fn(int* arg0, SurfaceTexture** __retval);
void SurfaceTexture__release_fn(SurfaceTexture* __this);
void SurfaceTexture__release_IMPL_7308_fn(bool* arg0_, jobject* arg1_);
void SurfaceTexture__setOnFrameAvailableListener_fn(SurfaceTexture* __this, uObject* arg0);
void SurfaceTexture__setOnFrameAvailableListener_IMPL_7300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void SurfaceTexture__updateTexImage_fn(SurfaceTexture* __this);
void SurfaceTexture__updateTexImage_IMPL_7302_fn(bool* arg0_, jobject* arg1_);

struct SurfaceTexture : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID release_7308_ID_;
    static jmethodID& release_7308_ID() { return release_7308_ID_; }
    static jmethodID setOnFrameAvailableListener_7300_ID_;
    static jmethodID& setOnFrameAvailableListener_7300_ID() { return setOnFrameAvailableListener_7300_ID_; }
    static jmethodID SurfaceTexture_7298_ID_c_;
    static jmethodID& SurfaceTexture_7298_ID_c() { return SurfaceTexture_7298_ID_c_; }
    static jmethodID updateTexImage_7302_ID_;
    static jmethodID& updateTexImage_7302_ID() { return updateTexImage_7302_ID_; }

    void ctor_5(int arg0);
    void release();
    void setOnFrameAvailableListener(uObject* arg0);
    void updateTexImage();
    static void _Init2();
    static SurfaceTexture* New6(int arg0);
    static void release_IMPL_7308(bool arg0_, jobject arg1_);
    static void setOnFrameAvailableListener_IMPL_7300(bool arg0_, jobject arg1_, uObject* arg2_);
    static void updateTexImage_IMPL_7302(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::graphics

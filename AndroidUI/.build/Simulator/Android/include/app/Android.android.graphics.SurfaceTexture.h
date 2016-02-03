// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_SURFACE_TEXTURE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_SURFACE_TEXTURE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct SurfaceTexture;

extern jclass SurfaceTexture___javaClass_2;
extern jmethodID SurfaceTexture__finalize_7309_ID;
extern jmethodID SurfaceTexture__release_7308_ID;
extern jmethodID SurfaceTexture__SurfaceTexture_7298_ID_c;

struct SurfaceTexture__uType : ::app::Android::java::lang::Object__uType
{
};

SurfaceTexture__uType* SurfaceTexture__typeof();

void SurfaceTexture___Init_2(::uStatic* __this);
void SurfaceTexture___ObjInit_4(SurfaceTexture* __this, int arg0);
void SurfaceTexture__finalize(SurfaceTexture* __this);
void SurfaceTexture__finalize_IMPL_7309(::uStatic* __this, bool arg0_, jobject arg1_);
SurfaceTexture* SurfaceTexture__New_5(::uStatic* __this, int arg0);
void SurfaceTexture__release(SurfaceTexture* __this);
void SurfaceTexture__release_IMPL_7308(::uStatic* __this, bool arg0_, jobject arg1_);

struct SurfaceTexture : ::app::Android::java::lang::Object
{
    void _ObjInit_4(int arg0) { SurfaceTexture___ObjInit_4(this, arg0); }
    void release() { SurfaceTexture__release(this); }
};

}}}}


#endif

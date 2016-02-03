// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_D_L_R_CALLBACK_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_D_L_R_CALLBACK_H__

#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_SurfaceHolderDLRCallback;

extern jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID;
extern jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID;
extern jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID;

struct Android_android_view_SurfaceHolderDLRCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::SurfaceHolderDLRCallback __interface_2;
};

Android_android_view_SurfaceHolderDLRCallback__uType* Android_android_view_SurfaceHolderDLRCallback__typeof();

void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0, int arg1, int arg2, int arg3);
void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_);
void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_view_SurfaceHolderDLRCallback : ::app::Android::java::lang::Object
{
    void surfaceChanged(::uObject* arg0, int arg1, int arg2, int arg3) { Android_android_view_SurfaceHolderDLRCallback__surfaceChanged(this, arg0, arg1, arg2, arg3); }
    void surfaceCreated(::uObject* arg0) { Android_android_view_SurfaceHolderDLRCallback__surfaceCreated(this, arg0); }
    void surfaceDestroyed(::uObject* arg0) { Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed(this, arg0); }
};

}}}


#endif

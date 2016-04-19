// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SurfaceHolderDLRCallback;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_SurfaceHolderDLRCallback :19817
// {
struct Android_android_view_SurfaceHolderDLRCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::SurfaceHolderDLRCallback interface2;
};

Android_android_view_SurfaceHolderDLRCallback_type* Android_android_view_SurfaceHolderDLRCallback_typeof();
void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_fn(Android_android_view_SurfaceHolderDLRCallback* __this, uObject* arg0, int* arg1, int* arg2, int* arg3);
void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_);
void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_fn(Android_android_view_SurfaceHolderDLRCallback* __this, uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_fn(Android_android_view_SurfaceHolderDLRCallback* __this, uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_SurfaceHolderDLRCallback : ::g::Android::java::lang::Object
{
    static jmethodID surfaceChanged_22607_ID_;
    static jmethodID& surfaceChanged_22607_ID() { return surfaceChanged_22607_ID_; }
    static jmethodID surfaceCreated_22606_ID_;
    static jmethodID& surfaceCreated_22606_ID() { return surfaceCreated_22606_ID_; }
    static jmethodID surfaceDestroyed_22608_ID_;
    static jmethodID& surfaceDestroyed_22608_ID() { return surfaceDestroyed_22608_ID_; }

    void surfaceChanged(uObject* arg0, int arg1, int arg2, int arg3);
    void surfaceCreated(uObject* arg0);
    void surfaceDestroyed(uObject* arg0);
    static void surfaceChanged_IMPL_22607(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_);
    static void surfaceCreated_IMPL_22606(bool arg0_, jobject arg1_, uObject* arg2_);
    static void surfaceDestroyed_IMPL_22608(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

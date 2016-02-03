// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.android.view.SurfaceHolderDLRCallback2.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SurfaceHolderDLRCallback2;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_SurfaceHolderDLRCallback2 :19858
// {
struct Android_android_view_SurfaceHolderDLRCallback2_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::SurfaceHolderDLRCallback2 interface2;
    ::g::Android::android::view::SurfaceHolderDLRCallback interface3;
};

Android_android_view_SurfaceHolderDLRCallback2_type* Android_android_view_SurfaceHolderDLRCallback2_typeof();
void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0, int* arg1, int* arg2, int* arg3);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0);
void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_SurfaceHolderDLRCallback2 : ::g::Android::java::lang::Object
{
    static jmethodID surfaceChanged_22607_ID_;
    static jmethodID& surfaceChanged_22607_ID() { return surfaceChanged_22607_ID_; }
    static jmethodID surfaceCreated_22606_ID_;
    static jmethodID& surfaceCreated_22606_ID() { return surfaceCreated_22606_ID_; }
    static jmethodID surfaceDestroyed_22608_ID_;
    static jmethodID& surfaceDestroyed_22608_ID() { return surfaceDestroyed_22608_ID_; }
    static jmethodID surfaceRedrawNeeded_22609_ID_;
    static jmethodID& surfaceRedrawNeeded_22609_ID() { return surfaceRedrawNeeded_22609_ID_; }

    void surfaceChanged(uObject* arg0, int arg1, int arg2, int arg3);
    void surfaceCreated(uObject* arg0);
    void surfaceDestroyed(uObject* arg0);
    void surfaceRedrawNeeded(uObject* arg0);
    static void surfaceChanged_IMPL_22607(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_);
    static void surfaceCreated_IMPL_22606(bool arg0_, jobject arg1_, uObject* arg2_);
    static void surfaceDestroyed_IMPL_22608(bool arg0_, jobject arg1_, uObject* arg2_);
    static void surfaceRedrawNeeded_IMPL_22609(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

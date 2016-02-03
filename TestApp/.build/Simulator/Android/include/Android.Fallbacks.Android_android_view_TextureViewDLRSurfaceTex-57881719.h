// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_TextureViewDLRSurfaceTextureListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_TextureViewDLRSurfaceTextureListener :20028
// {
struct Android_android_view_TextureViewDLRSurfaceTextureListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::TextureViewDLRSurfaceTextureListener interface2;
};

Android_android_view_TextureViewDLRSurfaceTextureListener_type* Android_android_view_TextureViewDLRSurfaceTextureListener_typeof();
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0, int* arg1, int* arg2);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0, bool* __retval);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0, int* arg1, int* arg2);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0);
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_TextureViewDLRSurfaceTextureListener : ::g::Android::java::lang::Object
{
    static jmethodID onSurfaceTextureAvailable_22642_ID_;
    static jmethodID& onSurfaceTextureAvailable_22642_ID() { return onSurfaceTextureAvailable_22642_ID_; }
    static jmethodID onSurfaceTextureDestroyed_22644_ID_;
    static jmethodID& onSurfaceTextureDestroyed_22644_ID() { return onSurfaceTextureDestroyed_22644_ID_; }
    static jmethodID onSurfaceTextureSizeChanged_22643_ID_;
    static jmethodID& onSurfaceTextureSizeChanged_22643_ID() { return onSurfaceTextureSizeChanged_22643_ID_; }
    static jmethodID onSurfaceTextureUpdated_22645_ID_;
    static jmethodID& onSurfaceTextureUpdated_22645_ID() { return onSurfaceTextureUpdated_22645_ID_; }

    void onSurfaceTextureAvailable(::g::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2);
    bool onSurfaceTextureDestroyed(::g::Android::android::graphics::SurfaceTexture* arg0);
    void onSurfaceTextureSizeChanged(::g::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2);
    void onSurfaceTextureUpdated(::g::Android::android::graphics::SurfaceTexture* arg0);
    static void onSurfaceTextureAvailable_IMPL_22642(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static bool onSurfaceTextureDestroyed_IMPL_22644(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onSurfaceTextureSizeChanged_IMPL_22643(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static void onSurfaceTextureUpdated_IMPL_22645(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

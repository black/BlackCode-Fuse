// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener :22850
// {
struct Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener interface2;
};

Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type* Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_typeof();
void Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener__onFrameAvailable_fn(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0);
void Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener__onFrameAvailable_IMPL_7295_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener : ::g::Android::java::lang::Object
{
    static jmethodID onFrameAvailable_7295_ID_;
    static jmethodID& onFrameAvailable_7295_ID() { return onFrameAvailable_7295_ID_; }

    void onFrameAvailable(::g::Android::android::graphics::SurfaceTexture* arg0);
    static void onFrameAvailable_IMPL_7295(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks

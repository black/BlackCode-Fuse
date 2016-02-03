// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Shader;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory :10804
// {
::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type* Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory_typeof();
void Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_fn(Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory* __this, int* arg0, int* arg1, ::g::Android::android::graphics::Shader** __retval);
void Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_IMPL_45127_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);

struct Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory : ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory
{
    static jmethodID resize_45127_ID_;
    static jmethodID& resize_45127_ID() { return resize_45127_ID_; }

    static uObject* resize_IMPL_45127(bool arg0_, jobject arg1_, int arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks

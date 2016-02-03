// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\opengl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace opengl{struct GLUtils;}}}}

namespace g{
namespace Android{
namespace android{
namespace opengl{

// public sealed extern class GLUtils :28007
// {
::g::Android::java::lang::Object_type* GLUtils_typeof();
void GLUtils___Init2_fn();
void GLUtils__texImage2D_fn(int* arg0, int* arg1, ::g::Android::android::graphics::Bitmap* arg2, int* arg3);
void GLUtils__texImage2D_IMPL_13332_fn(int* arg0_, int* arg1_, uObject* arg2_, int* arg3_);

struct GLUtils : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID texImage2D_13332_ID_;
    static jmethodID& texImage2D_13332_ID() { return texImage2D_13332_ID_; }

    static void _Init2();
    static void texImage2D(int arg0, int arg1, ::g::Android::android::graphics::Bitmap* arg2, int arg3);
    static void texImage2D_IMPL_13332(int arg0_, int arg1_, uObject* arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::opengl

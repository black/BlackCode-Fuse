// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.Shader.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct LinearGradient;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct ShaderDLRTileMode;}}}}
namespace g{namespace Android{namespace Runtime{struct FloatArray;}}}
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class LinearGradient :6119
// {
::g::Android::java::lang::Object_type* LinearGradient_typeof();
void LinearGradient__ctor_7_fn(LinearGradient* __this, float* arg0, float* arg1, float* arg2, float* arg3, ::g::Android::Runtime::IntArray* arg4, ::g::Android::Runtime::FloatArray* arg5, ::g::Android::android::graphics::ShaderDLRTileMode* arg6);
void LinearGradient___Init3_fn();
void LinearGradient__New8_fn(float* arg0, float* arg1, float* arg2, float* arg3, ::g::Android::Runtime::IntArray* arg4, ::g::Android::Runtime::FloatArray* arg5, ::g::Android::android::graphics::ShaderDLRTileMode* arg6, LinearGradient** __retval);

struct LinearGradient : ::g::Android::android::graphics::Shader
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID LinearGradient_6745_ID_c_;
    static jmethodID& LinearGradient_6745_ID_c() { return LinearGradient_6745_ID_c_; }

    void ctor_7(float arg0, float arg1, float arg2, float arg3, ::g::Android::Runtime::IntArray* arg4, ::g::Android::Runtime::FloatArray* arg5, ::g::Android::android::graphics::ShaderDLRTileMode* arg6);
    static void _Init3();
    static LinearGradient* New8(float arg0, float arg1, float arg2, float arg3, ::g::Android::Runtime::IntArray* arg4, ::g::Android::Runtime::FloatArray* arg5, ::g::Android::android::graphics::ShaderDLRTileMode* arg6);
};
// }

}}}} // ::g::Android::android::graphics

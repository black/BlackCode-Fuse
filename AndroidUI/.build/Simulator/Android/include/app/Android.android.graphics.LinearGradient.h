// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_LINEAR_GRADIENT_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_LINEAR_GRADIENT_H__

#include <app/Android.android.graphics.Shader.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct ShaderDLRTileMode; } } } }
namespace app { namespace Android { namespace Runtime { struct FloatArray; } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct LinearGradient;

extern jclass LinearGradient___javaClass_3;
extern jmethodID LinearGradient__LinearGradient_6745_ID_c;

struct LinearGradient__uType : ::app::Android::android::graphics::Shader__uType
{
};

LinearGradient__uType* LinearGradient__typeof();

void LinearGradient___Init_3(::uStatic* __this);
void LinearGradient___ObjInit_7(LinearGradient* __this, float arg0, float arg1, float arg2, float arg3, ::app::Android::Runtime::IntArray* arg4, ::app::Android::Runtime::FloatArray* arg5, ::app::Android::android::graphics::ShaderDLRTileMode* arg6);
LinearGradient* LinearGradient__New_8(::uStatic* __this, float arg0, float arg1, float arg2, float arg3, ::app::Android::Runtime::IntArray* arg4, ::app::Android::Runtime::FloatArray* arg5, ::app::Android::android::graphics::ShaderDLRTileMode* arg6);

struct LinearGradient : ::app::Android::android::graphics::Shader
{
    void _ObjInit_7(float arg0, float arg1, float arg2, float arg3, ::app::Android::Runtime::IntArray* arg4, ::app::Android::Runtime::FloatArray* arg5, ::app::Android::android::graphics::ShaderDLRTileMode* arg6) { LinearGradient___ObjInit_7(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SHADER_FACTORY_H__
#define __APP_FUSE_ANDROID_SHADER_FACTORY_H__

#include <app/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Shader; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ShaderFactory;

extern jclass ShaderFactory___javaClass_3;

struct ShaderFactory__uType : ::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory__uType
{
};

ShaderFactory__uType* ShaderFactory__typeof();

void ShaderFactory___ObjInit_6(ShaderFactory* __this, ::app::Fuse::Drawing::Brush* brush);
::app::Android::android::graphics::Shader* ShaderFactory__LinearGradientShader(ShaderFactory* __this, ::app::Fuse::Drawing::LinearGradient* linearGradient);
ShaderFactory* ShaderFactory__New_5(::uStatic* __this, ::app::Fuse::Drawing::Brush* brush);
::app::Android::android::graphics::Shader* ShaderFactory__resize(ShaderFactory* __this, int width, int height);

struct ShaderFactory : ::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _brush;

    void _ObjInit_6(::app::Fuse::Drawing::Brush* brush) { ShaderFactory___ObjInit_6(this, brush); }
    ::app::Android::android::graphics::Shader* LinearGradientShader(::app::Fuse::Drawing::LinearGradient* linearGradient) { return ShaderFactory__LinearGradientShader(this, linearGradient); }
};

}}}


#endif

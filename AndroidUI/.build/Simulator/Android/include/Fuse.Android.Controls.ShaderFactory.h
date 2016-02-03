// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Shader;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct ShaderFactory;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class ShaderFactory :463
// {
::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type* ShaderFactory_typeof();
void ShaderFactory__ctor_6_fn(ShaderFactory* __this, ::g::Fuse::Drawing::Brush* brush);
void ShaderFactory__LinearGradientShader_fn(ShaderFactory* __this, ::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::Android::android::graphics::Shader** __retval);
void ShaderFactory__New5_fn(::g::Fuse::Drawing::Brush* brush, ShaderFactory** __retval);
void ShaderFactory__resize_fn(ShaderFactory* __this, int* width, int* height, ::g::Android::android::graphics::Shader** __retval);

struct ShaderFactory : ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory
{
    uStrong< ::g::Fuse::Drawing::Brush*> _brush;
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }

    void ctor_6(::g::Fuse::Drawing::Brush* brush);
    ::g::Android::android::graphics::Shader* LinearGradientShader(::g::Fuse::Drawing::LinearGradient* linearGradient);
    static ShaderFactory* New5(::g::Fuse::Drawing::Brush* brush);
};
// }

}}}} // ::g::Fuse::Android::Controls

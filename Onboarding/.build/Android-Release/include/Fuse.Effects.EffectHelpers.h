// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct EffectHelpers;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Effects{

// internal partial sealed class EffectHelpers :381
// {
uType* EffectHelpers_typeof();
void EffectHelpers__ctor__fn(EffectHelpers* __this);
void EffectHelpers__Blur_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float* sigma, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__BlurHorizontal_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__BlurVertical_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__GaussianBlurSeparable_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir, float* sigma, int* samples);
void EffectHelpers__init_DrawCalls_fn(EffectHelpers* __this);
void EffectHelpers__get_Instance_fn(EffectHelpers** __retval);
void EffectHelpers__New1_fn(EffectHelpers** __retval);
void EffectHelpers__ResampleGaussian5tap_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2* size, ::g::Uno::Graphics::Framebuffer** __retval);

struct EffectHelpers : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_25256393;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_304ecdb6;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d49bc125;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d8715896;
    static uSStrong<EffectHelpers*> _instance_;
    static uSStrong<EffectHelpers*>& _instance() { return _instance_; }
    uStrong< ::g::Uno::Graphics::IndexBuffer*> GaussianBlurSeparable_VertexData_d49bc125_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> GaussianBlurSeparable_VertexData_d49bc125_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleBilinear_VertexData_304ecdb6_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleBilinear_VertexData_304ecdb6_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleGaussian5tap_VertexData_25256393_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleGaussian5tap_VertexData_25256393_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleGaussian9tap_VertexData_d8715896_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleGaussian9tap_VertexData_d8715896_2_5_3;

    void ctor_();
    ::g::Uno::Graphics::Framebuffer* Blur(::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float sigma);
    ::g::Uno::Graphics::Framebuffer* BlurHorizontal(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    ::g::Uno::Graphics::Framebuffer* BlurVertical(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    void GaussianBlurSeparable(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir, float sigma, int samples);
    void init_DrawCalls();
    ::g::Uno::Graphics::Framebuffer* ResampleGaussian5tap(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2 size);
    static EffectHelpers* New1();
    static EffectHelpers* Instance();
};
// }

}}} // ::g::Fuse::Effects

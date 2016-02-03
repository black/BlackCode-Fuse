// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_EFFECT_HELPERS_H__
#define __APP_FUSE_EFFECTS_EFFECT_HELPERS_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Effects {

struct EffectHelpers;

struct EffectHelpers__uType : ::uClassType
{
};

EffectHelpers__uType* EffectHelpers__typeof();

void EffectHelpers___ObjInit(EffectHelpers* __this);
::app::Uno::Graphics::Framebuffer* EffectHelpers__Blur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float sigma);
::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurHorizontal(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurVertical(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
void EffectHelpers__free_DrawCalls(EffectHelpers* __this);
void EffectHelpers__GaussianBlurSeparable(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples);
void EffectHelpers__init_DrawCalls(EffectHelpers* __this);
EffectHelpers* EffectHelpers__New_1(::uStatic* __this);
::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleBilinear(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);
::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size, float sigma, int samples);
::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian5tap(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);
::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian9tap(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);

struct EffectHelpers : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ResampleBilinear_VertexData_304ecdb6_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> ResampleBilinear_VertexData_304ecdb6_2_5_3;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ResampleGaussian5tap_VertexData_25256393_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> ResampleGaussian5tap_VertexData_25256393_2_5_3;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ResampleGaussian9tap_VertexData_d8715896_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> ResampleGaussian9tap_VertexData_d8715896_2_5_3;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> GaussianBlurSeparable_VertexData_d49bc125_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> GaussianBlurSeparable_VertexData_d49bc125_2_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_304ecdb6;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_25256393;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d8715896;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d49bc125;

    void _ObjInit() { EffectHelpers___ObjInit(this); }
    ::app::Uno::Graphics::Framebuffer* Blur(::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float sigma) { return EffectHelpers__Blur(this, original, dc, sigma); }
    ::app::Uno::Graphics::Framebuffer* BlurHorizontal(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    ::app::Uno::Graphics::Framebuffer* BlurVertical(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    void free_DrawCalls() { EffectHelpers__free_DrawCalls(this); }
    void GaussianBlurSeparable(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples);
    void init_DrawCalls() { EffectHelpers__init_DrawCalls(this); }
    ::app::Uno::Graphics::Framebuffer* ResampleBilinear(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);
    ::app::Uno::Graphics::Framebuffer* ResampleGaussian(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size, float sigma, int samples);
    ::app::Uno::Graphics::Framebuffer* ResampleGaussian5tap(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);
    ::app::Uno::Graphics::Framebuffer* ResampleGaussian9tap(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Effects {

inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::BlurHorizontal(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples) { return EffectHelpers__BlurHorizontal(this, dc, size, tex, sigma, samples); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::BlurVertical(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples) { return EffectHelpers__BlurVertical(this, dc, size, tex, sigma, samples); }
inline void EffectHelpers::GaussianBlurSeparable(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples) { EffectHelpers__GaussianBlurSeparable(this, tex, dir, sigma, samples); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::ResampleBilinear(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size) { return EffectHelpers__ResampleBilinear(this, dc, tex, size); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size, float sigma, int samples) { return EffectHelpers__ResampleGaussian(this, dc, tex, size, sigma, samples); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian5tap(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size) { return EffectHelpers__ResampleGaussian5tap(this, dc, tex, size); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian9tap(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size) { return EffectHelpers__ResampleGaussian9tap(this, dc, tex, size); }

}}}


#endif

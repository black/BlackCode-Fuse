// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Effects.BasicEffect.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Halftone;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Halftone :611
// {
::g::Fuse::Effects::BasicEffect_type* Halftone_typeof();
void Halftone__get_DotTint_fn(Halftone* __this, float* __retval);
void Halftone__set_DotTint_fn(Halftone* __this, float* value);
void Halftone__get_Intensity_fn(Halftone* __this, float* __retval);
void Halftone__set_Intensity_fn(Halftone* __this, float* value);
void Halftone__OnRender_fn(Halftone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Halftone__get_PaperTint_fn(Halftone* __this, float* __retval);
void Halftone__set_PaperTint_fn(Halftone* __this, float* value);
void Halftone__get_Smoothness_fn(Halftone* __this, float* __retval);
void Halftone__set_Smoothness_fn(Halftone* __this, float* value);
void Halftone__get_Spacing_fn(Halftone* __this, float* __retval);
void Halftone__set_Spacing_fn(Halftone* __this, float* value);

struct Halftone : ::g::Fuse::Effects::BasicEffect
{
    float _dotTint;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a4fda2a4;
    float _intensity;
    float _paperTint;
    float _smoothness;
    float _spacing;
    ::g::Uno::Float4x4 OnRender_LocalTransform_a4fda2a4_4_8_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_a4fda2a4_4_8_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_a4fda2a4_7_2_1;

    float DotTint();
    void DotTint(float value);
    float Intensity();
    void Intensity(float value);
    float PaperTint();
    void PaperTint(float value);
    float Smoothness();
    void Smoothness(float value);
    float Spacing();
    void Spacing(float value);
};
// }

}}} // ::g::Fuse::Effects

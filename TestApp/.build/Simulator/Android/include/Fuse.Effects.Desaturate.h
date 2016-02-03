// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Effects.BasicEffect.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Desaturate;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Desaturate :135
// {
::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();
void Desaturate__ctor_2_fn(Desaturate* __this);
void Desaturate__get_Amount_fn(Desaturate* __this, float* __retval);
void Desaturate__set_Amount_fn(Desaturate* __this, float* value);
void Desaturate__init_DrawCalls_fn(Desaturate* __this);
void Desaturate__New1_fn(Desaturate** __retval);
void Desaturate__OnRender_fn(Desaturate* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);

struct Desaturate : ::g::Fuse::Effects::BasicEffect
{
    float _amount;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_86b72be7;
    ::g::Uno::Float4x4 OnRender_LocalTransform_86b72be7_4_8_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_86b72be7_4_8_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_86b72be7_7_2_1;

    void ctor_2();
    float Amount();
    void Amount(float value);
    void init_DrawCalls();
    static Desaturate* New1();
};
// }

}}} // ::g::Fuse::Effects

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Mask;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Mask :748
// {
struct Mask_type : ::g::Fuse::Effects::BasicEffect_type
{
    ::g::Fuse::Internal::IImageContainerOwner interface0;
};

Mask_type* Mask_typeof();
void Mask__Fuse_Internal_IImageContainerOwner_OnParamChanged_fn(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnSizingChanged_fn(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnSourceChanged_fn(Mask* __this);
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Uno::Rect* inBounds, ::g::Uno::Rect* __retval);
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);

struct Mask : ::g::Fuse::Effects::BasicEffect
{
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_193b0147;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_21360147;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_312c0147;
    int _mode;
    ::g::Uno::Float4x4 OnRender_LocalTransform_21360147_4_8_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_21360147_4_8_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_193b0147_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_21360147_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_312c0147_7_2_1;
};
// }

}}} // ::g::Fuse::Effects

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{struct SolidRectangle;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// internal sealed class SolidRectangle :428
// {
uType* SolidRectangle_typeof();
void SolidRectangle__ctor__fn(SolidRectangle* __this);
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity);
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this);
void SolidRectangle__New1_fn(SolidRectangle** __retval);

struct SolidRectangle : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c930343d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c951343d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c993343d;
    int DrawElement_BlendDstAlpha_c8ee343d_11_7_13;
    int DrawElement_BlendDstRgb_c8ee343d_11_5_12;
    int DrawElement_BlendSrcAlpha_c8ee343d_11_6_11;
    int DrawElement_BlendSrcRgb_c8ee343d_11_4_10;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_c993343d_4_8_2;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_c993343d_4_8_3;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_c993343d_4_8_4;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c8ee343d_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c930343d_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c951343d_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c993343d_7_2_1;
    static uSStrong<SolidRectangle*> Impl_;
    static uSStrong<SolidRectangle*>& Impl() { return SolidRectangle_typeof()->Init(), Impl_; }

    void ctor_();
    void DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity);
    void init_DrawCalls();
    static SolidRectangle* New1();
};
// }

}}}} // ::g::Fuse::Internal::Drawing

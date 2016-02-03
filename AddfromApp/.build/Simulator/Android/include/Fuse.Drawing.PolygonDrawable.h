// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonDrawable;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class PolygonDrawable :401
// {
uType* PolygonDrawable_typeof();
void PolygonDrawable__ctor__fn(PolygonDrawable* __this, uArray* vertices);
void PolygonDrawable__CalcBounds_fn(PolygonDrawable* __this, ::g::Uno::Rect* __retval);
void PolygonDrawable__Dispose_fn(PolygonDrawable* __this);
void PolygonDrawable__Draw_fn(PolygonDrawable* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx);
void PolygonDrawable__free_DrawCalls_fn(PolygonDrawable* __this);
void PolygonDrawable__init_DrawCalls_fn(PolygonDrawable* __this);
void PolygonDrawable__Intersects_fn(PolygonDrawable* __this, ::g::Uno::Float2* p, bool* __retval);
void PolygonDrawable__New1_fn(uArray* vertices, PolygonDrawable** __retval);

struct PolygonDrawable : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_1834ada4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2b0b75;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5d8396da;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> _vbo;
    uStrong<uArray*> _vertices;
    int Draw_BlendDstAlpha_303e4fd3_6_7_8;
    int Draw_BlendDstRgb_303e4fd3_6_5_7;
    int Draw_BlendSrcAlpha_303e4fd3_6_6_6;
    int Draw_BlendSrcRgb_303e4fd3_6_4_5;

    void ctor_(uArray* vertices);
    ::g::Uno::Rect CalcBounds();
    void Dispose();
    void Draw(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx);
    void free_DrawCalls();
    void init_DrawCalls();
    bool Intersects(::g::Uno::Float2 p);
    static PolygonDrawable* New1(uArray* vertices);
};
// }

}}} // ::g::Fuse::Drawing

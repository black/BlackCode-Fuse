// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_POLYGON_DRAWABLE_H__
#define __APP_FUSE_DRAWING_POLYGON_DRAWABLE_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PolygonDrawable;

struct PolygonDrawable__uType : ::uClassType
{
};

PolygonDrawable__uType* PolygonDrawable__typeof();

void PolygonDrawable___ObjInit(PolygonDrawable* __this, ::uArray* vertices);
::app::Uno::Rect PolygonDrawable__CalcBounds(PolygonDrawable* __this);
void PolygonDrawable__Dispose(PolygonDrawable* __this);
void PolygonDrawable__Draw(PolygonDrawable* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx);
void PolygonDrawable__free_DrawCalls(PolygonDrawable* __this);
void PolygonDrawable__init_DrawCalls(PolygonDrawable* __this);
bool PolygonDrawable__Intersects(PolygonDrawable* __this, ::app::Uno::Float2 p);
PolygonDrawable* PolygonDrawable__New_1(::uStatic* __this, ::uArray* vertices);

struct PolygonDrawable : ::uObject
{
    ::uStrong< ::uArray*> _vertices;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> _vbo;
    int Draw_BlendSrcRgb_303e4fd3_6_4_5;
    int Draw_BlendSrcAlpha_303e4fd3_6_6_6;
    int Draw_BlendDstRgb_303e4fd3_6_5_7;
    int Draw_BlendDstAlpha_303e4fd3_6_7_8;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_1834ada4;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2b0b75;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5d8396da;

    void _ObjInit(::uArray* vertices) { PolygonDrawable___ObjInit(this, vertices); }
    ::app::Uno::Rect CalcBounds();
    void Dispose() { PolygonDrawable__Dispose(this); }
    void Draw(::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx) { PolygonDrawable__Draw(this, f, ctx); }
    void free_DrawCalls() { PolygonDrawable__free_DrawCalls(this); }
    void init_DrawCalls() { PolygonDrawable__init_DrawCalls(this); }
    bool Intersects(::app::Uno::Float2 p);
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Rect PolygonDrawable::CalcBounds() { return PolygonDrawable__CalcBounds(this); }
inline bool PolygonDrawable::Intersects(::app::Uno::Float2 p) { return PolygonDrawable__Intersects(this, p); }

}}}


#endif

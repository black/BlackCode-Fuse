// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ShapeVisual-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathShapeVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public abstract class PathShapeVisual<T> :305
// {
struct PathShapeVisual_type : ::g::Fuse::Controls::Graphics::ShapeVisual_type
{
    void(*fp_AlignMatrix)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Uno::Float4x4*, ::g::Uno::Float4x4*);
    void(*fp_UpdatePath)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Fuse::Drawing::PathGeometryRenderer*);
};

PathShapeVisual_type* PathShapeVisual_typeof();
void PathShapeVisual__ctor_4_fn(PathShapeVisual* __this);
void PathShapeVisual__AlignMatrix_fn(PathShapeVisual* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval);
void PathShapeVisual__Attach_fn(PathShapeVisual* __this);
void PathShapeVisual__DrawFill_fn(PathShapeVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void PathShapeVisual__DrawStroke_fn(PathShapeVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void PathShapeVisual__GetHitPart_fn(PathShapeVisual* __this, ::g::Uno::Float2* localCoords, uObject** __retval);
void PathShapeVisual__Invalidated_fn(PathShapeVisual* __this);
void PathShapeVisual__get_LocalRenderBounds_fn(PathShapeVisual* __this, ::g::Uno::Rect* __retval);
void PathShapeVisual__OnHitTest_fn(PathShapeVisual* __this, ::g::Fuse::HitTestContext* htc);
void PathShapeVisual__PrepareDraw_fn(PathShapeVisual* __this, ::g::Fuse::DrawContext* dc);
void PathShapeVisual__get_Renderer_fn(PathShapeVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval);
void PathShapeVisual__SoftDispose_fn(PathShapeVisual* __this);

struct PathShapeVisual : ::g::Fuse::Controls::Graphics::ShapeVisual
{
    uStrong< ::g::Fuse::Drawing::RendererContext*> _context;
    uStrong< ::g::Fuse::Drawing::PathGeometryRenderer*> _renderer;

    void ctor_4();
    ::g::Uno::Float4x4 AlignMatrix(::g::Uno::Float4x4 b);
    uObject* GetHitPart(::g::Uno::Float2 localCoords);
    void Invalidated();
    ::g::Fuse::Drawing::PathGeometryRenderer* Renderer();
    void UpdatePath(::g::Fuse::Drawing::PathGeometryRenderer* renderer) { (((PathShapeVisual_type*)__type)->fp_UpdatePath)(this, renderer); }
    static ::g::Uno::Float4x4 AlignMatrix(PathShapeVisual* __this, ::g::Uno::Float4x4 b);
};

}}}} // ::g::Fuse::Controls::Graphics

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

inline ::g::Uno::Float4x4 PathShapeVisual::AlignMatrix(::g::Uno::Float4x4 b) { ::g::Uno::Float4x4 __retval; return (((PathShapeVisual_type*)__type)->fp_AlignMatrix)(this, &b, &__retval), __retval; }
inline ::g::Uno::Float4x4 PathShapeVisual::AlignMatrix(PathShapeVisual* __this, ::g::Uno::Float4x4 b) { ::g::Uno::Float4x4 __retval; return PathShapeVisual__AlignMatrix_fn(__this, &b, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::Graphics

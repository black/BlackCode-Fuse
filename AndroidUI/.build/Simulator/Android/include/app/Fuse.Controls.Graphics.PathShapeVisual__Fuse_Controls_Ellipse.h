// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_PATH_SHAPE_VISUAL__FUSE_CONTROLS_ELLIPSE_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_PATH_SHAPE_VISUAL__FUSE_CONTROLS_ELLIPSE_H__

#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Ellipse.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct PathShapeVisual__Fuse_Controls_Ellipse;

struct PathShapeVisual__Fuse_Controls_Ellipse__uType : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse__uType
{
    void(*__fp_UpdatePath)(PathShapeVisual__Fuse_Controls_Ellipse*, ::app::Fuse::Drawing::PathGeometryRenderer*);
};

PathShapeVisual__Fuse_Controls_Ellipse__uType* PathShapeVisual__Fuse_Controls_Ellipse__typeof();

void PathShapeVisual__Fuse_Controls_Ellipse___ObjInit_4(PathShapeVisual__Fuse_Controls_Ellipse* __this);
::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Ellipse__AlignMatrix(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Uno::Float4x4 b);
void PathShapeVisual__Fuse_Controls_Ellipse__Attach(PathShapeVisual__Fuse_Controls_Ellipse* __this);
void PathShapeVisual__Fuse_Controls_Ellipse__DrawFill(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill);
void PathShapeVisual__Fuse_Controls_Ellipse__DrawStroke(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke);
::app::Uno::Rect PathShapeVisual__Fuse_Controls_Ellipse__get_LocalRenderBounds(PathShapeVisual__Fuse_Controls_Ellipse* __this);
::app::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual__Fuse_Controls_Ellipse__get_Renderer(PathShapeVisual__Fuse_Controls_Ellipse* __this);
::uObject* PathShapeVisual__Fuse_Controls_Ellipse__GetHitPart(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Uno::Float2 localCoords);
void PathShapeVisual__Fuse_Controls_Ellipse__Invalidated(PathShapeVisual__Fuse_Controls_Ellipse* __this);
void PathShapeVisual__Fuse_Controls_Ellipse__OnHitTest(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::HitTestContext* htc);
void PathShapeVisual__Fuse_Controls_Ellipse__PrepareDraw(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc);
void PathShapeVisual__Fuse_Controls_Ellipse__SoftDispose(PathShapeVisual__Fuse_Controls_Ellipse* __this);

struct PathShapeVisual__Fuse_Controls_Ellipse : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometryRenderer*> _renderer;
    ::uStrong< ::app::Fuse::Drawing::RendererContext*> _context;

    void _ObjInit_4() { PathShapeVisual__Fuse_Controls_Ellipse___ObjInit_4(this); }
    ::app::Uno::Float4x4 AlignMatrix(::app::Uno::Float4x4 b);
    ::app::Fuse::Drawing::PathGeometryRenderer* Renderer() { return PathShapeVisual__Fuse_Controls_Ellipse__get_Renderer(this); }
    ::uObject* GetHitPart(::app::Uno::Float2 localCoords);
    void Invalidated() { PathShapeVisual__Fuse_Controls_Ellipse__Invalidated(this); }
    void UpdatePath(::app::Fuse::Drawing::PathGeometryRenderer* renderer) { (((PathShapeVisual__Fuse_Controls_Ellipse__uType*)this->__obj_type)->__fp_UpdatePath)(this, renderer); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline ::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Ellipse::AlignMatrix(::app::Uno::Float4x4 b) { return PathShapeVisual__Fuse_Controls_Ellipse__AlignMatrix(this, b); }
inline ::uObject* PathShapeVisual__Fuse_Controls_Ellipse::GetHitPart(::app::Uno::Float2 localCoords) { return PathShapeVisual__Fuse_Controls_Ellipse__GetHitPart(this, localCoords); }

}}}}


#endif

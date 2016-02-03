// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_PATH_SHAPE_VISUAL__FUSE_CONTROLS_STAR_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_PATH_SHAPE_VISUAL__FUSE_CONTROLS_STAR_H__

#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Star.h>
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

struct PathShapeVisual__Fuse_Controls_Star;

struct PathShapeVisual__Fuse_Controls_Star__uType : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star__uType
{
    void(*__fp_UpdatePath)(PathShapeVisual__Fuse_Controls_Star*, ::app::Fuse::Drawing::PathGeometryRenderer*);
};

PathShapeVisual__Fuse_Controls_Star__uType* PathShapeVisual__Fuse_Controls_Star__typeof();

void PathShapeVisual__Fuse_Controls_Star___ObjInit_4(PathShapeVisual__Fuse_Controls_Star* __this);
::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Star__AlignMatrix(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Uno::Float4x4 b);
void PathShapeVisual__Fuse_Controls_Star__Attach(PathShapeVisual__Fuse_Controls_Star* __this);
void PathShapeVisual__Fuse_Controls_Star__DrawFill(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill);
void PathShapeVisual__Fuse_Controls_Star__DrawStroke(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke);
::app::Uno::Rect PathShapeVisual__Fuse_Controls_Star__get_LocalRenderBounds(PathShapeVisual__Fuse_Controls_Star* __this);
::app::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual__Fuse_Controls_Star__get_Renderer(PathShapeVisual__Fuse_Controls_Star* __this);
::uObject* PathShapeVisual__Fuse_Controls_Star__GetHitPart(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Uno::Float2 localCoords);
void PathShapeVisual__Fuse_Controls_Star__Invalidated(PathShapeVisual__Fuse_Controls_Star* __this);
void PathShapeVisual__Fuse_Controls_Star__OnHitTest(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::HitTestContext* htc);
void PathShapeVisual__Fuse_Controls_Star__PrepareDraw(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc);
void PathShapeVisual__Fuse_Controls_Star__SoftDispose(PathShapeVisual__Fuse_Controls_Star* __this);

struct PathShapeVisual__Fuse_Controls_Star : ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometryRenderer*> _renderer;
    ::uStrong< ::app::Fuse::Drawing::RendererContext*> _context;

    void _ObjInit_4() { PathShapeVisual__Fuse_Controls_Star___ObjInit_4(this); }
    ::app::Uno::Float4x4 AlignMatrix(::app::Uno::Float4x4 b);
    ::app::Fuse::Drawing::PathGeometryRenderer* Renderer() { return PathShapeVisual__Fuse_Controls_Star__get_Renderer(this); }
    ::uObject* GetHitPart(::app::Uno::Float2 localCoords);
    void Invalidated() { PathShapeVisual__Fuse_Controls_Star__Invalidated(this); }
    void UpdatePath(::app::Fuse::Drawing::PathGeometryRenderer* renderer) { (((PathShapeVisual__Fuse_Controls_Star__uType*)this->__obj_type)->__fp_UpdatePath)(this, renderer); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline ::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Star::AlignMatrix(::app::Uno::Float4x4 b) { return PathShapeVisual__Fuse_Controls_Star__AlignMatrix(this, b); }
inline ::uObject* PathShapeVisual__Fuse_Controls_Star::GetHitPart(::app::Uno::Float2 localCoords) { return PathShapeVisual__Fuse_Controls_Star__GetHitPart(this, localCoords); }

}}}}


#endif

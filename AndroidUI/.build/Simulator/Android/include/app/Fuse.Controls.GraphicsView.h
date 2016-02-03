// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_VIEW_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_VIEW_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FrustumViewport; } }
namespace app { namespace Fuse { struct OrthographicFrustum; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_GraphicsView__float4; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Controls {

struct GraphicsView;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*> GraphicsView__BackgroundProperty_1;

struct GraphicsView__uType : ::app::Fuse::Controls::ContentControl__uType
{
    ::app::Fuse::IViewport __interface_6;
};

GraphicsView__uType* GraphicsView__typeof();

void GraphicsView___ObjInit_4(GraphicsView* __this);
void GraphicsView___TypeInit_3(::uStatic* __this);
void GraphicsView__add_Redraw(GraphicsView* __this, ::uDelegate* value);
void GraphicsView__Draw(GraphicsView* __this, ::app::Fuse::DrawContext* dc);
void GraphicsView__DrawFrame(GraphicsView* __this);
::app::Uno::Float4 GraphicsView__get_Background_1(GraphicsView* __this);
::app::Uno::Float2 GraphicsView__get_PixelSize(GraphicsView* __this);
float GraphicsView__get_PointDensity_1(GraphicsView* __this);
::app::Uno::Float4x4 GraphicsView__get_ProjectionTransform(GraphicsView* __this);
::app::Uno::Float4x4 GraphicsView__get_ProjectionTransformInverse(GraphicsView* __this);
::app::Uno::Float2 GraphicsView__get_Size(GraphicsView* __this);
::app::Uno::Float3 GraphicsView__get_ViewOrigin(GraphicsView* __this);
::app::Uno::Float4x4 GraphicsView__get_ViewProjectionTransform(GraphicsView* __this);
::app::Uno::Float4x4 GraphicsView__get_ViewProjectionTransformInverse(GraphicsView* __this);
::app::Uno::Float2 GraphicsView__get_ViewRange(GraphicsView* __this);
::app::Uno::Float4x4 GraphicsView__get_ViewTransform(GraphicsView* __this);
::app::Uno::Float4x4 GraphicsView__get_ViewTransformInverse(GraphicsView* __this);
void GraphicsView__InvalidateVisual(GraphicsView* __this);
GraphicsView* GraphicsView__New_2(::uStatic* __this);
void GraphicsView__OnBackgroundChanged_1(::uStatic* __this, GraphicsView* gv);
::app::Uno::Geometry::Ray GraphicsView__PointToWorldRay(GraphicsView* __this, ::app::Uno::Float2 pixelPos);
void GraphicsView__remove_Redraw(GraphicsView* __this, ::uDelegate* value);
void GraphicsView__set_Background_1(GraphicsView* __this, ::app::Uno::Float4 value);

struct GraphicsView : ::app::Fuse::Controls::ContentControl
{
    ::uStrong< ::app::Fuse::FrustumViewport*> _frustumViewport;
    ::uStrong< ::app::Fuse::OrthographicFrustum*> _frustum;
    bool _frameScheduled;
    ::uStrong< ::uDelegate*> Redraw;

    void _ObjInit_4() { GraphicsView___ObjInit_4(this); }
    void add_Redraw(::uDelegate* value) { GraphicsView__add_Redraw(this, value); }
    void DrawFrame() { GraphicsView__DrawFrame(this); }
    ::app::Uno::Float4 Background_1();
    ::app::Uno::Float2 PixelSize();
    float PointDensity_1() { return GraphicsView__get_PointDensity_1(this); }
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ProjectionTransformInverse();
    ::app::Uno::Float2 Size();
    ::app::Uno::Float3 ViewOrigin();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    ::app::Uno::Float2 ViewRange();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewTransformInverse();
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pixelPos);
    void remove_Redraw(::uDelegate* value) { GraphicsView__remove_Redraw(this, value); }
    void Background_1(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float4 GraphicsView::Background_1() { return GraphicsView__get_Background_1(this); }
inline ::app::Uno::Float2 GraphicsView::PixelSize() { return GraphicsView__get_PixelSize(this); }
inline ::app::Uno::Float4x4 GraphicsView::ProjectionTransform() { return GraphicsView__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 GraphicsView::ProjectionTransformInverse() { return GraphicsView__get_ProjectionTransformInverse(this); }
inline ::app::Uno::Float2 GraphicsView::Size() { return GraphicsView__get_Size(this); }
inline ::app::Uno::Float3 GraphicsView::ViewOrigin() { return GraphicsView__get_ViewOrigin(this); }
inline ::app::Uno::Float4x4 GraphicsView::ViewProjectionTransform() { return GraphicsView__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 GraphicsView::ViewProjectionTransformInverse() { return GraphicsView__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Float2 GraphicsView::ViewRange() { return GraphicsView__get_ViewRange(this); }
inline ::app::Uno::Float4x4 GraphicsView::ViewTransform() { return GraphicsView__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 GraphicsView::ViewTransformInverse() { return GraphicsView__get_ViewTransformInverse(this); }
inline ::app::Uno::Geometry::Ray GraphicsView::PointToWorldRay(::app::Uno::Float2 pixelPos) { return GraphicsView__PointToWorldRay(this, pixelPos); }
inline void GraphicsView::Background_1(::app::Uno::Float4 value) { GraphicsView__set_Background_1(this, value); }

}}}


#endif

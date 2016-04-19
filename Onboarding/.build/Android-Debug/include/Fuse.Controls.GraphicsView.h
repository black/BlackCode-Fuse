// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IViewport.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct OrthographicFrustum;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class GraphicsView :740
// {
struct GraphicsView_type : ::g::Fuse::Controls::ContentControl_type
{
    ::g::Fuse::IViewport interface5;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_4_fn(GraphicsView* __this);
void GraphicsView__get_Background1_fn(GraphicsView* __this, ::g::Uno::Float4* __retval);
void GraphicsView__set_Background1_fn(GraphicsView* __this, ::g::Uno::Float4* value);
void GraphicsView__Draw_fn(GraphicsView* __this, ::g::Fuse::DrawContext* dc);
void GraphicsView__DrawFrame_fn(GraphicsView* __this);
void GraphicsView__InvalidateVisual_fn(GraphicsView* __this);
void GraphicsView__New2_fn(GraphicsView** __retval);
void GraphicsView__OnBackgroundChanged1_fn(GraphicsView* gv);
void GraphicsView__get_PointDensity1_fn(GraphicsView* __this, float* __retval);
void GraphicsView__PointToWorldRay_fn(GraphicsView* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval);
void GraphicsView__add_Redraw_fn(GraphicsView* __this, uDelegate* value);
void GraphicsView__remove_Redraw_fn(GraphicsView* __this, uDelegate* value);
void GraphicsView__get_Size_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_ViewProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);

struct GraphicsView : ::g::Fuse::Controls::ContentControl
{
    bool _frameScheduled;
    uStrong< ::g::Fuse::OrthographicFrustum*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    static uSStrong< ::g::Fuse::StyleProperty1*> BackgroundProperty1_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& BackgroundProperty1() { return GraphicsView_typeof()->Init(), BackgroundProperty1_; }
    bool IsFullScreen;
    uStrong<uDelegate*> Redraw1;

    void ctor_4();
    ::g::Uno::Float4 Background1();
    void Background1(::g::Uno::Float4 value);
    void DrawFrame();
    float PointDensity1();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    void add_Redraw(uDelegate* value);
    void remove_Redraw(uDelegate* value);
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    static GraphicsView* New2();
    static void OnBackgroundChanged1(GraphicsView* gv);
};
// }

}}} // ::g::Fuse::Controls

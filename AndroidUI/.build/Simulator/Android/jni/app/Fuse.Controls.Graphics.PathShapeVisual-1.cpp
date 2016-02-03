#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_Ellipse.h>
#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_Path.h>
#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_RegularPolygon.h>
#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_Star.h>
#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Antialiasing.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathShapeVisual__Fuse_Controls_Ellipse__uType* PathShapeVisual__Fuse_Controls_Ellipse__typeof()
{
    static ::uStaticStrong<PathShapeVisual__Fuse_Controls_Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (PathShapeVisual__Fuse_Controls_Ellipse__uType*)::uAllocClassType(sizeof(PathShapeVisual__Fuse_Controls_Ellipse__uType), "Fuse.Controls.Graphics.PathShapeVisual<Fuse.Controls.Ellipse>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Ellipse*))PathShapeVisual__Fuse_Controls_Ellipse__Attach;
    type->__fp_DrawFill = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))PathShapeVisual__Fuse_Controls_Ellipse__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))PathShapeVisual__Fuse_Controls_Ellipse__DrawStroke;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_Ellipse__get_LocalRenderBounds;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))PathShapeVisual__Fuse_Controls_Ellipse__OnHitTest;
    type->__fp_PrepareDraw = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse*, ::app::Fuse::DrawContext*))PathShapeVisual__Fuse_Controls_Ellipse__PrepareDraw;
    type->__fp_SoftDispose = (void(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_Ellipse__SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PathShapeVisual__Fuse_Controls_Ellipse__uType, __interface_0));

    type->SetStrongRefs(
        "_context", offsetof(PathShapeVisual__Fuse_Controls_Ellipse, _context),
        "_renderer", offsetof(PathShapeVisual__Fuse_Controls_Ellipse, _renderer));

    type->SetFields(2,
        ::uNewField("_context", NULL, offsetof(PathShapeVisual__Fuse_Controls_Ellipse, _context), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewField("_renderer", NULL, offsetof(PathShapeVisual__Fuse_Controls_Ellipse, _renderer), ::app::Fuse::Drawing::PathGeometryRenderer__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Renderer", PathShapeVisual__Fuse_Controls_Ellipse__get_Renderer, 0, false, ::app::Fuse::Drawing::PathGeometryRenderer__typeof()),
        ::uNewFunction("GetHitPart", PathShapeVisual__Fuse_Controls_Ellipse__GetHitPart, 0, false, ::uObject__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathShapeVisual__Fuse_Controls_Ellipse___ObjInit_4(PathShapeVisual__Fuse_Controls_Ellipse* __this)
{
    __this->_renderer = ::app::Fuse::Drawing::PathGeometryRenderer__New_1(NULL);
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse___ObjInit_3(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->add_VisualInvalidated(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathShapeVisual__Fuse_Controls_Ellipse__Invalidated, __this));
}

::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Ellipse__AlignMatrix(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Uno::Float4x4 b)
{
    return b;
}

void PathShapeVisual__Fuse_Controls_Ellipse__Attach(PathShapeVisual__Fuse_Controls_Ellipse* __this)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse__Attach(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Density(::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

void PathShapeVisual__Fuse_Controls_Ellipse__DrawFill(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawFill(__this->_context, fill);
}

void PathShapeVisual__Fuse_Controls_Ellipse__DrawStroke(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawStroke(__this->_context, stroke);
}

::app::Uno::Rect PathShapeVisual__Fuse_Controls_Ellipse__get_LocalRenderBounds(PathShapeVisual__Fuse_Controls_Ellipse* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
}

::app::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual__Fuse_Controls_Ellipse__get_Renderer(PathShapeVisual__Fuse_Controls_Ellipse* __this)
{
    __this->UpdatePath(__this->_renderer);
    return __this->_renderer;
}

::uObject* PathShapeVisual__Fuse_Controls_Ellipse__GetHitPart(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Uno::Float2 localCoords)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->GetHitPart(localCoords);
}

void PathShapeVisual__Fuse_Controls_Ellipse__Invalidated(PathShapeVisual__Fuse_Controls_Ellipse* __this)
{
    __this->InvalidateVisual();
}

void PathShapeVisual__Fuse_Controls_Ellipse__OnHitTest(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uObject* hitPart = __this->GetHitPart(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (hitPart != NULL)
    {
        htc->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void PathShapeVisual__Fuse_Controls_Ellipse__PrepareDraw(PathShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse__PrepareDraw(__this, dc);
    __this->UpdatePath(__this->_renderer);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Antialiasing((::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Smoothness() > 0.5f) ? 1 : 0);
    __this->_context = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->GetRendererContext(dc, __this->AlignMatrix(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this)), __this->ActualSize());
}

void PathShapeVisual__Fuse_Controls_Ellipse__SoftDispose(PathShapeVisual__Fuse_Controls_Ellipse* __this)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->SoftDispose();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathShapeVisual__Fuse_Controls_Path__uType* PathShapeVisual__Fuse_Controls_Path__typeof()
{
    static ::uStaticStrong<PathShapeVisual__Fuse_Controls_Path__uType*> type;
    if (type != NULL) return type;

    type = (PathShapeVisual__Fuse_Controls_Path__uType*)::uAllocClassType(sizeof(PathShapeVisual__Fuse_Controls_Path__uType), "Fuse.Controls.Graphics.PathShapeVisual<Fuse.Controls.Path>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path__typeof());
    type->__fp_AlignMatrix = PathShapeVisual__Fuse_Controls_Path__AlignMatrix;
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path*))PathShapeVisual__Fuse_Controls_Path__Attach;
    type->__fp_DrawFill = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))PathShapeVisual__Fuse_Controls_Path__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))PathShapeVisual__Fuse_Controls_Path__DrawStroke;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_Path__get_LocalRenderBounds;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))PathShapeVisual__Fuse_Controls_Path__OnHitTest;
    type->__fp_PrepareDraw = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path*, ::app::Fuse::DrawContext*))PathShapeVisual__Fuse_Controls_Path__PrepareDraw;
    type->__fp_SoftDispose = (void(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_Path__SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PathShapeVisual__Fuse_Controls_Path__uType, __interface_0));

    type->SetStrongRefs(
        "_context", offsetof(PathShapeVisual__Fuse_Controls_Path, _context),
        "_renderer", offsetof(PathShapeVisual__Fuse_Controls_Path, _renderer));

    type->SetFields(2,
        ::uNewField("_context", NULL, offsetof(PathShapeVisual__Fuse_Controls_Path, _context), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewField("_renderer", NULL, offsetof(PathShapeVisual__Fuse_Controls_Path, _renderer), ::app::Fuse::Drawing::PathGeometryRenderer__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Renderer", PathShapeVisual__Fuse_Controls_Path__get_Renderer, 0, false, ::app::Fuse::Drawing::PathGeometryRenderer__typeof()),
        ::uNewFunction("GetHitPart", PathShapeVisual__Fuse_Controls_Path__GetHitPart, 0, false, ::uObject__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathShapeVisual__Fuse_Controls_Path___ObjInit_4(PathShapeVisual__Fuse_Controls_Path* __this)
{
    __this->_renderer = ::app::Fuse::Drawing::PathGeometryRenderer__New_1(NULL);
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path___ObjInit_3(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->add_VisualInvalidated(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathShapeVisual__Fuse_Controls_Path__Invalidated, __this));
}

::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Path__AlignMatrix(PathShapeVisual__Fuse_Controls_Path* __this, ::app::Uno::Float4x4 b)
{
    return b;
}

void PathShapeVisual__Fuse_Controls_Path__Attach(PathShapeVisual__Fuse_Controls_Path* __this)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path__Attach(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Density(::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

void PathShapeVisual__Fuse_Controls_Path__DrawFill(PathShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawFill(__this->_context, fill);
}

void PathShapeVisual__Fuse_Controls_Path__DrawStroke(PathShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawStroke(__this->_context, stroke);
}

::app::Uno::Rect PathShapeVisual__Fuse_Controls_Path__get_LocalRenderBounds(PathShapeVisual__Fuse_Controls_Path* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
}

::app::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual__Fuse_Controls_Path__get_Renderer(PathShapeVisual__Fuse_Controls_Path* __this)
{
    __this->UpdatePath(__this->_renderer);
    return __this->_renderer;
}

::uObject* PathShapeVisual__Fuse_Controls_Path__GetHitPart(PathShapeVisual__Fuse_Controls_Path* __this, ::app::Uno::Float2 localCoords)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->GetHitPart(localCoords);
}

void PathShapeVisual__Fuse_Controls_Path__Invalidated(PathShapeVisual__Fuse_Controls_Path* __this)
{
    __this->InvalidateVisual();
}

void PathShapeVisual__Fuse_Controls_Path__OnHitTest(PathShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uObject* hitPart = __this->GetHitPart(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (hitPart != NULL)
    {
        htc->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void PathShapeVisual__Fuse_Controls_Path__PrepareDraw(PathShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path__PrepareDraw(__this, dc);
    __this->UpdatePath(__this->_renderer);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Antialiasing((::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Smoothness() > 0.5f) ? 1 : 0);
    __this->_context = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->GetRendererContext(dc, __this->AlignMatrix(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this)), __this->ActualSize());
}

void PathShapeVisual__Fuse_Controls_Path__SoftDispose(PathShapeVisual__Fuse_Controls_Path* __this)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->SoftDispose();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathShapeVisual__Fuse_Controls_RegularPolygon__uType* PathShapeVisual__Fuse_Controls_RegularPolygon__typeof()
{
    static ::uStaticStrong<PathShapeVisual__Fuse_Controls_RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (PathShapeVisual__Fuse_Controls_RegularPolygon__uType*)::uAllocClassType(sizeof(PathShapeVisual__Fuse_Controls_RegularPolygon__uType), "Fuse.Controls.Graphics.PathShapeVisual<Fuse.Controls.RegularPolygon>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_RegularPolygon*))PathShapeVisual__Fuse_Controls_RegularPolygon__Attach;
    type->__fp_DrawFill = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))PathShapeVisual__Fuse_Controls_RegularPolygon__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))PathShapeVisual__Fuse_Controls_RegularPolygon__DrawStroke;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_RegularPolygon__get_LocalRenderBounds;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))PathShapeVisual__Fuse_Controls_RegularPolygon__OnHitTest;
    type->__fp_PrepareDraw = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon*, ::app::Fuse::DrawContext*))PathShapeVisual__Fuse_Controls_RegularPolygon__PrepareDraw;
    type->__fp_SoftDispose = (void(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_RegularPolygon__SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PathShapeVisual__Fuse_Controls_RegularPolygon__uType, __interface_0));

    type->SetStrongRefs(
        "_context", offsetof(PathShapeVisual__Fuse_Controls_RegularPolygon, _context),
        "_renderer", offsetof(PathShapeVisual__Fuse_Controls_RegularPolygon, _renderer));

    type->SetFields(2,
        ::uNewField("_context", NULL, offsetof(PathShapeVisual__Fuse_Controls_RegularPolygon, _context), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewField("_renderer", NULL, offsetof(PathShapeVisual__Fuse_Controls_RegularPolygon, _renderer), ::app::Fuse::Drawing::PathGeometryRenderer__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Renderer", PathShapeVisual__Fuse_Controls_RegularPolygon__get_Renderer, 0, false, ::app::Fuse::Drawing::PathGeometryRenderer__typeof()),
        ::uNewFunction("GetHitPart", PathShapeVisual__Fuse_Controls_RegularPolygon__GetHitPart, 0, false, ::uObject__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathShapeVisual__Fuse_Controls_RegularPolygon___ObjInit_4(PathShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    __this->_renderer = ::app::Fuse::Drawing::PathGeometryRenderer__New_1(NULL);
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon___ObjInit_3(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->add_VisualInvalidated(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathShapeVisual__Fuse_Controls_RegularPolygon__Invalidated, __this));
}

::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_RegularPolygon__AlignMatrix(PathShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Uno::Float4x4 b)
{
    return b;
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__Attach(PathShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon__Attach(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Density(::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__DrawFill(PathShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawFill(__this->_context, fill);
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__DrawStroke(PathShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawStroke(__this->_context, stroke);
}

::app::Uno::Rect PathShapeVisual__Fuse_Controls_RegularPolygon__get_LocalRenderBounds(PathShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
}

::app::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual__Fuse_Controls_RegularPolygon__get_Renderer(PathShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    __this->UpdatePath(__this->_renderer);
    return __this->_renderer;
}

::uObject* PathShapeVisual__Fuse_Controls_RegularPolygon__GetHitPart(PathShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Uno::Float2 localCoords)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->GetHitPart(localCoords);
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__Invalidated(PathShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    __this->InvalidateVisual();
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__OnHitTest(PathShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uObject* hitPart = __this->GetHitPart(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (hitPart != NULL)
    {
        htc->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__PrepareDraw(PathShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon__PrepareDraw(__this, dc);
    __this->UpdatePath(__this->_renderer);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Antialiasing((::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Smoothness() > 0.5f) ? 1 : 0);
    __this->_context = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->GetRendererContext(dc, __this->AlignMatrix(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this)), __this->ActualSize());
}

void PathShapeVisual__Fuse_Controls_RegularPolygon__SoftDispose(PathShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->SoftDispose();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathShapeVisual__Fuse_Controls_Star__uType* PathShapeVisual__Fuse_Controls_Star__typeof()
{
    static ::uStaticStrong<PathShapeVisual__Fuse_Controls_Star__uType*> type;
    if (type != NULL) return type;

    type = (PathShapeVisual__Fuse_Controls_Star__uType*)::uAllocClassType(sizeof(PathShapeVisual__Fuse_Controls_Star__uType), "Fuse.Controls.Graphics.PathShapeVisual<Fuse.Controls.Star>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star*))PathShapeVisual__Fuse_Controls_Star__Attach;
    type->__fp_DrawFill = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))PathShapeVisual__Fuse_Controls_Star__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))PathShapeVisual__Fuse_Controls_Star__DrawStroke;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_Star__get_LocalRenderBounds;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))PathShapeVisual__Fuse_Controls_Star__OnHitTest;
    type->__fp_PrepareDraw = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star*, ::app::Fuse::DrawContext*))PathShapeVisual__Fuse_Controls_Star__PrepareDraw;
    type->__fp_SoftDispose = (void(*)(::app::Fuse::Node*))PathShapeVisual__Fuse_Controls_Star__SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PathShapeVisual__Fuse_Controls_Star__uType, __interface_0));

    type->SetStrongRefs(
        "_context", offsetof(PathShapeVisual__Fuse_Controls_Star, _context),
        "_renderer", offsetof(PathShapeVisual__Fuse_Controls_Star, _renderer));

    type->SetFields(2,
        ::uNewField("_context", NULL, offsetof(PathShapeVisual__Fuse_Controls_Star, _context), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewField("_renderer", NULL, offsetof(PathShapeVisual__Fuse_Controls_Star, _renderer), ::app::Fuse::Drawing::PathGeometryRenderer__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Renderer", PathShapeVisual__Fuse_Controls_Star__get_Renderer, 0, false, ::app::Fuse::Drawing::PathGeometryRenderer__typeof()),
        ::uNewFunction("GetHitPart", PathShapeVisual__Fuse_Controls_Star__GetHitPart, 0, false, ::uObject__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathShapeVisual__Fuse_Controls_Star___ObjInit_4(PathShapeVisual__Fuse_Controls_Star* __this)
{
    __this->_renderer = ::app::Fuse::Drawing::PathGeometryRenderer__New_1(NULL);
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star___ObjInit_3(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->add_VisualInvalidated(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathShapeVisual__Fuse_Controls_Star__Invalidated, __this));
}

::app::Uno::Float4x4 PathShapeVisual__Fuse_Controls_Star__AlignMatrix(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Uno::Float4x4 b)
{
    return b;
}

void PathShapeVisual__Fuse_Controls_Star__Attach(PathShapeVisual__Fuse_Controls_Star* __this)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star__Attach(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Density(::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

void PathShapeVisual__Fuse_Controls_Star__DrawFill(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawFill(__this->_context, fill);
}

void PathShapeVisual__Fuse_Controls_Star__DrawStroke(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->DrawStroke(__this->_context, stroke);
}

::app::Uno::Rect PathShapeVisual__Fuse_Controls_Star__get_LocalRenderBounds(PathShapeVisual__Fuse_Controls_Star* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
}

::app::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual__Fuse_Controls_Star__get_Renderer(PathShapeVisual__Fuse_Controls_Star* __this)
{
    __this->UpdatePath(__this->_renderer);
    return __this->_renderer;
}

::uObject* PathShapeVisual__Fuse_Controls_Star__GetHitPart(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Uno::Float2 localCoords)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->GetHitPart(localCoords);
}

void PathShapeVisual__Fuse_Controls_Star__Invalidated(PathShapeVisual__Fuse_Controls_Star* __this)
{
    __this->InvalidateVisual();
}

void PathShapeVisual__Fuse_Controls_Star__OnHitTest(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uObject* hitPart = __this->GetHitPart(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (hitPart != NULL)
    {
        htc->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void PathShapeVisual__Fuse_Controls_Star__PrepareDraw(PathShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star__PrepareDraw(__this, dc);
    __this->UpdatePath(__this->_renderer);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Antialiasing((::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Smoothness() > 0.5f) ? 1 : 0);
    __this->_context = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->GetRendererContext(dc, __this->AlignMatrix(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this)), __this->ActualSize());
}

void PathShapeVisual__Fuse_Controls_Star__SoftDispose(PathShapeVisual__Fuse_Controls_Star* __this)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->SoftDispose();
}

}}}}

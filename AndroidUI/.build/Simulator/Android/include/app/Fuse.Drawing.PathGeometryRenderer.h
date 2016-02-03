// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PATH_GEOMETRY_RENDERER_H__
#define __APP_FUSE_DRAWING_PATH_GEOMETRY_RENDERER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Stroke; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PathGeometryRenderer;

struct PathGeometryRenderer__uType : ::uClassType
{
};

PathGeometryRenderer__uType* PathGeometryRenderer__typeof();

void PathGeometryRenderer___ObjInit(PathGeometryRenderer* __this);
void PathGeometryRenderer___ObjInit_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geometry);
void PathGeometryRenderer__add_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value);
void PathGeometryRenderer__CalcBounds(PathGeometryRenderer* __this);
void PathGeometryRenderer__CompleteStrokeRenderers(PathGeometryRenderer* __this, float density);
void PathGeometryRenderer__Draw(PathGeometryRenderer* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
void PathGeometryRenderer__Draw_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__DrawFill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Brush* fill);
void PathGeometryRenderer__DrawFills(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__DrawStroke(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__DrawStrokes(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__EnsureFillRenderer(PathGeometryRenderer* __this, float density);
void PathGeometryRenderer__EnsureStrokeRenderers(PathGeometryRenderer* __this);
void PathGeometryRenderer__GeometryChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geom);
int PathGeometryRenderer__get_Antialiasing(PathGeometryRenderer* __this);
::app::Uno::Rect PathGeometryRenderer__get_Bounds(PathGeometryRenderer* __this);
float PathGeometryRenderer__get_Density(PathGeometryRenderer* __this);
::app::Fuse::Drawing::Brush* PathGeometryRenderer__get_Fill(PathGeometryRenderer* __this);
::uDelegate* PathGeometryRenderer__get_FillRule(PathGeometryRenderer* __this);
::uObject* PathGeometryRenderer__get_Fills(PathGeometryRenderer* __this);
::app::Fuse::Drawing::PathGeometry* PathGeometryRenderer__get_Geometry(PathGeometryRenderer* __this);
bool PathGeometryRenderer__get_HasFills(PathGeometryRenderer* __this);
bool PathGeometryRenderer__get_HasStrokes(PathGeometryRenderer* __this);
::app::Uno::Rect PathGeometryRenderer__get_InnerBounds(PathGeometryRenderer* __this);
::app::Uno::Float2 PathGeometryRenderer__get_PreScale(PathGeometryRenderer* __this);
::app::Fuse::Drawing::Stroke* PathGeometryRenderer__get_Stroke(PathGeometryRenderer* __this);
::app::Uno::Float4 PathGeometryRenderer__get_StrokePadding(PathGeometryRenderer* __this);
::uObject* PathGeometryRenderer__get_Strokes(PathGeometryRenderer* __this);
::uObject* PathGeometryRenderer__GetHitPart(PathGeometryRenderer* __this, ::app::Uno::Float2 p);
::app::Fuse::Drawing::RendererContext* PathGeometryRenderer__GetRendererContext(PathGeometryRenderer* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
::app::Fuse::Drawing::PolygonFiller* PathGeometryRenderer__GetStrokeRenderer(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s, float density);
void PathGeometryRenderer__InvalidateStrokeAndFill(PathGeometryRenderer* __this);
void PathGeometryRenderer__InvalidateVisual(PathGeometryRenderer* __this);
PathGeometryRenderer* PathGeometryRenderer__New_1(::uStatic* __this);
PathGeometryRenderer* PathGeometryRenderer__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* geometry);
void PathGeometryRenderer__OnFillAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f);
void PathGeometryRenderer__OnFillRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f);
void PathGeometryRenderer__OnShadingChanged(PathGeometryRenderer* __this);
void PathGeometryRenderer__OnStrokeAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__OnStrokeChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__OnStrokeRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__remove_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value);
void PathGeometryRenderer__set_Antialiasing(PathGeometryRenderer* __this, int value);
void PathGeometryRenderer__set_Density(PathGeometryRenderer* __this, float value);
void PathGeometryRenderer__set_Fill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* value);
void PathGeometryRenderer__set_FillRule(PathGeometryRenderer* __this, ::uDelegate* value);
void PathGeometryRenderer__set_Geometry(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* value);
void PathGeometryRenderer__set_PreScale(PathGeometryRenderer* __this, ::app::Uno::Float2 value);
void PathGeometryRenderer__set_Stroke(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* value);
void PathGeometryRenderer__SoftDispose(PathGeometryRenderer* __this);
void PathGeometryRenderer__UpdateAa(PathGeometryRenderer* __this);

struct PathGeometryRenderer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*> _fills;
    ::uStrong< ::app::Fuse::Drawing::PolygonFiller*> _fillRenderer;
    float _fillDensity;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*> _strokes;
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*> _strokeRenderers;
    float _strokeDensity;
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _geometry;
    bool _hasBoundsCache;
    ::app::Uno::Rect _bounds;
    ::app::Uno::Rect _innerBounds;
    ::app::Uno::Float4 _strokePadding;
    float _density;
    int _cachedAntialiasing;
    int _antialiasing;
    ::uStrong< ::uDelegate*> _fillRule;
    ::app::Uno::Float2 _preScale;
    ::uStrong< ::uDelegate*> VisualInvalidated;

    void _ObjInit() { PathGeometryRenderer___ObjInit(this); }
    void _ObjInit_1(::app::Fuse::Drawing::PathGeometry* geometry) { PathGeometryRenderer___ObjInit_1(this, geometry); }
    void add_VisualInvalidated(::uDelegate* value) { PathGeometryRenderer__add_VisualInvalidated(this, value); }
    void CalcBounds() { PathGeometryRenderer__CalcBounds(this); }
    void CompleteStrokeRenderers(float density) { PathGeometryRenderer__CompleteStrokeRenderers(this, density); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
    void Draw_1(::app::Fuse::Drawing::RendererContext* ctx) { PathGeometryRenderer__Draw_1(this, ctx); }
    void DrawFill(::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Brush* fill) { PathGeometryRenderer__DrawFill(this, ctx, fill); }
    void DrawFills(::app::Fuse::Drawing::RendererContext* ctx) { PathGeometryRenderer__DrawFills(this, ctx); }
    void DrawStroke(::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__DrawStroke(this, ctx, s); }
    void DrawStrokes(::app::Fuse::Drawing::RendererContext* ctx) { PathGeometryRenderer__DrawStrokes(this, ctx); }
    void EnsureFillRenderer(float density) { PathGeometryRenderer__EnsureFillRenderer(this, density); }
    void EnsureStrokeRenderers() { PathGeometryRenderer__EnsureStrokeRenderers(this); }
    void GeometryChanged(::app::Fuse::Drawing::PathGeometry* geom) { PathGeometryRenderer__GeometryChanged(this, geom); }
    int Antialiasing() { return PathGeometryRenderer__get_Antialiasing(this); }
    ::app::Uno::Rect Bounds();
    float Density() { return PathGeometryRenderer__get_Density(this); }
    ::app::Fuse::Drawing::Brush* Fill() { return PathGeometryRenderer__get_Fill(this); }
    ::uDelegate* FillRule() { return PathGeometryRenderer__get_FillRule(this); }
    ::uObject* Fills() { return PathGeometryRenderer__get_Fills(this); }
    ::app::Fuse::Drawing::PathGeometry* Geometry() { return PathGeometryRenderer__get_Geometry(this); }
    bool HasFills() { return PathGeometryRenderer__get_HasFills(this); }
    bool HasStrokes() { return PathGeometryRenderer__get_HasStrokes(this); }
    ::app::Uno::Rect InnerBounds();
    ::app::Uno::Float2 PreScale();
    ::app::Fuse::Drawing::Stroke* Stroke() { return PathGeometryRenderer__get_Stroke(this); }
    ::app::Uno::Float4 StrokePadding();
    ::uObject* Strokes() { return PathGeometryRenderer__get_Strokes(this); }
    ::uObject* GetHitPart(::app::Uno::Float2 p);
    ::app::Fuse::Drawing::RendererContext* GetRendererContext(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
    ::app::Fuse::Drawing::PolygonFiller* GetStrokeRenderer(::app::Fuse::Drawing::Stroke* s, float density) { return PathGeometryRenderer__GetStrokeRenderer(this, s, density); }
    void InvalidateStrokeAndFill() { PathGeometryRenderer__InvalidateStrokeAndFill(this); }
    void InvalidateVisual() { PathGeometryRenderer__InvalidateVisual(this); }
    void OnFillAdded(::app::Fuse::Drawing::Brush* f) { PathGeometryRenderer__OnFillAdded(this, f); }
    void OnFillRemoved(::app::Fuse::Drawing::Brush* f) { PathGeometryRenderer__OnFillRemoved(this, f); }
    void OnShadingChanged() { PathGeometryRenderer__OnShadingChanged(this); }
    void OnStrokeAdded(::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__OnStrokeAdded(this, s); }
    void OnStrokeChanged(::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__OnStrokeChanged(this, s); }
    void OnStrokeRemoved(::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__OnStrokeRemoved(this, s); }
    void remove_VisualInvalidated(::uDelegate* value) { PathGeometryRenderer__remove_VisualInvalidated(this, value); }
    void Antialiasing(int value) { PathGeometryRenderer__set_Antialiasing(this, value); }
    void Density(float value) { PathGeometryRenderer__set_Density(this, value); }
    void Fill(::app::Fuse::Drawing::Brush* value) { PathGeometryRenderer__set_Fill(this, value); }
    void FillRule(::uDelegate* value) { PathGeometryRenderer__set_FillRule(this, value); }
    void Geometry(::app::Fuse::Drawing::PathGeometry* value) { PathGeometryRenderer__set_Geometry(this, value); }
    void PreScale(::app::Uno::Float2 value);
    void Stroke(::app::Fuse::Drawing::Stroke* value) { PathGeometryRenderer__set_Stroke(this, value); }
    void SoftDispose() { PathGeometryRenderer__SoftDispose(this); }
    void UpdateAa() { PathGeometryRenderer__UpdateAa(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void PathGeometryRenderer::Draw(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize) { PathGeometryRenderer__Draw(this, dc, transform, elementSize); }
inline ::app::Uno::Rect PathGeometryRenderer::Bounds() { return PathGeometryRenderer__get_Bounds(this); }
inline ::app::Uno::Rect PathGeometryRenderer::InnerBounds() { return PathGeometryRenderer__get_InnerBounds(this); }
inline ::app::Uno::Float2 PathGeometryRenderer::PreScale() { return PathGeometryRenderer__get_PreScale(this); }
inline ::app::Uno::Float4 PathGeometryRenderer::StrokePadding() { return PathGeometryRenderer__get_StrokePadding(this); }
inline ::uObject* PathGeometryRenderer::GetHitPart(::app::Uno::Float2 p) { return PathGeometryRenderer__GetHitPart(this, p); }
inline ::app::Fuse::Drawing::RendererContext* PathGeometryRenderer::GetRendererContext(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize) { return PathGeometryRenderer__GetRendererContext(this, dc, transform, elementSize); }
inline void PathGeometryRenderer::PreScale(::app::Uno::Float2 value) { PathGeometryRenderer__set_PreScale(this, value); }

}}}


#endif

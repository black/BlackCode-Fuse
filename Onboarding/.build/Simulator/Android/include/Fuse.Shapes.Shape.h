// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Shapes{

// public abstract class Shape :678
// {
struct Shape_type : ::g::Fuse::Elements::Element_type
{
    void(*fp_DrawFill)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*);
    void(*fp_DrawStroke)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*);
};

Shape_type* Shape_typeof();
void Shape__ctor_2_fn(Shape* __this);
void Shape__AddStyleFill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* b);
void Shape__AddStyleStroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Uno::Rect* __retval);
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval);
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value);
void Shape__get_Fills_fn(Shape* __this, uObject** __retval);
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval);
void Shape__GetSmoothness_fn(Shape* s, float* __retval);
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__get_HasFills_fn(Shape* __this, bool* __retval);
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval);
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::NodeBounds** __retval);
void Shape__OnDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc);
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnResetStyle_fn(Shape* __this);
void Shape__OnShadingChanged_fn(Shape* __this);
void Shape__OnSmoothnessChanged_fn(Shape* s);
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeChanged_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value);
void Shape__SetSmoothness_fn(Shape* s, float* value);
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value);
void Shape__get_Smoothness_fn(Shape* __this, float* __retval);
void Shape__set_Smoothness_fn(Shape* __this, float* value);
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value);
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval);

struct Shape : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Uno::Collections::ObservableList*> _fills;
    float _smoothness;
    uStrong< ::g::Uno::Collections::ObservableList*> _strokes;
    uStrong< ::g::Uno::Collections::List*> _styleFills;
    uStrong< ::g::Uno::Collections::List*> _styleStrokes;
    static uSStrong< ::g::Fuse::StyleProperty1*> FillProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FillProperty() { return Shape_typeof()->Init(), FillProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> SmoothnessProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& SmoothnessProperty() { return Shape_typeof()->Init(), SmoothnessProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StrokeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StrokeProperty() { return Shape_typeof()->Init(), StrokeProperty_; }

    void ctor_2();
    void AddStyleFill(::g::Fuse::Drawing::Brush* b);
    void AddStyleStroke(::g::Fuse::Drawing::Stroke* s);
    void DrawFill(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { (((Shape_type*)__type)->fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { (((Shape_type*)__type)->fp_DrawStroke)(this, dc, stroke); }
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    bool HasFills();
    bool HasStrokes();
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnShadingChanged();
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeChanged(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    float Smoothness();
    void Smoothness(float value);
    ::g::Fuse::Drawing::Stroke* Stroke();
    void Stroke(::g::Fuse::Drawing::Stroke* value);
    uObject* Strokes();
    static ::g::Fuse::Drawing::Brush* GetFill(Shape* s);
    static float GetSmoothness(Shape* s);
    static ::g::Fuse::Drawing::Stroke* GetStroke(Shape* s);
    static void OnSmoothnessChanged(Shape* s);
    static void SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value);
    static void SetSmoothness(Shape* s, float value);
    static void SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value);
};
// }

}}} // ::g::Fuse::Shapes

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class Shape :3420
// {
::g::Fuse::Controls::Panel_type* Shape_typeof();
void Shape__ctor_4_fn(Shape* __this);
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Uno::Rect* __retval);
void Shape__get_DrawCost1_fn(Shape* __this, float* __retval);
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval);
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value);
void Shape__get_Fills_fn(Shape* __this, uObject** __retval);
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval);
void Shape__GetSmoothness_fn(Shape* s, float* __retval);
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__get_HasFills_fn(Shape* __this, bool* __retval);
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval);
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnResetStyle_fn(Shape* __this);
void Shape__OnRooted_fn(Shape* __this);
void Shape__OnShadingChanged_fn(Shape* __this);
void Shape__OnShapeChanged_fn(Shape* __this);
void Shape__OnSmoothnessChanged_fn(Shape* s);
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeChanged_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnUnrooted_fn(Shape* __this);
void Shape__PrepareDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value);
void Shape__SetSmoothness_fn(Shape* s, float* value);
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value);
void Shape__add_ShapeChanged_fn(Shape* __this, uDelegate* value);
void Shape__remove_ShapeChanged_fn(Shape* __this, uDelegate* value);
void Shape__get_Smoothness_fn(Shape* __this, float* __retval);
void Shape__set_Smoothness_fn(Shape* __this, float* value);
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval);

struct Shape : ::g::Fuse::Controls::Panel
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
    uStrong<uDelegate*> ShapeChanged1;

    void ctor_4();
    float DrawCost1();
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    bool HasFills();
    bool HasStrokes();
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnShadingChanged();
    void OnShapeChanged();
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeChanged(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    void PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void add_ShapeChanged(uDelegate* value);
    void remove_ShapeChanged(uDelegate* value);
    float Smoothness();
    void Smoothness(float value);
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

}}} // ::g::Fuse::Controls

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SHAPE_H__
#define __APP_FUSE_CONTROLS_SHAPE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Shape__float; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Stroke; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Shape;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush*> Shape__FillProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float*> Shape__SmoothnessProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke*> Shape__StrokeProperty;

struct Shape__uType : ::app::Fuse::Controls::Panel__uType
{
};

Shape__uType* Shape__typeof();

void Shape___ObjInit_4(Shape* __this);
void Shape___TypeInit_4(::uStatic* __this);
void Shape__add_ShapeChanged(Shape* __this, ::uDelegate* value);
void Shape__AddStyleFill(Shape* __this, ::app::Fuse::Drawing::Brush* b);
void Shape__AddStyleStroke(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this);
float Shape__get_DrawCost_1(Shape* __this);
::app::Fuse::Drawing::Brush* Shape__get_Fill(Shape* __this);
::uObject* Shape__get_Fills(Shape* __this);
bool Shape__get_HasFills(Shape* __this);
bool Shape__get_HasStrokes(Shape* __this);
float Shape__get_Smoothness(Shape* __this);
::app::Fuse::Drawing::Stroke* Shape__get_Stroke(Shape* __this);
::uObject* Shape__get_Strokes(Shape* __this);
::app::Fuse::Drawing::Brush* Shape__GetFill(::uStatic* __this, Shape* s);
float Shape__GetSmoothness(::uStatic* __this, Shape* s);
::app::Fuse::Drawing::Stroke* Shape__GetStroke(::uStatic* __this, Shape* s);
void Shape__OnFillAdded(Shape* __this, ::app::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved(Shape* __this, ::app::Fuse::Drawing::Brush* f);
void Shape__OnResetStyle(Shape* __this);
void Shape__OnRooted(Shape* __this);
void Shape__OnShadingChanged(Shape* __this);
void Shape__OnShapeChanged(Shape* __this);
void Shape__OnSmoothnessChanged(::uStatic* __this, Shape* s);
void Shape__OnStrokeAdded(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeChanged(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
void Shape__OnUnrooted(Shape* __this);
void Shape__PrepareDraw(Shape* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
void Shape__remove_ShapeChanged(Shape* __this, ::uDelegate* value);
void Shape__set_Fill(Shape* __this, ::app::Fuse::Drawing::Brush* value);
void Shape__set_Smoothness(Shape* __this, float value);
void Shape__set_Stroke(Shape* __this, ::app::Fuse::Drawing::Stroke* value);
void Shape__SetFill(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Brush* value);
void Shape__SetSmoothness(::uStatic* __this, Shape* s, float value);
void Shape__SetStroke(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Stroke* value);

struct Shape : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Brush*> _styleFills;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*> _fills;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*> _styleStrokes;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*> _strokes;
    float _smoothness;
    ::uStrong< ::uDelegate*> ShapeChanged;

    void _ObjInit_4() { Shape___ObjInit_4(this); }
    void add_ShapeChanged(::uDelegate* value) { Shape__add_ShapeChanged(this, value); }
    void AddStyleFill(::app::Fuse::Drawing::Brush* b) { Shape__AddStyleFill(this, b); }
    void AddStyleStroke(::app::Fuse::Drawing::Stroke* s) { Shape__AddStyleStroke(this, s); }
    float DrawCost_1() { return Shape__get_DrawCost_1(this); }
    ::app::Fuse::Drawing::Brush* Fill() { return Shape__get_Fill(this); }
    ::uObject* Fills() { return Shape__get_Fills(this); }
    bool HasFills() { return Shape__get_HasFills(this); }
    bool HasStrokes() { return Shape__get_HasStrokes(this); }
    float Smoothness() { return Shape__get_Smoothness(this); }
    ::app::Fuse::Drawing::Stroke* Stroke() { return Shape__get_Stroke(this); }
    ::uObject* Strokes() { return Shape__get_Strokes(this); }
    void OnFillAdded(::app::Fuse::Drawing::Brush* f) { Shape__OnFillAdded(this, f); }
    void OnFillRemoved(::app::Fuse::Drawing::Brush* f) { Shape__OnFillRemoved(this, f); }
    void OnShadingChanged() { Shape__OnShadingChanged(this); }
    void OnShapeChanged() { Shape__OnShapeChanged(this); }
    void OnStrokeAdded(::app::Fuse::Drawing::Stroke* s) { Shape__OnStrokeAdded(this, s); }
    void OnStrokeChanged(::app::Fuse::Drawing::Stroke* s) { Shape__OnStrokeChanged(this, s); }
    void OnStrokeRemoved(::app::Fuse::Drawing::Stroke* s) { Shape__OnStrokeRemoved(this, s); }
    void PrepareDraw(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
    void remove_ShapeChanged(::uDelegate* value) { Shape__remove_ShapeChanged(this, value); }
    void Fill(::app::Fuse::Drawing::Brush* value) { Shape__set_Fill(this, value); }
    void Smoothness(float value) { Shape__set_Smoothness(this, value); }
    void Stroke(::app::Fuse::Drawing::Stroke* value) { Shape__set_Stroke(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {

inline void Shape::PrepareDraw(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize) { Shape__PrepareDraw(this, dc, canvasSize); }

}}}


#endif

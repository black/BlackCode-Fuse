// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_SHAPE_H__
#define __APP_FUSE_SHAPES_SHAPE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Shape__float; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Stroke; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Shape;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush*> Shape__FillProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__float*> Shape__SmoothnessProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke*> Shape__StrokeProperty;

struct Shape__uType : ::app::Fuse::Elements::Element__uType
{
    void(*__fp_DrawFill)(Shape*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*);
    void(*__fp_DrawStroke)(Shape*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*);
};

Shape__uType* Shape__typeof();

void Shape___ObjInit_2(Shape* __this);
void Shape___TypeInit_2(::uStatic* __this);
void Shape__AddStyleFill(Shape* __this, ::app::Fuse::Drawing::Brush* b);
void Shape__AddStyleStroke(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this);
::app::Fuse::Drawing::Brush* Shape__get_Fill(Shape* __this);
::uObject* Shape__get_Fills(Shape* __this);
bool Shape__get_HasFills(Shape* __this);
bool Shape__get_HasStrokes(Shape* __this);
::app::Fuse::NodeBounds* Shape__get_HitTestLocalVisualBounds(Shape* __this);
float Shape__get_Smoothness(Shape* __this);
::app::Fuse::Drawing::Stroke* Shape__get_Stroke(Shape* __this);
::uObject* Shape__get_Strokes(Shape* __this);
::app::Fuse::Drawing::Brush* Shape__GetFill(::uStatic* __this, Shape* s);
float Shape__GetSmoothness(::uStatic* __this, Shape* s);
::app::Fuse::Drawing::Stroke* Shape__GetStroke(::uStatic* __this, Shape* s);
void Shape__OnDraw(Shape* __this, ::app::Fuse::DrawContext* dc);
void Shape__OnFillAdded(Shape* __this, ::app::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved(Shape* __this, ::app::Fuse::Drawing::Brush* f);
void Shape__OnResetStyle(Shape* __this);
void Shape__OnShadingChanged(Shape* __this);
void Shape__OnSmoothnessChanged(::uStatic* __this, Shape* s);
void Shape__OnStrokeAdded(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeChanged(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved(Shape* __this, ::app::Fuse::Drawing::Stroke* s);
void Shape__set_Fill(Shape* __this, ::app::Fuse::Drawing::Brush* value);
void Shape__set_Smoothness(Shape* __this, float value);
void Shape__set_Stroke(Shape* __this, ::app::Fuse::Drawing::Stroke* value);
void Shape__SetFill(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Brush* value);
void Shape__SetSmoothness(::uStatic* __this, Shape* s, float value);
void Shape__SetStroke(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Stroke* value);

struct Shape : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Brush*> _styleFills;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*> _fills;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*> _styleStrokes;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*> _strokes;
    float _smoothness;

    void _ObjInit_2() { Shape___ObjInit_2(this); }
    void AddStyleFill(::app::Fuse::Drawing::Brush* b) { Shape__AddStyleFill(this, b); }
    void AddStyleStroke(::app::Fuse::Drawing::Stroke* s) { Shape__AddStyleStroke(this, s); }
    void DrawFill(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill) { (((Shape__uType*)this->__obj_type)->__fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke) { (((Shape__uType*)this->__obj_type)->__fp_DrawStroke)(this, dc, stroke); }
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
    void OnStrokeAdded(::app::Fuse::Drawing::Stroke* s) { Shape__OnStrokeAdded(this, s); }
    void OnStrokeChanged(::app::Fuse::Drawing::Stroke* s) { Shape__OnStrokeChanged(this, s); }
    void OnStrokeRemoved(::app::Fuse::Drawing::Stroke* s) { Shape__OnStrokeRemoved(this, s); }
    void Fill(::app::Fuse::Drawing::Brush* value) { Shape__set_Fill(this, value); }
    void Smoothness(float value) { Shape__set_Smoothness(this, value); }
    void Stroke(::app::Fuse::Drawing::Stroke* value) { Shape__set_Stroke(this, value); }
};

}}}


#endif

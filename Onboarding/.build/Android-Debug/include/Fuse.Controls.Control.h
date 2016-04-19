// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class Control :379
// {
struct Control_type : ::g::Fuse::Elements::Element_type
{
    void(*fp_OnDrawControl)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*);
};

Control_type* Control_typeof();
void Control__ctor_2_fn(Control* __this);
void Control__get_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush** __retval);
void Control__set_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush* value);
void Control__add_ControlRenderPropertyChanged_fn(Control* __this, uDelegate* value);
void Control__remove_ControlRenderPropertyChanged_fn(Control* __this, uDelegate* value);
void Control__DrawBackground_fn(Control* __this, ::g::Fuse::DrawContext* dc, float* opacity);
void Control__GetBackground_fn(Control* c, ::g::Fuse::Drawing::Brush** __retval);
void Control__get_HitTestLocalVisualBounds_fn(Control* __this, ::g::Fuse::NodeBounds** __retval);
void Control__get_IsInteracting_fn(Control* __this, bool* __retval);
void Control__add_IsInteractingChanged_fn(Control* __this, uDelegate* value);
void Control__remove_IsInteractingChanged_fn(Control* __this, uDelegate* value);
void Control__OnBackgroundChanged_fn(Control* c);
void Control__OnControlRenderPropertyChanged_fn(Control* __this);
void Control__OnDraw_fn(Control* __this, ::g::Fuse::DrawContext* dc);
void Control__OnDrawControl_fn(Control* __this, ::g::Fuse::DrawContext* dc);
void Control__OnHitTestLocalVisual_fn(Control* __this, ::g::Fuse::HitTestContext* htc);
void Control__OnRooted_fn(Control* __this);
void Control__OnUnrooted_fn(Control* __this);
void Control__SetBackground_fn(Control* c, ::g::Fuse::Drawing::Brush* value);
void Control__SetIsInteracting_fn(Control* __this, uObject* what, bool* on);

struct Control : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Drawing::Brush*> _background;
    bool _isInteracting;
    static uSStrong< ::g::Fuse::StyleProperty1*> BackgroundProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& BackgroundProperty() { return Control_typeof()->Init(), BackgroundProperty_; }
    uStrong<uDelegate*> ControlRenderPropertyChanged1;
    uStrong<uDelegate*> IsInteractingChanged1;

    void ctor_2();
    ::g::Fuse::Drawing::Brush* Background();
    void Background(::g::Fuse::Drawing::Brush* value);
    void add_ControlRenderPropertyChanged(uDelegate* value);
    void remove_ControlRenderPropertyChanged(uDelegate* value);
    void DrawBackground(::g::Fuse::DrawContext* dc, float opacity);
    bool IsInteracting();
    void add_IsInteractingChanged(uDelegate* value);
    void remove_IsInteractingChanged(uDelegate* value);
    void OnControlRenderPropertyChanged();
    void OnDrawControl(::g::Fuse::DrawContext* dc) { (((Control_type*)__type)->fp_OnDrawControl)(this, dc); }
    void SetIsInteracting(uObject* what, bool on);
    static ::g::Fuse::Drawing::Brush* GetBackground(Control* c);
    static void OnBackgroundChanged(Control* c);
    static void OnDrawControl(Control* __this, ::g::Fuse::DrawContext* dc) { Control__OnDrawControl_fn(__this, dc); }
    static void SetBackground(Control* c, ::g::Fuse::Drawing::Brush* value);
};
// }

}}} // ::g::Fuse::Controls

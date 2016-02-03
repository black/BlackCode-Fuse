// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_CONTROL_H__
#define __APP_FUSE_CONTROLS_CONTROL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Fuse { struct NodeDrawCount; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Control;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*> Control__BackgroundProperty;

struct Control__uType : ::app::Fuse::Elements::Element__uType
{
    void(*__fp_OnDrawControl)(Control*, ::app::Fuse::DrawContext*);
};

Control__uType* Control__typeof();

void Control___ObjInit_2(Control* __this);
void Control___TypeInit_2(::uStatic* __this);
void Control__add_ControlRenderPropertyChanged(Control* __this, ::uDelegate* value);
void Control__add_IsInteractingChanged(Control* __this, ::uDelegate* value);
void Control__DrawBackground(Control* __this, ::app::Fuse::DrawContext* dc, float opacity);
::app::Fuse::Drawing::Brush* Control__get_Background(Control* __this);
::app::Fuse::NodeBounds* Control__get_HitTestLocalVisualBounds(Control* __this);
bool Control__get_IsInteracting(Control* __this);
::app::Fuse::NodeDrawCount Control__get_LocalDrawCount(Control* __this);
::app::Fuse::Drawing::Brush* Control__GetBackground(::uStatic* __this, Control* c);
void Control__OnBackgroundChanged(::uStatic* __this, Control* c);
void Control__OnControlRenderPropertyChanged(Control* __this);
void Control__OnDraw(Control* __this, ::app::Fuse::DrawContext* dc);
void Control__OnDrawControl(Control* __this, ::app::Fuse::DrawContext* dc);
void Control__OnHitTestLocalVisual(Control* __this, ::app::Fuse::HitTestContext* htc);
void Control__OnRooted(Control* __this);
void Control__OnUnrooted(Control* __this);
void Control__remove_ControlRenderPropertyChanged(Control* __this, ::uDelegate* value);
void Control__remove_IsInteractingChanged(Control* __this, ::uDelegate* value);
void Control__set_Background(Control* __this, ::app::Fuse::Drawing::Brush* value);
void Control__SetBackground(::uStatic* __this, Control* c, ::app::Fuse::Drawing::Brush* value);
void Control__SetIsInteracting(Control* __this, ::uObject* what, bool on);

struct Control : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _background;
    bool _isInteracting;
    ::uStrong< ::uDelegate*> IsInteractingChanged;
    ::uStrong< ::uDelegate*> ControlRenderPropertyChanged;

    void _ObjInit_2() { Control___ObjInit_2(this); }
    void add_ControlRenderPropertyChanged(::uDelegate* value) { Control__add_ControlRenderPropertyChanged(this, value); }
    void add_IsInteractingChanged(::uDelegate* value) { Control__add_IsInteractingChanged(this, value); }
    void DrawBackground(::app::Fuse::DrawContext* dc, float opacity) { Control__DrawBackground(this, dc, opacity); }
    ::app::Fuse::Drawing::Brush* Background() { return Control__get_Background(this); }
    bool IsInteracting() { return Control__get_IsInteracting(this); }
    void OnControlRenderPropertyChanged() { Control__OnControlRenderPropertyChanged(this); }
    void OnDrawControl(::app::Fuse::DrawContext* dc) { (((Control__uType*)this->__obj_type)->__fp_OnDrawControl)(this, dc); }
    void remove_ControlRenderPropertyChanged(::uDelegate* value) { Control__remove_ControlRenderPropertyChanged(this, value); }
    void remove_IsInteractingChanged(::uDelegate* value) { Control__remove_IsInteractingChanged(this, value); }
    void Background(::app::Fuse::Drawing::Brush* value) { Control__set_Background(this, value); }
    void SetIsInteracting(::uObject* what, bool on) { Control__SetIsInteracting(this, what, on); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TOGGLE_CONTROL_H__
#define __APP_FUSE_CONTROLS_TOGGLE_CONTROL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.IValue__bool.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_ToggleControl__bool; } }

namespace app {
namespace Fuse {
namespace Controls {

struct ToggleControl;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*> ToggleControl__ValueProperty;

struct ToggleControl__uType : ::app::Fuse::Controls::Panel__uType
{
    ::app::Fuse::Triggers::IValue__bool __interface_8;
};

ToggleControl__uType* ToggleControl__typeof();

void ToggleControl___ObjInit_4(ToggleControl* __this);
void ToggleControl___TypeInit_4(::uStatic* __this);
void ToggleControl__add_ValueChanged(ToggleControl* __this, ::uDelegate* value);
bool ToggleControl__get_Value(ToggleControl* __this);
bool ToggleControl__GetValue(::uStatic* __this, ToggleControl* s);
void ToggleControl__OnValueChanged(ToggleControl* __this, bool value, ::uObject* origin);
void ToggleControl__remove_ValueChanged(ToggleControl* __this, ::uDelegate* value);
void ToggleControl__set_Value(ToggleControl* __this, bool value);
void ToggleControl__SetValue(ToggleControl* __this, bool value, ::uObject* origin);
void ToggleControl__SetValue_1(::uStatic* __this, ToggleControl* s, bool value);

struct ToggleControl : ::app::Fuse::Controls::Panel
{
    bool _value;
    ::uStrong< ::uDelegate*> ValueChanged;

    void _ObjInit_4() { ToggleControl___ObjInit_4(this); }
    void add_ValueChanged(::uDelegate* value) { ToggleControl__add_ValueChanged(this, value); }
    bool Value() { return ToggleControl__get_Value(this); }
    void OnValueChanged(bool value, ::uObject* origin) { ToggleControl__OnValueChanged(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { ToggleControl__remove_ValueChanged(this, value); }
    void Value(bool value) { ToggleControl__set_Value(this, value); }
    void SetValue(bool value, ::uObject* origin) { ToggleControl__SetValue(this, value, origin); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_RANGE_CONTROL_H__
#define __APP_FUSE_CONTROLS_RANGE_CONTROL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_RangeControl__double; } }

namespace app {
namespace Fuse {
namespace Controls {

struct RangeControl;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__MaximumProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__MinimumProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__ValueProperty;

struct RangeControl__uType : ::app::Fuse::Controls::Panel__uType
{
    ::app::Fuse::Triggers::IProgress __interface_8;
};

RangeControl__uType* RangeControl__typeof();

void RangeControl___ObjInit_4(RangeControl* __this);
void RangeControl___TypeInit_4(::uStatic* __this);
void RangeControl__add_ProgressChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__add_ValueChanged(RangeControl* __this, ::uDelegate* value);
double RangeControl__ClampToRange(RangeControl* __this, double v);
double RangeControl__get_Maximum(RangeControl* __this);
double RangeControl__get_Minimum(RangeControl* __this);
double RangeControl__get_Progress(RangeControl* __this);
double RangeControl__get_RelativeValue(RangeControl* __this);
double RangeControl__get_Value(RangeControl* __this);
double RangeControl__GetValue(::uStatic* __this, RangeControl* rc);
void RangeControl__OnProgressChanged(RangeControl* __this);
void RangeControl__OnRangeChanged(::uStatic* __this, RangeControl* rc);
void RangeControl__OnValueChanged(RangeControl* __this, double value, ::uObject* origin);
void RangeControl__remove_ProgressChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__remove_ValueChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__set_Maximum(RangeControl* __this, double value);
void RangeControl__set_Minimum(RangeControl* __this, double value);
void RangeControl__set_Progress(RangeControl* __this, double value);
void RangeControl__set_RelativeValue(RangeControl* __this, double value);
void RangeControl__set_Value(RangeControl* __this, double value);
void RangeControl__SetInternal(RangeControl* __this, double value, ::uObject* origin);
void RangeControl__SetValue(RangeControl* __this, double value, ::uObject* origin);
void RangeControl__SetValue_1(::uStatic* __this, RangeControl* rc, double value);

struct RangeControl : ::app::Fuse::Controls::Panel
{
    double _value;
    ::uStrong< ::uDelegate*> ValueChanged;
    ::uStrong< ::uDelegate*> ProgressChanged;

    void _ObjInit_4() { RangeControl___ObjInit_4(this); }
    void add_ProgressChanged(::uDelegate* value) { RangeControl__add_ProgressChanged(this, value); }
    void add_ValueChanged(::uDelegate* value) { RangeControl__add_ValueChanged(this, value); }
    double ClampToRange(double v) { return RangeControl__ClampToRange(this, v); }
    double Maximum() { return RangeControl__get_Maximum(this); }
    double Minimum() { return RangeControl__get_Minimum(this); }
    double Progress() { return RangeControl__get_Progress(this); }
    double RelativeValue() { return RangeControl__get_RelativeValue(this); }
    double Value() { return RangeControl__get_Value(this); }
    void OnProgressChanged() { RangeControl__OnProgressChanged(this); }
    void OnValueChanged(double value, ::uObject* origin) { RangeControl__OnValueChanged(this, value, origin); }
    void remove_ProgressChanged(::uDelegate* value) { RangeControl__remove_ProgressChanged(this, value); }
    void remove_ValueChanged(::uDelegate* value) { RangeControl__remove_ValueChanged(this, value); }
    void Maximum(double value) { RangeControl__set_Maximum(this, value); }
    void Minimum(double value) { RangeControl__set_Minimum(this, value); }
    void Progress(double value) { RangeControl__set_Progress(this, value); }
    void RelativeValue(double value) { RangeControl__set_RelativeValue(this, value); }
    void Value(double value) { RangeControl__set_Value(this, value); }
    void SetInternal(double value, ::uObject* origin) { RangeControl__SetInternal(this, value, origin); }
    void SetValue(double value, ::uObject* origin) { RangeControl__SetValue(this, value, origin); }
};

}}}


#endif

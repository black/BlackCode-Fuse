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
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class RangeControl :2885
// {
struct RangeControl_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IProgress interface7;
    ::g::Fuse::Triggers::IValue interface8;
};

RangeControl_type* RangeControl_typeof();
void RangeControl__ClampToRange_fn(RangeControl* __this, double* v, double* __retval);
void RangeControl__GetValue_fn(RangeControl* rc, double* __retval);
void RangeControl__get_Maximum_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Maximum_fn(RangeControl* __this, double* value);
void RangeControl__get_Minimum_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Minimum_fn(RangeControl* __this, double* value);
void RangeControl__OnProgressChanged_fn(RangeControl* __this);
void RangeControl__OnRangeChanged_fn(RangeControl* rc);
void RangeControl__OnValueChanged_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__get_Progress_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Progress_fn(RangeControl* __this, double* value);
void RangeControl__add_ProgressChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__remove_ProgressChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__get_RelativeValue_fn(RangeControl* __this, double* __retval);
void RangeControl__set_RelativeValue_fn(RangeControl* __this, double* value);
void RangeControl__SetInternal_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__SetValue_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__SetValue1_fn(RangeControl* rc, double* value);
void RangeControl__get_Value_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Value_fn(RangeControl* __this, double* value);
void RangeControl__add_ValueChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__remove_ValueChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__ValueFromRelative_fn(RangeControl* __this, double* relative, double* __retval);
void RangeControl__ValueToRelative_fn(RangeControl* __this, double* value, double* __retval);

struct RangeControl : ::g::Fuse::Controls::Panel
{
    double _value;
    static uSStrong< ::g::Fuse::StyleProperty1*> MaximumProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MaximumProperty() { return RangeControl_typeof()->Init(), MaximumProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> MinimumProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MinimumProperty() { return RangeControl_typeof()->Init(), MinimumProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return RangeControl_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> ValueChanged1;

    double ClampToRange(double v);
    double Maximum();
    void Maximum(double value);
    double Minimum();
    void Minimum(double value);
    void OnProgressChanged();
    void OnValueChanged(double value, uObject* origin);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    double RelativeValue();
    void RelativeValue(double value);
    void SetInternal(double value, uObject* origin);
    void SetValue(double value, uObject* origin);
    double Value();
    void Value(double value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    double ValueFromRelative(double relative);
    double ValueToRelative(double value);
    static double GetValue(RangeControl* rc);
    static void OnRangeChanged(RangeControl* rc);
    static void SetValue1(RangeControl* rc, double value);
};
// }

}}} // ::g::Fuse::Controls

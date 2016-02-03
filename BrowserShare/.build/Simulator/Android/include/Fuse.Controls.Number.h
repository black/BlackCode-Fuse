// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Float.h>
namespace g{namespace Fuse{namespace Controls{struct Number;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Number :1484
// {
struct Number_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IValue interface8;
};

Number_type* Number_typeof();
void Number__ctor_4_fn(Number* __this);
void Number__get_Format_fn(Number* __this, uString** __retval);
void Number__set_Format_fn(Number* __this, uString* value);
void Number__FormatChanged_fn(Number* n);
void Number__get_FormatString_fn(Number* __this, uString** __retval);
void Number__set_FormatString_fn(Number* __this, uString* value);
void Number__New2_fn(Number** __retval);
void Number__OnRooted_fn(Number* __this);
void Number__OnValueChanged_fn(Number* __this, float* n, uObject* origin);
void Number__StaticValueChanged_fn(Number* n);
void Number__UpdateValue_fn(Number* __this);
void Number__get_Value_fn(Number* __this, float* __retval);
void Number__set_Value_fn(Number* __this, float* value);
void Number__add_ValueChanged_fn(Number* __this, uDelegate* value);
void Number__remove_ValueChanged_fn(Number* __this, uDelegate* value);

struct Number : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Controls::TextControl*> _text;
    static uSStrong< ::g::Fuse::StyleProperty1*> FormatProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FormatProperty() { return Number_typeof()->Init(), FormatProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> FormatStringProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FormatStringProperty() { return Number_typeof()->Init(), FormatStringProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return Number_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_4();
    uString* Format();
    void Format(uString* value);
    uString* FormatString();
    void FormatString(uString* value);
    void OnValueChanged(float n, uObject* origin);
    void UpdateValue();
    float Value();
    void Value(float value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static void FormatChanged(Number* n);
    static Number* New2();
    static void StaticValueChanged(Number* n);
};
// }

}}} // ::g::Fuse::Controls

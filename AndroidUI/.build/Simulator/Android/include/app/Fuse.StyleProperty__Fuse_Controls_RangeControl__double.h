// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_RANGE_CONTROL__DOUBLE_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_RANGE_CONTROL__DOUBLE_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct RangeControl; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_RangeControl__double;

struct StyleProperty__Fuse_Controls_RangeControl__double__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_RangeControl__double__uType* StyleProperty__Fuse_Controls_RangeControl__double__typeof();

void StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_1(StyleProperty__Fuse_Controls_RangeControl__double* __this, double defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_2(StyleProperty__Fuse_Controls_RangeControl__double* __this, double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
double StyleProperty__Fuse_Controls_RangeControl__double__Get(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner);
double StyleProperty__Fuse_Controls_RangeControl__double__get_DefaultValue(StyleProperty__Fuse_Controls_RangeControl__double* __this);
bool StyleProperty__Fuse_Controls_RangeControl__double__HasValue(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner);
bool StyleProperty__Fuse_Controls_RangeControl__double__HasValueFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_RangeControl__double__IsEqual(StyleProperty__Fuse_Controls_RangeControl__double* __this, double value, double oldValue);
StyleProperty__Fuse_Controls_RangeControl__double* StyleProperty__Fuse_Controls_RangeControl__double__New_1(::uStatic* __this, double defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_RangeControl__double* StyleProperty__Fuse_Controls_RangeControl__double__New_2(::uStatic* __this, double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_RangeControl__double__OnChanged(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner);
bool StyleProperty__Fuse_Controls_RangeControl__double__Reset(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner);
void StyleProperty__Fuse_Controls_RangeControl__double__ResetFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_RangeControl__double__ResetStyle(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner);
void StyleProperty__Fuse_Controls_RangeControl__double__ResetStyleFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_RangeControl__double__Set(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner, double value);
void StyleProperty__Fuse_Controls_RangeControl__double__SetLocalState(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner);
bool StyleProperty__Fuse_Controls_RangeControl__double__SetStyle(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner, double value);

struct StyleProperty__Fuse_Controls_RangeControl__double : ::app::Fuse::StyleProperty
{
    double _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(double defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    double Get(::app::Fuse::Controls::RangeControl* owner) { return StyleProperty__Fuse_Controls_RangeControl__double__Get(this, owner); }
    double DefaultValue() { return StyleProperty__Fuse_Controls_RangeControl__double__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::RangeControl* owner) { return StyleProperty__Fuse_Controls_RangeControl__double__HasValue(this, owner); }
    bool IsEqual(double value, double oldValue) { return StyleProperty__Fuse_Controls_RangeControl__double__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::RangeControl* owner) { StyleProperty__Fuse_Controls_RangeControl__double__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::RangeControl* owner) { return StyleProperty__Fuse_Controls_RangeControl__double__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::RangeControl* owner) { return StyleProperty__Fuse_Controls_RangeControl__double__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::RangeControl* owner, double value) { return StyleProperty__Fuse_Controls_RangeControl__double__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::RangeControl* owner) { StyleProperty__Fuse_Controls_RangeControl__double__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::RangeControl* owner, double value) { return StyleProperty__Fuse_Controls_RangeControl__double__SetStyle(this, owner, value); }
};

}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_BUTTON__STRING_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_BUTTON__STRING_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Button; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Button__string;

struct StyleProperty__Fuse_Controls_Button__string__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Button__string__uType* StyleProperty__Fuse_Controls_Button__string__typeof();

void StyleProperty__Fuse_Controls_Button__string___ObjInit_1(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Button__string___ObjInit_2(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::uString* StyleProperty__Fuse_Controls_Button__string__Get(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner);
::uString* StyleProperty__Fuse_Controls_Button__string__get_DefaultValue(StyleProperty__Fuse_Controls_Button__string* __this);
bool StyleProperty__Fuse_Controls_Button__string__HasValue(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner);
bool StyleProperty__Fuse_Controls_Button__string__HasValueFor(StyleProperty__Fuse_Controls_Button__string* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_Button__string__IsEqual(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* value, ::uString* oldValue);
StyleProperty__Fuse_Controls_Button__string* StyleProperty__Fuse_Controls_Button__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_Button__string* StyleProperty__Fuse_Controls_Button__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Button__string__OnChanged(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner);
bool StyleProperty__Fuse_Controls_Button__string__Reset(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner);
void StyleProperty__Fuse_Controls_Button__string__ResetFor(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Button__string__ResetStyle(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner);
void StyleProperty__Fuse_Controls_Button__string__ResetStyleFor(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Button__string__Set(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner, ::uString* value);
void StyleProperty__Fuse_Controls_Button__string__SetLocalState(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner);
bool StyleProperty__Fuse_Controls_Button__string__SetStyle(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner, ::uString* value);

struct StyleProperty__Fuse_Controls_Button__string : ::app::Fuse::StyleProperty
{
    ::uStrong< ::uString*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::uString* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Button__string___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Button__string___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::uString* Get(::app::Fuse::Controls::Button* owner) { return StyleProperty__Fuse_Controls_Button__string__Get(this, owner); }
    ::uString* DefaultValue() { return StyleProperty__Fuse_Controls_Button__string__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::Button* owner) { return StyleProperty__Fuse_Controls_Button__string__HasValue(this, owner); }
    bool IsEqual(::uString* value, ::uString* oldValue) { return StyleProperty__Fuse_Controls_Button__string__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::Button* owner) { StyleProperty__Fuse_Controls_Button__string__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Button* owner) { return StyleProperty__Fuse_Controls_Button__string__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Button* owner) { return StyleProperty__Fuse_Controls_Button__string__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::Button* owner, ::uString* value) { return StyleProperty__Fuse_Controls_Button__string__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::Button* owner) { StyleProperty__Fuse_Controls_Button__string__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::Button* owner, ::uString* value) { return StyleProperty__Fuse_Controls_Button__string__SetStyle(this, owner, value); }
};

}}


#endif

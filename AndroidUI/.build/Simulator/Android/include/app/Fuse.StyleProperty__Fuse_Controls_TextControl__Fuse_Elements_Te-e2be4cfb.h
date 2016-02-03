// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_CONTROL__FUSE_ELEMENTS_TE_E2BE4CFB_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_CONTROL__FUSE_ELEMENTS_TE_E2BE4CFB_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping;

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof();

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner);
int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValueFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner, int value);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetLocalState(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner, int value);

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    int Get(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Get(this, owner); }
    int DefaultValue() { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::TextControl* owner) { StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::TextControl* owner, int value) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::TextControl* owner) { StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::TextControl* owner, int value) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetStyle(this, owner, value); }
};

}}


#endif

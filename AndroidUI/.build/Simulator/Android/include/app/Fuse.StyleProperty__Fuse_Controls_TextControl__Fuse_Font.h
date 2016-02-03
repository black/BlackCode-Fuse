// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_CONTROL__FUSE_FONT_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_CONTROL__FUSE_FONT_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Font;

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof();

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::app::Fuse::Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner);
::app::Fuse::Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValueFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* value, ::app::Fuse::Font* oldValue);
StyleProperty__Fuse_Controls_TextControl__Fuse_Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_TextControl__Fuse_Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_2(::uStatic* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetLocalState(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value);

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Font : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Font*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::app::Fuse::Font* Get(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Get(this, owner); }
    ::app::Fuse::Font* DefaultValue() { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValue(this, owner); }
    bool IsEqual(::app::Fuse::Font* value, ::app::Fuse::Font* oldValue) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::TextControl* owner) { StyleProperty__Fuse_Controls_TextControl__Fuse_Font__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::TextControl* owner) { StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetStyle(this, owner, value); }
};

}}


#endif

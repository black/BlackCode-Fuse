// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_INPUT__UNO_PLATFORM_TEXT_INPUT_HINT_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_INPUT__UNO_PLATFORM_TEXT_INPUT_HINT_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint;

struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof();

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_2(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
int StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__get_DefaultValue(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValue(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValueFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__IsEqual(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__OnChanged(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner, int value);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetLocalState(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetStyle(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner, int value);

struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    int Get(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get(this, owner); }
    int DefaultValue() { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::TextInput* owner) { StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::TextInput* owner, int value) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::TextInput* owner) { StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::TextInput* owner, int value) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetStyle(this, owner, value); }
};

}}


#endif

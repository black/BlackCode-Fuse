// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_NODE__BOOL_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_NODE__BOOL_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Node__bool;

struct StyleProperty__Fuse_Node__bool__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Node__bool__uType* StyleProperty__Fuse_Node__bool__typeof();

void StyleProperty__Fuse_Node__bool___ObjInit_1(StyleProperty__Fuse_Node__bool* __this, bool defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Node__bool___ObjInit_2(StyleProperty__Fuse_Node__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
bool StyleProperty__Fuse_Node__bool__Get(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__bool__get_DefaultValue(StyleProperty__Fuse_Node__bool* __this);
bool StyleProperty__Fuse_Node__bool__HasValue(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__bool__HasValueFor(StyleProperty__Fuse_Node__bool* __this, ::uObject* owner);
bool StyleProperty__Fuse_Node__bool__IsEqual(StyleProperty__Fuse_Node__bool* __this, bool value, bool oldValue);
StyleProperty__Fuse_Node__bool* StyleProperty__Fuse_Node__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Node__bool* StyleProperty__Fuse_Node__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Node__bool__OnChanged(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__bool__Reset(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner);
void StyleProperty__Fuse_Node__bool__ResetFor(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Node__bool__ResetStyle(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner);
void StyleProperty__Fuse_Node__bool__ResetStyleFor(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Node__bool__Set(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner, bool value);
void StyleProperty__Fuse_Node__bool__SetLocalState(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__bool__SetStyle(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner, bool value);

struct StyleProperty__Fuse_Node__bool : ::app::Fuse::StyleProperty
{
    bool _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(bool defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Node__bool___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Node__bool___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    bool Get(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__bool__Get(this, owner); }
    bool DefaultValue() { return StyleProperty__Fuse_Node__bool__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__bool__HasValue(this, owner); }
    bool IsEqual(bool value, bool oldValue) { return StyleProperty__Fuse_Node__bool__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Node* owner) { StyleProperty__Fuse_Node__bool__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__bool__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__bool__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Node* owner, bool value) { return StyleProperty__Fuse_Node__bool__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Node* owner) { StyleProperty__Fuse_Node__bool__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Node* owner, bool value) { return StyleProperty__Fuse_Node__bool__SetStyle(this, owner, value); }
};

}}


#endif

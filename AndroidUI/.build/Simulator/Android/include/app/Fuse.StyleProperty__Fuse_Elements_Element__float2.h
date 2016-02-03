// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FLOAT2_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FLOAT2_H__

#include <app/Fuse.StyleProperty.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Elements_Element__float2;

struct StyleProperty__Fuse_Elements_Element__float2__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Elements_Element__float2__uType* StyleProperty__Fuse_Elements_Element__float2__typeof();

void StyleProperty__Fuse_Elements_Element__float2___ObjInit_1(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::app::Uno::Float2 StyleProperty__Fuse_Elements_Element__float2__Get(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner);
::app::Uno::Float2 StyleProperty__Fuse_Elements_Element__float2__get_DefaultValue(StyleProperty__Fuse_Elements_Element__float2* __this);
bool StyleProperty__Fuse_Elements_Element__float2__HasValue(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float2__HasValueFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::uObject* owner);
bool StyleProperty__Fuse_Elements_Element__float2__IsEqual(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 value, ::app::Uno::Float2 oldValue);
StyleProperty__Fuse_Elements_Element__float2* StyleProperty__Fuse_Elements_Element__float2__New_1(::uStatic* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Elements_Element__float2* StyleProperty__Fuse_Elements_Element__float2__New_2(::uStatic* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Elements_Element__float2__OnChanged(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float2__Reset(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner);
void StyleProperty__Fuse_Elements_Element__float2__ResetFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Elements_Element__float2__ResetStyle(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner);
void StyleProperty__Fuse_Elements_Element__float2__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Elements_Element__float2__Set(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value);
void StyleProperty__Fuse_Elements_Element__float2__SetLocalState(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float2__SetStyle(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value);

struct StyleProperty__Fuse_Elements_Element__float2 : ::app::Fuse::StyleProperty
{
    ::app::Uno::Float2 _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Elements_Element__float2___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::app::Uno::Float2 Get(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float2__Get(this, owner); }
    ::app::Uno::Float2 DefaultValue() { return StyleProperty__Fuse_Elements_Element__float2__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float2__HasValue(this, owner); }
    bool IsEqual(::app::Uno::Float2 value, ::app::Uno::Float2 oldValue) { return StyleProperty__Fuse_Elements_Element__float2__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Elements::Element* owner) { StyleProperty__Fuse_Elements_Element__float2__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float2__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float2__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value) { return StyleProperty__Fuse_Elements_Element__float2__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Elements::Element* owner) { StyleProperty__Fuse_Elements_Element__float2__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value) { return StyleProperty__Fuse_Elements_Element__float2__SetStyle(this, owner, value); }
};

}}


#endif

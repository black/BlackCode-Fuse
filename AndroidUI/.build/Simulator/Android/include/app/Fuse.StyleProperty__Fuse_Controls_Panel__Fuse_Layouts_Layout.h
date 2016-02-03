// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_PANEL__FUSE_LAYOUTS_LAYOUT_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_PANEL__FUSE_LAYOUTS_LAYOUT_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { namespace Layouts { struct Layout; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout;

struct StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof();

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_1(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_2(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::app::Fuse::Layouts::Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Get(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner);
::app::Fuse::Layouts::Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__get_DefaultValue(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValue(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValueFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__IsEqual(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* value, ::app::Fuse::Layouts::Layout* oldValue);
StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_1(::uStatic* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_2(::uStatic* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__OnChanged(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Reset(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner);
void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner);
void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyleFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Set(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value);
void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetLocalState(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner);
bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value);

struct StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Layouts::Layout*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::app::Fuse::Layouts::Layout* Get(::app::Fuse::Controls::Panel* owner) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Get(this, owner); }
    ::app::Fuse::Layouts::Layout* DefaultValue() { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::Panel* owner) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValue(this, owner); }
    bool IsEqual(::app::Fuse::Layouts::Layout* value, ::app::Fuse::Layouts::Layout* oldValue) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::Panel* owner) { StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Panel* owner) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Panel* owner) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::Panel* owner) { StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value) { return StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetStyle(this, owner, value); }
};

}}


#endif

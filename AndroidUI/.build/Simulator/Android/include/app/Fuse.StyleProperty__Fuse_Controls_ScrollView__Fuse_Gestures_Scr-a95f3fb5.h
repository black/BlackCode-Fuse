// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_SCROLL_VIEW__FUSE_GESTURES_SCR_A95F3FB5_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_SCROLL_VIEW__FUSE_GESTURES_SCR_A95F3FB5_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections;

struct StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof();

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_1(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_2(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Get(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner);
int StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__get_DefaultValue(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValue(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValueFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__IsEqual(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__OnChanged(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Reset(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner);
void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyle(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner);
void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyleFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Set(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner, int value);
void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetLocalState(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner);
bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetStyle(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner, int value);

struct StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    int Get(::app::Fuse::Controls::ScrollView* owner) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Get(this, owner); }
    int DefaultValue() { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::ScrollView* owner) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::ScrollView* owner) { StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::ScrollView* owner) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::ScrollView* owner) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::ScrollView* owner, int value) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::ScrollView* owner) { StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::ScrollView* owner, int value) { return StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetStyle(this, owner, value); }
};

}}


#endif

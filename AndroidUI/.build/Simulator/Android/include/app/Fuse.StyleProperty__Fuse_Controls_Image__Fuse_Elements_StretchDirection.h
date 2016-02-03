// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_IMAGE__FUSE_ELEMENTS_STRETCH_DIRECTION_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_IMAGE__FUSE_ELEMENTS_STRETCH_DIRECTION_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Image; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection;

struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof();

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner);
int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner, int value);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner, int value);

struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    int Get(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Get(this, owner); }
    int DefaultValue() { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::Image* owner) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::Image* owner, int value) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::Image* owner) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::Image* owner, int value) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetStyle(this, owner, value); }
};

}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_IMAGE__FUSE_ELEMENTS_STRETCH_MODE_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_IMAGE__FUSE_ELEMENTS_STRETCH_MODE_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Image; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode;

struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof();

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner);
int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner, int value);
void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner, int value);

struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    int Get(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Get(this, owner); }
    int DefaultValue() { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::Image* owner) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::Image* owner, int value) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::Image* owner) { StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::Image* owner, int value) { return StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetStyle(this, owner, value); }
};

}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_SHAPE__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_SHAPE__FUSE_DRAWING_BRUSH_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Shape; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush;

struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof();

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Get(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner);
::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__get_DefaultValue(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValue(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValueFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__IsEqual(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::app::Fuse::Drawing::Brush* oldValue);
StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Set(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Brush* value);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetLocalState(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Brush* value);

struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::app::Fuse::Drawing::Brush* Get(::app::Fuse::Controls::Shape* owner) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Get(this, owner); }
    ::app::Fuse::Drawing::Brush* DefaultValue() { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::Shape* owner) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValue(this, owner); }
    bool IsEqual(::app::Fuse::Drawing::Brush* value, ::app::Fuse::Drawing::Brush* oldValue) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::Shape* owner) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Shape* owner) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Shape* owner) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Brush* value) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::Shape* owner) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Brush* value) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetStyle(this, owner, value); }
};

}}


#endif

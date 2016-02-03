// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_PAGE_INDICATOR__UNO_U_X_I_FACTORY_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_PAGE_INDICATOR__UNO_U_X_I_FACTORY_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct PageIndicator; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory;

struct StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof();

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_1(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_2(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::uObject* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Get(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner);
::uObject* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__get_DefaultValue(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValue(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValueFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__IsEqual(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* value, ::uObject* oldValue);
StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_1(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_2(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__OnChanged(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Reset(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner);
void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyle(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner);
void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyleFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Set(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner, ::uObject* value);
void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetLocalState(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner);
bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetStyle(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner, ::uObject* value);

struct StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory : ::app::Fuse::StyleProperty
{
    ::uStrong< ::uObject*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::uObject* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::uObject* Get(::app::Fuse::Controls::PageIndicator* owner) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Get(this, owner); }
    ::uObject* DefaultValue() { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::PageIndicator* owner) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValue(this, owner); }
    bool IsEqual(::uObject* value, ::uObject* oldValue) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::PageIndicator* owner) { StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::PageIndicator* owner) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::PageIndicator* owner) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::PageIndicator* owner, ::uObject* value) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::PageIndicator* owner) { StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::PageIndicator* owner, ::uObject* value) { return StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetStyle(this, owner, value); }
};

}}


#endif

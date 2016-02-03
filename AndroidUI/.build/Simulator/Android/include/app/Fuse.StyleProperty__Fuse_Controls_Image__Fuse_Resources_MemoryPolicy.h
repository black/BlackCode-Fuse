// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_IMAGE__FUSE_RESOURCES_MEMORY_POLICY_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_IMAGE__FUSE_RESOURCES_MEMORY_POLICY_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Image; } } }
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy;

struct StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof();

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
::app::Fuse::Resources::MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Get(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner);
::app::Fuse::Resources::MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::uObject* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* value, ::app::Fuse::Resources::MemoryPolicy* oldValue);
StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_1(::uStatic* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_2(::uStatic* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner);
void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner);
void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Set(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner, ::app::Fuse::Resources::MemoryPolicy* value);
void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner);
bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner, ::app::Fuse::Resources::MemoryPolicy* value);

struct StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Resources::MemoryPolicy*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    ::app::Fuse::Resources::MemoryPolicy* Get(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Get(this, owner); }
    ::app::Fuse::Resources::MemoryPolicy* DefaultValue() { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__get_DefaultValue(this); }
    bool HasValue(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValue(this, owner); }
    bool IsEqual(::app::Fuse::Resources::MemoryPolicy* value, ::app::Fuse::Resources::MemoryPolicy* oldValue) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::Image* owner) { StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Image* owner) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::Image* owner, ::app::Fuse::Resources::MemoryPolicy* value) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Set(this, owner, value); }
    void SetLocalState(::app::Fuse::Controls::Image* owner) { StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetLocalState(this, owner); }
    bool SetStyle(::app::Fuse::Controls::Image* owner, ::app::Fuse::Resources::MemoryPolicy* value) { return StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetStyle(this, owner, value); }
};

}}


#endif

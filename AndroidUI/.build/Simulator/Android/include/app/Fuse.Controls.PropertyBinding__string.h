// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PROPERTY_BINDING__STRING_H__
#define __APP_FUSE_CONTROLS_PROPERTY_BINDING__STRING_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct PropertyBinding__string;

struct PropertyBinding__string__uType : ::app::Fuse::Behavior__uType
{
};

PropertyBinding__string__uType* PropertyBinding__string__typeof();

void PropertyBinding__string___ObjInit_1(PropertyBinding__string* __this, ::app::Uno::UX::Property__string* target, ::app::Uno::UX::Property__string* source);
::app::Uno::UX::Property__string* PropertyBinding__string__get_Source(PropertyBinding__string* __this);
::app::Uno::UX::Property__string* PropertyBinding__string__get_Target(PropertyBinding__string* __this);
PropertyBinding__string* PropertyBinding__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target, ::app::Uno::UX::Property__string* source);
void PropertyBinding__string__OnRooted(PropertyBinding__string* __this, ::app::Fuse::Node* n);
void PropertyBinding__string__OnUnrooted(PropertyBinding__string* __this, ::app::Fuse::Node* n);
void PropertyBinding__string__OnValueChanged(PropertyBinding__string* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__string* args);
void PropertyBinding__string__set_Source(PropertyBinding__string* __this, ::app::Uno::UX::Property__string* value);
void PropertyBinding__string__set_Target(PropertyBinding__string* __this, ::app::Uno::UX::Property__string* value);

struct PropertyBinding__string : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Uno::UX::Property__string*> _Target;
    ::uStrong< ::app::Uno::UX::Property__string*> _Source;

    void _ObjInit_1(::app::Uno::UX::Property__string* target, ::app::Uno::UX::Property__string* source) { PropertyBinding__string___ObjInit_1(this, target, source); }
    ::app::Uno::UX::Property__string* Source() { return PropertyBinding__string__get_Source(this); }
    ::app::Uno::UX::Property__string* Target() { return PropertyBinding__string__get_Target(this); }
    void OnValueChanged(::uObject* s, ::app::Uno::UX::ValueChangedArgs__string* args) { PropertyBinding__string__OnValueChanged(this, s, args); }
    void Source(::app::Uno::UX::Property__string* value) { PropertyBinding__string__set_Source(this, value); }
    void Target(::app::Uno::UX::Property__string* value) { PropertyBinding__string__set_Target(this, value); }
};

}}}


#endif

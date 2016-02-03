// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PROPERTY_BINDING__BOOL_H__
#define __APP_FUSE_CONTROLS_PROPERTY_BINDING__BOOL_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct PropertyBinding__bool;

struct PropertyBinding__bool__uType : ::app::Fuse::Behavior__uType
{
};

PropertyBinding__bool__uType* PropertyBinding__bool__typeof();

void PropertyBinding__bool___ObjInit_1(PropertyBinding__bool* __this, ::app::Uno::UX::Property__bool* target, ::app::Uno::UX::Property__bool* source);
::app::Uno::UX::Property__bool* PropertyBinding__bool__get_Source(PropertyBinding__bool* __this);
::app::Uno::UX::Property__bool* PropertyBinding__bool__get_Target(PropertyBinding__bool* __this);
PropertyBinding__bool* PropertyBinding__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target, ::app::Uno::UX::Property__bool* source);
void PropertyBinding__bool__OnRooted(PropertyBinding__bool* __this, ::app::Fuse::Node* n);
void PropertyBinding__bool__OnUnrooted(PropertyBinding__bool* __this, ::app::Fuse::Node* n);
void PropertyBinding__bool__OnValueChanged(PropertyBinding__bool* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__bool* args);
void PropertyBinding__bool__set_Source(PropertyBinding__bool* __this, ::app::Uno::UX::Property__bool* value);
void PropertyBinding__bool__set_Target(PropertyBinding__bool* __this, ::app::Uno::UX::Property__bool* value);

struct PropertyBinding__bool : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Uno::UX::Property__bool*> _Target;
    ::uStrong< ::app::Uno::UX::Property__bool*> _Source;

    void _ObjInit_1(::app::Uno::UX::Property__bool* target, ::app::Uno::UX::Property__bool* source) { PropertyBinding__bool___ObjInit_1(this, target, source); }
    ::app::Uno::UX::Property__bool* Source() { return PropertyBinding__bool__get_Source(this); }
    ::app::Uno::UX::Property__bool* Target() { return PropertyBinding__bool__get_Target(this); }
    void OnValueChanged(::uObject* s, ::app::Uno::UX::ValueChangedArgs__bool* args) { PropertyBinding__bool__OnValueChanged(this, s, args); }
    void Source(::app::Uno::UX::Property__bool* value) { PropertyBinding__bool__set_Source(this, value); }
    void Target(::app::Uno::UX::Property__bool* value) { PropertyBinding__bool__set_Target(this, value); }
};

}}}


#endif

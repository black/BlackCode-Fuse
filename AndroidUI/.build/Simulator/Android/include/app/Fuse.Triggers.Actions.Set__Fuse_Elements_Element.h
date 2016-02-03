// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Element; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Elements_Element;

struct Set__Fuse_Elements_Element__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Elements_Element__uType* Set__Fuse_Elements_Element__typeof();

void Set__Fuse_Elements_Element___ObjInit_1(Set__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target);
::uDelegate* Set__Fuse_Elements_Element__get_Expression(Set__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* Set__Fuse_Elements_Element__get_Increment(Set__Fuse_Elements_Element* __this);
::app::Uno::UX::Property__Fuse_Elements_Element* Set__Fuse_Elements_Element__get_Target(Set__Fuse_Elements_Element* __this);
bool Set__Fuse_Elements_Element__get_UpdateRestValue(Set__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* Set__Fuse_Elements_Element__get_Value(Set__Fuse_Elements_Element* __this);
Set__Fuse_Elements_Element* Set__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target);
void Set__Fuse_Elements_Element__Perform(Set__Fuse_Elements_Element* __this, ::app::Fuse::Node* target);
void Set__Fuse_Elements_Element__set_Expression(Set__Fuse_Elements_Element* __this, ::uDelegate* value);
void Set__Fuse_Elements_Element__set_Increment(Set__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value);
void Set__Fuse_Elements_Element__set_Target(Set__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* value);
void Set__Fuse_Elements_Element__set_UpdateRestValue(Set__Fuse_Elements_Element* __this, bool value);
void Set__Fuse_Elements_Element__set_Value(Set__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value);
void Set__Fuse_Elements_Element__Update(Set__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value);

struct Set__Fuse_Elements_Element : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Elements::Element*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_Element*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_Element*> _Target;
    ::uStrong< ::app::Fuse::Elements::Element*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_Element* target) { Set__Fuse_Elements_Element___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Elements_Element__get_Expression(this); }
    ::app::Fuse::Elements::Element* Increment() { return Set__Fuse_Elements_Element__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Elements_Element* Target() { return Set__Fuse_Elements_Element__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Elements_Element__get_UpdateRestValue(this); }
    ::app::Fuse::Elements::Element* Value() { return Set__Fuse_Elements_Element__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Elements_Element__set_Expression(this, value); }
    void Increment(::app::Fuse::Elements::Element* value) { Set__Fuse_Elements_Element__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Elements_Element* value) { Set__Fuse_Elements_Element__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Elements_Element__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Elements::Element* value) { Set__Fuse_Elements_Element__set_Value(this, value); }
    void Update(::app::Fuse::Elements::Element* value) { Set__Fuse_Elements_Element__Update(this, value); }
};

}}}}


#endif

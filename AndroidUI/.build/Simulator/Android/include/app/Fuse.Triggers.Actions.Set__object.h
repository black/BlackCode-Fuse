// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__OBJECT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__OBJECT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__object; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__object;

struct Set__object__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__object__uType* Set__object__typeof();

void Set__object___ObjInit_1(Set__object* __this, ::app::Uno::UX::Property__object* target);
::uDelegate* Set__object__get_Expression(Set__object* __this);
::uObject* Set__object__get_Increment(Set__object* __this);
::app::Uno::UX::Property__object* Set__object__get_Target(Set__object* __this);
bool Set__object__get_UpdateRestValue(Set__object* __this);
::uObject* Set__object__get_Value(Set__object* __this);
Set__object* Set__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target);
void Set__object__Perform(Set__object* __this, ::app::Fuse::Node* target);
void Set__object__set_Expression(Set__object* __this, ::uDelegate* value);
void Set__object__set_Increment(Set__object* __this, ::uObject* value);
void Set__object__set_Target(Set__object* __this, ::app::Uno::UX::Property__object* value);
void Set__object__set_UpdateRestValue(Set__object* __this, bool value);
void Set__object__set_Value(Set__object* __this, ::uObject* value);
void Set__object__Update(Set__object* __this, ::uObject* value);

struct Set__object : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::uObject*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__object*> _blender;
    ::uStrong< ::app::Uno::UX::Property__object*> _Target;
    ::uStrong< ::uObject*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__object* target) { Set__object___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__object__get_Expression(this); }
    ::uObject* Increment() { return Set__object__get_Increment(this); }
    ::app::Uno::UX::Property__object* Target() { return Set__object__get_Target(this); }
    bool UpdateRestValue() { return Set__object__get_UpdateRestValue(this); }
    ::uObject* Value() { return Set__object__get_Value(this); }
    void Expression(::uDelegate* value) { Set__object__set_Expression(this, value); }
    void Increment(::uObject* value) { Set__object__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__object* value) { Set__object__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__object__set_UpdateRestValue(this, value); }
    void Value(::uObject* value) { Set__object__set_Value(this, value); }
    void Update(::uObject* value) { Set__object__Update(this, value); }
};

}}}}


#endif

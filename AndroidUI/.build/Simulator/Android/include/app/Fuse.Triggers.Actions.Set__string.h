// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__STRING_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__STRING_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__string; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__string;

struct Set__string__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__string__uType* Set__string__typeof();

void Set__string___ObjInit_1(Set__string* __this, ::app::Uno::UX::Property__string* target);
::uDelegate* Set__string__get_Expression(Set__string* __this);
::uString* Set__string__get_Increment(Set__string* __this);
::app::Uno::UX::Property__string* Set__string__get_Target(Set__string* __this);
bool Set__string__get_UpdateRestValue(Set__string* __this);
::uString* Set__string__get_Value(Set__string* __this);
Set__string* Set__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target);
void Set__string__Perform(Set__string* __this, ::app::Fuse::Node* target);
void Set__string__set_Expression(Set__string* __this, ::uDelegate* value);
void Set__string__set_Increment(Set__string* __this, ::uString* value);
void Set__string__set_Target(Set__string* __this, ::app::Uno::UX::Property__string* value);
void Set__string__set_UpdateRestValue(Set__string* __this, bool value);
void Set__string__set_Value(Set__string* __this, ::uString* value);
void Set__string__Update(Set__string* __this, ::uString* value);

struct Set__string : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::uString*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__string*> _blender;
    ::uStrong< ::app::Uno::UX::Property__string*> _Target;
    ::uStrong< ::uString*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__string* target) { Set__string___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__string__get_Expression(this); }
    ::uString* Increment() { return Set__string__get_Increment(this); }
    ::app::Uno::UX::Property__string* Target() { return Set__string__get_Target(this); }
    bool UpdateRestValue() { return Set__string__get_UpdateRestValue(this); }
    ::uString* Value() { return Set__string__get_Value(this); }
    void Expression(::uDelegate* value) { Set__string__set_Expression(this, value); }
    void Increment(::uString* value) { Set__string__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__string* value) { Set__string__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__string__set_UpdateRestValue(this, value); }
    void Value(::uString* value) { Set__string__set_Value(this, value); }
    void Update(::uString* value) { Set__string__Update(this, value); }
};

}}}}


#endif

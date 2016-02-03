// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__UNO_EVENT_ARGS_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__UNO_EVENT_ARGS_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_EventArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Uno_EventArgs;

struct Set__Uno_EventArgs__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Uno_EventArgs__uType* Set__Uno_EventArgs__typeof();

void Set__Uno_EventArgs___ObjInit_1(Set__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* target);
::uDelegate* Set__Uno_EventArgs__get_Expression(Set__Uno_EventArgs* __this);
::app::Uno::EventArgs* Set__Uno_EventArgs__get_Increment(Set__Uno_EventArgs* __this);
::app::Uno::UX::Property__Uno_EventArgs* Set__Uno_EventArgs__get_Target(Set__Uno_EventArgs* __this);
bool Set__Uno_EventArgs__get_UpdateRestValue(Set__Uno_EventArgs* __this);
::app::Uno::EventArgs* Set__Uno_EventArgs__get_Value(Set__Uno_EventArgs* __this);
Set__Uno_EventArgs* Set__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* target);
void Set__Uno_EventArgs__Perform(Set__Uno_EventArgs* __this, ::app::Fuse::Node* target);
void Set__Uno_EventArgs__set_Expression(Set__Uno_EventArgs* __this, ::uDelegate* value);
void Set__Uno_EventArgs__set_Increment(Set__Uno_EventArgs* __this, ::app::Uno::EventArgs* value);
void Set__Uno_EventArgs__set_Target(Set__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* value);
void Set__Uno_EventArgs__set_UpdateRestValue(Set__Uno_EventArgs* __this, bool value);
void Set__Uno_EventArgs__set_Value(Set__Uno_EventArgs* __this, ::app::Uno::EventArgs* value);
void Set__Uno_EventArgs__Update(Set__Uno_EventArgs* __this, ::app::Uno::EventArgs* value);

struct Set__Uno_EventArgs : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Uno::EventArgs*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Uno_EventArgs*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Uno_EventArgs*> _Target;
    ::uStrong< ::app::Uno::EventArgs*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Uno_EventArgs* target) { Set__Uno_EventArgs___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Uno_EventArgs__get_Expression(this); }
    ::app::Uno::EventArgs* Increment() { return Set__Uno_EventArgs__get_Increment(this); }
    ::app::Uno::UX::Property__Uno_EventArgs* Target() { return Set__Uno_EventArgs__get_Target(this); }
    bool UpdateRestValue() { return Set__Uno_EventArgs__get_UpdateRestValue(this); }
    ::app::Uno::EventArgs* Value() { return Set__Uno_EventArgs__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Uno_EventArgs__set_Expression(this, value); }
    void Increment(::app::Uno::EventArgs* value) { Set__Uno_EventArgs__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Uno_EventArgs* value) { Set__Uno_EventArgs__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Uno_EventArgs__set_UpdateRestValue(this, value); }
    void Value(::app::Uno::EventArgs* value) { Set__Uno_EventArgs__set_Value(this, value); }
    void Update(::app::Uno::EventArgs* value) { Set__Uno_EventArgs__Update(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Triggers_State;

struct Set__Fuse_Triggers_State__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Triggers_State__uType* Set__Fuse_Triggers_State__typeof();

void Set__Fuse_Triggers_State___ObjInit_1(Set__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target);
::uDelegate* Set__Fuse_Triggers_State__get_Expression(Set__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* Set__Fuse_Triggers_State__get_Increment(Set__Fuse_Triggers_State* __this);
::app::Uno::UX::Property__Fuse_Triggers_State* Set__Fuse_Triggers_State__get_Target(Set__Fuse_Triggers_State* __this);
bool Set__Fuse_Triggers_State__get_UpdateRestValue(Set__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* Set__Fuse_Triggers_State__get_Value(Set__Fuse_Triggers_State* __this);
Set__Fuse_Triggers_State* Set__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target);
void Set__Fuse_Triggers_State__Perform(Set__Fuse_Triggers_State* __this, ::app::Fuse::Node* target);
void Set__Fuse_Triggers_State__set_Expression(Set__Fuse_Triggers_State* __this, ::uDelegate* value);
void Set__Fuse_Triggers_State__set_Increment(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);
void Set__Fuse_Triggers_State__set_Target(Set__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value);
void Set__Fuse_Triggers_State__set_UpdateRestValue(Set__Fuse_Triggers_State* __this, bool value);
void Set__Fuse_Triggers_State__set_Value(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);
void Set__Fuse_Triggers_State__Update(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);

struct Set__Fuse_Triggers_State : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Triggers::State*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Triggers_State*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Triggers_State*> _Target;
    ::uStrong< ::app::Fuse::Triggers::State*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Triggers_State* target) { Set__Fuse_Triggers_State___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Triggers_State__get_Expression(this); }
    ::app::Fuse::Triggers::State* Increment() { return Set__Fuse_Triggers_State__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Triggers_State* Target() { return Set__Fuse_Triggers_State__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Triggers_State__get_UpdateRestValue(this); }
    ::app::Fuse::Triggers::State* Value() { return Set__Fuse_Triggers_State__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Triggers_State__set_Expression(this, value); }
    void Increment(::app::Fuse::Triggers::State* value) { Set__Fuse_Triggers_State__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Triggers_State* value) { Set__Fuse_Triggers_State__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Triggers_State__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Triggers::State* value) { Set__Fuse_Triggers_State__set_Value(this, value); }
    void Update(::app::Fuse::Triggers::State* value) { Set__Fuse_Triggers_State__Update(this, value); }
};

}}}}


#endif

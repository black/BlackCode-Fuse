// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__SHORT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__SHORT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__short; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__short;

struct Set__short__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__short__uType* Set__short__typeof();

void Set__short___ObjInit_1(Set__short* __this, ::app::Uno::UX::Property__short* target);
::uDelegate* Set__short__get_Expression(Set__short* __this);
::uShort Set__short__get_Increment(Set__short* __this);
::app::Uno::UX::Property__short* Set__short__get_Target(Set__short* __this);
bool Set__short__get_UpdateRestValue(Set__short* __this);
::uShort Set__short__get_Value(Set__short* __this);
Set__short* Set__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* target);
void Set__short__Perform(Set__short* __this, ::app::Fuse::Node* target);
void Set__short__set_Expression(Set__short* __this, ::uDelegate* value);
void Set__short__set_Increment(Set__short* __this, ::uShort value);
void Set__short__set_Target(Set__short* __this, ::app::Uno::UX::Property__short* value);
void Set__short__set_UpdateRestValue(Set__short* __this, bool value);
void Set__short__set_Value(Set__short* __this, ::uShort value);
void Set__short__Update(Set__short* __this, ::uShort value);

struct Set__short : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uShort _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__short*> _blender;
    ::uStrong< ::app::Uno::UX::Property__short*> _Target;
    ::uShort _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__short* target) { Set__short___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__short__get_Expression(this); }
    ::uShort Increment() { return Set__short__get_Increment(this); }
    ::app::Uno::UX::Property__short* Target() { return Set__short__get_Target(this); }
    bool UpdateRestValue() { return Set__short__get_UpdateRestValue(this); }
    ::uShort Value() { return Set__short__get_Value(this); }
    void Expression(::uDelegate* value) { Set__short__set_Expression(this, value); }
    void Increment(::uShort value) { Set__short__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__short* value) { Set__short__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__short__set_UpdateRestValue(this, value); }
    void Value(::uShort value) { Set__short__set_Value(this, value); }
    void Update(::uShort value) { Set__short__Update(this, value); }
};

}}}}


#endif

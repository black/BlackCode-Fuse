// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__BOOL_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__BOOL_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__bool; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__bool;

struct Set__bool__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__bool__uType* Set__bool__typeof();

void Set__bool___ObjInit_1(Set__bool* __this, ::app::Uno::UX::Property__bool* target);
::uDelegate* Set__bool__get_Expression(Set__bool* __this);
bool Set__bool__get_Increment(Set__bool* __this);
::app::Uno::UX::Property__bool* Set__bool__get_Target(Set__bool* __this);
bool Set__bool__get_UpdateRestValue(Set__bool* __this);
bool Set__bool__get_Value(Set__bool* __this);
Set__bool* Set__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target);
void Set__bool__Perform(Set__bool* __this, ::app::Fuse::Node* target);
void Set__bool__set_Expression(Set__bool* __this, ::uDelegate* value);
void Set__bool__set_Increment(Set__bool* __this, bool value);
void Set__bool__set_Target(Set__bool* __this, ::app::Uno::UX::Property__bool* value);
void Set__bool__set_UpdateRestValue(Set__bool* __this, bool value);
void Set__bool__set_Value(Set__bool* __this, bool value);
void Set__bool__Update(Set__bool* __this, bool value);

struct Set__bool : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    bool _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__bool*> _blender;
    ::uStrong< ::app::Uno::UX::Property__bool*> _Target;
    bool _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__bool* target) { Set__bool___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__bool__get_Expression(this); }
    bool Increment() { return Set__bool__get_Increment(this); }
    ::app::Uno::UX::Property__bool* Target() { return Set__bool__get_Target(this); }
    bool UpdateRestValue() { return Set__bool__get_UpdateRestValue(this); }
    bool Value() { return Set__bool__get_Value(this); }
    void Expression(::uDelegate* value) { Set__bool__set_Expression(this, value); }
    void Increment(bool value) { Set__bool__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__bool* value) { Set__bool__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__bool__set_UpdateRestValue(this, value); }
    void Value(bool value) { Set__bool__set_Value(this, value); }
    void Update(bool value) { Set__bool__Update(this, value); }
};

}}}}


#endif

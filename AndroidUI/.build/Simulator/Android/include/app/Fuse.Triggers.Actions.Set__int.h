// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__INT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__INT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__int; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__int;

struct Set__int__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__int__uType* Set__int__typeof();

void Set__int___ObjInit_1(Set__int* __this, ::app::Uno::UX::Property__int* target);
::uDelegate* Set__int__get_Expression(Set__int* __this);
int Set__int__get_Increment(Set__int* __this);
::app::Uno::UX::Property__int* Set__int__get_Target(Set__int* __this);
bool Set__int__get_UpdateRestValue(Set__int* __this);
int Set__int__get_Value(Set__int* __this);
Set__int* Set__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* target);
void Set__int__Perform(Set__int* __this, ::app::Fuse::Node* target);
void Set__int__set_Expression(Set__int* __this, ::uDelegate* value);
void Set__int__set_Increment(Set__int* __this, int value);
void Set__int__set_Target(Set__int* __this, ::app::Uno::UX::Property__int* value);
void Set__int__set_UpdateRestValue(Set__int* __this, bool value);
void Set__int__set_Value(Set__int* __this, int value);
void Set__int__Update(Set__int* __this, int value);

struct Set__int : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    int _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__int*> _blender;
    ::uStrong< ::app::Uno::UX::Property__int*> _Target;
    int _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__int* target) { Set__int___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__int__get_Expression(this); }
    int Increment() { return Set__int__get_Increment(this); }
    ::app::Uno::UX::Property__int* Target() { return Set__int__get_Target(this); }
    bool UpdateRestValue() { return Set__int__get_UpdateRestValue(this); }
    int Value() { return Set__int__get_Value(this); }
    void Expression(::uDelegate* value) { Set__int__set_Expression(this, value); }
    void Increment(int value) { Set__int__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__int* value) { Set__int__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__int__set_UpdateRestValue(this, value); }
    void Value(int value) { Set__int__set_Value(this, value); }
    void Update(int value) { Set__int__Update(this, value); }
};

}}}}


#endif

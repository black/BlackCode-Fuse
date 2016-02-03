// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__INT3_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__INT3_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Int3.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__int3; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__int3; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__int3;

struct Set__int3__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__int3__uType* Set__int3__typeof();

void Set__int3___ObjInit_1(Set__int3* __this, ::app::Uno::UX::Property__int3* target);
::uDelegate* Set__int3__get_Expression(Set__int3* __this);
::app::Uno::Int3 Set__int3__get_Increment(Set__int3* __this);
::app::Uno::UX::Property__int3* Set__int3__get_Target(Set__int3* __this);
bool Set__int3__get_UpdateRestValue(Set__int3* __this);
::app::Uno::Int3 Set__int3__get_Value(Set__int3* __this);
Set__int3* Set__int3__New_1(::uStatic* __this, ::app::Uno::UX::Property__int3* target);
void Set__int3__Perform(Set__int3* __this, ::app::Fuse::Node* target);
void Set__int3__set_Expression(Set__int3* __this, ::uDelegate* value);
void Set__int3__set_Increment(Set__int3* __this, ::app::Uno::Int3 value);
void Set__int3__set_Target(Set__int3* __this, ::app::Uno::UX::Property__int3* value);
void Set__int3__set_UpdateRestValue(Set__int3* __this, bool value);
void Set__int3__set_Value(Set__int3* __this, ::app::Uno::Int3 value);
void Set__int3__Update(Set__int3* __this, ::app::Uno::Int3 value);

struct Set__int3 : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::app::Uno::Int3 _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__int3*> _blender;
    ::uStrong< ::app::Uno::UX::Property__int3*> _Target;
    ::app::Uno::Int3 _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__int3* target) { Set__int3___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__int3__get_Expression(this); }
    ::app::Uno::Int3 Increment() { return Set__int3__get_Increment(this); }
    ::app::Uno::UX::Property__int3* Target() { return Set__int3__get_Target(this); }
    bool UpdateRestValue() { return Set__int3__get_UpdateRestValue(this); }
    ::app::Uno::Int3 Value() { return Set__int3__get_Value(this); }
    void Expression(::uDelegate* value) { Set__int3__set_Expression(this, value); }
    void Increment(::app::Uno::Int3 value) { Set__int3__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__int3* value) { Set__int3__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__int3__set_UpdateRestValue(this, value); }
    void Value(::app::Uno::Int3 value) { Set__int3__set_Value(this, value); }
    void Update(::app::Uno::Int3 value) { Set__int3__Update(this, value); }
};

}}}}


#endif

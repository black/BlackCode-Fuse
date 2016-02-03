// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FLOAT3_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FLOAT3_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float3; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__float3; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__float3;

struct Set__float3__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__float3__uType* Set__float3__typeof();

void Set__float3___ObjInit_1(Set__float3* __this, ::app::Uno::UX::Property__float3* target);
::uDelegate* Set__float3__get_Expression(Set__float3* __this);
::app::Uno::Float3 Set__float3__get_Increment(Set__float3* __this);
::app::Uno::UX::Property__float3* Set__float3__get_Target(Set__float3* __this);
bool Set__float3__get_UpdateRestValue(Set__float3* __this);
::app::Uno::Float3 Set__float3__get_Value(Set__float3* __this);
Set__float3* Set__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* target);
void Set__float3__Perform(Set__float3* __this, ::app::Fuse::Node* target);
void Set__float3__set_Expression(Set__float3* __this, ::uDelegate* value);
void Set__float3__set_Increment(Set__float3* __this, ::app::Uno::Float3 value);
void Set__float3__set_Target(Set__float3* __this, ::app::Uno::UX::Property__float3* value);
void Set__float3__set_UpdateRestValue(Set__float3* __this, bool value);
void Set__float3__set_Value(Set__float3* __this, ::app::Uno::Float3 value);
void Set__float3__Update(Set__float3* __this, ::app::Uno::Float3 value);

struct Set__float3 : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::app::Uno::Float3 _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__float3*> _blender;
    ::uStrong< ::app::Uno::UX::Property__float3*> _Target;
    ::app::Uno::Float3 _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__float3* target) { Set__float3___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__float3__get_Expression(this); }
    ::app::Uno::Float3 Increment() { return Set__float3__get_Increment(this); }
    ::app::Uno::UX::Property__float3* Target() { return Set__float3__get_Target(this); }
    bool UpdateRestValue() { return Set__float3__get_UpdateRestValue(this); }
    ::app::Uno::Float3 Value() { return Set__float3__get_Value(this); }
    void Expression(::uDelegate* value) { Set__float3__set_Expression(this, value); }
    void Increment(::app::Uno::Float3 value) { Set__float3__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__float3* value) { Set__float3__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__float3__set_UpdateRestValue(this, value); }
    void Value(::app::Uno::Float3 value) { Set__float3__set_Value(this, value); }
    void Update(::app::Uno::Float3 value) { Set__float3__Update(this, value); }
};

}}}}


#endif

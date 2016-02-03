// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FLOAT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FLOAT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__float;

struct Set__float__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__float__uType* Set__float__typeof();

void Set__float___ObjInit_1(Set__float* __this, ::app::Uno::UX::Property__float* target);
::uDelegate* Set__float__get_Expression(Set__float* __this);
float Set__float__get_Increment(Set__float* __this);
::app::Uno::UX::Property__float* Set__float__get_Target(Set__float* __this);
bool Set__float__get_UpdateRestValue(Set__float* __this);
float Set__float__get_Value(Set__float* __this);
Set__float* Set__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target);
void Set__float__Perform(Set__float* __this, ::app::Fuse::Node* target);
void Set__float__set_Expression(Set__float* __this, ::uDelegate* value);
void Set__float__set_Increment(Set__float* __this, float value);
void Set__float__set_Target(Set__float* __this, ::app::Uno::UX::Property__float* value);
void Set__float__set_UpdateRestValue(Set__float* __this, bool value);
void Set__float__set_Value(Set__float* __this, float value);
void Set__float__Update(Set__float* __this, float value);

struct Set__float : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    float _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__float*> _blender;
    ::uStrong< ::app::Uno::UX::Property__float*> _Target;
    float _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__float* target) { Set__float___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__float__get_Expression(this); }
    float Increment() { return Set__float__get_Increment(this); }
    ::app::Uno::UX::Property__float* Target() { return Set__float__get_Target(this); }
    bool UpdateRestValue() { return Set__float__get_UpdateRestValue(this); }
    float Value() { return Set__float__get_Value(this); }
    void Expression(::uDelegate* value) { Set__float__set_Expression(this, value); }
    void Increment(float value) { Set__float__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__float* value) { Set__float__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__float__set_UpdateRestValue(this, value); }
    void Value(float value) { Set__float__set_Value(this, value); }
    void Update(float value) { Set__float__Update(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__DOUBLE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__DOUBLE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__double; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__double;

struct Set__double__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__double__uType* Set__double__typeof();

void Set__double___ObjInit_1(Set__double* __this, ::app::Uno::UX::Property__double* target);
::uDelegate* Set__double__get_Expression(Set__double* __this);
double Set__double__get_Increment(Set__double* __this);
::app::Uno::UX::Property__double* Set__double__get_Target(Set__double* __this);
bool Set__double__get_UpdateRestValue(Set__double* __this);
double Set__double__get_Value(Set__double* __this);
Set__double* Set__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* target);
void Set__double__Perform(Set__double* __this, ::app::Fuse::Node* target);
void Set__double__set_Expression(Set__double* __this, ::uDelegate* value);
void Set__double__set_Increment(Set__double* __this, double value);
void Set__double__set_Target(Set__double* __this, ::app::Uno::UX::Property__double* value);
void Set__double__set_UpdateRestValue(Set__double* __this, bool value);
void Set__double__set_Value(Set__double* __this, double value);
void Set__double__Update(Set__double* __this, double value);

struct Set__double : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    double _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__double*> _blender;
    ::uStrong< ::app::Uno::UX::Property__double*> _Target;
    double _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__double* target) { Set__double___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__double__get_Expression(this); }
    double Increment() { return Set__double__get_Increment(this); }
    ::app::Uno::UX::Property__double* Target() { return Set__double__get_Target(this); }
    bool UpdateRestValue() { return Set__double__get_UpdateRestValue(this); }
    double Value() { return Set__double__get_Value(this); }
    void Expression(::uDelegate* value) { Set__double__set_Expression(this, value); }
    void Increment(double value) { Set__double__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__double* value) { Set__double__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__double__set_UpdateRestValue(this, value); }
    void Value(double value) { Set__double__set_Value(this, value); }
    void Update(double value) { Set__double__Update(this, value); }
};

}}}}


#endif

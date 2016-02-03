// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__CHAR_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__CHAR_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__char; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__char;

struct Set__char__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__char__uType* Set__char__typeof();

void Set__char___ObjInit_1(Set__char* __this, ::app::Uno::UX::Property__char* target);
::uDelegate* Set__char__get_Expression(Set__char* __this);
::uChar Set__char__get_Increment(Set__char* __this);
::app::Uno::UX::Property__char* Set__char__get_Target(Set__char* __this);
bool Set__char__get_UpdateRestValue(Set__char* __this);
::uChar Set__char__get_Value(Set__char* __this);
Set__char* Set__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* target);
void Set__char__Perform(Set__char* __this, ::app::Fuse::Node* target);
void Set__char__set_Expression(Set__char* __this, ::uDelegate* value);
void Set__char__set_Increment(Set__char* __this, ::uChar value);
void Set__char__set_Target(Set__char* __this, ::app::Uno::UX::Property__char* value);
void Set__char__set_UpdateRestValue(Set__char* __this, bool value);
void Set__char__set_Value(Set__char* __this, ::uChar value);
void Set__char__Update(Set__char* __this, ::uChar value);

struct Set__char : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uChar _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__char*> _blender;
    ::uStrong< ::app::Uno::UX::Property__char*> _Target;
    ::uChar _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__char* target) { Set__char___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__char__get_Expression(this); }
    ::uChar Increment() { return Set__char__get_Increment(this); }
    ::app::Uno::UX::Property__char* Target() { return Set__char__get_Target(this); }
    bool UpdateRestValue() { return Set__char__get_UpdateRestValue(this); }
    ::uChar Value() { return Set__char__get_Value(this); }
    void Expression(::uDelegate* value) { Set__char__set_Expression(this, value); }
    void Increment(::uChar value) { Set__char__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__char* value) { Set__char__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__char__set_UpdateRestValue(this, value); }
    void Value(::uChar value) { Set__char__set_Value(this, value); }
    void Update(::uChar value) { Set__char__Update(this, value); }
};

}}}}


#endif

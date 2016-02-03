// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_NODE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_NODE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Node; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Node;

struct Set__Fuse_Node__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Node__uType* Set__Fuse_Node__typeof();

void Set__Fuse_Node___ObjInit_1(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* target);
::uDelegate* Set__Fuse_Node__get_Expression(Set__Fuse_Node* __this);
::app::Fuse::Node* Set__Fuse_Node__get_Increment(Set__Fuse_Node* __this);
::app::Uno::UX::Property__Fuse_Node* Set__Fuse_Node__get_Target(Set__Fuse_Node* __this);
bool Set__Fuse_Node__get_UpdateRestValue(Set__Fuse_Node* __this);
::app::Fuse::Node* Set__Fuse_Node__get_Value(Set__Fuse_Node* __this);
Set__Fuse_Node* Set__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* target);
void Set__Fuse_Node__Perform(Set__Fuse_Node* __this, ::app::Fuse::Node* target);
void Set__Fuse_Node__set_Expression(Set__Fuse_Node* __this, ::uDelegate* value);
void Set__Fuse_Node__set_Increment(Set__Fuse_Node* __this, ::app::Fuse::Node* value);
void Set__Fuse_Node__set_Target(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value);
void Set__Fuse_Node__set_UpdateRestValue(Set__Fuse_Node* __this, bool value);
void Set__Fuse_Node__set_Value(Set__Fuse_Node* __this, ::app::Fuse::Node* value);
void Set__Fuse_Node__Update(Set__Fuse_Node* __this, ::app::Fuse::Node* value);

struct Set__Fuse_Node : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Node*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Node*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Node*> _Target;
    ::uStrong< ::app::Fuse::Node*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Node* target) { Set__Fuse_Node___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Node__get_Expression(this); }
    ::app::Fuse::Node* Increment() { return Set__Fuse_Node__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Node* Target() { return Set__Fuse_Node__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Node__get_UpdateRestValue(this); }
    ::app::Fuse::Node* Value() { return Set__Fuse_Node__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Node__set_Expression(this, value); }
    void Increment(::app::Fuse::Node* value) { Set__Fuse_Node__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Node* value) { Set__Fuse_Node__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Node__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Node* value) { Set__Fuse_Node__set_Value(this, value); }
    void Update(::app::Fuse::Node* value) { Set__Fuse_Node__Update(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_LAYOUTS_FLOW_DIRECTION_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_LAYOUTS_FLOW_DIRECTION_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_FlowDirection; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Layouts_FlowDirection;

struct Set__Fuse_Layouts_FlowDirection__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Layouts_FlowDirection__uType* Set__Fuse_Layouts_FlowDirection__typeof();

void Set__Fuse_Layouts_FlowDirection___ObjInit_1(Set__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target);
::uDelegate* Set__Fuse_Layouts_FlowDirection__get_Expression(Set__Fuse_Layouts_FlowDirection* __this);
int Set__Fuse_Layouts_FlowDirection__get_Increment(Set__Fuse_Layouts_FlowDirection* __this);
::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* Set__Fuse_Layouts_FlowDirection__get_Target(Set__Fuse_Layouts_FlowDirection* __this);
bool Set__Fuse_Layouts_FlowDirection__get_UpdateRestValue(Set__Fuse_Layouts_FlowDirection* __this);
int Set__Fuse_Layouts_FlowDirection__get_Value(Set__Fuse_Layouts_FlowDirection* __this);
Set__Fuse_Layouts_FlowDirection* Set__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target);
void Set__Fuse_Layouts_FlowDirection__Perform(Set__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Node* target);
void Set__Fuse_Layouts_FlowDirection__set_Expression(Set__Fuse_Layouts_FlowDirection* __this, ::uDelegate* value);
void Set__Fuse_Layouts_FlowDirection__set_Increment(Set__Fuse_Layouts_FlowDirection* __this, int value);
void Set__Fuse_Layouts_FlowDirection__set_Target(Set__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* value);
void Set__Fuse_Layouts_FlowDirection__set_UpdateRestValue(Set__Fuse_Layouts_FlowDirection* __this, bool value);
void Set__Fuse_Layouts_FlowDirection__set_Value(Set__Fuse_Layouts_FlowDirection* __this, int value);
void Set__Fuse_Layouts_FlowDirection__Update(Set__Fuse_Layouts_FlowDirection* __this, int value);

struct Set__Fuse_Layouts_FlowDirection : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    int _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*> _Target;
    int _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target) { Set__Fuse_Layouts_FlowDirection___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Layouts_FlowDirection__get_Expression(this); }
    int Increment() { return Set__Fuse_Layouts_FlowDirection__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* Target() { return Set__Fuse_Layouts_FlowDirection__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Layouts_FlowDirection__get_UpdateRestValue(this); }
    int Value() { return Set__Fuse_Layouts_FlowDirection__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Layouts_FlowDirection__set_Expression(this, value); }
    void Increment(int value) { Set__Fuse_Layouts_FlowDirection__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* value) { Set__Fuse_Layouts_FlowDirection__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Layouts_FlowDirection__set_UpdateRestValue(this, value); }
    void Value(int value) { Set__Fuse_Layouts_FlowDirection__set_Value(this, value); }
    void Update(int value) { Set__Fuse_Layouts_FlowDirection__Update(this, value); }
};

}}}}


#endif

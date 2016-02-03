// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_ELEMENTS_STRETCH_SIZING_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_ELEMENTS_STRETCH_SIZING_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_StretchSizing; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchSizing; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Elements_StretchSizing;

struct Set__Fuse_Elements_StretchSizing__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Elements_StretchSizing__uType* Set__Fuse_Elements_StretchSizing__typeof();

void Set__Fuse_Elements_StretchSizing___ObjInit_1(Set__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target);
::uDelegate* Set__Fuse_Elements_StretchSizing__get_Expression(Set__Fuse_Elements_StretchSizing* __this);
int Set__Fuse_Elements_StretchSizing__get_Increment(Set__Fuse_Elements_StretchSizing* __this);
::app::Uno::UX::Property__Fuse_Elements_StretchSizing* Set__Fuse_Elements_StretchSizing__get_Target(Set__Fuse_Elements_StretchSizing* __this);
bool Set__Fuse_Elements_StretchSizing__get_UpdateRestValue(Set__Fuse_Elements_StretchSizing* __this);
int Set__Fuse_Elements_StretchSizing__get_Value(Set__Fuse_Elements_StretchSizing* __this);
Set__Fuse_Elements_StretchSizing* Set__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target);
void Set__Fuse_Elements_StretchSizing__Perform(Set__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* target);
void Set__Fuse_Elements_StretchSizing__set_Expression(Set__Fuse_Elements_StretchSizing* __this, ::uDelegate* value);
void Set__Fuse_Elements_StretchSizing__set_Increment(Set__Fuse_Elements_StretchSizing* __this, int value);
void Set__Fuse_Elements_StretchSizing__set_Target(Set__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* value);
void Set__Fuse_Elements_StretchSizing__set_UpdateRestValue(Set__Fuse_Elements_StretchSizing* __this, bool value);
void Set__Fuse_Elements_StretchSizing__set_Value(Set__Fuse_Elements_StretchSizing* __this, int value);
void Set__Fuse_Elements_StretchSizing__Update(Set__Fuse_Elements_StretchSizing* __this, int value);

struct Set__Fuse_Elements_StretchSizing : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    int _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*> _Target;
    int _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target) { Set__Fuse_Elements_StretchSizing___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Elements_StretchSizing__get_Expression(this); }
    int Increment() { return Set__Fuse_Elements_StretchSizing__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* Target() { return Set__Fuse_Elements_StretchSizing__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Elements_StretchSizing__get_UpdateRestValue(this); }
    int Value() { return Set__Fuse_Elements_StretchSizing__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Elements_StretchSizing__set_Expression(this, value); }
    void Increment(int value) { Set__Fuse_Elements_StretchSizing__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Elements_StretchSizing* value) { Set__Fuse_Elements_StretchSizing__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Elements_StretchSizing__set_UpdateRestValue(this, value); }
    void Value(int value) { Set__Fuse_Elements_StretchSizing__set_Value(this, value); }
    void Update(int value) { Set__Fuse_Elements_StretchSizing__Update(this, value); }
};

}}}}


#endif

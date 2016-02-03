// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_Platform_iOS_StatusBarStyle; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Uno_Platform_iOS_StatusBarStyle;

struct Set__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Uno_Platform_iOS_StatusBarStyle__uType* Set__Uno_Platform_iOS_StatusBarStyle__typeof();

void Set__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target);
::uDelegate* Set__Uno_Platform_iOS_StatusBarStyle__get_Expression(Set__Uno_Platform_iOS_StatusBarStyle* __this);
int Set__Uno_Platform_iOS_StatusBarStyle__get_Increment(Set__Uno_Platform_iOS_StatusBarStyle* __this);
::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* Set__Uno_Platform_iOS_StatusBarStyle__get_Target(Set__Uno_Platform_iOS_StatusBarStyle* __this);
bool Set__Uno_Platform_iOS_StatusBarStyle__get_UpdateRestValue(Set__Uno_Platform_iOS_StatusBarStyle* __this);
int Set__Uno_Platform_iOS_StatusBarStyle__get_Value(Set__Uno_Platform_iOS_StatusBarStyle* __this);
Set__Uno_Platform_iOS_StatusBarStyle* Set__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target);
void Set__Uno_Platform_iOS_StatusBarStyle__Perform(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Node* target);
void Set__Uno_Platform_iOS_StatusBarStyle__set_Expression(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* value);
void Set__Uno_Platform_iOS_StatusBarStyle__set_Increment(Set__Uno_Platform_iOS_StatusBarStyle* __this, int value);
void Set__Uno_Platform_iOS_StatusBarStyle__set_Target(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value);
void Set__Uno_Platform_iOS_StatusBarStyle__set_UpdateRestValue(Set__Uno_Platform_iOS_StatusBarStyle* __this, bool value);
void Set__Uno_Platform_iOS_StatusBarStyle__set_Value(Set__Uno_Platform_iOS_StatusBarStyle* __this, int value);
void Set__Uno_Platform_iOS_StatusBarStyle__Update(Set__Uno_Platform_iOS_StatusBarStyle* __this, int value);

struct Set__Uno_Platform_iOS_StatusBarStyle : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    int _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*> _Target;
    int _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target) { Set__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Uno_Platform_iOS_StatusBarStyle__get_Expression(this); }
    int Increment() { return Set__Uno_Platform_iOS_StatusBarStyle__get_Increment(this); }
    ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* Target() { return Set__Uno_Platform_iOS_StatusBarStyle__get_Target(this); }
    bool UpdateRestValue() { return Set__Uno_Platform_iOS_StatusBarStyle__get_UpdateRestValue(this); }
    int Value() { return Set__Uno_Platform_iOS_StatusBarStyle__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Uno_Platform_iOS_StatusBarStyle__set_Expression(this, value); }
    void Increment(int value) { Set__Uno_Platform_iOS_StatusBarStyle__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value) { Set__Uno_Platform_iOS_StatusBarStyle__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Uno_Platform_iOS_StatusBarStyle__set_UpdateRestValue(this, value); }
    void Value(int value) { Set__Uno_Platform_iOS_StatusBarStyle__set_Value(this, value); }
    void Update(int value) { Set__Uno_Platform_iOS_StatusBarStyle__Update(this, value); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_ELEMENTS_CACHING_MODE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_ELEMENTS_CACHING_MODE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_CachingMode; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_CachingMode; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Elements_CachingMode;

struct Set__Fuse_Elements_CachingMode__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Elements_CachingMode__uType* Set__Fuse_Elements_CachingMode__typeof();

void Set__Fuse_Elements_CachingMode___ObjInit_1(Set__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target);
::uDelegate* Set__Fuse_Elements_CachingMode__get_Expression(Set__Fuse_Elements_CachingMode* __this);
int Set__Fuse_Elements_CachingMode__get_Increment(Set__Fuse_Elements_CachingMode* __this);
::app::Uno::UX::Property__Fuse_Elements_CachingMode* Set__Fuse_Elements_CachingMode__get_Target(Set__Fuse_Elements_CachingMode* __this);
bool Set__Fuse_Elements_CachingMode__get_UpdateRestValue(Set__Fuse_Elements_CachingMode* __this);
int Set__Fuse_Elements_CachingMode__get_Value(Set__Fuse_Elements_CachingMode* __this);
Set__Fuse_Elements_CachingMode* Set__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target);
void Set__Fuse_Elements_CachingMode__Perform(Set__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* target);
void Set__Fuse_Elements_CachingMode__set_Expression(Set__Fuse_Elements_CachingMode* __this, ::uDelegate* value);
void Set__Fuse_Elements_CachingMode__set_Increment(Set__Fuse_Elements_CachingMode* __this, int value);
void Set__Fuse_Elements_CachingMode__set_Target(Set__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* value);
void Set__Fuse_Elements_CachingMode__set_UpdateRestValue(Set__Fuse_Elements_CachingMode* __this, bool value);
void Set__Fuse_Elements_CachingMode__set_Value(Set__Fuse_Elements_CachingMode* __this, int value);
void Set__Fuse_Elements_CachingMode__Update(Set__Fuse_Elements_CachingMode* __this, int value);

struct Set__Fuse_Elements_CachingMode : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    int _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*> _Target;
    int _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_CachingMode* target) { Set__Fuse_Elements_CachingMode___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Elements_CachingMode__get_Expression(this); }
    int Increment() { return Set__Fuse_Elements_CachingMode__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Elements_CachingMode* Target() { return Set__Fuse_Elements_CachingMode__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Elements_CachingMode__get_UpdateRestValue(this); }
    int Value() { return Set__Fuse_Elements_CachingMode__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Elements_CachingMode__set_Expression(this, value); }
    void Increment(int value) { Set__Fuse_Elements_CachingMode__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Elements_CachingMode* value) { Set__Fuse_Elements_CachingMode__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Elements_CachingMode__set_UpdateRestValue(this, value); }
    void Value(int value) { Set__Fuse_Elements_CachingMode__set_Value(this, value); }
    void Update(int value) { Set__Fuse_Elements_CachingMode__Update(this, value); }
};

}}}}


#endif

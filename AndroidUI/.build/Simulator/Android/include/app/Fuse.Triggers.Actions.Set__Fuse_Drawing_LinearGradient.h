// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_LinearGradient; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Drawing_LinearGradient;

struct Set__Fuse_Drawing_LinearGradient__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Drawing_LinearGradient__uType* Set__Fuse_Drawing_LinearGradient__typeof();

void Set__Fuse_Drawing_LinearGradient___ObjInit_1(Set__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target);
::uDelegate* Set__Fuse_Drawing_LinearGradient__get_Expression(Set__Fuse_Drawing_LinearGradient* __this);
::app::Fuse::Drawing::LinearGradient* Set__Fuse_Drawing_LinearGradient__get_Increment(Set__Fuse_Drawing_LinearGradient* __this);
::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* Set__Fuse_Drawing_LinearGradient__get_Target(Set__Fuse_Drawing_LinearGradient* __this);
bool Set__Fuse_Drawing_LinearGradient__get_UpdateRestValue(Set__Fuse_Drawing_LinearGradient* __this);
::app::Fuse::Drawing::LinearGradient* Set__Fuse_Drawing_LinearGradient__get_Value(Set__Fuse_Drawing_LinearGradient* __this);
Set__Fuse_Drawing_LinearGradient* Set__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target);
void Set__Fuse_Drawing_LinearGradient__Perform(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Node* target);
void Set__Fuse_Drawing_LinearGradient__set_Expression(Set__Fuse_Drawing_LinearGradient* __this, ::uDelegate* value);
void Set__Fuse_Drawing_LinearGradient__set_Increment(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value);
void Set__Fuse_Drawing_LinearGradient__set_Target(Set__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* value);
void Set__Fuse_Drawing_LinearGradient__set_UpdateRestValue(Set__Fuse_Drawing_LinearGradient* __this, bool value);
void Set__Fuse_Drawing_LinearGradient__set_Value(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value);
void Set__Fuse_Drawing_LinearGradient__Update(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value);

struct Set__Fuse_Drawing_LinearGradient : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Drawing::LinearGradient*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*> _Target;
    ::uStrong< ::app::Fuse::Drawing::LinearGradient*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target) { Set__Fuse_Drawing_LinearGradient___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Drawing_LinearGradient__get_Expression(this); }
    ::app::Fuse::Drawing::LinearGradient* Increment() { return Set__Fuse_Drawing_LinearGradient__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* Target() { return Set__Fuse_Drawing_LinearGradient__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Drawing_LinearGradient__get_UpdateRestValue(this); }
    ::app::Fuse::Drawing::LinearGradient* Value() { return Set__Fuse_Drawing_LinearGradient__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Drawing_LinearGradient__set_Expression(this, value); }
    void Increment(::app::Fuse::Drawing::LinearGradient* value) { Set__Fuse_Drawing_LinearGradient__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* value) { Set__Fuse_Drawing_LinearGradient__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Drawing_LinearGradient__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Drawing::LinearGradient* value) { Set__Fuse_Drawing_LinearGradient__set_Value(this, value); }
    void Update(::app::Fuse::Drawing::LinearGradient* value) { Set__Fuse_Drawing_LinearGradient__Update(this, value); }
};

}}}}


#endif

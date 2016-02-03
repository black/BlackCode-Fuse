// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_SolidColor; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Drawing_SolidColor;

struct Set__Fuse_Drawing_SolidColor__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Drawing_SolidColor__uType* Set__Fuse_Drawing_SolidColor__typeof();

void Set__Fuse_Drawing_SolidColor___ObjInit_1(Set__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target);
::uDelegate* Set__Fuse_Drawing_SolidColor__get_Expression(Set__Fuse_Drawing_SolidColor* __this);
::app::Fuse::Drawing::SolidColor* Set__Fuse_Drawing_SolidColor__get_Increment(Set__Fuse_Drawing_SolidColor* __this);
::app::Uno::UX::Property__Fuse_Drawing_SolidColor* Set__Fuse_Drawing_SolidColor__get_Target(Set__Fuse_Drawing_SolidColor* __this);
bool Set__Fuse_Drawing_SolidColor__get_UpdateRestValue(Set__Fuse_Drawing_SolidColor* __this);
::app::Fuse::Drawing::SolidColor* Set__Fuse_Drawing_SolidColor__get_Value(Set__Fuse_Drawing_SolidColor* __this);
Set__Fuse_Drawing_SolidColor* Set__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target);
void Set__Fuse_Drawing_SolidColor__Perform(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Node* target);
void Set__Fuse_Drawing_SolidColor__set_Expression(Set__Fuse_Drawing_SolidColor* __this, ::uDelegate* value);
void Set__Fuse_Drawing_SolidColor__set_Increment(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value);
void Set__Fuse_Drawing_SolidColor__set_Target(Set__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* value);
void Set__Fuse_Drawing_SolidColor__set_UpdateRestValue(Set__Fuse_Drawing_SolidColor* __this, bool value);
void Set__Fuse_Drawing_SolidColor__set_Value(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value);
void Set__Fuse_Drawing_SolidColor__Update(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value);

struct Set__Fuse_Drawing_SolidColor : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*> _Target;
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target) { Set__Fuse_Drawing_SolidColor___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Drawing_SolidColor__get_Expression(this); }
    ::app::Fuse::Drawing::SolidColor* Increment() { return Set__Fuse_Drawing_SolidColor__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* Target() { return Set__Fuse_Drawing_SolidColor__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Drawing_SolidColor__get_UpdateRestValue(this); }
    ::app::Fuse::Drawing::SolidColor* Value() { return Set__Fuse_Drawing_SolidColor__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Drawing_SolidColor__set_Expression(this, value); }
    void Increment(::app::Fuse::Drawing::SolidColor* value) { Set__Fuse_Drawing_SolidColor__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Drawing_SolidColor* value) { Set__Fuse_Drawing_SolidColor__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Drawing_SolidColor__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Drawing::SolidColor* value) { Set__Fuse_Drawing_SolidColor__set_Value(this, value); }
    void Update(::app::Fuse::Drawing::SolidColor* value) { Set__Fuse_Drawing_SolidColor__Update(this, value); }
};

}}}}


#endif

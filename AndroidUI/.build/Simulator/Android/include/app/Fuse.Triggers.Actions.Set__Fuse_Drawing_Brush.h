// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_BRUSH_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_Brush; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Drawing_Brush;

struct Set__Fuse_Drawing_Brush__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Drawing_Brush__uType* Set__Fuse_Drawing_Brush__typeof();

void Set__Fuse_Drawing_Brush___ObjInit_1(Set__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target);
::uDelegate* Set__Fuse_Drawing_Brush__get_Expression(Set__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* Set__Fuse_Drawing_Brush__get_Increment(Set__Fuse_Drawing_Brush* __this);
::app::Uno::UX::Property__Fuse_Drawing_Brush* Set__Fuse_Drawing_Brush__get_Target(Set__Fuse_Drawing_Brush* __this);
bool Set__Fuse_Drawing_Brush__get_UpdateRestValue(Set__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* Set__Fuse_Drawing_Brush__get_Value(Set__Fuse_Drawing_Brush* __this);
Set__Fuse_Drawing_Brush* Set__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target);
void Set__Fuse_Drawing_Brush__Perform(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* target);
void Set__Fuse_Drawing_Brush__set_Expression(Set__Fuse_Drawing_Brush* __this, ::uDelegate* value);
void Set__Fuse_Drawing_Brush__set_Increment(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value);
void Set__Fuse_Drawing_Brush__set_Target(Set__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* value);
void Set__Fuse_Drawing_Brush__set_UpdateRestValue(Set__Fuse_Drawing_Brush* __this, bool value);
void Set__Fuse_Drawing_Brush__set_Value(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value);
void Set__Fuse_Drawing_Brush__Update(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value);

struct Set__Fuse_Drawing_Brush : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Drawing::Brush*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_Brush*> _Target;
    ::uStrong< ::app::Fuse::Drawing::Brush*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_Brush* target) { Set__Fuse_Drawing_Brush___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Drawing_Brush__get_Expression(this); }
    ::app::Fuse::Drawing::Brush* Increment() { return Set__Fuse_Drawing_Brush__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Drawing_Brush* Target() { return Set__Fuse_Drawing_Brush__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Drawing_Brush__get_UpdateRestValue(this); }
    ::app::Fuse::Drawing::Brush* Value() { return Set__Fuse_Drawing_Brush__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Drawing_Brush__set_Expression(this, value); }
    void Increment(::app::Fuse::Drawing::Brush* value) { Set__Fuse_Drawing_Brush__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Drawing_Brush* value) { Set__Fuse_Drawing_Brush__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Drawing_Brush__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Drawing::Brush* value) { Set__Fuse_Drawing_Brush__set_Value(this, value); }
    void Update(::app::Fuse::Drawing::Brush* value) { Set__Fuse_Drawing_Brush__Update(this, value); }
};

}}}}


#endif

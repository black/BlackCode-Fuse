// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_StaticBrush; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Drawing_StaticBrush;

struct Set__Fuse_Drawing_StaticBrush__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Drawing_StaticBrush__uType* Set__Fuse_Drawing_StaticBrush__typeof();

void Set__Fuse_Drawing_StaticBrush___ObjInit_1(Set__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target);
::uDelegate* Set__Fuse_Drawing_StaticBrush__get_Expression(Set__Fuse_Drawing_StaticBrush* __this);
::app::Fuse::Drawing::StaticBrush* Set__Fuse_Drawing_StaticBrush__get_Increment(Set__Fuse_Drawing_StaticBrush* __this);
::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* Set__Fuse_Drawing_StaticBrush__get_Target(Set__Fuse_Drawing_StaticBrush* __this);
bool Set__Fuse_Drawing_StaticBrush__get_UpdateRestValue(Set__Fuse_Drawing_StaticBrush* __this);
::app::Fuse::Drawing::StaticBrush* Set__Fuse_Drawing_StaticBrush__get_Value(Set__Fuse_Drawing_StaticBrush* __this);
Set__Fuse_Drawing_StaticBrush* Set__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target);
void Set__Fuse_Drawing_StaticBrush__Perform(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Node* target);
void Set__Fuse_Drawing_StaticBrush__set_Expression(Set__Fuse_Drawing_StaticBrush* __this, ::uDelegate* value);
void Set__Fuse_Drawing_StaticBrush__set_Increment(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value);
void Set__Fuse_Drawing_StaticBrush__set_Target(Set__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value);
void Set__Fuse_Drawing_StaticBrush__set_UpdateRestValue(Set__Fuse_Drawing_StaticBrush* __this, bool value);
void Set__Fuse_Drawing_StaticBrush__set_Value(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value);
void Set__Fuse_Drawing_StaticBrush__Update(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value);

struct Set__Fuse_Drawing_StaticBrush : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Drawing::StaticBrush*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*> _Target;
    ::uStrong< ::app::Fuse::Drawing::StaticBrush*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target) { Set__Fuse_Drawing_StaticBrush___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Drawing_StaticBrush__get_Expression(this); }
    ::app::Fuse::Drawing::StaticBrush* Increment() { return Set__Fuse_Drawing_StaticBrush__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* Target() { return Set__Fuse_Drawing_StaticBrush__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Drawing_StaticBrush__get_UpdateRestValue(this); }
    ::app::Fuse::Drawing::StaticBrush* Value() { return Set__Fuse_Drawing_StaticBrush__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Drawing_StaticBrush__set_Expression(this, value); }
    void Increment(::app::Fuse::Drawing::StaticBrush* value) { Set__Fuse_Drawing_StaticBrush__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value) { Set__Fuse_Drawing_StaticBrush__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Drawing_StaticBrush__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Drawing::StaticBrush* value) { Set__Fuse_Drawing_StaticBrush__set_Value(this, value); }
    void Update(::app::Fuse::Drawing::StaticBrush* value) { Set__Fuse_Drawing_StaticBrush__Update(this, value); }
};

}}}}


#endif

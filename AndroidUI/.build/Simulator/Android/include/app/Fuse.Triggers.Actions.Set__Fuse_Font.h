// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_FONT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_FONT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Font; } } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Font; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Font;

struct Set__Fuse_Font__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Font__uType* Set__Fuse_Font__typeof();

void Set__Fuse_Font___ObjInit_1(Set__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* target);
::uDelegate* Set__Fuse_Font__get_Expression(Set__Fuse_Font* __this);
::app::Fuse::Font* Set__Fuse_Font__get_Increment(Set__Fuse_Font* __this);
::app::Uno::UX::Property__Fuse_Font* Set__Fuse_Font__get_Target(Set__Fuse_Font* __this);
bool Set__Fuse_Font__get_UpdateRestValue(Set__Fuse_Font* __this);
::app::Fuse::Font* Set__Fuse_Font__get_Value(Set__Fuse_Font* __this);
Set__Fuse_Font* Set__Fuse_Font__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Font* target);
void Set__Fuse_Font__Perform(Set__Fuse_Font* __this, ::app::Fuse::Node* target);
void Set__Fuse_Font__set_Expression(Set__Fuse_Font* __this, ::uDelegate* value);
void Set__Fuse_Font__set_Increment(Set__Fuse_Font* __this, ::app::Fuse::Font* value);
void Set__Fuse_Font__set_Target(Set__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* value);
void Set__Fuse_Font__set_UpdateRestValue(Set__Fuse_Font* __this, bool value);
void Set__Fuse_Font__set_Value(Set__Fuse_Font* __this, ::app::Fuse::Font* value);
void Set__Fuse_Font__Update(Set__Fuse_Font* __this, ::app::Fuse::Font* value);

struct Set__Fuse_Font : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Font*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Font*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Font*> _Target;
    ::uStrong< ::app::Fuse::Font*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Font* target) { Set__Fuse_Font___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Font__get_Expression(this); }
    ::app::Fuse::Font* Increment() { return Set__Fuse_Font__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Font* Target() { return Set__Fuse_Font__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Font__get_UpdateRestValue(this); }
    ::app::Fuse::Font* Value() { return Set__Fuse_Font__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Font__set_Expression(this, value); }
    void Increment(::app::Fuse::Font* value) { Set__Fuse_Font__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Font* value) { Set__Fuse_Font__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Font__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Font* value) { Set__Fuse_Font__set_Value(this, value); }
    void Update(::app::Fuse::Font* value) { Set__Fuse_Font__Update(this, value); }
};

}}}}


#endif

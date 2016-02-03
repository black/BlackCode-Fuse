// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Resources_ImageSource;

struct Set__Fuse_Resources_ImageSource__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Resources_ImageSource__uType* Set__Fuse_Resources_ImageSource__typeof();

void Set__Fuse_Resources_ImageSource___ObjInit_1(Set__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target);
::uDelegate* Set__Fuse_Resources_ImageSource__get_Expression(Set__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* Set__Fuse_Resources_ImageSource__get_Increment(Set__Fuse_Resources_ImageSource* __this);
::app::Uno::UX::Property__Fuse_Resources_ImageSource* Set__Fuse_Resources_ImageSource__get_Target(Set__Fuse_Resources_ImageSource* __this);
bool Set__Fuse_Resources_ImageSource__get_UpdateRestValue(Set__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* Set__Fuse_Resources_ImageSource__get_Value(Set__Fuse_Resources_ImageSource* __this);
Set__Fuse_Resources_ImageSource* Set__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target);
void Set__Fuse_Resources_ImageSource__Perform(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* target);
void Set__Fuse_Resources_ImageSource__set_Expression(Set__Fuse_Resources_ImageSource* __this, ::uDelegate* value);
void Set__Fuse_Resources_ImageSource__set_Increment(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value);
void Set__Fuse_Resources_ImageSource__set_Target(Set__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* value);
void Set__Fuse_Resources_ImageSource__set_UpdateRestValue(Set__Fuse_Resources_ImageSource* __this, bool value);
void Set__Fuse_Resources_ImageSource__set_Value(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value);
void Set__Fuse_Resources_ImageSource__Update(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value);

struct Set__Fuse_Resources_ImageSource : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*> _Target;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Resources_ImageSource* target) { Set__Fuse_Resources_ImageSource___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Fuse_Resources_ImageSource__get_Expression(this); }
    ::app::Fuse::Resources::ImageSource* Increment() { return Set__Fuse_Resources_ImageSource__get_Increment(this); }
    ::app::Uno::UX::Property__Fuse_Resources_ImageSource* Target() { return Set__Fuse_Resources_ImageSource__get_Target(this); }
    bool UpdateRestValue() { return Set__Fuse_Resources_ImageSource__get_UpdateRestValue(this); }
    ::app::Fuse::Resources::ImageSource* Value() { return Set__Fuse_Resources_ImageSource__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Fuse_Resources_ImageSource__set_Expression(this, value); }
    void Increment(::app::Fuse::Resources::ImageSource* value) { Set__Fuse_Resources_ImageSource__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Resources_ImageSource* value) { Set__Fuse_Resources_ImageSource__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Fuse_Resources_ImageSource__set_UpdateRestValue(this, value); }
    void Value(::app::Fuse::Resources::ImageSource* value) { Set__Fuse_Resources_ImageSource__set_Value(this, value); }
    void Update(::app::Fuse::Resources::ImageSource* value) { Set__Fuse_Resources_ImageSource__Update(this, value); }
};

}}}}


#endif

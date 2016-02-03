// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_UX_FileSource; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_UX_FileSource; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Uno_UX_FileSource;

struct Set__Uno_UX_FileSource__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Uno_UX_FileSource__uType* Set__Uno_UX_FileSource__typeof();

void Set__Uno_UX_FileSource___ObjInit_1(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target);
::uDelegate* Set__Uno_UX_FileSource__get_Expression(Set__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* Set__Uno_UX_FileSource__get_Increment(Set__Uno_UX_FileSource* __this);
::app::Uno::UX::Property__Uno_UX_FileSource* Set__Uno_UX_FileSource__get_Target(Set__Uno_UX_FileSource* __this);
bool Set__Uno_UX_FileSource__get_UpdateRestValue(Set__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* Set__Uno_UX_FileSource__get_Value(Set__Uno_UX_FileSource* __this);
Set__Uno_UX_FileSource* Set__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target);
void Set__Uno_UX_FileSource__Perform(Set__Uno_UX_FileSource* __this, ::app::Fuse::Node* target);
void Set__Uno_UX_FileSource__set_Expression(Set__Uno_UX_FileSource* __this, ::uDelegate* value);
void Set__Uno_UX_FileSource__set_Increment(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value);
void Set__Uno_UX_FileSource__set_Target(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* value);
void Set__Uno_UX_FileSource__set_UpdateRestValue(Set__Uno_UX_FileSource* __this, bool value);
void Set__Uno_UX_FileSource__set_Value(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value);
void Set__Uno_UX_FileSource__Update(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value);

struct Set__Uno_UX_FileSource : ::app::Fuse::Triggers::Actions::TriggerAction
{
    bool _updateRestValue;
    ::uStrong< ::app::Uno::UX::FileSource*> _increment;
    bool _hasIncrement;
    ::uStrong< ::app::Fuse::Internal::Blender__Uno_UX_FileSource*> _blender;
    ::uStrong< ::app::Uno::UX::Property__Uno_UX_FileSource*> _Target;
    ::uStrong< ::app::Uno::UX::FileSource*> _Value;
    ::uStrong< ::uDelegate*> _Expression;

    void _ObjInit_1(::app::Uno::UX::Property__Uno_UX_FileSource* target) { Set__Uno_UX_FileSource___ObjInit_1(this, target); }
    ::uDelegate* Expression() { return Set__Uno_UX_FileSource__get_Expression(this); }
    ::app::Uno::UX::FileSource* Increment() { return Set__Uno_UX_FileSource__get_Increment(this); }
    ::app::Uno::UX::Property__Uno_UX_FileSource* Target() { return Set__Uno_UX_FileSource__get_Target(this); }
    bool UpdateRestValue() { return Set__Uno_UX_FileSource__get_UpdateRestValue(this); }
    ::app::Uno::UX::FileSource* Value() { return Set__Uno_UX_FileSource__get_Value(this); }
    void Expression(::uDelegate* value) { Set__Uno_UX_FileSource__set_Expression(this, value); }
    void Increment(::app::Uno::UX::FileSource* value) { Set__Uno_UX_FileSource__set_Increment(this, value); }
    void Target(::app::Uno::UX::Property__Uno_UX_FileSource* value) { Set__Uno_UX_FileSource__set_Target(this, value); }
    void UpdateRestValue(bool value) { Set__Uno_UX_FileSource__set_UpdateRestValue(this, value); }
    void Value(::app::Uno::UX::FileSource* value) { Set__Uno_UX_FileSource__set_Value(this, value); }
    void Update(::app::Uno::UX::FileSource* value) { Set__Uno_UX_FileSource__Update(this, value); }
};

}}}}


#endif

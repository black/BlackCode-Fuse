// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_CALL_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_CALL_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Call;

struct Call__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Call__uType* Call__typeof();

void Call___ObjInit_1(Call* __this);
::uString* Call__get_Number(Call* __this);
Call* Call__New_1(::uStatic* __this);
void Call__Perform(Call* __this, ::app::Fuse::Node* target);
void Call__set_Number(Call* __this, ::uString* value);

struct Call : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uString*> _Number;

    void _ObjInit_1() { Call___ObjInit_1(this); }
    ::uString* Number() { return Call__get_Number(this); }
    void Number(::uString* value) { Call__set_Number(this, value); }
};

}}}}


#endif

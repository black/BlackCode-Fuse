// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_HIDE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_HIDE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Hide;

struct Hide__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Hide__uType* Hide__typeof();

void Hide___ObjInit_1(Hide* __this);
Hide* Hide__New_1(::uStatic* __this);
void Hide__Perform(Hide* __this, ::app::Fuse::Node* target);

struct Hide : ::app::Fuse::Triggers::Actions::TriggerAction
{
    void _ObjInit_1() { Hide___ObjInit_1(this); }
};

}}}}


#endif

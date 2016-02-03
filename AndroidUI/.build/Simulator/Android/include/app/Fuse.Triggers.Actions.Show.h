// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SHOW_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SHOW_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Show;

struct Show__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Show__uType* Show__typeof();

void Show___ObjInit_1(Show* __this);
Show* Show__New_1(::uStatic* __this);
void Show__Perform(Show* __this, ::app::Fuse::Node* target);

struct Show : ::app::Fuse::Triggers::Actions::TriggerAction
{
    void _ObjInit_1() { Show___ObjInit_1(this); }
};

}}}}


#endif

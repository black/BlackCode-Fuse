// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_PAUSE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_PAUSE_H__

#include <app/Fuse.Triggers.Actions.PlaybackAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Pause;

struct Pause__uType : ::app::Fuse::Triggers::Actions::PlaybackAction__uType
{
};

Pause__uType* Pause__typeof();

void Pause___ObjInit_2(Pause* __this);
Pause* Pause__New_1(::uStatic* __this);
void Pause__Perform(Pause* __this, ::app::Fuse::Node* target);

struct Pause : ::app::Fuse::Triggers::Actions::PlaybackAction
{
    void _ObjInit_2() { Pause___ObjInit_2(this); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_PLAYBACK_ACTION_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_PLAYBACK_ACTION_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct PlaybackAction;

struct PlaybackAction__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

PlaybackAction__uType* PlaybackAction__typeof();

void PlaybackAction___ObjInit_1(PlaybackAction* __this);
::uObject* PlaybackAction__get_Target(PlaybackAction* __this);
void PlaybackAction__set_Target(PlaybackAction* __this, ::uObject* value);

struct PlaybackAction : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _Target;

    void _ObjInit_1() { PlaybackAction___ObjInit_1(this); }
    ::uObject* Target() { return PlaybackAction__get_Target(this); }
    void Target(::uObject* value) { PlaybackAction__set_Target(this, value); }
};

}}}}


#endif

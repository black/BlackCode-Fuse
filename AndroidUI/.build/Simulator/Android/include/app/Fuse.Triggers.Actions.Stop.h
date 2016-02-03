// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_STOP_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_STOP_H__

#include <app/Fuse.Triggers.Actions.PlaybackAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Stop;

struct Stop__uType : ::app::Fuse::Triggers::Actions::PlaybackAction__uType
{
};

Stop__uType* Stop__typeof();

void Stop___ObjInit_2(Stop* __this);
Stop* Stop__New_1(::uStatic* __this);
void Stop__Perform(Stop* __this, ::app::Fuse::Node* target);

struct Stop : ::app::Fuse::Triggers::Actions::PlaybackAction
{
    void _ObjInit_2() { Stop___ObjInit_2(this); }
};

}}}}


#endif

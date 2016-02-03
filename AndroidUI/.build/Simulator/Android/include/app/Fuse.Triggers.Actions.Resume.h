// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_RESUME_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_RESUME_H__

#include <app/Fuse.Triggers.Actions.PlaybackAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Resume;

struct Resume__uType : ::app::Fuse::Triggers::Actions::PlaybackAction__uType
{
};

Resume__uType* Resume__typeof();

void Resume___ObjInit_2(Resume* __this);
Resume* Resume__New_1(::uStatic* __this);
void Resume__Perform(Resume* __this, ::app::Fuse::Node* target);

struct Resume : ::app::Fuse::Triggers::Actions::PlaybackAction
{
    void _ObjInit_2() { Resume___ObjInit_2(this); }
};

}}}}


#endif

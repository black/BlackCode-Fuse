// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__Fuse_Triggers_State;

struct DiscreteTrackChangeState__Fuse_Triggers_State__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__Fuse_Triggers_State__uType* DiscreteTrackChangeState__Fuse_Triggers_State__typeof();

void DiscreteTrackChangeState__Fuse_Triggers_State___ObjInit_2(DiscreteTrackChangeState__Fuse_Triggers_State* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Triggers_State__Disable(DiscreteTrackChangeState__Fuse_Triggers_State* __this);
DiscreteTrackChangeState__Fuse_Triggers_State* DiscreteTrackChangeState__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Triggers_State__SeekObjectValue(DiscreteTrackChangeState__Fuse_Triggers_State* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__Fuse_Triggers_State : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Triggers_State*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__Fuse_Triggers_State___ObjInit_2(this, animator, p); }
};

}}}


#endif

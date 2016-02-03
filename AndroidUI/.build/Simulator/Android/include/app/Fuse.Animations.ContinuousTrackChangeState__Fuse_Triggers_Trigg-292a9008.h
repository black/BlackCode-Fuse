// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_TRIGGERS_TRIGG_292A9008_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_TRIGGERS_TRIGG_292A9008_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode;

struct ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType* ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__typeof();

void ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__Disable(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this);
ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__SeekValue(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode___ObjInit_2(this, animator, p); }
};

}}}


#endif

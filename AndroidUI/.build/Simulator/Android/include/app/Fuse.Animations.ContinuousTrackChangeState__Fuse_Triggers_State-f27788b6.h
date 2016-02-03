// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_TRIGGERS_STATE_F27788B6_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_TRIGGERS_STATE_F27788B6_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Triggers_StateTransition; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Fuse_Triggers_StateTransition;

struct ContinuousTrackChangeState__Fuse_Triggers_StateTransition__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Fuse_Triggers_StateTransition__uType* ContinuousTrackChangeState__Fuse_Triggers_StateTransition__typeof();

void ContinuousTrackChangeState__Fuse_Triggers_StateTransition___ObjInit_2(ContinuousTrackChangeState__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Triggers_StateTransition__Disable(ContinuousTrackChangeState__Fuse_Triggers_StateTransition* __this);
ContinuousTrackChangeState__Fuse_Triggers_StateTransition* ContinuousTrackChangeState__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Triggers_StateTransition__SeekValue(ContinuousTrackChangeState__Fuse_Triggers_StateTransition* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Fuse_Triggers_StateTransition : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Fuse_Triggers_StateTransition___ObjInit_2(this, animator, p); }
};

}}}


#endif

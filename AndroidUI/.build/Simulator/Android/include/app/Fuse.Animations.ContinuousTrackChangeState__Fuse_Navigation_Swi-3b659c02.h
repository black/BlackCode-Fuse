// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_NAVIGATION_SWI_3B659C02_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_NAVIGATION_SWI_3B659C02_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection;

struct ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__uType* ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__typeof();

void ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__Disable(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* __this);
ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection___ObjInit_2(this, animator, p); }
};

}}}


#endif

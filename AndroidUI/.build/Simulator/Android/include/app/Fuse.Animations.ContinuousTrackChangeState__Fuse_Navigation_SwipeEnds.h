// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_NAVIGATION_SWIPE_ENDS_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_NAVIGATION_SWIPE_ENDS_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds;

struct ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__uType* ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__typeof();

void ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__Disable(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* __this);
ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds___ObjInit_2(this, animator, p); }
};

}}}


#endif

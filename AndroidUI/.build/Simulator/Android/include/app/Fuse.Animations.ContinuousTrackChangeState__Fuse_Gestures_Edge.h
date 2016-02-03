// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_GESTURES_EDGE_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FUSE_GESTURES_EDGE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Gestures_Edge; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Fuse_Gestures_Edge;

struct ContinuousTrackChangeState__Fuse_Gestures_Edge__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Fuse_Gestures_Edge__uType* ContinuousTrackChangeState__Fuse_Gestures_Edge__typeof();

void ContinuousTrackChangeState__Fuse_Gestures_Edge___ObjInit_2(ContinuousTrackChangeState__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Gestures_Edge__Disable(ContinuousTrackChangeState__Fuse_Gestures_Edge* __this);
ContinuousTrackChangeState__Fuse_Gestures_Edge* ContinuousTrackChangeState__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Fuse_Gestures_Edge__SeekValue(ContinuousTrackChangeState__Fuse_Gestures_Edge* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Fuse_Gestures_Edge : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Fuse_Gestures_Edge___ObjInit_2(this, animator, p); }
};

}}}


#endif

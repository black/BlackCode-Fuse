// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Uno_EventArgs; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Uno_EventArgs;

struct ContinuousTrackChangeState__Uno_EventArgs__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Uno_EventArgs__uType* ContinuousTrackChangeState__Uno_EventArgs__typeof();

void ContinuousTrackChangeState__Uno_EventArgs___ObjInit_2(ContinuousTrackChangeState__Uno_EventArgs* __this, ::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Uno_EventArgs__Disable(ContinuousTrackChangeState__Uno_EventArgs* __this);
ContinuousTrackChangeState__Uno_EventArgs* ContinuousTrackChangeState__Uno_EventArgs__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Uno_EventArgs__SeekValue(ContinuousTrackChangeState__Uno_EventArgs* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Uno_EventArgs : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Uno_EventArgs*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Uno_EventArgs___ObjInit_2(this, animator, p); }
};

}}}


#endif

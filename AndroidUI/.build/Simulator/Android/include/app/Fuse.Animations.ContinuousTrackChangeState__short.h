// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__SHORT_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__SHORT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__short; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__short;

struct ContinuousTrackChangeState__short__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__short__uType* ContinuousTrackChangeState__short__typeof();

void ContinuousTrackChangeState__short___ObjInit_2(ContinuousTrackChangeState__short* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__short__Disable(ContinuousTrackChangeState__short* __this);
ContinuousTrackChangeState__short* ContinuousTrackChangeState__short__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__short__SeekValue(ContinuousTrackChangeState__short* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__short : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__short*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__short___ObjInit_2(this, animator, p); }
};

}}}


#endif

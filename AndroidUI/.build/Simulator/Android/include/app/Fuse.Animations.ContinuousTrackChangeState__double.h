// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__DOUBLE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__double; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__double;

struct ContinuousTrackChangeState__double__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__double__uType* ContinuousTrackChangeState__double__typeof();

void ContinuousTrackChangeState__double___ObjInit_2(ContinuousTrackChangeState__double* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__double__Disable(ContinuousTrackChangeState__double* __this);
ContinuousTrackChangeState__double* ContinuousTrackChangeState__double__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__double__SeekValue(ContinuousTrackChangeState__double* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__double : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__double*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__double___ObjInit_2(this, animator, p); }
};

}}}


#endif

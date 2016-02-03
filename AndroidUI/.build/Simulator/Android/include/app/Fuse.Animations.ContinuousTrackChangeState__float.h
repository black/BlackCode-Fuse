// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FLOAT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__float;

struct ContinuousTrackChangeState__float__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__float__uType* ContinuousTrackChangeState__float__typeof();

void ContinuousTrackChangeState__float___ObjInit_2(ContinuousTrackChangeState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__float__Disable(ContinuousTrackChangeState__float* __this);
ContinuousTrackChangeState__float* ContinuousTrackChangeState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__float__SeekValue(ContinuousTrackChangeState__float* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__float : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__float___ObjInit_2(this, animator, p); }
};

}}}


#endif

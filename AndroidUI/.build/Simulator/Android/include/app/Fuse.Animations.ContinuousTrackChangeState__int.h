// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__INT_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__INT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__int; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__int;

struct ContinuousTrackChangeState__int__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__int__uType* ContinuousTrackChangeState__int__typeof();

void ContinuousTrackChangeState__int___ObjInit_2(ContinuousTrackChangeState__int* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__int__Disable(ContinuousTrackChangeState__int* __this);
ContinuousTrackChangeState__int* ContinuousTrackChangeState__int__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__int__SeekValue(ContinuousTrackChangeState__int* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__int : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__int*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__int___ObjInit_2(this, animator, p); }
};

}}}


#endif

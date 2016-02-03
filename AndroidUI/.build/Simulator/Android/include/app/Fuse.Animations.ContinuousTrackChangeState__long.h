// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__LONG_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__LONG_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__long; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__long;

struct ContinuousTrackChangeState__long__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__long__uType* ContinuousTrackChangeState__long__typeof();

void ContinuousTrackChangeState__long___ObjInit_2(ContinuousTrackChangeState__long* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__long__Disable(ContinuousTrackChangeState__long* __this);
ContinuousTrackChangeState__long* ContinuousTrackChangeState__long__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__long__SeekValue(ContinuousTrackChangeState__long* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__long : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__long*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__long___ObjInit_2(this, animator, p); }
};

}}}


#endif

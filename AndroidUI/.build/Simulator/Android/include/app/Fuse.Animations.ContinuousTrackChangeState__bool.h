// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__BOOL_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__bool;

struct ContinuousTrackChangeState__bool__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__bool__uType* ContinuousTrackChangeState__bool__typeof();

void ContinuousTrackChangeState__bool___ObjInit_2(ContinuousTrackChangeState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__bool__Disable(ContinuousTrackChangeState__bool* __this);
ContinuousTrackChangeState__bool* ContinuousTrackChangeState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__bool__SeekValue(ContinuousTrackChangeState__bool* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__bool : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__bool*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__bool___ObjInit_2(this, animator, p); }
};

}}}


#endif

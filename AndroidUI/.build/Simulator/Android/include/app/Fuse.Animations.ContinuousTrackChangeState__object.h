// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__OBJECT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__object; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__object;

struct ContinuousTrackChangeState__object__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__object__uType* ContinuousTrackChangeState__object__typeof();

void ContinuousTrackChangeState__object___ObjInit_2(ContinuousTrackChangeState__object* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__object__Disable(ContinuousTrackChangeState__object* __this);
ContinuousTrackChangeState__object* ContinuousTrackChangeState__object__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__object__SeekValue(ContinuousTrackChangeState__object* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__object : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__object*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__object___ObjInit_2(this, animator, p); }
};

}}}


#endif

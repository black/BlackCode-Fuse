// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__STRING_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__STRING_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__string; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__string;

struct ContinuousTrackChangeState__string__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__string__uType* ContinuousTrackChangeState__string__typeof();

void ContinuousTrackChangeState__string___ObjInit_2(ContinuousTrackChangeState__string* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__string__Disable(ContinuousTrackChangeState__string* __this);
ContinuousTrackChangeState__string* ContinuousTrackChangeState__string__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__string__SeekValue(ContinuousTrackChangeState__string* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__string : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__string*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__string___ObjInit_2(this, animator, p); }
};

}}}


#endif

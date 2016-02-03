// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__CHAR_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__CHAR_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__char; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__char;

struct ContinuousTrackChangeState__char__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__char__uType* ContinuousTrackChangeState__char__typeof();

void ContinuousTrackChangeState__char___ObjInit_2(ContinuousTrackChangeState__char* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__char__Disable(ContinuousTrackChangeState__char* __this);
ContinuousTrackChangeState__char* ContinuousTrackChangeState__char__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__char__SeekValue(ContinuousTrackChangeState__char* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__char : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__char*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__char___ObjInit_2(this, animator, p); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FLOAT2_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float2; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__float2;

struct ContinuousTrackChangeState__float2__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__float2__uType* ContinuousTrackChangeState__float2__typeof();

void ContinuousTrackChangeState__float2___ObjInit_2(ContinuousTrackChangeState__float2* __this, ::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__float2__Disable(ContinuousTrackChangeState__float2* __this);
ContinuousTrackChangeState__float2* ContinuousTrackChangeState__float2__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__float2__SeekValue(ContinuousTrackChangeState__float2* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__float2 : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float2*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__float2___ObjInit_2(this, animator, p); }
};

}}}


#endif

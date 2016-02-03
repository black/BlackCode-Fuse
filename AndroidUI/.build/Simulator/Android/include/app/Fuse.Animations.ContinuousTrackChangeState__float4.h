// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__FLOAT4_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__float4;

struct ContinuousTrackChangeState__float4__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__float4__uType* ContinuousTrackChangeState__float4__typeof();

void ContinuousTrackChangeState__float4___ObjInit_2(ContinuousTrackChangeState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__float4__Disable(ContinuousTrackChangeState__float4* __this);
ContinuousTrackChangeState__float4* ContinuousTrackChangeState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__float4__SeekValue(ContinuousTrackChangeState__float4* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__float4 : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float4*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__float4___ObjInit_2(this, animator, p); }
};

}}}


#endif

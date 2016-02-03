// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FLOAT3_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float3; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__float3;

struct DiscreteTrackChangeState__float3__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__float3__uType* DiscreteTrackChangeState__float3__typeof();

void DiscreteTrackChangeState__float3___ObjInit_2(DiscreteTrackChangeState__float3* __this, ::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__float3__Disable(DiscreteTrackChangeState__float3* __this);
DiscreteTrackChangeState__float3* DiscreteTrackChangeState__float3__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__float3__SeekObjectValue(DiscreteTrackChangeState__float3* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__float3 : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float3*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__float3___ObjInit_2(this, animator, p); }
};

}}}


#endif

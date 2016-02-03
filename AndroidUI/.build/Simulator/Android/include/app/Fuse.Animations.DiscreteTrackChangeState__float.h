// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FLOAT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__float;

struct DiscreteTrackChangeState__float__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__float__uType* DiscreteTrackChangeState__float__typeof();

void DiscreteTrackChangeState__float___ObjInit_2(DiscreteTrackChangeState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__float__Disable(DiscreteTrackChangeState__float* __this);
DiscreteTrackChangeState__float* DiscreteTrackChangeState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__float__SeekObjectValue(DiscreteTrackChangeState__float* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__float : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__float___ObjInit_2(this, animator, p); }
};

}}}


#endif

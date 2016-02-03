// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__DOUBLE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__double; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__double;

struct DiscreteTrackChangeState__double__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__double__uType* DiscreteTrackChangeState__double__typeof();

void DiscreteTrackChangeState__double___ObjInit_2(DiscreteTrackChangeState__double* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__double__Disable(DiscreteTrackChangeState__double* __this);
DiscreteTrackChangeState__double* DiscreteTrackChangeState__double__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__double__SeekObjectValue(DiscreteTrackChangeState__double* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__double : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__double*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__double___ObjInit_2(this, animator, p); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__SHORT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__SHORT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__short; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__short;

struct DiscreteTrackChangeState__short__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__short__uType* DiscreteTrackChangeState__short__typeof();

void DiscreteTrackChangeState__short___ObjInit_2(DiscreteTrackChangeState__short* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__short__Disable(DiscreteTrackChangeState__short* __this);
DiscreteTrackChangeState__short* DiscreteTrackChangeState__short__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__short__SeekObjectValue(DiscreteTrackChangeState__short* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__short : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__short*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__short___ObjInit_2(this, animator, p); }
};

}}}


#endif

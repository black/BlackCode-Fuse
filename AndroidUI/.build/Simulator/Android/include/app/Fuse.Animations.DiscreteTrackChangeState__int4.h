// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__INT4_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__INT4_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__int4; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__int4;

struct DiscreteTrackChangeState__int4__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__int4__uType* DiscreteTrackChangeState__int4__typeof();

void DiscreteTrackChangeState__int4___ObjInit_2(DiscreteTrackChangeState__int4* __this, ::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__int4__Disable(DiscreteTrackChangeState__int4* __this);
DiscreteTrackChangeState__int4* DiscreteTrackChangeState__int4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__int4__SeekObjectValue(DiscreteTrackChangeState__int4* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__int4 : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__int4*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__int4___ObjInit_2(this, animator, p); }
};

}}}


#endif

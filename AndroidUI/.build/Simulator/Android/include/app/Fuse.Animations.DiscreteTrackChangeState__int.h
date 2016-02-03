// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__INT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__INT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__int; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__int;

struct DiscreteTrackChangeState__int__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__int__uType* DiscreteTrackChangeState__int__typeof();

void DiscreteTrackChangeState__int___ObjInit_2(DiscreteTrackChangeState__int* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__int__Disable(DiscreteTrackChangeState__int* __this);
DiscreteTrackChangeState__int* DiscreteTrackChangeState__int__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__int__SeekObjectValue(DiscreteTrackChangeState__int* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__int : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__int*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__int___ObjInit_2(this, animator, p); }
};

}}}


#endif

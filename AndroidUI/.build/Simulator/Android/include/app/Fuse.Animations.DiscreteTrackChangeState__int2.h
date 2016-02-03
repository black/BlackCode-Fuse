// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__INT2_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__INT2_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__int2; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__int2;

struct DiscreteTrackChangeState__int2__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__int2__uType* DiscreteTrackChangeState__int2__typeof();

void DiscreteTrackChangeState__int2___ObjInit_2(DiscreteTrackChangeState__int2* __this, ::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__int2__Disable(DiscreteTrackChangeState__int2* __this);
DiscreteTrackChangeState__int2* DiscreteTrackChangeState__int2__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__int2__SeekObjectValue(DiscreteTrackChangeState__int2* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__int2 : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__int2*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__int2___ObjInit_2(this, animator, p); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__LONG_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__LONG_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__long; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__long;

struct DiscreteTrackChangeState__long__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__long__uType* DiscreteTrackChangeState__long__typeof();

void DiscreteTrackChangeState__long___ObjInit_2(DiscreteTrackChangeState__long* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__long__Disable(DiscreteTrackChangeState__long* __this);
DiscreteTrackChangeState__long* DiscreteTrackChangeState__long__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__long__SeekObjectValue(DiscreteTrackChangeState__long* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__long : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__long*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__long___ObjInit_2(this, animator, p); }
};

}}}


#endif

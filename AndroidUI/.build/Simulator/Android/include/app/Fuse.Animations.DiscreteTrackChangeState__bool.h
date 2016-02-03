// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__BOOL_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__bool;

struct DiscreteTrackChangeState__bool__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__bool__uType* DiscreteTrackChangeState__bool__typeof();

void DiscreteTrackChangeState__bool___ObjInit_2(DiscreteTrackChangeState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__bool__Disable(DiscreteTrackChangeState__bool* __this);
DiscreteTrackChangeState__bool* DiscreteTrackChangeState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__bool__SeekObjectValue(DiscreteTrackChangeState__bool* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__bool : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__bool*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__bool___ObjInit_2(this, animator, p); }
};

}}}


#endif

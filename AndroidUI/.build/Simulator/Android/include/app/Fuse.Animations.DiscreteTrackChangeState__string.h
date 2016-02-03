// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__STRING_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__STRING_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__string; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__string;

struct DiscreteTrackChangeState__string__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__string__uType* DiscreteTrackChangeState__string__typeof();

void DiscreteTrackChangeState__string___ObjInit_2(DiscreteTrackChangeState__string* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__string__Disable(DiscreteTrackChangeState__string* __this);
DiscreteTrackChangeState__string* DiscreteTrackChangeState__string__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__string__SeekObjectValue(DiscreteTrackChangeState__string* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__string : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__string*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__string___ObjInit_2(this, animator, p); }
};

}}}


#endif

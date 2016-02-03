// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__OBJECT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__object; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__object;

struct DiscreteTrackChangeState__object__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__object__uType* DiscreteTrackChangeState__object__typeof();

void DiscreteTrackChangeState__object___ObjInit_2(DiscreteTrackChangeState__object* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__object__Disable(DiscreteTrackChangeState__object* __this);
DiscreteTrackChangeState__object* DiscreteTrackChangeState__object__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__object__SeekObjectValue(DiscreteTrackChangeState__object* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__object : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__object*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__object___ObjInit_2(this, animator, p); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__CHAR_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__CHAR_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__char; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__char;

struct DiscreteTrackChangeState__char__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__char__uType* DiscreteTrackChangeState__char__typeof();

void DiscreteTrackChangeState__char___ObjInit_2(DiscreteTrackChangeState__char* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__char__Disable(DiscreteTrackChangeState__char* __this);
DiscreteTrackChangeState__char* DiscreteTrackChangeState__char__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__char__SeekObjectValue(DiscreteTrackChangeState__char* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__char : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__char*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__char___ObjInit_2(this, animator, p); }
};

}}}


#endif

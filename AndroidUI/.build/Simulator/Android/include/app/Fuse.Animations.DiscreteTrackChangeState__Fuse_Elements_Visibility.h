// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_ELEMENTS_VISIBILITY_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_ELEMENTS_VISIBILITY_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__Fuse_Elements_Visibility;

struct DiscreteTrackChangeState__Fuse_Elements_Visibility__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__Fuse_Elements_Visibility__uType* DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof();

void DiscreteTrackChangeState__Fuse_Elements_Visibility___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Elements_Visibility__Disable(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this);
DiscreteTrackChangeState__Fuse_Elements_Visibility* DiscreteTrackChangeState__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Elements_Visibility__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__Fuse_Elements_Visibility : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__Fuse_Elements_Visibility___ObjInit_2(this, animator, p); }
};

}}}


#endif

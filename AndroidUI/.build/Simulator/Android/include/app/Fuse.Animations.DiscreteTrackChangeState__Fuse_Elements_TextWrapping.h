// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_ELEMENTS_TEXT_WRAPPING_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_ELEMENTS_TEXT_WRAPPING_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Elements_TextWrapping; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__Fuse_Elements_TextWrapping;

struct DiscreteTrackChangeState__Fuse_Elements_TextWrapping__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__Fuse_Elements_TextWrapping__uType* DiscreteTrackChangeState__Fuse_Elements_TextWrapping__typeof();

void DiscreteTrackChangeState__Fuse_Elements_TextWrapping___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Elements_TextWrapping__Disable(DiscreteTrackChangeState__Fuse_Elements_TextWrapping* __this);
DiscreteTrackChangeState__Fuse_Elements_TextWrapping* DiscreteTrackChangeState__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Elements_TextWrapping__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_TextWrapping* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__Fuse_Elements_TextWrapping : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__Fuse_Elements_TextWrapping___ObjInit_2(this, animator, p); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__Fuse_Elements_TextAlignment;

struct DiscreteTrackChangeState__Fuse_Elements_TextAlignment__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__Fuse_Elements_TextAlignment__uType* DiscreteTrackChangeState__Fuse_Elements_TextAlignment__typeof();

void DiscreteTrackChangeState__Fuse_Elements_TextAlignment___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Elements_TextAlignment__Disable(DiscreteTrackChangeState__Fuse_Elements_TextAlignment* __this);
DiscreteTrackChangeState__Fuse_Elements_TextAlignment* DiscreteTrackChangeState__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Elements_TextAlignment__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_TextAlignment* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__Fuse_Elements_TextAlignment : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__Fuse_Elements_TextAlignment___ObjInit_2(this, animator, p); }
};

}}}


#endif

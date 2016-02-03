// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_NAVIGATION_NAVIGATION_EDGE_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__FUSE_NAVIGATION_NAVIGATION_EDGE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Navigation_NavigationEdge; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge;

struct DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__uType* DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__typeof();

void DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__Disable(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* __this);
DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge___ObjInit_2(this, animator, p); }
};

}}}


#endif

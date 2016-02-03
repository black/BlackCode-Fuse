// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_SINGLE_TRACK_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_SINGLE_TRACK_H__

#include <app/Fuse.Animations.DiscreteTrackProvider.h>
#include <app/Fuse.Animations.ITrackProvider.h>
#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator; } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimatorState; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteSingleTrack;

extern ::uStaticStrong< DiscreteSingleTrack*> DiscreteSingleTrack__Singleton;

struct DiscreteSingleTrack__uType : ::uClassType
{
    ::app::Fuse::Animations::DiscreteTrackProvider __interface_0;
    ::app::Fuse::Animations::ITrackProvider __interface_1;
    ::app::Fuse::Animations::TrackProvider __interface_2;
};

DiscreteSingleTrack__uType* DiscreteSingleTrack__typeof();

void DiscreteSingleTrack___ObjInit(DiscreteSingleTrack* __this);
void DiscreteSingleTrack___TypeInit(::uStatic* __this);
bool DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::uObject** value, double* strength);
bool DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::uObject** value, double* strength);
int DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta);
double DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant);
DiscreteSingleTrack* DiscreteSingleTrack__New_1(::uStatic* __this);

struct DiscreteSingleTrack : ::uObject
{
    void _ObjInit() { DiscreteSingleTrack___ObjInit(this); }
};

}}}


#endif

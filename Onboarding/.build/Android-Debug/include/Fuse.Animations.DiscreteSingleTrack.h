// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteSingleTrack :829
// {
struct DiscreteSingleTrack_type : uType
{
    ::g::Fuse::Animations::DiscreteTrackProvider interface0;
    ::g::Fuse::Animations::TrackProvider interface1;
};

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this);
void DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, bool* __retval);
void DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, bool* __retval);
void DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval);
void DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval);
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval);

struct DiscreteSingleTrack : uObject
{
    static uSStrong<DiscreteSingleTrack*> Singleton_;
    static uSStrong<DiscreteSingleTrack*>& Singleton() { return DiscreteSingleTrack_typeof()->Init(), Singleton_; }

    void ctor_();
    static DiscreteSingleTrack* New1();
};
// }

}}} // ::g::Fuse::Animations

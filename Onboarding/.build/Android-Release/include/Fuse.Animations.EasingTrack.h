// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct EasingTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class EasingTrack :1233
// {
struct EasingTrack_type : uType
{
    ::g::Fuse::Animations::ContinuousTrackProvider interface0;
    ::g::Fuse::Animations::TrackProvider interface1;
};

EasingTrack_type* EasingTrack_typeof();
void EasingTrack__ctor__fn(EasingTrack* __this);
void EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, bool* __retval);
void EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, bool* __retval);
void EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval);
void EasingTrack__Fuse_Animations_TrackProvider_GetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval);
void EasingTrack__New1_fn(EasingTrack** __retval);

struct EasingTrack : uObject
{
    static uSStrong<EasingTrack*> Singleton_;
    static uSStrong<EasingTrack*>& Singleton() { return EasingTrack_typeof()->Init(), Singleton_; }

    void ctor_();
    static EasingTrack* New1();
};
// }

}}} // ::g::Fuse::Animations

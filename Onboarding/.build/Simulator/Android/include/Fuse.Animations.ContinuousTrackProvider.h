// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface ContinuousTrackProvider :2755
// {
uInterfaceType* ContinuousTrackProvider_typeof();

struct ContinuousTrackProvider
{
    void(*fp_GetSeekProgress)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, bool*);
    void(*fp_GetSeekTime)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, bool*);
    static bool GetSeekProgress(const uInterface& __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::g::Uno::Float4* value, double* strength) { bool __retval; return __this.VTable<ContinuousTrackProvider>()->fp_GetSeekProgress(__this, tas, &progress, &interval, &dir, value, strength, &__retval), __retval; }
    static bool GetSeekTime(const uInterface& __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::g::Uno::Float4* value, double* strength) { bool __retval; return __this.VTable<ContinuousTrackProvider>()->fp_GetSeekTime(__this, tas, &elapsed, &interval, &dir, value, strength, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations

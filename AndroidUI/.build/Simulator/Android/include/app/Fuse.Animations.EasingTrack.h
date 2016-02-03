// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_EASING_TRACK_H__
#define __APP_FUSE_ANIMATIONS_EASING_TRACK_H__

#include <app/Fuse.Animations.ContinuousTrackProvider.h>
#include <app/Fuse.Animations.ITrackProvider.h>
#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator; } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimatorState; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct EasingTrack;

extern ::uStaticStrong< EasingTrack*> EasingTrack__Singleton;

struct EasingTrack__uType : ::uClassType
{
    ::app::Fuse::Animations::ContinuousTrackProvider __interface_0;
    ::app::Fuse::Animations::ITrackProvider __interface_1;
    ::app::Fuse::Animations::TrackProvider __interface_2;
};

EasingTrack__uType* EasingTrack__typeof();

void EasingTrack___ObjInit(EasingTrack* __this);
void EasingTrack___TypeInit(::uStatic* __this);
bool EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::app::Uno::Float4* value, double* strength);
bool EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::app::Uno::Float4* value, double* strength);
int EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta);
double EasingTrack__Fuse_Animations_TrackProvider_GetDuration(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant);
EasingTrack* EasingTrack__New_1(::uStatic* __this);

struct EasingTrack : ::uObject
{
    void _ObjInit() { EasingTrack___ObjInit(this); }
};

}}}


#endif

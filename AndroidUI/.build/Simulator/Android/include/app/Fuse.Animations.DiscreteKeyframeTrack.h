// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_KEYFRAME_TRACK_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_KEYFRAME_TRACK_H__

#include <app/Fuse.Animations.DiscreteTrackProvider.h>
#include <app/Fuse.Animations.ITrackProvider.h>
#include <app/Fuse.Animations.KeyframeTrack.h>
#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator; } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimatorState; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Keyframe; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteKeyframeTrack;

struct DiscreteKeyframeTrack__uType : ::uClassType
{
    ::app::Fuse::Animations::DiscreteTrackProvider __interface_0;
    ::app::Fuse::Animations::ITrackProvider __interface_1;
    ::app::Fuse::Animations::KeyframeTrack __interface_2;
    ::app::Fuse::Animations::TrackProvider __interface_3;
};

DiscreteKeyframeTrack__uType* DiscreteKeyframeTrack__typeof();

void DiscreteKeyframeTrack___ObjInit(DiscreteKeyframeTrack* __this);
bool DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::uObject** value, double* strength);
bool DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::uObject** value, double* strength);
int DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta);
double DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetDuration(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant);
int DiscreteKeyframeTrack__get_Interpolation(DiscreteKeyframeTrack* __this);
::uObject* DiscreteKeyframeTrack__get_Keyframes(DiscreteKeyframeTrack* __this);
void DiscreteKeyframeTrack__Init(DiscreteKeyframeTrack* __this);
DiscreteKeyframeTrack* DiscreteKeyframeTrack__New_1(::uStatic* __this);
void DiscreteKeyframeTrack__set_Interpolation(DiscreteKeyframeTrack* __this, int value);

struct DiscreteKeyframeTrack : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*> _frames;
    double _duration;
    bool _init;
    int _Interpolation;

    void _ObjInit() { DiscreteKeyframeTrack___ObjInit(this); }
    int Interpolation() { return DiscreteKeyframeTrack__get_Interpolation(this); }
    ::uObject* Keyframes() { return DiscreteKeyframeTrack__get_Keyframes(this); }
    void Init() { DiscreteKeyframeTrack__Init(this); }
    void Interpolation(int value) { DiscreteKeyframeTrack__set_Interpolation(this, value); }
};

}}}


#endif

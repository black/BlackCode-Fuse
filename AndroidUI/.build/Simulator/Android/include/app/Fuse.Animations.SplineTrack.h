// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SPLINE_TRACK_H__
#define __APP_FUSE_ANIMATIONS_SPLINE_TRACK_H__

#include <app/Fuse.Animations.ContinuousTrackProvider.h>
#include <app/Fuse.Animations.ITrackProvider.h>
#include <app/Fuse.Animations.KeyframeTrack.h>
#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator; } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimatorState; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Keyframe; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct SplineTrack;

struct SplineTrack__uType : ::uClassType
{
    ::app::Fuse::Animations::ContinuousTrackProvider __interface_0;
    ::app::Fuse::Animations::ITrackProvider __interface_1;
    ::app::Fuse::Animations::KeyframeTrack __interface_2;
    ::app::Fuse::Animations::TrackProvider __interface_3;
};

SplineTrack__uType* SplineTrack__typeof();

void SplineTrack___ObjInit(SplineTrack* __this);
::app::Uno::Float4 SplineTrack__BezierPoint(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p3, ::app::Uno::Float4 m0, ::app::Uno::Float4 m1, float t);
::app::Uno::Float4 SplineTrack__CubicHermitePoint(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p1, ::app::Uno::Float4 m0, ::app::Uno::Float4 m1, float t);
bool SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::app::Uno::Float4* value, double* strength);
bool SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::app::Uno::Float4* value, double* strength);
int SplineTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimator* tas);
double SplineTrack__Fuse_Animations_TrackProvider_GetDuration(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant);
float SplineTrack__get_Bias(SplineTrack* __this);
float SplineTrack__get_Continuity(SplineTrack* __this);
int SplineTrack__get_Interpolation(SplineTrack* __this);
::uObject* SplineTrack__get_Keyframes(SplineTrack* __this);
float SplineTrack__get_Tension(SplineTrack* __this);
void SplineTrack__Init(SplineTrack* __this);
::app::Uno::Float4 SplineTrack__LinearPoint(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p1, ::app::Uno::Float4 m0, ::app::Uno::Float4 m1, float t);
SplineTrack* SplineTrack__New_1(::uStatic* __this);
void SplineTrack__set_Bias(SplineTrack* __this, float value);
void SplineTrack__set_Continuity(SplineTrack* __this, float value);
void SplineTrack__set_Interpolation(SplineTrack* __this, int value);
void SplineTrack__set_Tension(SplineTrack* __this, float value);

struct SplineTrack : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*> _frames;
    float _tension;
    float _bias;
    float _continuity;
    ::uStrong< ::uDelegate*> _pointInterpolater;
    int _style;
    double _duration;
    bool _init;

    void _ObjInit() { SplineTrack___ObjInit(this); }
    float Bias() { return SplineTrack__get_Bias(this); }
    float Continuity() { return SplineTrack__get_Continuity(this); }
    int Interpolation() { return SplineTrack__get_Interpolation(this); }
    ::uObject* Keyframes() { return SplineTrack__get_Keyframes(this); }
    float Tension() { return SplineTrack__get_Tension(this); }
    void Init() { SplineTrack__Init(this); }
    void Bias(float value) { SplineTrack__set_Bias(this, value); }
    void Continuity(float value) { SplineTrack__set_Continuity(this, value); }
    void Interpolation(int value) { SplineTrack__set_Interpolation(this, value); }
    void Tension(float value) { SplineTrack__set_Tension(this, value); }
};

}}}


#endif

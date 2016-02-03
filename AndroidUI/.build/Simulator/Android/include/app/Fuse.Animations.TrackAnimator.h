// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRACK_ANIMATOR_H__
#define __APP_FUSE_ANIMATIONS_TRACK_ANIMATOR_H__

#include <app/Fuse.Animations.Animator.h>
#include <app/Uno.Float4.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct TrackAnimator;

struct TrackAnimator__uType : ::app::Fuse::Animations::Animator__uType
{
};

TrackAnimator__uType* TrackAnimator__typeof();

void TrackAnimator___ObjInit_1(TrackAnimator* __this);
int TrackAnimator__get_AnimatorVariant(TrackAnimator* __this);
double TrackAnimator__get_Delay_1(TrackAnimator* __this);
double TrackAnimator__get_DelayBack(TrackAnimator* __this);
double TrackAnimator__get_Duration(TrackAnimator* __this);
double TrackAnimator__get_DurationBack(TrackAnimator* __this);
int TrackAnimator__get_Easing(TrackAnimator* __this);
int TrackAnimator__get_EasingBack(TrackAnimator* __this);
bool TrackAnimator__get_HasBack(TrackAnimator* __this);
int TrackAnimator__get_KeyframeInterpolation(TrackAnimator* __this);
::uObject* TrackAnimator__get_Keyframes(TrackAnimator* __this);
::uObject* TrackAnimator__get_KeyframeTrack(TrackAnimator* __this);
::uObject* TrackAnimator__get_Provider(TrackAnimator* __this);
double TrackAnimator__GetDurationWithDelay(TrackAnimator* __this, int dir);
::uObject* TrackAnimator__GetProvider(TrackAnimator* __this, int variant);
void TrackAnimator__MarkDiscrete(TrackAnimator* __this);
void TrackAnimator__set_Delay_1(TrackAnimator* __this, double value);
void TrackAnimator__set_DelayBack(TrackAnimator* __this, double value);
void TrackAnimator__set_Duration(TrackAnimator* __this, double value);
void TrackAnimator__set_DurationBack(TrackAnimator* __this, double value);
void TrackAnimator__set_Easing(TrackAnimator* __this, int value);
void TrackAnimator__set_EasingBack(TrackAnimator* __this, int value);
void TrackAnimator__set_KeyframeInterpolation(TrackAnimator* __this, int value);
void TrackAnimator__set_Provider(TrackAnimator* __this, ::uObject* value);

struct TrackAnimator : ::app::Fuse::Animations::Animator
{
    ::uStrong< ::uObject*> _discreteProvider;
    bool _isDiscrete;
    ::uStrong< ::uObject*> _continuousProvider;
    int _easing;
    int _easingBack;
    bool _hasEasingBack;
    double _durationBack;
    bool _hasDurationBack;
    double _delayBack;
    bool _hasDelayBack;
    ::uStrong< ::uObject*> _keyframeTrack;
    ::app::Uno::Float4 _vectorValue;
    ::uStrong< ::uObject*> _objectValue;
    double _Delay_1;
    double _Duration;

    void _ObjInit_1() { TrackAnimator___ObjInit_1(this); }
    double Delay_1() { return TrackAnimator__get_Delay_1(this); }
    double DelayBack() { return TrackAnimator__get_DelayBack(this); }
    double Duration() { return TrackAnimator__get_Duration(this); }
    double DurationBack() { return TrackAnimator__get_DurationBack(this); }
    int Easing() { return TrackAnimator__get_Easing(this); }
    int EasingBack() { return TrackAnimator__get_EasingBack(this); }
    bool HasBack() { return TrackAnimator__get_HasBack(this); }
    int KeyframeInterpolation() { return TrackAnimator__get_KeyframeInterpolation(this); }
    ::uObject* Keyframes() { return TrackAnimator__get_Keyframes(this); }
    ::uObject* KeyframeTrack() { return TrackAnimator__get_KeyframeTrack(this); }
    ::uObject* Provider() { return TrackAnimator__get_Provider(this); }
    ::uObject* GetProvider(int variant) { return TrackAnimator__GetProvider(this, variant); }
    void MarkDiscrete() { TrackAnimator__MarkDiscrete(this); }
    void Delay_1(double value) { TrackAnimator__set_Delay_1(this, value); }
    void DelayBack(double value) { TrackAnimator__set_DelayBack(this, value); }
    void Duration(double value) { TrackAnimator__set_Duration(this, value); }
    void DurationBack(double value) { TrackAnimator__set_DurationBack(this, value); }
    void Easing(int value) { TrackAnimator__set_Easing(this, value); }
    void EasingBack(int value) { TrackAnimator__set_EasingBack(this, value); }
    void KeyframeInterpolation(int value) { TrackAnimator__set_KeyframeInterpolation(this, value); }
    void Provider(::uObject* value) { TrackAnimator__set_Provider(this, value); }
};

}}}


#endif

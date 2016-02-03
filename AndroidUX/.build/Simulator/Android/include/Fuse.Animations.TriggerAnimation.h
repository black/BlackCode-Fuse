// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct Player;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class TriggerAnimation :3292
// {
uType* TriggerAnimation_typeof();
void TriggerAnimation__ctor__fn(TriggerAnimation* __this);
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval);
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval);
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value);
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Node* elm, uArray** __retval);
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Node* node, int* variant, ::g::Fuse::Animations::Player** __retval);
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval);
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval);
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval);
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval);
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval);
void TriggerAnimation__New1_fn(TriggerAnimation** __retval);
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this);
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval);
void TriggerAnimation__get_StretchDuration_fn(TriggerAnimation* __this, double* __retval);
void TriggerAnimation__set_StretchDuration_fn(TriggerAnimation* __this, double* value);
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value);
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value);
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval);
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value);

struct TriggerAnimation : uObject
{
    uStrong< ::g::Uno::Collections::List*> _animators;
    uStrong<TriggerAnimation*> _backward;
    bool _hasStretchDuration;
    bool _hasTimeMultiplier;
    double _stretchDuration;
    double _timeMultiplier;
    uStrong<uDelegate*> TimeChanged1;

    void ctor_();
    uObject* Animators();
    TriggerAnimation* Backward();
    void Backward(TriggerAnimation* value);
    uArray* CreateAnimatorsState(int variant, ::g::Fuse::Node* elm);
    ::g::Fuse::Animations::Player* CreatePlayer(::g::Fuse::Node* node, int variant);
    ::g::Fuse::Animations::TriggerAnimationState* CreateState(::g::Fuse::Node* elm);
    double GetAnimatorsDuration(int variant);
    double GetTimeMultiplier(int variant);
    bool HasAnimators();
    bool HasDirectionVariant();
    void OnTimeChanged();
    int RestrictVariant(int variant);
    double StretchDuration();
    void StretchDuration(double value);
    void add_TimeChanged(uDelegate* value);
    void remove_TimeChanged(uDelegate* value);
    double TimeMultiplier();
    void TimeMultiplier(double value);
    static TriggerAnimation* New1();
};
// }

}}} // ::g::Fuse::Animations

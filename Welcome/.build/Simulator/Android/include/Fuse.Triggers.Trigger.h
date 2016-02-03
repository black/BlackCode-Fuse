// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class Trigger :666
// {
struct Trigger_type : ::g::Fuse::Behavior_type
{
    void(*fp_OnNodeAdded)(::g::Fuse::Triggers::Trigger*, ::g::Fuse::Node*);
    void(*fp_OnProgressChanged)(::g::Fuse::Triggers::Trigger*);
};

Trigger_type* Trigger_typeof();
void Trigger__ctor_1_fn(Trigger* __this);
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval);
void Trigger__Activate_fn(Trigger* __this, uDelegate* done);
void Trigger__AddContent_fn(Trigger* __this, ::g::Fuse::Node* target);
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval);
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Trigger__get_Behaviors_fn(Trigger* __this, uObject** __retval);
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval);
void Trigger__set_Bypass_fn(Trigger* __this, int* value);
void Trigger__BypassActivate_fn(Trigger* __this);
void Trigger__BypassDeactivate_fn(Trigger* __this);
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__CleanupState_fn(Trigger* __this);
void Trigger__CreateState_fn(Trigger* __this);
void Trigger__Deactivate_fn(Trigger* __this);
void Trigger__EnsureAnimationLength_fn(Trigger* __this);
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval);
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval);
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval);
void Trigger__InversePulse_fn(Trigger* __this);
void Trigger__get_Nodes_fn(Trigger* __this, uObject** __retval);
void Trigger__OnBehaviorAdded_fn(Trigger* __this, ::g::Fuse::Behavior* b);
void Trigger__OnBehaviorRemoved_fn(Trigger* __this, ::g::Fuse::Behavior* b);
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n);
void Trigger__OnNodeRemoved_fn(Trigger* __this, ::g::Fuse::Node* n);
void Trigger__OnPlaybackDone_fn(Trigger* __this, uObject* s);
void Trigger__OnProgressChanged_fn(Trigger* __this);
void Trigger__OnProgressUpdated_fn(Trigger* __this, uObject* s);
void Trigger__OnUnrooted_fn(Trigger* __this, ::g::Fuse::Node* parentNode);
void Trigger__add_PlaybackDone_fn(Trigger* __this, uDelegate* value);
void Trigger__remove_PlaybackDone_fn(Trigger* __this, uDelegate* value);
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done);
void Trigger__PlayOn_fn(Trigger* __this);
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant);
void Trigger__get_Progress_fn(Trigger* __this, double* __retval);
void Trigger__Pulse_fn(Trigger* __this);
void Trigger__RemoveContent_fn(Trigger* __this, ::g::Fuse::Node* target);
void Trigger__Seek_fn(Trigger* __this, double* progress);
void Trigger__Seek1_fn(Trigger* __this, double* progress, int* direction);
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on);
void Trigger__SetPlayDirection_fn(Trigger* __this, int* next);
void Trigger__Start_fn(Trigger* __this);
void Trigger__Stop_fn(Trigger* __this);
void Trigger__get_StretchDuration_fn(Trigger* __this, double* __retval);
void Trigger__set_StretchDuration_fn(Trigger* __this, double* value);
void Trigger__get_TimeMultiplier_fn(Trigger* __this, double* __retval);
void Trigger__set_TimeMultiplier_fn(Trigger* __this, double* value);

struct Trigger : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::Collections::List*> _actions;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _animation;
    uStrong< ::g::Fuse::Animations::TriggerAnimationState*> _animState;
    uStrong<uObject*> _behaviors;
    uStrong<uDelegate*> _doneAction;
    bool _doneOn;
    bool _isStarted;
    int _lastPlayDirection;
    uStrong<uObject*> _nodes;
    int _Bypass;
    uStrong<uDelegate*> PlaybackDone1;

    void ctor_1();
    uObject* Actions();
    void Activate(uDelegate* done);
    void AddContent(::g::Fuse::Node* target);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    uObject* Animators();
    ::g::Fuse::Animations::TriggerAnimation* BackwardAnimation();
    void BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value);
    uObject* Behaviors();
    int Bypass();
    void Bypass(int value);
    void BypassActivate();
    void BypassDeactivate();
    void BypassSeek(double progress, int direction);
    void CleanupState();
    void CreateState();
    void Deactivate();
    void EnsureAnimationLength();
    bool EnsureState(double progress);
    bool HasActions();
    bool HasAnimators();
    void InversePulse();
    uObject* Nodes();
    void OnBehaviorAdded(::g::Fuse::Behavior* b);
    void OnBehaviorRemoved(::g::Fuse::Behavior* b);
    void OnNodeAdded(::g::Fuse::Node* n) { (((Trigger_type*)__type)->fp_OnNodeAdded)(this, n); }
    void OnNodeRemoved(::g::Fuse::Node* n);
    void OnPlaybackDone(uObject* s);
    void OnProgressChanged() { (((Trigger_type*)__type)->fp_OnProgressChanged)(this); }
    void OnProgressUpdated(uObject* s);
    void add_PlaybackDone(uDelegate* value);
    void remove_PlaybackDone(uDelegate* value);
    void PlayEnd(bool on, uDelegate* done);
    void PlayOn();
    void PlayTo(double progress, int variant);
    double Progress();
    void Pulse();
    void RemoveContent(::g::Fuse::Node* target);
    void Seek(double progress);
    void Seek1(double progress, int direction);
    void SetDone(uDelegate* done, bool on);
    void SetPlayDirection(int next);
    void Start();
    void Stop();
    double StretchDuration();
    void StretchDuration(double value);
    double TimeMultiplier();
    void TimeMultiplier(double value);
    static void OnNodeAdded(Trigger* __this, ::g::Fuse::Node* n) { Trigger__OnNodeAdded_fn(__this, n); }
    static void OnProgressChanged(Trigger* __this) { Trigger__OnProgressChanged_fn(__this); }
};
// }

}}} // ::g::Fuse::Triggers

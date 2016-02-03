// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Player;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class TriggerAnimationState :3463
// {
uType* TriggerAnimationState_typeof();
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node);
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval);
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this);
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, ::g::Fuse::Animations::Player** __retval);
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval);
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node, TriggerAnimationState** __retval);
void TriggerAnimationState__OnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s);
void TriggerAnimationState__OnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s);
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this);
void TriggerAnimationState__add_PlaybackDone_fn(TriggerAnimationState* __this, uDelegate* value);
void TriggerAnimationState__remove_PlaybackDone_fn(TriggerAnimationState* __this, uDelegate* value);
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on);
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this);
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this);
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo);
void TriggerAnimationState__get_PreviousProgress_fn(TriggerAnimationState* __this, double* __retval);
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval);
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval);
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval);
void TriggerAnimationState__add_ProgressUpdated_fn(TriggerAnimationState* __this, uDelegate* value);
void TriggerAnimationState__remove_ProgressUpdated_fn(TriggerAnimationState* __this, uDelegate* value);
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags);
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player);

struct TriggerAnimationState : uObject
{
    uStrong< ::g::Fuse::Animations::Player*> _backPlayer;
    uStrong< ::g::Fuse::Animations::Player*> _curPlayer;
    int _curPlayerVariant;
    uStrong< ::g::Fuse::Animations::Player*> _forePlayer;
    uStrong< ::g::Fuse::Node*> _node;
    double _prevProgress;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _Animation;
    uStrong<uDelegate*> PlaybackDone1;
    uStrong<uDelegate*> ProgressUpdated1;

    void ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    double CurrentAnimatorsDuration();
    void Dispose();
    ::g::Fuse::Animations::Player* GetCurrentPlayer(int tendTo);
    ::g::Fuse::Animations::Player* GetPlayer(int variant, bool noFade);
    void OnPlaybackDone(uObject* s);
    void OnProgressUpdated(uObject* s);
    void OnTimeChanged();
    void add_PlaybackDone(uDelegate* value);
    void remove_PlaybackDone(uDelegate* value);
    void PlayEnd(bool on);
    void PlayOff();
    void PlayOn();
    void PlayToProgress(double progress, int tendTo);
    double PreviousProgress();
    double Progress();
    bool ProgressFullOff();
    bool ProgressFullOn();
    void add_ProgressUpdated(uDelegate* value);
    void remove_ProgressUpdated(uDelegate* value);
    void SeekProgress(double newProgress, int tendTo, int flags);
    void TrackProgress(::g::Fuse::Animations::Player* player);
    static TriggerAnimationState* New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Animations

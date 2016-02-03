// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRIGGER_ANIMATION_STATE_H__
#define __APP_FUSE_ANIMATIONS_TRIGGER_ANIMATION_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Player; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimation; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TriggerAnimationState;

struct TriggerAnimationState__uType : ::uClassType
{
};

TriggerAnimationState__uType* TriggerAnimationState__typeof();

void TriggerAnimationState___ObjInit(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node);
void TriggerAnimationState__add_PlaybackDone(TriggerAnimationState* __this, ::uDelegate* value);
void TriggerAnimationState__add_ProgressUpdated(TriggerAnimationState* __this, ::uDelegate* value);
void TriggerAnimationState__Dispose(TriggerAnimationState* __this);
::app::Fuse::Animations::TriggerAnimation* TriggerAnimationState__get_Animation(TriggerAnimationState* __this);
double TriggerAnimationState__get_CurrentTotalDuration(TriggerAnimationState* __this);
double TriggerAnimationState__get_PreviousProgress(TriggerAnimationState* __this);
double TriggerAnimationState__get_Progress(TriggerAnimationState* __this);
bool TriggerAnimationState__get_ProgressFullOff(TriggerAnimationState* __this);
bool TriggerAnimationState__get_ProgressFullOn(TriggerAnimationState* __this);
::app::Fuse::Animations::Player* TriggerAnimationState__GetCurrentPlayer(TriggerAnimationState* __this, int tendTo);
::app::Fuse::Animations::Player* TriggerAnimationState__GetPlayer(TriggerAnimationState* __this, int variant, bool noFade);
TriggerAnimationState* TriggerAnimationState__New_1(::uStatic* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node);
void TriggerAnimationState__OnPlaybackDone(TriggerAnimationState* __this, ::uObject* s);
void TriggerAnimationState__OnProgressUpdated(TriggerAnimationState* __this, ::uObject* s);
void TriggerAnimationState__PlayEnd(TriggerAnimationState* __this, bool on);
void TriggerAnimationState__PlayOff(TriggerAnimationState* __this);
void TriggerAnimationState__PlayOn(TriggerAnimationState* __this);
void TriggerAnimationState__PlayToProgress(TriggerAnimationState* __this, double progress, int tendTo);
void TriggerAnimationState__remove_PlaybackDone(TriggerAnimationState* __this, ::uDelegate* value);
void TriggerAnimationState__remove_ProgressUpdated(TriggerAnimationState* __this, ::uDelegate* value);
void TriggerAnimationState__SeekProgress(TriggerAnimationState* __this, double newProgress, int tendTo, int flags);
void TriggerAnimationState__set_Animation(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* value);
void TriggerAnimationState__TrackProgress(TriggerAnimationState* __this, ::app::Fuse::Animations::Player* player);

struct TriggerAnimationState : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Fuse::Animations::Player*> _forePlayer;
    ::uStrong< ::app::Fuse::Animations::Player*> _backPlayer;
    ::uStrong< ::app::Fuse::Animations::Player*> _curPlayer;
    int _curPlayerVariant;
    double _prevProgress;
    ::uStrong< ::uDelegate*> PlaybackDone;
    ::uStrong< ::uDelegate*> ProgressUpdated;
    ::uStrong< ::app::Fuse::Animations::TriggerAnimation*> _Animation;

    void _ObjInit(::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node) { TriggerAnimationState___ObjInit(this, animation, node); }
    void add_PlaybackDone(::uDelegate* value) { TriggerAnimationState__add_PlaybackDone(this, value); }
    void add_ProgressUpdated(::uDelegate* value) { TriggerAnimationState__add_ProgressUpdated(this, value); }
    void Dispose() { TriggerAnimationState__Dispose(this); }
    ::app::Fuse::Animations::TriggerAnimation* Animation() { return TriggerAnimationState__get_Animation(this); }
    double CurrentTotalDuration() { return TriggerAnimationState__get_CurrentTotalDuration(this); }
    double PreviousProgress() { return TriggerAnimationState__get_PreviousProgress(this); }
    double Progress() { return TriggerAnimationState__get_Progress(this); }
    bool ProgressFullOff() { return TriggerAnimationState__get_ProgressFullOff(this); }
    bool ProgressFullOn() { return TriggerAnimationState__get_ProgressFullOn(this); }
    ::app::Fuse::Animations::Player* GetCurrentPlayer(int tendTo) { return TriggerAnimationState__GetCurrentPlayer(this, tendTo); }
    ::app::Fuse::Animations::Player* GetPlayer(int variant, bool noFade) { return TriggerAnimationState__GetPlayer(this, variant, noFade); }
    void OnPlaybackDone(::uObject* s) { TriggerAnimationState__OnPlaybackDone(this, s); }
    void OnProgressUpdated(::uObject* s) { TriggerAnimationState__OnProgressUpdated(this, s); }
    void PlayEnd(bool on) { TriggerAnimationState__PlayEnd(this, on); }
    void PlayOff() { TriggerAnimationState__PlayOff(this); }
    void PlayOn() { TriggerAnimationState__PlayOn(this); }
    void PlayToProgress(double progress, int tendTo) { TriggerAnimationState__PlayToProgress(this, progress, tendTo); }
    void remove_PlaybackDone(::uDelegate* value) { TriggerAnimationState__remove_PlaybackDone(this, value); }
    void remove_ProgressUpdated(::uDelegate* value) { TriggerAnimationState__remove_ProgressUpdated(this, value); }
    void SeekProgress(double newProgress, int tendTo, int flags) { TriggerAnimationState__SeekProgress(this, newProgress, tendTo, flags); }
    void Animation(::app::Fuse::Animations::TriggerAnimation* value) { TriggerAnimationState__set_Animation(this, value); }
    void TrackProgress(::app::Fuse::Animations::Player* player) { TriggerAnimationState__TrackProgress(this, player); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PLAYER_H__
#define __APP_FUSE_ANIMATIONS_PLAYER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct PlayerPart; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimation; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Player;

struct Player__uType : ::uClassType
{
};

Player__uType* Player__typeof();

void Player___ObjInit(Player* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant);
void Player__CheckUpdate(Player* __this, bool interval);
void Player__CheckUpdateAction(Player* __this);
void Player__Disable(Player* __this);
void Player__Done(Player* __this);
void Player__FadeIn(Player* __this, double time);
void Player__FadeOut(Player* __this, double time);
::app::Fuse::Animations::TriggerAnimation* Player__get_Animation(Player* __this);
bool Player__get_AnyEffect(Player* __this);
::uDelegate* Player__get_DoneCallback(Player* __this);
bool Player__get_IsDone(Player* __this);
bool Player__get_IsSyncState(Player* __this);
::app::Fuse::Node* Player__get_Node(Player* __this);
double Player__get_Progress(Player* __this);
double Player__get_RemainTime(Player* __this);
::uArray* Player__get_States(Player* __this);
double Player__get_Strength(Player* __this);
double Player__get_TotalDuration(Player* __this);
int Player__get_Variant(Player* __this);
Player* Player__New_1(::uStatic* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant);
void Player__PlayToEnd(Player* __this);
void Player__PlayToProgress(Player* __this, double progress);
void Player__PlayToStart(Player* __this);
void Player__SeekProgress(Player* __this, double progress, bool triggerUpdate);
void Player__set_Animation(Player* __this, ::app::Fuse::Animations::TriggerAnimation* value);
void Player__set_DoneCallback(Player* __this, ::uDelegate* value);
void Player__set_Node(Player* __this, ::app::Fuse::Node* value);
void Player__set_Strength(Player* __this, double value);
void Player__set_Variant(Player* __this, int value);
void Player__Start(Player* __this);
void Player__Stop(Player* __this);
void Player__Suspend(Player* __this);
void Player__Update(Player* __this, ::uObject* s, ::uObject* a);
bool Player__UpdateStates(Player* __this, bool isInterval);

struct Player : ::uObject
{
    ::uStrong< ::uDelegate*> ProgressUpdated;
    ::uStrong< ::uDelegate*> StrengthUpdated;
    ::uStrong< ::uArray*> _states;
    bool _isStarted;
    bool _isDone;
    ::uStrong< ::app::Fuse::Animations::PlayerPart*> _progress;
    int _seekDirection;
    ::uStrong< ::app::Fuse::Animations::PlayerPart*> _strength;
    ::uStrong< ::app::Fuse::Node*> _Node;
    ::uStrong< ::app::Fuse::Animations::TriggerAnimation*> _Animation;
    int _Variant;
    ::uStrong< ::uDelegate*> _DoneCallback;

    void _ObjInit(::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant) { Player___ObjInit(this, elm, animation, variant); }
    void CheckUpdate(bool interval) { Player__CheckUpdate(this, interval); }
    void CheckUpdateAction() { Player__CheckUpdateAction(this); }
    void Disable() { Player__Disable(this); }
    void Done() { Player__Done(this); }
    void FadeIn(double time) { Player__FadeIn(this, time); }
    void FadeOut(double time) { Player__FadeOut(this, time); }
    ::app::Fuse::Animations::TriggerAnimation* Animation() { return Player__get_Animation(this); }
    bool AnyEffect() { return Player__get_AnyEffect(this); }
    ::uDelegate* DoneCallback() { return Player__get_DoneCallback(this); }
    bool IsDone() { return Player__get_IsDone(this); }
    bool IsSyncState() { return Player__get_IsSyncState(this); }
    ::app::Fuse::Node* Node() { return Player__get_Node(this); }
    double Progress() { return Player__get_Progress(this); }
    double RemainTime() { return Player__get_RemainTime(this); }
    ::uArray* States() { return Player__get_States(this); }
    double Strength() { return Player__get_Strength(this); }
    double TotalDuration() { return Player__get_TotalDuration(this); }
    int Variant() { return Player__get_Variant(this); }
    void PlayToEnd() { Player__PlayToEnd(this); }
    void PlayToProgress(double progress) { Player__PlayToProgress(this, progress); }
    void PlayToStart() { Player__PlayToStart(this); }
    void SeekProgress(double progress, bool triggerUpdate) { Player__SeekProgress(this, progress, triggerUpdate); }
    void Animation(::app::Fuse::Animations::TriggerAnimation* value) { Player__set_Animation(this, value); }
    void DoneCallback(::uDelegate* value) { Player__set_DoneCallback(this, value); }
    void Node(::app::Fuse::Node* value) { Player__set_Node(this, value); }
    void Strength(double value) { Player__set_Strength(this, value); }
    void Variant(int value) { Player__set_Variant(this, value); }
    void Start() { Player__Start(this); }
    void Stop() { Player__Stop(this); }
    void Suspend() { Player__Suspend(this); }
    void Update(::uObject* s, ::uObject* a) { Player__Update(this, s, a); }
    bool UpdateStates(bool isInterval) { return Player__UpdateStates(this, isInterval); }
};

}}}


#endif

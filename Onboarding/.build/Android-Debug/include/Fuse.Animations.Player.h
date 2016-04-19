// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct Player;}}}
namespace g{namespace Fuse{namespace Animations{struct PlayerPart;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class Player :2120
// {
uType* Player_typeof();
void Player__ctor__fn(Player* __this, ::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant);
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval);
void Player__get_AnyEffect_fn(Player* __this, bool* __retval);
void Player__CheckUpdate_fn(Player* __this, bool* interval);
void Player__CheckUpdateAction_fn(Player* __this);
void Player__Disable_fn(Player* __this);
void Player__Done_fn(Player* __this);
void Player__get_DoneCallback_fn(Player* __this, uDelegate** __retval);
void Player__set_DoneCallback_fn(Player* __this, uDelegate* value);
void Player__FadeIn_fn(Player* __this, double* time);
void Player__FadeOut_fn(Player* __this, double* time);
void Player__get_IsSyncState_fn(Player* __this, bool* __retval);
void Player__New1_fn(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, Player** __retval);
void Player__get_Node_fn(Player* __this, ::g::Fuse::Node** __retval);
void Player__set_Node_fn(Player* __this, ::g::Fuse::Node* value);
void Player__PlayToEnd_fn(Player* __this);
void Player__PlayToProgress_fn(Player* __this, double* progress);
void Player__PlayToStart_fn(Player* __this);
void Player__get_Progress_fn(Player* __this, double* __retval);
void Player__get_RemainTime_fn(Player* __this, double* __retval);
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate);
void Player__Start_fn(Player* __this);
void Player__get_States_fn(Player* __this, uArray** __retval);
void Player__Stop_fn(Player* __this);
void Player__get_Strength_fn(Player* __this, double* __retval);
void Player__set_Strength_fn(Player* __this, double* value);
void Player__TimeChanged_fn(Player* __this);
void Player__Update_fn(Player* __this, uObject* s, uObject* a);
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval);
void Player__get_Variant_fn(Player* __this, int* __retval);
void Player__set_Variant_fn(Player* __this, int* value);

struct Player : uObject
{
    bool _isDone;
    bool _isStarted;
    uStrong< ::g::Fuse::Animations::PlayerPart*> _progress;
    int _seekDirection;
    uStrong<uArray*> _states;
    uStrong< ::g::Fuse::Animations::PlayerPart*> _strength;
    uStrong<uDelegate*> ProgressUpdated;
    uStrong<uDelegate*> StrengthUpdated;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _Animation;
    uStrong<uDelegate*> _DoneCallback;
    uStrong< ::g::Fuse::Node*> _Node;
    int _Variant;

    void ctor_(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    double AnimatorsDuration();
    bool AnyEffect();
    void CheckUpdate(bool interval);
    void CheckUpdateAction();
    void Disable();
    void Done();
    uDelegate* DoneCallback();
    void DoneCallback(uDelegate* value);
    void FadeIn(double time);
    void FadeOut(double time);
    bool IsSyncState();
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    void PlayToEnd();
    void PlayToProgress(double progress);
    void PlayToStart();
    double Progress();
    double RemainTime();
    void SeekProgress(double progress, bool triggerUpdate);
    void Start();
    uArray* States();
    void Stop();
    double Strength();
    void Strength(double value);
    void TimeChanged();
    void Update(uObject* s, uObject* a);
    bool UpdateStates(bool isInterval);
    int Variant();
    void Variant(int value);
    static Player* New1(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant);
};
// }

}}} // ::g::Fuse::Animations

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_TRIGGER_H__
#define __APP_FUSE_TRIGGERS_TRIGGER_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimation; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimationState; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Triggers_Actions_TriggerAction; } } }

namespace app {
namespace Fuse {
namespace Triggers {

struct Trigger;

struct Trigger__uType : ::app::Fuse::Behavior__uType
{
    void(*__fp_OnNodeAdded)(Trigger*, ::app::Fuse::Node*);
    void(*__fp_OnProgressChanged)(Trigger*);
};

Trigger__uType* Trigger__typeof();

void Trigger___ObjInit_1(Trigger* __this);
void Trigger__Activate(Trigger* __this, ::uDelegate* done);
void Trigger__add_PlaybackDone(Trigger* __this, ::uDelegate* value);
void Trigger__AddContent(Trigger* __this, ::app::Fuse::Node* target);
void Trigger__BypassActivate(Trigger* __this);
void Trigger__BypassDeactivate(Trigger* __this);
void Trigger__BypassSeek(Trigger* __this, double progress, int direction);
void Trigger__CleanupState(Trigger* __this);
void Trigger__CreateState(Trigger* __this);
void Trigger__Deactivate(Trigger* __this);
void Trigger__EnsureAnimationLength(Trigger* __this);
bool Trigger__EnsureState(Trigger* __this, double progress);
::uObject* Trigger__get_Actions(Trigger* __this);
::app::Fuse::Animations::TriggerAnimation* Trigger__get_Animation(Trigger* __this);
::uObject* Trigger__get_Animators(Trigger* __this);
::app::Fuse::Animations::TriggerAnimation* Trigger__get_BackwardAnimation(Trigger* __this);
::uObject* Trigger__get_Behaviors(Trigger* __this);
int Trigger__get_Bypass(Trigger* __this);
bool Trigger__get_HasActions(Trigger* __this);
bool Trigger__get_HasAnimators(Trigger* __this);
bool Trigger__get_IsRooted_1(Trigger* __this);
::app::Fuse::Node* Trigger__get_Node(Trigger* __this);
::uObject* Trigger__get_Nodes(Trigger* __this);
double Trigger__get_Progress(Trigger* __this);
double Trigger__GetTotalDuration(Trigger* __this, int dir);
void Trigger__InversePulse(Trigger* __this);
void Trigger__OnBehaviorAdded(Trigger* __this, ::app::Fuse::Behavior* b);
void Trigger__OnBehaviorRemoved(Trigger* __this, ::app::Fuse::Behavior* b);
void Trigger__OnNodeAdded(Trigger* __this, ::app::Fuse::Node* n);
void Trigger__OnNodeRemoved(Trigger* __this, ::app::Fuse::Node* n);
void Trigger__OnPlaybackDone(Trigger* __this, ::uObject* s);
void Trigger__OnProgressChanged(Trigger* __this);
void Trigger__OnProgressUpdated(Trigger* __this, ::uObject* s);
void Trigger__OnRooted(Trigger* __this, ::app::Fuse::Node* elm);
void Trigger__OnUnrooted(Trigger* __this, ::app::Fuse::Node* elm);
void Trigger__PlayEnd(Trigger* __this, bool on, ::uDelegate* done);
void Trigger__PlayOn(Trigger* __this);
void Trigger__PlayTo(Trigger* __this, double progress, int variant);
void Trigger__Pulse(Trigger* __this);
void Trigger__RecreateAnimationState(Trigger* __this);
void Trigger__remove_PlaybackDone(Trigger* __this, ::uDelegate* value);
void Trigger__RemoveContent(Trigger* __this, ::app::Fuse::Node* target);
void Trigger__Seek(Trigger* __this, double progress);
void Trigger__Seek_1(Trigger* __this, double progress, int direction);
void Trigger__set_Animation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value);
void Trigger__set_BackwardAnimation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value);
void Trigger__set_Bypass(Trigger* __this, int value);
void Trigger__SetDone(Trigger* __this, ::uDelegate* done, bool on);
void Trigger__SetPlayDirection(Trigger* __this, int next);
void Trigger__Start(Trigger* __this);
void Trigger__Stop(Trigger* __this);

struct Trigger : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Animations::TriggerAnimation*> _animation;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*> _actions;
    ::uStrong< ::uObject*> _nodes;
    ::uStrong< ::uObject*> _behaviors;
    ::uStrong< ::uDelegate*> _doneAction;
    bool _doneOn;
    int _lastPlayDirection;
    bool _isStarted;
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Fuse::Animations::TriggerAnimationState*> _animState;
    ::uStrong< ::uDelegate*> PlaybackDone;
    int _Bypass;

    void _ObjInit_1() { Trigger___ObjInit_1(this); }
    void Activate(::uDelegate* done) { Trigger__Activate(this, done); }
    void add_PlaybackDone(::uDelegate* value) { Trigger__add_PlaybackDone(this, value); }
    void AddContent(::app::Fuse::Node* target) { Trigger__AddContent(this, target); }
    void BypassActivate() { Trigger__BypassActivate(this); }
    void BypassDeactivate() { Trigger__BypassDeactivate(this); }
    void BypassSeek(double progress, int direction) { Trigger__BypassSeek(this, progress, direction); }
    void CleanupState() { Trigger__CleanupState(this); }
    void CreateState() { Trigger__CreateState(this); }
    void Deactivate() { Trigger__Deactivate(this); }
    void EnsureAnimationLength() { Trigger__EnsureAnimationLength(this); }
    bool EnsureState(double progress) { return Trigger__EnsureState(this, progress); }
    ::uObject* Actions() { return Trigger__get_Actions(this); }
    ::app::Fuse::Animations::TriggerAnimation* Animation() { return Trigger__get_Animation(this); }
    ::uObject* Animators() { return Trigger__get_Animators(this); }
    ::app::Fuse::Animations::TriggerAnimation* BackwardAnimation() { return Trigger__get_BackwardAnimation(this); }
    ::uObject* Behaviors() { return Trigger__get_Behaviors(this); }
    int Bypass() { return Trigger__get_Bypass(this); }
    bool HasActions() { return Trigger__get_HasActions(this); }
    bool HasAnimators() { return Trigger__get_HasAnimators(this); }
    bool IsRooted_1() { return Trigger__get_IsRooted_1(this); }
    ::app::Fuse::Node* Node() { return Trigger__get_Node(this); }
    ::uObject* Nodes() { return Trigger__get_Nodes(this); }
    double Progress() { return Trigger__get_Progress(this); }
    double GetTotalDuration(int dir) { return Trigger__GetTotalDuration(this, dir); }
    void InversePulse() { Trigger__InversePulse(this); }
    void OnBehaviorAdded(::app::Fuse::Behavior* b) { Trigger__OnBehaviorAdded(this, b); }
    void OnBehaviorRemoved(::app::Fuse::Behavior* b) { Trigger__OnBehaviorRemoved(this, b); }
    void OnNodeAdded(::app::Fuse::Node* n) { (((Trigger__uType*)this->__obj_type)->__fp_OnNodeAdded)(this, n); }
    void OnNodeRemoved(::app::Fuse::Node* n) { Trigger__OnNodeRemoved(this, n); }
    void OnPlaybackDone(::uObject* s) { Trigger__OnPlaybackDone(this, s); }
    void OnProgressChanged() { (((Trigger__uType*)this->__obj_type)->__fp_OnProgressChanged)(this); }
    void OnProgressUpdated(::uObject* s) { Trigger__OnProgressUpdated(this, s); }
    void PlayEnd(bool on, ::uDelegate* done) { Trigger__PlayEnd(this, on, done); }
    void PlayOn() { Trigger__PlayOn(this); }
    void PlayTo(double progress, int variant) { Trigger__PlayTo(this, progress, variant); }
    void Pulse() { Trigger__Pulse(this); }
    void RecreateAnimationState() { Trigger__RecreateAnimationState(this); }
    void remove_PlaybackDone(::uDelegate* value) { Trigger__remove_PlaybackDone(this, value); }
    void RemoveContent(::app::Fuse::Node* target) { Trigger__RemoveContent(this, target); }
    void Seek(double progress) { Trigger__Seek(this, progress); }
    void Seek_1(double progress, int direction) { Trigger__Seek_1(this, progress, direction); }
    void Animation(::app::Fuse::Animations::TriggerAnimation* value) { Trigger__set_Animation(this, value); }
    void BackwardAnimation(::app::Fuse::Animations::TriggerAnimation* value) { Trigger__set_BackwardAnimation(this, value); }
    void Bypass(int value) { Trigger__set_Bypass(this, value); }
    void SetDone(::uDelegate* done, bool on) { Trigger__SetDone(this, done, on); }
    void SetPlayDirection(int next) { Trigger__SetPlayDirection(this, next); }
    void Start() { Trigger__Start(this); }
    void Stop() { Trigger__Stop(this); }
};

}}}


#endif

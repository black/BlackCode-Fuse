// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class StateGroup :411
// {
::g::Fuse::Behavior_type* StateGroup_typeof();
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval);
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value);
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval);
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value);
void StateGroup__CheckAllDone_fn(StateGroup* __this);
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next);
void StateGroup__GotoNextState_fn(StateGroup* __this);
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which);
void StateGroup__OnRooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode);
void StateGroup__OnUnrooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode);
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval);
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval);
void StateGroup__set_Transition_fn(StateGroup* __this, int* value);

struct StateGroup : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Triggers::State*> _active;
    uStrong<uObject*> _states;
    int _transition;

    ::g::Fuse::Triggers::State* Active();
    void Active(::g::Fuse::Triggers::State* value);
    int ActiveIndex();
    void ActiveIndex(int value);
    void CheckAllDone();
    void Goto(::g::Fuse::Triggers::State* next);
    void GotoNextState();
    void OnPlaybackDone(::g::Fuse::Triggers::Trigger* which);
    uObject* States();
    int Transition();
    void Transition(int value);
};
// }

}}} // ::g::Fuse::Triggers

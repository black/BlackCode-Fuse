// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_STATE_GROUP_H__
#define __APP_FUSE_TRIGGERS_STATE_GROUP_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { namespace Triggers { struct Trigger; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct StateGroup;

struct StateGroup__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Scripting::INameScope __interface_0;
};

StateGroup__uType* StateGroup__typeof();

void StateGroup___ObjInit_1(StateGroup* __this);
void StateGroup__CheckAllDone(StateGroup* __this);
::uObject* StateGroup__FindObjectByName(StateGroup* __this, ::uString* name, ::uDelegate* acceptor);
::app::Fuse::Triggers::State* StateGroup__get_Active(StateGroup* __this);
::app::Fuse::Triggers::State* StateGroup__get_Rest(StateGroup* __this);
::uObject* StateGroup__get_States(StateGroup* __this);
int StateGroup__get_Transition(StateGroup* __this);
void StateGroup__Goto(StateGroup* __this, ::app::Fuse::Triggers::State* next);
StateGroup* StateGroup__New_1(::uStatic* __this);
void StateGroup__OnPlaybackDone(StateGroup* __this, ::app::Fuse::Triggers::Trigger* which);
void StateGroup__OnRooted(StateGroup* __this, ::app::Fuse::Node* elm);
void StateGroup__OnUnrooted(StateGroup* __this, ::app::Fuse::Node* elm);
void StateGroup__set_Active(StateGroup* __this, ::app::Fuse::Triggers::State* value);
void StateGroup__set_Rest(StateGroup* __this, ::app::Fuse::Triggers::State* value);
void StateGroup__set_Transition(StateGroup* __this, int value);

struct StateGroup : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _states;
    ::uStrong< ::app::Fuse::Triggers::State*> _active;
    ::uStrong< ::app::Fuse::Triggers::State*> _rest;
    int _transition;

    void _ObjInit_1() { StateGroup___ObjInit_1(this); }
    void CheckAllDone() { StateGroup__CheckAllDone(this); }
    ::uObject* FindObjectByName(::uString* name, ::uDelegate* acceptor) { return StateGroup__FindObjectByName(this, name, acceptor); }
    ::app::Fuse::Triggers::State* Active() { return StateGroup__get_Active(this); }
    ::app::Fuse::Triggers::State* Rest() { return StateGroup__get_Rest(this); }
    ::uObject* States() { return StateGroup__get_States(this); }
    int Transition() { return StateGroup__get_Transition(this); }
    void Goto(::app::Fuse::Triggers::State* next) { StateGroup__Goto(this, next); }
    void OnPlaybackDone(::app::Fuse::Triggers::Trigger* which) { StateGroup__OnPlaybackDone(this, which); }
    void Active(::app::Fuse::Triggers::State* value) { StateGroup__set_Active(this, value); }
    void Rest(::app::Fuse::Triggers::State* value) { StateGroup__set_Rest(this, value); }
    void Transition(int value) { StateGroup__set_Transition(this, value); }
};

}}}


#endif

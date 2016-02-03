// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct State;

struct State__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

State__uType* State__typeof();

void State___ObjInit_2(State* __this);
::uString* State__get_Name(State* __this);
bool State__get_On(State* __this);
double State__get_Progress_1(State* __this);
State* State__New_1(::uStatic* __this);
void State__OnRooted(State* __this, ::app::Fuse::Node* elm);
void State__set_Name(State* __this, ::uString* value);
void State__set_On(State* __this, bool value);

struct State : ::app::Fuse::Triggers::Trigger
{
    bool _on;
    ::uStrong< ::uString*> _Name;

    void _ObjInit_2() { State___ObjInit_2(this); }
    ::uString* Name() { return State__get_Name(this); }
    bool On() { return State__get_On(this); }
    double Progress_1() { return State__get_Progress_1(this); }
    void Name(::uString* value) { State__set_Name(this, value); }
    void On(bool value) { State__set_On(this, value); }
};

}}}


#endif

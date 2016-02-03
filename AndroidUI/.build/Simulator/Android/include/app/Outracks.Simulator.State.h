// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_STATE_H__
#define __APP_OUTRACKS_SIMULATOR_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct State;

struct State__uType : ::uClassType
{
    State*(*__fp_OnEnterState)(State*);
    State*(*__fp_OnException)(State*, ::app::Uno::Exception*);
    void(*__fp_OnLeaveState)(State*);
    State*(*__fp_OnUpdate)(State*);
};

State__uType* State__typeof();

void State___ObjInit(State* __this);
State* State__OnEnterState(State* __this);
State* State__OnException(State* __this, ::app::Uno::Exception* e);
void State__OnLeaveState(State* __this);
State* State__OnUpdate(State* __this);

struct State : ::uObject
{
    void _ObjInit() { State___ObjInit(this); }
    State* OnEnterState() { return (((State__uType*)this->__obj_type)->__fp_OnEnterState)(this); }
    State* OnException(::app::Uno::Exception* e) { return (((State__uType*)this->__obj_type)->__fp_OnException)(this, e); }
    void OnLeaveState() { (((State__uType*)this->__obj_type)->__fp_OnLeaveState)(this); }
    State* OnUpdate() { return (((State__uType*)this->__obj_type)->__fp_OnUpdate)(this); }
};

}}}


#endif

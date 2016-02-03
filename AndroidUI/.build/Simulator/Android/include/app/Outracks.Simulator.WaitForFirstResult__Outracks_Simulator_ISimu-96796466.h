// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_WAIT_FOR_FIRST_RESULT__OUTRACKS_SIMULATOR_I_SIMU_96796466_H__
#define __APP_OUTRACKS_SIMULATOR_WAIT_FOR_FIRST_RESULT__OUTRACKS_SIMULATOR_I_SIMU_96796466_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct WaitForFirstResult__Outracks_Simulator_ISimulatorClient;

struct WaitForFirstResult__Outracks_Simulator_ISimulatorClient__uType : ::uClassType
{
};

WaitForFirstResult__Outracks_Simulator_ISimulatorClient__uType* WaitForFirstResult__Outracks_Simulator_ISimulatorClient__typeof();

void WaitForFirstResult__Outracks_Simulator_ISimulatorClient___ObjInit(WaitForFirstResult__Outracks_Simulator_ISimulatorClient* __this, ::uObject* pending, ::uDelegate* onNoResult);
::uObject* WaitForFirstResult__Outracks_Simulator_ISimulatorClient__Execute(WaitForFirstResult__Outracks_Simulator_ISimulatorClient* __this);
WaitForFirstResult__Outracks_Simulator_ISimulatorClient* WaitForFirstResult__Outracks_Simulator_ISimulatorClient__New_1(::uStatic* __this, ::uObject* pending, ::uDelegate* onNoResult);

struct WaitForFirstResult__Outracks_Simulator_ISimulatorClient : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*> _pending;
    ::uStrong< ::uDelegate*> _onNoResult;

    void _ObjInit(::uObject* pending, ::uDelegate* onNoResult) { WaitForFirstResult__Outracks_Simulator_ISimulatorClient___ObjInit(this, pending, onNoResult); }
    ::uObject* Execute() { return WaitForFirstResult__Outracks_Simulator_ISimulatorClient__Execute(this); }
};

}}}


#endif

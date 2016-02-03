// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONNECTING_TO_HOST_H__
#define __APP_OUTRACKS_SIMULATOR_CONNECTING_TO_HOST_H__

#include <app/Outracks.Simulator.Connecting.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ConnectingToHost;

struct ConnectingToHost__uType : ::app::Outracks::Simulator::Connecting__uType
{
};

ConnectingToHost__uType* ConnectingToHost__typeof();

void ConnectingToHost___ObjInit_2(ConnectingToHost* __this, ::uObject* simulatorEndpoints);
ConnectingToHost* ConnectingToHost__New_1(::uStatic* __this, ::uObject* simulatorEndpoints);
::app::Outracks::Simulator::State* ConnectingToHost__OnEnterState(ConnectingToHost* __this);
::app::Outracks::Simulator::State* ConnectingToHost__OnUpdate(ConnectingToHost* __this);

struct ConnectingToHost : ::app::Outracks::Simulator::Connecting
{
    ::uStrong< ::uArray*> _simulatorEndpoints;
    ::uStrong< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*> _connecting;

    void _ObjInit_2(::uObject* simulatorEndpoints) { ConnectingToHost___ObjInit_2(this, simulatorEndpoints); }
};

}}}


#endif

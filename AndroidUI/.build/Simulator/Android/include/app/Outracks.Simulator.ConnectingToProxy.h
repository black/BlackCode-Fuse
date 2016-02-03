// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONNECTING_TO_PROXY_H__
#define __APP_OUTRACKS_SIMULATOR_CONNECTING_TO_PROXY_H__

#include <app/Outracks.Simulator.Connecting.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ConnectingToProxy;

struct ConnectingToProxy__uType : ::app::Outracks::Simulator::Connecting__uType
{
};

ConnectingToProxy__uType* ConnectingToProxy__typeof();

void ConnectingToProxy___ObjInit_2(ConnectingToProxy* __this);
void ConnectingToProxy___ObjInit_3(ConnectingToProxy* __this, ::uArray* proxyEndpoints);
ConnectingToProxy* ConnectingToProxy__New_1(::uStatic* __this);
ConnectingToProxy* ConnectingToProxy__New_2(::uStatic* __this, ::uArray* proxyEndpoints);
::app::Outracks::Simulator::State* ConnectingToProxy__OnEnterState(ConnectingToProxy* __this);
::app::Outracks::Simulator::State* ConnectingToProxy__OnUpdate(ConnectingToProxy* __this);

struct ConnectingToProxy : ::app::Outracks::Simulator::Connecting
{
    ::uStrong< ::uArray*> _proxyEndpoints;
    ::uStrong< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*> _connecting;

    void _ObjInit_2() { ConnectingToProxy___ObjInit_2(this); }
    void _ObjInit_3(::uArray* proxyEndpoints) { ConnectingToProxy___ObjInit_3(this, proxyEndpoints); }
};

}}}


#endif

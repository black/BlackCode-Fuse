// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROXY_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_PROXY_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ProxyClient;

struct ProxyClient__uType : ::uClassType
{
};

ProxyClient__uType* ProxyClient__typeof();

void ProxyClient___ObjInit(ProxyClient* __this);
::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* ProxyClient__GetSimulatorEndpoint(::uStatic* __this, ::uObject* proxyEndpoints, ::uString* project);
ProxyClient* ProxyClient__New_1(::uStatic* __this);
::uArray* ProxyClient__OnNoResult(::uStatic* __this, ::uObject* exceptions);

struct ProxyClient : ::uObject
{
    void _ObjInit() { ProxyClient___ObjInit(this); }
};

}}}


#endif

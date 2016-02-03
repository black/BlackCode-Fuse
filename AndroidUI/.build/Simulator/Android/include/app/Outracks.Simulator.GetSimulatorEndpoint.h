// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_GET_SIMULATOR_ENDPOINT_H__
#define __APP_OUTRACKS_SIMULATOR_GET_SIMULATOR_ENDPOINT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct GetSimulatorEndpoint;

struct GetSimulatorEndpoint__uType : ::uClassType
{
};

GetSimulatorEndpoint__uType* GetSimulatorEndpoint__typeof();

void GetSimulatorEndpoint___ObjInit(GetSimulatorEndpoint* __this, ::app::Uno::Net::IPEndPoint* proxy, ::uString* project);
::uArray* GetSimulatorEndpoint__Execute(GetSimulatorEndpoint* __this);
GetSimulatorEndpoint* GetSimulatorEndpoint__New_1(::uStatic* __this, ::app::Uno::Net::IPEndPoint* proxy, ::uString* project);

struct GetSimulatorEndpoint : ::uObject
{
    ::uStrong< ::app::Uno::Net::IPEndPoint*> proxy;
    ::uStrong< ::uString*> project;

    void _ObjInit(::app::Uno::Net::IPEndPoint* proxy, ::uString* project) { GetSimulatorEndpoint___ObjInit(this, proxy, project); }
    ::uArray* Execute() { return GetSimulatorEndpoint__Execute(this); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct GetSimulatorEndpoint;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class GetSimulatorEndpoint :1075
// {
uType* GetSimulatorEndpoint_typeof();
void GetSimulatorEndpoint__ctor__fn(GetSimulatorEndpoint* __this, ::g::Uno::Net::IPEndPoint* proxy1, uString* project1);
void GetSimulatorEndpoint__Execute_fn(GetSimulatorEndpoint* __this, uArray** __retval);
void GetSimulatorEndpoint__New1_fn(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, GetSimulatorEndpoint** __retval);

struct GetSimulatorEndpoint : uObject
{
    uStrong<uString*> project;
    uStrong< ::g::Uno::Net::IPEndPoint*> proxy;

    void ctor_(::g::Uno::Net::IPEndPoint* proxy1, uString* project1);
    uArray* Execute();
    static GetSimulatorEndpoint* New1(::g::Uno::Net::IPEndPoint* proxy1, uString* project1);
};
// }

}}} // ::g::Outracks::Simulator

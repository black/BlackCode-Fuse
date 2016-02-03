// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ProxyClient;}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ProxyClient :1055
// {
uType* ProxyClient_typeof();
void ProxyClient__ctor__fn(ProxyClient* __this);
void ProxyClient__GetSimulatorEndpoint_fn(uObject* proxyEndpoints, uString* project, ::g::Outracks::Simulator::Task** __retval);
void ProxyClient__New1_fn(ProxyClient** __retval);
void ProxyClient__OnNoResult_fn(uObject* exceptions, uArray** __retval);

struct ProxyClient : uObject
{
    void ctor_();
    static ::g::Outracks::Simulator::Task* GetSimulatorEndpoint(uObject* proxyEndpoints, uString* project);
    static ProxyClient* New1();
    static uArray* OnNoResult(uObject* exceptions);
};
// }

}}} // ::g::Outracks::Simulator

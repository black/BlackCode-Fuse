// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ConnectToSimulator;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class ConnectToSimulator :1232
// {
uType* ConnectToSimulator_typeof();
void ConnectToSimulator__ctor__fn(ConnectToSimulator* __this, ::g::Uno::Net::IPEndPoint* endpoint);
void ConnectToSimulator__Execute_fn(ConnectToSimulator* __this, uObject** __retval);
void ConnectToSimulator__New1_fn(::g::Uno::Net::IPEndPoint* endpoint, ConnectToSimulator** __retval);

struct ConnectToSimulator : uObject
{
    uStrong< ::g::Uno::Net::IPEndPoint*> _endpoint;

    void ctor_(::g::Uno::Net::IPEndPoint* endpoint);
    uObject* Execute();
    static ConnectToSimulator* New1(::g::Uno::Net::IPEndPoint* endpoint);
};
// }

}}} // ::g::Outracks::Simulator

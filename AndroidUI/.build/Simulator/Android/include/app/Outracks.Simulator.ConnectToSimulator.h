// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONNECT_TO_SIMULATOR_H__
#define __APP_OUTRACKS_SIMULATOR_CONNECT_TO_SIMULATOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ConnectToSimulator;

struct ConnectToSimulator__uType : ::uClassType
{
};

ConnectToSimulator__uType* ConnectToSimulator__typeof();

void ConnectToSimulator___ObjInit(ConnectToSimulator* __this, ::app::Uno::Net::IPEndPoint* endpoint);
::uObject* ConnectToSimulator__Execute(ConnectToSimulator* __this);
ConnectToSimulator* ConnectToSimulator__New_1(::uStatic* __this, ::app::Uno::Net::IPEndPoint* endpoint);

struct ConnectToSimulator : ::uObject
{
    ::uStrong< ::app::Uno::Net::IPEndPoint*> _endpoint;

    void _ObjInit(::app::Uno::Net::IPEndPoint* endpoint) { ConnectToSimulator___ObjInit(this, endpoint); }
    ::uObject* Execute() { return ConnectToSimulator__Execute(this); }
};

}}}


#endif

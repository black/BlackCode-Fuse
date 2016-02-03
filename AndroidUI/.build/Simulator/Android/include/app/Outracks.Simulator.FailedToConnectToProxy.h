// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_TO_PROXY_H__
#define __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_TO_PROXY_H__

#include <app/Uno.Exception.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Uno_Exception; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct FailedToConnectToProxy;

struct FailedToConnectToProxy__uType : ::app::Uno::Exception__uType
{
};

FailedToConnectToProxy__uType* FailedToConnectToProxy__typeof();

void FailedToConnectToProxy___ObjInit_2(FailedToConnectToProxy* __this, ::uObject* innerExceptions);
FailedToConnectToProxy* FailedToConnectToProxy__New_3(::uStatic* __this, ::uObject* innerExceptions);

struct FailedToConnectToProxy : ::app::Uno::Exception
{
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Uno_Exception*> InnerExceptions;

    void _ObjInit_2(::uObject* innerExceptions) { FailedToConnectToProxy___ObjInit_2(this, innerExceptions); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_TO_SIMULATOR_H__
#define __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_TO_SIMULATOR_H__

#include <app/Uno.Exception.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Uno_Exception; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct FailedToConnectToSimulator;

struct FailedToConnectToSimulator__uType : ::app::Uno::Exception__uType
{
};

FailedToConnectToSimulator__uType* FailedToConnectToSimulator__typeof();

void FailedToConnectToSimulator___ObjInit_2(FailedToConnectToSimulator* __this, ::uObject* innerExceptions);
FailedToConnectToSimulator* FailedToConnectToSimulator__New_3(::uStatic* __this, ::uObject* innerExceptions);

struct FailedToConnectToSimulator : ::app::Uno::Exception
{
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Uno_Exception*> InnerExceptions;

    void _ObjInit_2(::uObject* innerExceptions) { FailedToConnectToSimulator___ObjInit_2(this, innerExceptions); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_H__
#define __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_H__

#include <app/Outracks.Simulator.ShowingModalDialog.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct FailedToConnect;

struct FailedToConnect__uType : ::app::Outracks::Simulator::ShowingModalDialog__uType
{
};

FailedToConnect__uType* FailedToConnect__typeof();

void FailedToConnect___ObjInit_2(FailedToConnect* __this, ::app::Uno::Exception* exception);
FailedToConnect* FailedToConnect__New_2(::uStatic* __this, ::app::Uno::Exception* exception);

struct FailedToConnect : ::app::Outracks::Simulator::ShowingModalDialog
{
    void _ObjInit_2(::app::Uno::Exception* exception) { FailedToConnect___ObjInit_2(this, exception); }
};

}}}


#endif

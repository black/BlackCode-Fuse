// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONNECTION_LOST_H__
#define __APP_OUTRACKS_SIMULATOR_CONNECTION_LOST_H__

#include <app/Outracks.Simulator.ShowingModalDialog.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ConnectionLost;

struct ConnectionLost__uType : ::app::Outracks::Simulator::ShowingModalDialog__uType
{
};

ConnectionLost__uType* ConnectionLost__typeof();

void ConnectionLost___ObjInit_2(ConnectionLost* __this, ::app::Uno::Exception* exception);
void ConnectionLost___ObjInit_3(ConnectionLost* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception);
ConnectionLost* ConnectionLost__New_2(::uStatic* __this, ::app::Uno::Exception* exception);
ConnectionLost* ConnectionLost__New_3(::uStatic* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception);

struct ConnectionLost : ::app::Outracks::Simulator::ShowingModalDialog
{
    void _ObjInit_2(::app::Uno::Exception* exception) { ConnectionLost___ObjInit_2(this, exception); }
    void _ObjInit_3(::app::Outracks::Simulator::Protocol::ExceptionInfo* exception) { ConnectionLost___ObjInit_3(this, exception); }
};

}}}


#endif

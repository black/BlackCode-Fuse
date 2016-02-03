// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONNECTED_H__
#define __APP_OUTRACKS_SIMULATOR_CONNECTED_H__

#include <app/Outracks.Simulator.State.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Error; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Execute; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Connected;

struct Connected__uType : ::app::Outracks::Simulator::State__uType
{
};

Connected__uType* Connected__typeof();

void Connected___ObjInit_1(Connected* __this, ::uObject* client);
::app::Outracks::Simulator::State* Connected__OnConnectionError(Connected* __this, ::app::Outracks::Simulator::Protocol::Error* error);
::app::Outracks::Simulator::State* Connected__OnEnterState(Connected* __this);
::app::Outracks::Simulator::State* Connected__OnExecute(Connected* __this, ::app::Outracks::Simulator::Protocol::Execute* args);
::app::Outracks::Simulator::State* Connected__OnReify(Connected* __this, ::app::Outracks::Simulator::Protocol::Reify* reify);
::app::Outracks::Simulator::State* Connected__OnUpdate(Connected* __this);

struct Connected : ::app::Outracks::Simulator::State
{
    ::uStrong< ::uObject*> Client;

    void _ObjInit_1(::uObject* client) { Connected___ObjInit_1(this, client); }
    ::app::Outracks::Simulator::State* OnConnectionError(::app::Outracks::Simulator::Protocol::Error* error) { return Connected__OnConnectionError(this, error); }
    ::app::Outracks::Simulator::State* OnExecute(::app::Outracks::Simulator::Protocol::Execute* args) { return Connected__OnExecute(this, args); }
    ::app::Outracks::Simulator::State* OnReify(::app::Outracks::Simulator::Protocol::Reify* reify) { return Connected__OnReify(this, reify); }
};

}}}


#endif

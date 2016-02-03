// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNNING_H__
#define __APP_OUTRACKS_SIMULATOR_RUNNING_H__

#include <app/Outracks.Simulator.Connected.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }
namespace app { namespace Outracks { namespace Simulator { struct State; } } }
namespace app { namespace Outracks { namespace Simulator { struct UserAppState; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Running;

struct Running__uType : ::app::Outracks::Simulator::Connected__uType
{
};

Running__uType* Running__typeof();

void Running___ObjInit_2(Running* __this, ::uObject* client, ::app::Outracks::Simulator::UserAppState* userApp, ::app::Outracks::Simulator::Protocol::Reify* runningReify);
Running* Running__New_1(::uStatic* __this, ::uObject* client, ::app::Outracks::Simulator::UserAppState* userApp, ::app::Outracks::Simulator::Protocol::Reify* runningReify);
::app::Outracks::Simulator::State* Running__OnEnterState(Running* __this);
::app::Outracks::Simulator::State* Running__OnException(Running* __this, ::app::Uno::Exception* e);
void Running__OnLeaveState(Running* __this);
::app::Outracks::Simulator::State* Running__OnUpdate(Running* __this);
float Running__QueryDensity(::uStatic* __this);

struct Running : ::app::Outracks::Simulator::Connected
{
    ::uStrong< ::app::Outracks::Simulator::Protocol::Reify*> _runningReify;
    float _zoomWhenRooted;
    ::uStrong< ::app::Outracks::Simulator::UserAppState*> _userApp;

    void _ObjInit_2(::uObject* client, ::app::Outracks::Simulator::UserAppState* userApp, ::app::Outracks::Simulator::Protocol::Reify* runningReify) { Running___ObjInit_2(this, client, userApp, runningReify); }
};

}}}


#endif

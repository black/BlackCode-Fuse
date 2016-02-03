// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RESTARTING_H__
#define __APP_OUTRACKS_SIMULATOR_RESTARTING_H__

#include <app/Outracks.Simulator.Connected.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }
namespace app { namespace Outracks { namespace Simulator { struct State; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Restarting;

struct Restarting__uType : ::app::Outracks::Simulator::Connected__uType
{
};

Restarting__uType* Restarting__typeof();

void Restarting___ObjInit_2(Restarting* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* fallbackReify);
::app::Outracks::Simulator::Protocol::Reify* Restarting__GetLatestReify(Restarting* __this);
Restarting* Restarting__New_1(::uStatic* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* fallbackReify);
::app::Outracks::Simulator::State* Restarting__OnEnterState(Restarting* __this);

struct Restarting : ::app::Outracks::Simulator::Connected
{
    ::uStrong< ::app::Outracks::Simulator::Protocol::Reify*> _fallbackReify;

    void _ObjInit_2(::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* fallbackReify) { Restarting___ObjInit_2(this, client, fallbackReify); }
    ::app::Outracks::Simulator::Protocol::Reify* GetLatestReify() { return Restarting__GetLatestReify(this); }
};

}}}


#endif

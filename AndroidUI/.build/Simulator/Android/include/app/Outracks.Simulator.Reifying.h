// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_REIFYING_H__
#define __APP_OUTRACKS_SIMULATOR_REIFYING_H__

#include <app/Outracks.Simulator.Connected.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }
namespace app { namespace Outracks { namespace Simulator { struct State; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Reifying;

struct Reifying__uType : ::app::Outracks::Simulator::Connected__uType
{
};

Reifying__uType* Reifying__typeof();

void Reifying___ObjInit_2(Reifying* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* reify);
Reifying* Reifying__New_1(::uStatic* __this, ::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* reify);
::app::Outracks::Simulator::State* Reifying__OnEnterState(Reifying* __this);

struct Reifying : ::app::Outracks::Simulator::Connected
{
    ::uStrong< ::app::Outracks::Simulator::Protocol::Reify*> _reify;

    void _ObjInit_2(::uObject* client, ::app::Outracks::Simulator::Protocol::Reify* reify) { Reifying___ObjInit_2(this, client, reify); }
};

}}}


#endif

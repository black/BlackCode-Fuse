// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IDLE_H__
#define __APP_OUTRACKS_SIMULATOR_IDLE_H__

#include <app/Outracks.Simulator.Connected.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Idle;

struct Idle__uType : ::app::Outracks::Simulator::Connected__uType
{
};

Idle__uType* Idle__typeof();

void Idle___ObjInit_2(Idle* __this, ::uObject* client);
Idle* Idle__New_1(::uStatic* __this, ::uObject* client);
::app::Outracks::Simulator::State* Idle__OnEnterState(Idle* __this);
void Idle__SendDebugLog(Idle* __this, ::uString* text, int type);

struct Idle : ::app::Outracks::Simulator::Connected
{
    void _ObjInit_2(::uObject* client) { Idle___ObjInit_2(this, client); }
    void SendDebugLog(::uString* text, int type) { Idle__SendDebugLog(this, text, type); }
};

}}}


#endif

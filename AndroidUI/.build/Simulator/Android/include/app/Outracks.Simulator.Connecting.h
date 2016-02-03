// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONNECTING_H__
#define __APP_OUTRACKS_SIMULATOR_CONNECTING_H__

#include <app/Outracks.Simulator.State.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Connecting;

struct Connecting__uType : ::app::Outracks::Simulator::State__uType
{
};

Connecting__uType* Connecting__typeof();

void Connecting___ObjInit_1(Connecting* __this);
::app::Outracks::Simulator::State* Connecting__OnException(Connecting* __this, ::app::Uno::Exception* e);

struct Connecting : ::app::Outracks::Simulator::State
{
    void _ObjInit_1() { Connecting___ObjInit_1(this); }
};

}}}


#endif

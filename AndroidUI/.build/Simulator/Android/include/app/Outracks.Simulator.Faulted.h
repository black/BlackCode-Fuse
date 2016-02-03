// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FAULTED_H__
#define __APP_OUTRACKS_SIMULATOR_FAULTED_H__

#include <app/Outracks.Simulator.ShowingModalDialog.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Faulted;

struct Faulted__uType : ::app::Outracks::Simulator::ShowingModalDialog__uType
{
};

Faulted__uType* Faulted__typeof();

void Faulted___ObjInit_2(Faulted* __this, ::app::Uno::Exception* exception, ::app::Outracks::Simulator::State* ignore, ::app::Outracks::Simulator::State* restart);
Faulted* Faulted__New_2(::uStatic* __this, ::app::Uno::Exception* exception, ::app::Outracks::Simulator::State* ignore, ::app::Outracks::Simulator::State* restart);

struct Faulted : ::app::Outracks::Simulator::ShowingModalDialog
{
    void _ObjInit_2(::app::Uno::Exception* exception, ::app::Outracks::Simulator::State* ignore, ::app::Outracks::Simulator::State* restart) { Faulted___ObjInit_2(this, exception, ignore, restart); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__
#define __APP_OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct DialogButton;

struct DialogButton__uType : ::uClassType
{
};

DialogButton__uType* DialogButton__typeof();

void DialogButton___ObjInit(DialogButton* __this, ::uString* text, ::app::Outracks::Simulator::State* destination);
DialogButton* DialogButton__New_1(::uStatic* __this, ::uString* text, ::app::Outracks::Simulator::State* destination);

struct DialogButton : ::uObject
{
    ::uStrong< ::uString*> Text;
    ::uStrong< ::app::Outracks::Simulator::State*> Destination;

    void _ObjInit(::uString* text, ::app::Outracks::Simulator::State* destination) { DialogButton___ObjInit(this, text, destination); }
};

}}}


#endif

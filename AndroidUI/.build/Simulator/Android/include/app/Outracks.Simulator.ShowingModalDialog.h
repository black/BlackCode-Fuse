// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_SHOWING_MODAL_DIALOG_H__
#define __APP_OUTRACKS_SIMULATOR_SHOWING_MODAL_DIALOG_H__

#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_DialogButton.h>
#include <app/Outracks.Simulator.State.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ShowingModalDialog;

struct ShowingModalDialog__uType : ::app::Outracks::Simulator::State__uType
{
};

ShowingModalDialog__uType* ShowingModalDialog__typeof();

void ShowingModalDialog___ObjInit_1(ShowingModalDialog* __this, ::uString* header, ::uString* body, ::uString* details, ::uArray* buttons);
ShowingModalDialog* ShowingModalDialog__New_1(::uStatic* __this, ::uString* header, ::uString* body, ::uString* details, ::uArray* buttons);
void ShowingModalDialog__OnButtonClicked(ShowingModalDialog* __this, ::app::Outracks::Simulator::DialogButton* button);
::app::Outracks::Simulator::State* ShowingModalDialog__OnEnterState(ShowingModalDialog* __this);
::app::Outracks::Simulator::State* ShowingModalDialog__OnUpdate(ShowingModalDialog* __this);

struct ShowingModalDialog : ::app::Outracks::Simulator::State
{
    ::uStrong< ::uString*> _header;
    ::uStrong< ::uString*> _body;
    ::uStrong< ::uString*> _details;
    ::uStrong< ::uArray*> _buttons;
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_DialogButton _clickedButton;

    void _ObjInit_1(::uString* header, ::uString* body, ::uString* details, ::uArray* buttons) { ShowingModalDialog___ObjInit_1(this, header, body, details, buttons); }
    void OnButtonClicked(::app::Outracks::Simulator::DialogButton* button) { ShowingModalDialog__OnButtonClicked(this, button); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_APPLY__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__
#define __APP_OUTRACKS_SIMULATOR_APPLY__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Apply__Outracks_Simulator_DialogButton;

struct Apply__Outracks_Simulator_DialogButton__uType : ::uClassType
{
};

Apply__Outracks_Simulator_DialogButton__uType* Apply__Outracks_Simulator_DialogButton__typeof();

void Apply__Outracks_Simulator_DialogButton___ObjInit(Apply__Outracks_Simulator_DialogButton* __this, ::uDelegate* action, ::app::Outracks::Simulator::DialogButton* arg1);
void Apply__Outracks_Simulator_DialogButton__Execute(Apply__Outracks_Simulator_DialogButton* __this);
Apply__Outracks_Simulator_DialogButton* Apply__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uDelegate* action, ::app::Outracks::Simulator::DialogButton* arg1);

struct Apply__Outracks_Simulator_DialogButton : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Outracks::Simulator::DialogButton*> _arg1;

    void _ObjInit(::uDelegate* action, ::app::Outracks::Simulator::DialogButton* arg1) { Apply__Outracks_Simulator_DialogButton___ObjInit(this, action, arg1); }
    void Execute() { Apply__Outracks_Simulator_DialogButton__Execute(this); }
};

}}}


#endif

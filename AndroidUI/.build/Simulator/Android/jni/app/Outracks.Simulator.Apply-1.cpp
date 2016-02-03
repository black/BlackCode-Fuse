#include <app/Outracks.Simulator.Apply__Outracks_Simulator_DialogButton.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Uno.Action__Outracks_Simulator_DialogButton.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Apply__Outracks_Simulator_DialogButton__uType* Apply__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<Apply__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (Apply__Outracks_Simulator_DialogButton__uType*)::uAllocClassType(sizeof(Apply__Outracks_Simulator_DialogButton__uType), "Outracks.Simulator.Apply<Outracks.Simulator.DialogButton>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Apply__Outracks_Simulator_DialogButton, _action),
        "_arg1", offsetof(Apply__Outracks_Simulator_DialogButton, _arg1));

    return type;
}

void Apply__Outracks_Simulator_DialogButton___ObjInit(Apply__Outracks_Simulator_DialogButton* __this, ::uDelegate* action, ::app::Outracks::Simulator::DialogButton* arg1)
{
    __this->_action = action;
    __this->_arg1 = arg1;
}

void Apply__Outracks_Simulator_DialogButton__Execute(Apply__Outracks_Simulator_DialogButton* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::DialogButton*>(__this->_arg1);
}

Apply__Outracks_Simulator_DialogButton* Apply__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uDelegate* action, ::app::Outracks::Simulator::DialogButton* arg1)
{
    Apply__Outracks_Simulator_DialogButton* inst = (Apply__Outracks_Simulator_DialogButton*)::uAllocObject(sizeof(Apply__Outracks_Simulator_DialogButton), Apply__Outracks_Simulator_DialogButton__typeof());
    inst->_ObjInit(action, arg1);
    return inst;
}

}}}

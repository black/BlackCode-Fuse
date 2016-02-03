// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CHANGE_IP_H__
#define __APP_OUTRACKS_SIMULATOR_CHANGE_IP_H__

#include <app/Outracks.Simulator.ShowingPrompt.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ChangeIp;

struct ChangeIp__uType : ::app::Outracks::Simulator::ShowingPrompt__uType
{
};

ChangeIp__uType* ChangeIp__typeof();

void ChangeIp___ObjInit_2(ChangeIp* __this);
ChangeIp* ChangeIp__New_1(::uStatic* __this);
::app::Outracks::Simulator::State* ChangeIp__OnCancel(ChangeIp* __this);
::app::Outracks::Simulator::State* ChangeIp__OnOk(ChangeIp* __this, ::uString* input);

struct ChangeIp : ::app::Outracks::Simulator::ShowingPrompt
{
    void _ObjInit_2() { ChangeIp___ObjInit_2(this); }
};

}}}


#endif

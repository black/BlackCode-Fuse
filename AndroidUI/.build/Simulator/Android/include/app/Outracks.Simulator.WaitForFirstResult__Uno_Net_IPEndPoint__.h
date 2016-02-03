// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_WAIT_FOR_FIRST_RESULT__UNO_NET_I_P_END_POINT___H__
#define __APP_OUTRACKS_SIMULATOR_WAIT_FOR_FIRST_RESULT__UNO_NET_I_P_END_POINT___H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___; } } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct WaitForFirstResult__Uno_Net_IPEndPoint__;

struct WaitForFirstResult__Uno_Net_IPEndPoint____uType : ::uClassType
{
};

WaitForFirstResult__Uno_Net_IPEndPoint____uType* WaitForFirstResult__Uno_Net_IPEndPoint____typeof();

void WaitForFirstResult__Uno_Net_IPEndPoint_____ObjInit(WaitForFirstResult__Uno_Net_IPEndPoint__* __this, ::uObject* pending, ::uDelegate* onNoResult);
::uArray* WaitForFirstResult__Uno_Net_IPEndPoint____Execute(WaitForFirstResult__Uno_Net_IPEndPoint__* __this);
WaitForFirstResult__Uno_Net_IPEndPoint__* WaitForFirstResult__Uno_Net_IPEndPoint____New_1(::uStatic* __this, ::uObject* pending, ::uDelegate* onNoResult);

struct WaitForFirstResult__Uno_Net_IPEndPoint__ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*> _pending;
    ::uStrong< ::uDelegate*> _onNoResult;

    void _ObjInit(::uObject* pending, ::uDelegate* onNoResult) { WaitForFirstResult__Uno_Net_IPEndPoint_____ObjInit(this, pending, onNoResult); }
    ::uArray* Execute() { return WaitForFirstResult__Uno_Net_IPEndPoint____Execute(this); }
};

}}}


#endif

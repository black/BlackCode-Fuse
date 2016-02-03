// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FORGET__OUTRACKS_SIMULATOR_PROTOCOL_DEBUG_LOG__CHAR_H__
#define __APP_OUTRACKS_SIMULATOR_FORGET__OUTRACKS_SIMULATOR_PROTOCOL_DEBUG_LOG__CHAR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct DebugLog; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Forget__Outracks_Simulator_Protocol_DebugLog__char;

struct Forget__Outracks_Simulator_Protocol_DebugLog__char__uType : ::uClassType
{
};

Forget__Outracks_Simulator_Protocol_DebugLog__char__uType* Forget__Outracks_Simulator_Protocol_DebugLog__char__typeof();

void Forget__Outracks_Simulator_Protocol_DebugLog__char___ObjInit(Forget__Outracks_Simulator_Protocol_DebugLog__char* __this, ::uChar result);
::uChar Forget__Outracks_Simulator_Protocol_DebugLog__char__Execute(Forget__Outracks_Simulator_Protocol_DebugLog__char* __this, ::app::Outracks::Simulator::Protocol::DebugLog* _);
Forget__Outracks_Simulator_Protocol_DebugLog__char* Forget__Outracks_Simulator_Protocol_DebugLog__char__New_1(::uStatic* __this, ::uChar result);

struct Forget__Outracks_Simulator_Protocol_DebugLog__char : ::uObject
{
    ::uChar _result;

    void _ObjInit(::uChar result) { Forget__Outracks_Simulator_Protocol_DebugLog__char___ObjInit(this, result); }
    ::uChar Execute(::app::Outracks::Simulator::Protocol::DebugLog* _) { return Forget__Outracks_Simulator_Protocol_DebugLog__char__Execute(this, _); }
};

}}}


#endif

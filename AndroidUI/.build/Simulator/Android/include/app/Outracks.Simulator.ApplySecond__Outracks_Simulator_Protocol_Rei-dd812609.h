// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_APPLY_SECOND__OUTRACKS_SIMULATOR_PROTOCOL_REI_DD812609_H__
#define __APP_OUTRACKS_SIMULATOR_APPLY_SECOND__OUTRACKS_SIMULATOR_PROTOCOL_REI_DD812609_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter;

struct ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__uType : ::uClassType
{
};

ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__typeof();

void ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2);
void ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::Reify* arg1);
ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2);

struct ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Uno::IO::BinaryWriter*> _arg2;

    void _ObjInit(::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2) { ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter___ObjInit(this, action, arg2); }
    void Execute(::app::Outracks::Simulator::Protocol::Reify* arg1) { ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__Execute(this, arg1); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_ERROR_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_ERROR_H__

#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct Error;

struct Error__uType : ::app::Outracks::Simulator::Protocol::MessageToClient__uType
{
};

Error__uType* Error__typeof();

void Error___ObjInit_1(Error* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception);
Error* Error__New_1(::uStatic* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception);
Error* Error__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Error__ToString(Error* __this);
void Error__Write_1(::uStatic* __this, Error* e, ::app::Uno::IO::BinaryWriter* writer);

struct Error : ::app::Outracks::Simulator::Protocol::MessageToClient
{
    ::uStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*> Exception;

    void _ObjInit_1(::app::Outracks::Simulator::Protocol::ExceptionInfo* exception) { Error___ObjInit_1(this, exception); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_EXCEPTION_INFO_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_EXCEPTION_INFO_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct ExceptionInfo;

struct ExceptionInfo__uType : ::uClassType
{
};

ExceptionInfo__uType* ExceptionInfo__typeof();

void ExceptionInfo___ObjInit(ExceptionInfo* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uString* message, ::uString* stackTrace, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* innerExceptions);
ExceptionInfo* ExceptionInfo__Capture(::uStatic* __this, ::app::Uno::Exception* e);
ExceptionInfo* ExceptionInfo__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uString* message, ::uString* stackTrace, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* innerExceptions);
ExceptionInfo* ExceptionInfo__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void ExceptionInfo__Write(::uStatic* __this, ExceptionInfo* e, ::app::Uno::IO::BinaryWriter* writer);

struct ExceptionInfo : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> Type;
    ::uStrong< ::uString*> Message;
    ::uStrong< ::uString*> StackTrace;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo*> InnerExceptions;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::TypeName* type, ::uString* message, ::uString* stackTrace, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* innerExceptions) { ExceptionInfo___ObjInit(this, type, message, stackTrace, innerExceptions); }
};

}}}}


#endif

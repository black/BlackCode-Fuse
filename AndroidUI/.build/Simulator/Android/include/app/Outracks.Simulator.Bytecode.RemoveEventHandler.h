// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_REMOVE_EVENT_HANDLER_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_REMOVE_EVENT_HANDLER_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct RemoveEventHandler;

struct RemoveEventHandler__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

RemoveEventHandler__uType* RemoveEventHandler__typeof();

void RemoveEventHandler___ObjInit_2(RemoveEventHandler* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler);
RemoveEventHandler* RemoveEventHandler__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler);
RemoveEventHandler* RemoveEventHandler__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* RemoveEventHandler__ToString(RemoveEventHandler* __this);
void RemoveEventHandler__Write_2(RemoveEventHandler* __this, ::app::Uno::IO::BinaryWriter* writer);
void RemoveEventHandler__Write_3(::uStatic* __this, RemoveEventHandler* o, ::app::Uno::IO::BinaryWriter* writer);

struct RemoveEventHandler : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> Event;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Handler;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler) { RemoveEventHandler___ObjInit_2(this, o, ev, handler); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { RemoveEventHandler__Write_2(this, writer); }
};

}}}}


#endif

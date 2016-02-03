// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_ADD_EVENT_HANDLER_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_ADD_EVENT_HANDLER_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct AddEventHandler;

struct AddEventHandler__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

AddEventHandler__uType* AddEventHandler__typeof();

void AddEventHandler___ObjInit_2(AddEventHandler* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler);
AddEventHandler* AddEventHandler__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler);
AddEventHandler* AddEventHandler__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* AddEventHandler__ToString(AddEventHandler* __this);
void AddEventHandler__Write_2(::uStatic* __this, AddEventHandler* o, ::app::Uno::IO::BinaryWriter* writer);
void AddEventHandler__Write_3(AddEventHandler* __this, ::app::Uno::IO::BinaryWriter* writer);

struct AddEventHandler : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> Event;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Handler;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler) { AddEventHandler___ObjInit_2(this, o, ev, handler); }
    void Write_3(::app::Uno::IO::BinaryWriter* writer) { AddEventHandler__Write_3(this, writer); }
};

}}}}


#endif

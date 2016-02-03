// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct AddEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class AddEventHandler :614
// {
uType* AddEventHandler_typeof();
void AddEventHandler__ctor_2_fn(AddEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
void AddEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, AddEventHandler** __retval);
void AddEventHandler__Read2_fn(::g::Uno::IO::BinaryReader* reader, AddEventHandler** __retval);
void AddEventHandler__ToString_fn(AddEventHandler* __this, uString** __retval);
void AddEventHandler__Write2_fn(AddEventHandler* o, ::g::Uno::IO::BinaryWriter* writer);
void AddEventHandler__Write3_fn(AddEventHandler* __this, ::g::Uno::IO::BinaryWriter* writer);

struct AddEventHandler : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Event;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Handler;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    void Write3(::g::Uno::IO::BinaryWriter* writer);
    static AddEventHandler* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    static AddEventHandler* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(AddEventHandler* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct RemoveEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class RemoveEventHandler :656
// {
uType* RemoveEventHandler_typeof();
void RemoveEventHandler__ctor_2_fn(RemoveEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
void RemoveEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, RemoveEventHandler** __retval);
void RemoveEventHandler__Read2_fn(::g::Uno::IO::BinaryReader* reader, RemoveEventHandler** __retval);
void RemoveEventHandler__ToString_fn(RemoveEventHandler* __this, uString** __retval);
void RemoveEventHandler__Write2_fn(RemoveEventHandler* o, ::g::Uno::IO::BinaryWriter* writer);
void RemoveEventHandler__Write3_fn(RemoveEventHandler* __this, ::g::Uno::IO::BinaryWriter* writer);

struct RemoveEventHandler : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Event;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Handler;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    void Write3(::g::Uno::IO::BinaryWriter* writer);
    static RemoveEventHandler* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    static RemoveEventHandler* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(RemoveEventHandler* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

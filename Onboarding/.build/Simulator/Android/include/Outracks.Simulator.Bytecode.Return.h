// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Statement.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Return;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Return :1789
// {
uType* Return_typeof();
void Return__ctor_1_fn(Return* __this, ::g::Outracks::Simulator::Bytecode::Expression* value);
void Return__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* value, Return** __retval);
void Return__Read1_fn(::g::Uno::IO::BinaryReader* reader, Return** __retval);
void Return__ToString_fn(Return* __this, uString** __retval);
void Return__Write1_fn(Return* s, ::g::Uno::IO::BinaryWriter* writer);
void Return__Write2_fn(Return* __this, ::g::Uno::IO::BinaryWriter* writer);

struct Return : ::g::Outracks::Simulator::Bytecode::Statement
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Value;

    void ctor_1(::g::Outracks::Simulator::Bytecode::Expression* value);
    void Write2(::g::Uno::IO::BinaryWriter* writer);
    static Return* New1(::g::Outracks::Simulator::Bytecode::Expression* value);
    static Return* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(Return* s, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

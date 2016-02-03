// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BindVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class BindVariable :1519
// {
uType* BindVariable_typeof();
void BindVariable__ctor__fn(BindVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression);
void BindVariable___Read_fn(::g::Uno::IO::BinaryReader* reader, BindVariable** __retval);
void BindVariable___Write_fn(BindVariable* s, ::g::Uno::IO::BinaryWriter* writer);
void BindVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression, BindVariable** __retval);
void BindVariable__ToString_fn(BindVariable* __this, uString** __retval);

struct BindVariable : uObject
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Expression;
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return BindVariable_typeof()->Init(), Read_; }
    uStrong< ::g::Outracks::Simulator::Bytecode::Variable*> Variable;
    static uSStrong<uDelegate*> Write_;
    static uSStrong<uDelegate*>& Write() { return BindVariable_typeof()->Init(), Write_; }

    void ctor_(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression);
    static BindVariable* _Read(::g::Uno::IO::BinaryReader* reader);
    static void _Write(BindVariable* s, ::g::Uno::IO::BinaryWriter* writer);
    static BindVariable* New1(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

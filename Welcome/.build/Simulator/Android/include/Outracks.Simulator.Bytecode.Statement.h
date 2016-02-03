// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NoOperation;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Return;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public abstract class Statement :917
// {
uType* Statement_typeof();
void Statement__ctor__fn(Statement* __this);
void Statement___Read_fn(::g::Uno::IO::BinaryReader* reader, Statement** __retval);
void Statement___Write_fn(Statement* statement, ::g::Uno::IO::BinaryWriter* writer);
void Statement__Match_fn(Statement* __this, uDelegate* a1, uDelegate* a3, uDelegate* a4);
void Statement__Match1_fn(Statement* __this, uType* __type, uDelegate* a1, uDelegate* a3, uDelegate* a4, uTRef __retval);
void Statement__Nop_fn(Statement** __retval);
void Statement__op_Addition_fn(Statement* left, Statement* right, uObject** __retval);
void Statement__op_Addition1_fn(Statement* statement, uObject* statements, uObject** __retval);
void Statement__op_Addition2_fn(uObject* statements, Statement* statement, uObject** __retval);

struct Statement : uObject
{
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return Statement_typeof()->Init(), Read_; }
    static uSStrong<uDelegate*> Write_;
    static uSStrong<uDelegate*>& Write() { return Statement_typeof()->Init(), Write_; }

    void ctor_();
    void Match(uDelegate* a1, uDelegate* a3, uDelegate* a4);
    template<class T>
    T Match1(uType* __type, uDelegate* a1, uDelegate* a3, uDelegate* a4) { T __retval; return Statement__Match1_fn(this, __type, a1, a3, a4, &__retval), __retval; }
    static Statement* _Read(::g::Uno::IO::BinaryReader* reader);
    static void _Write(Statement* statement, ::g::Uno::IO::BinaryWriter* writer);
    static Statement* Nop();
    static uObject* op_Addition(Statement* left, Statement* right);
    static uObject* op_Addition1(Statement* statement, uObject* statements);
    static uObject* op_Addition2(uObject* statements, Statement* statement);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

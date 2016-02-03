// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Statement.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct AddEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallDynamicMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallLambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallStaticMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Instantiate;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct IsType;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct LogicalOr;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct MethodGroup;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadStaticField;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct RemoveEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct WriteProperty;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public abstract class Expression :57
// {
uType* Expression_typeof();
void Expression__ctor_1_fn(Expression* __this);
void Expression___Read1_fn(::g::Uno::IO::BinaryReader* reader, Expression** __retval);
void Expression___Write1_fn(Expression* expression, ::g::Uno::IO::BinaryWriter* writer);
void Expression__Match2_fn(Expression* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16);
void Expression__Match3_fn(Expression* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16, uTRef __retval);
void Expression__Throw_fn(::g::Uno::Exception* e, Expression** __retval);

struct Expression : ::g::Outracks::Simulator::Bytecode::Statement
{
    static uSStrong<uDelegate*> Read1_;
    static uSStrong<uDelegate*>& Read1() { return Expression_typeof()->Init(), Read1_; }
    static uSStrong<uDelegate*> Write1_;
    static uSStrong<uDelegate*>& Write1() { return Expression_typeof()->Init(), Write1_; }

    void ctor_1();
    void Match2(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16);
    template<class T>
    T Match3(uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16) { T __retval; return Expression__Match3_fn(this, __type, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16, &__retval), __retval; }
    static Expression* _Read1(::g::Uno::IO::BinaryReader* reader);
    static void _Write1(Expression* expression, ::g::Uno::IO::BinaryWriter* writer);
    static Expression* Throw(::g::Uno::Exception* e);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

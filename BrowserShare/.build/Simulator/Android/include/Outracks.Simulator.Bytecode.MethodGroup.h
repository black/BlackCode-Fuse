// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct MethodGroup;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class MethodGroup :8
// {
uType* MethodGroup_typeof();
void MethodGroup__ctor_2_fn(MethodGroup* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType);
void MethodGroup__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, MethodGroup** __retval);
void MethodGroup__Read2_fn(::g::Uno::IO::BinaryReader* reader, MethodGroup** __retval);
void MethodGroup__ToString_fn(MethodGroup* __this, uString** __retval);
void MethodGroup__Write2_fn(MethodGroup* l, ::g::Uno::IO::BinaryWriter* writer);

struct MethodGroup : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> DelegateType;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> MethodName;
    uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> MethodSignature;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType);
    static MethodGroup* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType);
    static MethodGroup* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(MethodGroup* l, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode

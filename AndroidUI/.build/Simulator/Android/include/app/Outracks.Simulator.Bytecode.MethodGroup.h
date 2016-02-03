// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_METHOD_GROUP_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_METHOD_GROUP_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Signature; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct MethodGroup;

struct MethodGroup__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

MethodGroup__uType* MethodGroup__typeof();

void MethodGroup___ObjInit_2(MethodGroup* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType);
MethodGroup* MethodGroup__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType);
MethodGroup* MethodGroup__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* MethodGroup__ToString(MethodGroup* __this);
void MethodGroup__Write_2(::uStatic* __this, MethodGroup* l, ::app::Uno::IO::BinaryWriter* writer);

struct MethodGroup : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> MethodName;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Signature*> MethodSignature;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> DelegateType;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType) { MethodGroup___ObjInit_2(this, o, methodName, methodSignature, delegateType); }
};

}}}}


#endif

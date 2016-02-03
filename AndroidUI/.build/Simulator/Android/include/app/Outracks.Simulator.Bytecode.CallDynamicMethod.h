// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_CALL_DYNAMIC_METHOD_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_CALL_DYNAMIC_METHOD_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Expression; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct CallDynamicMethod;

struct CallDynamicMethod__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

CallDynamicMethod__uType* CallDynamicMethod__typeof();

void CallDynamicMethod___ObjInit_2(CallDynamicMethod* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::uArray* arguments);
void CallDynamicMethod___ObjInit_3(CallDynamicMethod* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
CallDynamicMethod* CallDynamicMethod__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::uArray* arguments);
CallDynamicMethod* CallDynamicMethod__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
CallDynamicMethod* CallDynamicMethod__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* CallDynamicMethod__ToString(CallDynamicMethod* __this);
void CallDynamicMethod__Write_2(CallDynamicMethod* __this, ::app::Uno::IO::BinaryWriter* writer);
void CallDynamicMethod__Write_3(::uStatic* __this, CallDynamicMethod* o, ::app::Uno::IO::BinaryWriter* writer);

struct CallDynamicMethod : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> Method;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*> Arguments;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::uArray* arguments) { CallDynamicMethod___ObjInit_2(this, o, method, arguments); }
    void _ObjInit_3(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments) { CallDynamicMethod___ObjInit_3(this, o, method, arguments); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { CallDynamicMethod__Write_2(this, writer); }
};

}}}}


#endif

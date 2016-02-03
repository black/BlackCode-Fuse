// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_CALL_STATIC_METHOD_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_CALL_STATIC_METHOD_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct StaticMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Expression; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct CallStaticMethod;

struct CallStaticMethod__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

CallStaticMethod__uType* CallStaticMethod__typeof();

void CallStaticMethod___ObjInit_2(CallStaticMethod* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::uArray* arguments);
void CallStaticMethod___ObjInit_3(CallStaticMethod* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
CallStaticMethod* CallStaticMethod__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::uArray* arguments);
CallStaticMethod* CallStaticMethod__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
CallStaticMethod* CallStaticMethod__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* CallStaticMethod__ToString(CallStaticMethod* __this);
void CallStaticMethod__Write_2(CallStaticMethod* __this, ::app::Uno::IO::BinaryWriter* writer);
void CallStaticMethod__Write_3(::uStatic* __this, CallStaticMethod* o, ::app::Uno::IO::BinaryWriter* writer);

struct CallStaticMethod : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::StaticMemberName*> StaticMethod;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*> Arguments;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::uArray* arguments) { CallStaticMethod___ObjInit_2(this, staticMethod, arguments); }
    void _ObjInit_3(::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments) { CallStaticMethod___ObjInit_3(this, staticMethod, arguments); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { CallStaticMethod__Write_2(this, writer); }
};

}}}}


#endif

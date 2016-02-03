// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_INSTANTIATE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_INSTANTIATE_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Expression; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Instantiate;

struct Instantiate__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

Instantiate__uType* Instantiate__typeof();

void Instantiate___ObjInit_2(Instantiate* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uArray* arguments);
void Instantiate___ObjInit_3(Instantiate* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
Instantiate* Instantiate__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uArray* arguments);
Instantiate* Instantiate__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
Instantiate* Instantiate__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Instantiate__ToString(Instantiate* __this);
void Instantiate__Write_2(Instantiate* __this, ::app::Uno::IO::BinaryWriter* writer);
void Instantiate__Write_3(::uStatic* __this, Instantiate* o, ::app::Uno::IO::BinaryWriter* writer);

struct Instantiate : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> Type;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*> Arguments;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::TypeName* type, ::uArray* arguments) { Instantiate___ObjInit_2(this, type, arguments); }
    void _ObjInit_3(::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments) { Instantiate___ObjInit_3(this, type, arguments); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { Instantiate__Write_2(this, writer); }
};

}}}}


#endif

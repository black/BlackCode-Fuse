// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_IS_TYPE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_IS_TYPE_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct IsType;

struct IsType__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

IsType__uType* IsType__typeof();

void IsType___ObjInit_2(IsType* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes);
IsType* IsType__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes);
IsType* IsType__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void IsType__Write_2(IsType* __this, ::app::Uno::IO::BinaryWriter* writer);
void IsType__Write_3(::uStatic* __this, IsType* o, ::app::Uno::IO::BinaryWriter* writer);

struct IsType : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> Type;
    bool IncludeSubtypes;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes) { IsType___ObjInit_2(this, o, type, includeSubtypes); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { IsType__Write_2(this, writer); }
};

}}}}


#endif

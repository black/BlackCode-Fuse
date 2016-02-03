// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_READ_STATIC_FIELD_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_READ_STATIC_FIELD_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct StaticMemberName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct ReadStaticField;

struct ReadStaticField__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

ReadStaticField__uType* ReadStaticField__typeof();

void ReadStaticField___ObjInit_2(ReadStaticField* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* field);
ReadStaticField* ReadStaticField__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* field);
ReadStaticField* ReadStaticField__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* ReadStaticField__ToString(ReadStaticField* __this);
void ReadStaticField__Write_2(ReadStaticField* __this, ::app::Uno::IO::BinaryWriter* writer);
void ReadStaticField__Write_3(::uStatic* __this, ReadStaticField* o, ::app::Uno::IO::BinaryWriter* writer);

struct ReadStaticField : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::StaticMemberName*> Field;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::StaticMemberName* field) { ReadStaticField___ObjInit_2(this, field); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { ReadStaticField__Write_2(this, writer); }
};

}}}}


#endif

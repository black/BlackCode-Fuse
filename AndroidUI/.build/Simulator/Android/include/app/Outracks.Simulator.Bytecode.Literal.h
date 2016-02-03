// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_LITERAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_LITERAL_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Literal;

struct Literal__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

Literal__uType* Literal__typeof();

void Literal___ObjInit_2(Literal* __this);
::uChar Literal__Match__char_2(Literal* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5);
::uObject* Literal__Match__object_2(Literal* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5);
void Literal__Match_2(Literal* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5);
Literal* Literal__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void Literal__Write_2(::uStatic* __this, Literal* literal, ::app::Uno::IO::BinaryWriter* writer);

struct Literal : ::app::Outracks::Simulator::Bytecode::Expression
{
    void _ObjInit_2() { Literal___ObjInit_2(this); }
    ::uChar Match__char_2(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5) { return Literal__Match__char_2(this, a1, a2, a3, a4, a5); }
    ::uObject* Match__object_2(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5) { return Literal__Match__object_2(this, a1, a2, a3, a4, a5); }
    void Match_2(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5) { Literal__Match_2(this, a1, a2, a3, a4, a5); }
};

}}}}


#endif

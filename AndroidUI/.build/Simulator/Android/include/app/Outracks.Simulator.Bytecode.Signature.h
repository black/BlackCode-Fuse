// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_SIGNATURE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_SIGNATURE_H__

#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-1ce5ab6b.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Parameter; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Signature;

struct Signature__uType : ::uClassType
{
};

Signature__uType* Signature__typeof();

void Signature___ObjInit(Signature* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName returnType);
Signature* Signature__Action(::uStatic* __this, ::uArray* variables);
Signature* Signature__Func(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* returnType, ::uArray* variables);
Signature* Signature__New_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName returnType);
Signature* Signature__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Signature__ToString(Signature* __this);
void Signature__Write(::uStatic* __this, Signature* s, ::app::Uno::IO::BinaryWriter* writer);

struct Signature : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*> Parameters;
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName ReturnType;

    void _ObjInit(::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName returnType) { Signature___ObjInit(this, parameters, returnType); }
};

}}}}


#endif

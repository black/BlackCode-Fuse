// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_PARAMETER_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_PARAMETER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Parameter;

extern ::uStaticStrong< ::uDelegate*> Parameter__Read;
extern ::uStaticStrong< ::uDelegate*> Parameter__Write;

struct Parameter__uType : ::uClassType
{
};

Parameter__uType* Parameter__typeof();

void Parameter___ObjInit(Parameter* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::Bytecode::Variable* name);
Parameter* Parameter___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void Parameter___TypeInit(::uStatic* __this);
void Parameter___Write(::uStatic* __this, Parameter* p, ::app::Uno::IO::BinaryWriter* writer);
Parameter* Parameter__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::Bytecode::Variable* name);
::uString* Parameter__ToString(Parameter* __this);

struct Parameter : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> Type;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Variable*> Name;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::Bytecode::Variable* name) { Parameter___ObjInit(this, type, name); }
};

}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_VARIABLE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_VARIABLE_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Variable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Variable;

extern ::uStaticStrong< ::uDelegate*> Variable__Read;
extern ::uStaticStrong< Variable*> Variable__This;
extern ::uStaticStrong< ::uDelegate*> Variable__Write;

struct Variable__uType : ::uClassType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Variable __interface_0;
};

Variable__uType* Variable__typeof();

void Variable___ObjInit(Variable* __this, ::uString* name);
Variable* Variable___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void Variable___TypeInit(::uStatic* __this);
void Variable___Write(Variable* __this, ::app::Uno::IO::BinaryWriter* writer);
void Variable___Write_1(::uStatic* __this, Variable* v, ::app::Uno::IO::BinaryWriter* writer);
bool Variable__Equals(Variable* __this, ::uObject* obj);
bool Variable__Equals_2(Variable* __this, Variable* other);
int Variable__GetHashCode(Variable* __this);
::uString* Variable__GetName(::uStatic* __this, Variable* arg);
Variable* Variable__New_1(::uStatic* __this, ::uString* name);
bool Variable__op_Equality(::uStatic* __this, Variable* left, Variable* right);
bool Variable__op_Inequality(::uStatic* __this, Variable* left, Variable* right);
::uString* Variable__ToString(Variable* __this);

struct Variable : ::uObject
{
    ::uStrong< ::uString*> Name;

    void _ObjInit(::uString* name) { Variable___ObjInit(this, name); }
    void _Write(::app::Uno::IO::BinaryWriter* writer) { Variable___Write(this, writer); }
    bool Equals_2(Variable* other) { return Variable__Equals_2(this, other); }
};

}}}}


#endif

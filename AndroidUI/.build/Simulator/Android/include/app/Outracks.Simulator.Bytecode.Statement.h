// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Statement;

extern ::uStaticStrong< ::uDelegate*> Statement__Read;
extern ::uStaticStrong< ::uDelegate*> Statement__Write;

struct Statement__uType : ::uClassType
{
};

Statement__uType* Statement__typeof();

void Statement___ObjInit(Statement* __this);
Statement* Statement___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void Statement___TypeInit(::uStatic* __this);
void Statement___Write(::uStatic* __this, Statement* statement, ::app::Uno::IO::BinaryWriter* writer);
void Statement__Match(Statement* __this, ::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4);
::uChar Statement__Match__char(Statement* __this, ::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4);
::uObject* Statement__Match__object(Statement* __this, ::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4);
Statement* Statement__Nop(::uStatic* __this);
::uObject* Statement__op_Addition(::uStatic* __this, ::uObject* statements, Statement* statement);
::uObject* Statement__op_Addition_1(::uStatic* __this, Statement* statement, ::uObject* statements);
::uObject* Statement__op_Addition_2(::uStatic* __this, Statement* left, Statement* right);

struct Statement : ::uObject
{
    void _ObjInit() { Statement___ObjInit(this); }
    void Match(::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4) { Statement__Match(this, a1, a3, a4); }
    ::uChar Match__char(::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4) { return Statement__Match__char(this, a1, a3, a4); }
    ::uObject* Match__object(::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4) { return Statement__Match__object(this, a1, a3, a4); }
};

}}}}


#endif

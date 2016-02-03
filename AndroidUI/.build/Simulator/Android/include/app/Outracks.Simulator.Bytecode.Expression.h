// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_EXPRESSION_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_EXPRESSION_H__

#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Expression;

extern ::uStaticStrong< ::uDelegate*> Expression__Read_1;
extern ::uStaticStrong< ::uDelegate*> Expression__Write_1;

struct Expression__uType : ::app::Outracks::Simulator::Bytecode::Statement__uType
{
};

Expression__uType* Expression__typeof();

void Expression___ObjInit_1(Expression* __this);
Expression* Expression___Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void Expression___TypeInit_1(::uStatic* __this);
void Expression___Write_1(::uStatic* __this, Expression* expression, ::app::Uno::IO::BinaryWriter* writer);
::uChar Expression__Match__char_1(Expression* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16);
::uObject* Expression__Match__object_1(Expression* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16);
void Expression__Match_1(Expression* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16);
Expression* Expression__Throw(::uStatic* __this, ::app::Uno::Exception* e);

struct Expression : ::app::Outracks::Simulator::Bytecode::Statement
{
    void _ObjInit_1() { Expression___ObjInit_1(this); }
    ::uChar Match__char_1(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16) { return Expression__Match__char_1(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16); }
    ::uObject* Match__object_1(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16) { return Expression__Match__object_1(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16); }
    void Match_1(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16) { Expression__Match_1(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16); }
};

}}}}


#endif

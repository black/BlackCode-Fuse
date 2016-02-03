// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerable__Outracks_Simulator_Bytecode_Statement;

struct UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement __interface_0;
};

UnionEnumerable__Outracks_Simulator_Bytecode_Statement__uType* UnionEnumerable__Outracks_Simulator_Bytecode_Statement__typeof();

void UnionEnumerable__Outracks_Simulator_Bytecode_Statement___ObjInit(UnionEnumerable__Outracks_Simulator_Bytecode_Statement* __this, ::uObject* first, ::uObject* second);
::uObject* UnionEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator(UnionEnumerable__Outracks_Simulator_Bytecode_Statement* __this);
UnionEnumerable__Outracks_Simulator_Bytecode_Statement* UnionEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);

struct UnionEnumerable__Outracks_Simulator_Bytecode_Statement : ::uObject
{
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerable__Outracks_Simulator_Bytecode_Statement___ObjInit(this, first, second); }
    ::uObject* GetEnumerator() { return UnionEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator(this); }
};

}}}


#endif

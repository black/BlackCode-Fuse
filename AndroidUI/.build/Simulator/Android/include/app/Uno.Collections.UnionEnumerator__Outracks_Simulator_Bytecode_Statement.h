// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerator__Outracks_Simulator_Bytecode_Statement;

struct UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

UnionEnumerator__Outracks_Simulator_Bytecode_Statement__uType* UnionEnumerator__Outracks_Simulator_Bytecode_Statement__typeof();

void UnionEnumerator__Outracks_Simulator_Bytecode_Statement___ObjInit(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this);
::app::Outracks::Simulator::Bytecode::Statement* UnionEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this);
bool UnionEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this);
UnionEnumerator__Outracks_Simulator_Bytecode_Statement* UnionEnumerator__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Reset(UnionEnumerator__Outracks_Simulator_Bytecode_Statement* __this);

struct UnionEnumerator__Outracks_Simulator_Bytecode_Statement : ::uObject
{
    ::uStrong< ::uObject*> _current;
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerator__Outracks_Simulator_Bytecode_Statement___ObjInit(this, first, second); }
    void Dispose() { UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose(this); }
    ::app::Outracks::Simulator::Bytecode::Statement* Current() { return UnionEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current(this); }
    bool MoveNext() { return UnionEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext(this); }
    void Reset() { UnionEnumerator__Outracks_Simulator_Bytecode_Statement__Reset(this); }
};

}}}


#endif

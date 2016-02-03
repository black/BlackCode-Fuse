// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_564E9E99_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_564E9E99_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_Bytecode_Statement;

struct ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__typeof();

void ArrayEnumerator__Outracks_Simulator_Bytecode_Statement___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this);
::app::Outracks::Simulator::Bytecode::Statement* ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this);
bool ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this);
ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this);

struct ArrayEnumerator__Outracks_Simulator_Bytecode_Statement : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Statement*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_Bytecode_Statement___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose(this); }
    ::app::Outracks::Simulator::Bytecode::Statement* Current() { return ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Reset(this); }
};

}}}}}


#endif

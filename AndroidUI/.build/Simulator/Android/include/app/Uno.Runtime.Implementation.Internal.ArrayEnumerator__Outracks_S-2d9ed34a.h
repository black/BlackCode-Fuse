// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_2D9ED34A_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_2D9ED34A_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable;

struct ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof();

void ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this);
::app::Outracks::Simulator::Bytecode::BindVariable* ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this);
bool ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this);
ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this);

struct ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Dispose(this); }
    ::app::Outracks::Simulator::Bytecode::BindVariable* Current() { return ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Reset(this); }
};

}}}}}


#endif

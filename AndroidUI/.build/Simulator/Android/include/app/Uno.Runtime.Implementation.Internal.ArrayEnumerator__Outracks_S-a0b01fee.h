// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_A0B01FEE_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_A0B01FEE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName;

struct ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof();

void ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this);
bool ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this);
ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this);

struct ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Dispose(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Current() { return ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Reset(this); }
};

}}}}}


#endif

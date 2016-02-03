// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_184A0BB8_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_184A0BB8_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Outracks_Simulator_Bytecode_Expression;

struct ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression __interface_0;
};

ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__typeof();

void ArrayEnumerable__Outracks_Simulator_Bytecode_Expression___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* __this, ::uArray* source);
::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* __this);
ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Outracks_Simulator_Bytecode_Expression : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Outracks_Simulator_Bytecode_Expression___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__GetEnumerator(this); }
};

}}}}}


#endif

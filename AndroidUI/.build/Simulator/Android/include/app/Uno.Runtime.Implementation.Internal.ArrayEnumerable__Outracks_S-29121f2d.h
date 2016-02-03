// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_29121F2D_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_29121F2D_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable;

struct ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable __interface_0;
};

ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof();

void ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* __this, ::uArray* source);
::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* __this);
ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator(this); }
};

}}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_906B75D2_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_906B75D2_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter;

struct ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter __interface_0;
};

ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof();

void ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* __this, ::uArray* source);
::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* __this);
ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__GetEnumerator(this); }
};

}}}}}


#endif

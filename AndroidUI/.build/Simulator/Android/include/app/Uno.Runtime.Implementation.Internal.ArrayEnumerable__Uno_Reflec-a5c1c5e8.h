// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_REFLEC_A5C1C5E8_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_REFLEC_A5C1C5E8_H__

#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppFunction.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Uno_Reflection_CppFunction;

struct ArrayEnumerable__Uno_Reflection_CppFunction__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Reflection_CppFunction __interface_0;
};

ArrayEnumerable__Uno_Reflection_CppFunction__uType* ArrayEnumerable__Uno_Reflection_CppFunction__typeof();

void ArrayEnumerable__Uno_Reflection_CppFunction___ObjInit(ArrayEnumerable__Uno_Reflection_CppFunction* __this, ::uArray* source);
::uObject* ArrayEnumerable__Uno_Reflection_CppFunction__GetEnumerator(ArrayEnumerable__Uno_Reflection_CppFunction* __this);
ArrayEnumerable__Uno_Reflection_CppFunction* ArrayEnumerable__Uno_Reflection_CppFunction__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Uno_Reflection_CppFunction : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Uno_Reflection_CppFunction___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Uno_Reflection_CppFunction__GetEnumerator(this); }
};

}}}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_REFLEC_9FC9B423_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_REFLEC_9FC9B423_H__

#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppField.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Uno_Reflection_CppField;

struct ArrayEnumerable__Uno_Reflection_CppField__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Reflection_CppField __interface_0;
};

ArrayEnumerable__Uno_Reflection_CppField__uType* ArrayEnumerable__Uno_Reflection_CppField__typeof();

void ArrayEnumerable__Uno_Reflection_CppField___ObjInit(ArrayEnumerable__Uno_Reflection_CppField* __this, ::uArray* source);
::uObject* ArrayEnumerable__Uno_Reflection_CppField__GetEnumerator(ArrayEnumerable__Uno_Reflection_CppField* __this);
ArrayEnumerable__Uno_Reflection_CppField* ArrayEnumerable__Uno_Reflection_CppField__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Uno_Reflection_CppField : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Uno_Reflection_CppField___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Uno_Reflection_CppField__GetEnumerator(this); }
};

}}}}}


#endif

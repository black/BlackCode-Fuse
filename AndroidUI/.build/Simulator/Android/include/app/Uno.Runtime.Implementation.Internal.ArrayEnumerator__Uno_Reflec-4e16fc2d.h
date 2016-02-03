// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__UNO_REFLEC_4E16FC2D_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__UNO_REFLEC_4E16FC2D_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppFunction.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Uno_Reflection_CppFunction;

struct ArrayEnumerator__Uno_Reflection_CppFunction__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppFunction __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Uno_Reflection_CppFunction__uType* ArrayEnumerator__Uno_Reflection_CppFunction__typeof();

void ArrayEnumerator__Uno_Reflection_CppFunction___ObjInit(ArrayEnumerator__Uno_Reflection_CppFunction* __this, ::uArray* source);
void ArrayEnumerator__Uno_Reflection_CppFunction__Dispose(ArrayEnumerator__Uno_Reflection_CppFunction* __this);
::uFunction* ArrayEnumerator__Uno_Reflection_CppFunction__get_Current(ArrayEnumerator__Uno_Reflection_CppFunction* __this);
bool ArrayEnumerator__Uno_Reflection_CppFunction__MoveNext(ArrayEnumerator__Uno_Reflection_CppFunction* __this);
ArrayEnumerator__Uno_Reflection_CppFunction* ArrayEnumerator__Uno_Reflection_CppFunction__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Uno_Reflection_CppFunction__Reset(ArrayEnumerator__Uno_Reflection_CppFunction* __this);

struct ArrayEnumerator__Uno_Reflection_CppFunction : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uFunction* _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Uno_Reflection_CppFunction___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Uno_Reflection_CppFunction__Dispose(this); }
    ::uFunction* Current() { return ArrayEnumerator__Uno_Reflection_CppFunction__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Uno_Reflection_CppFunction__MoveNext(this); }
    void Reset() { ArrayEnumerator__Uno_Reflection_CppFunction__Reset(this); }
};

}}}}}


#endif

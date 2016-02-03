// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_REFLECTION_CPP_FUNCTION_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_REFLECTION_CPP_FUNCTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppFunction.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Reflection_CppFunction; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Reflection_CppFunction;

struct List1_Enumerator__Uno_Reflection_CppFunction__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppFunction __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Reflection_CppFunction__uType* List1_Enumerator__Uno_Reflection_CppFunction__typeof();

void List1_Enumerator__Uno_Reflection_CppFunction___ObjInit(List1_Enumerator__Uno_Reflection_CppFunction* __this, ::app::Uno::Collections::List__Uno_Reflection_CppFunction* source);
void List1_Enumerator__Uno_Reflection_CppFunction__Dispose(List1_Enumerator__Uno_Reflection_CppFunction* __this);
::uFunction* List1_Enumerator__Uno_Reflection_CppFunction__get_Current(List1_Enumerator__Uno_Reflection_CppFunction* __this);
bool List1_Enumerator__Uno_Reflection_CppFunction__MoveNext(List1_Enumerator__Uno_Reflection_CppFunction* __this);
List1_Enumerator__Uno_Reflection_CppFunction List1_Enumerator__Uno_Reflection_CppFunction__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Reflection_CppFunction* source);
void List1_Enumerator__Uno_Reflection_CppFunction__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Reflection_CppFunction* __this);

struct List1_Enumerator__Uno_Reflection_CppFunction
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*> _source;
    int _version;
    int _iterator;
    ::uFunction* _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Reflection_CppFunction* source) { List1_Enumerator__Uno_Reflection_CppFunction___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Reflection_CppFunction__Dispose(this); }
    ::uFunction* Current() { return List1_Enumerator__Uno_Reflection_CppFunction__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Reflection_CppFunction__MoveNext(this); }
};

}}}


#endif

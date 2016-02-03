// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_REFLECTION_CPP_FIELD_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_REFLECTION_CPP_FIELD_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppField.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Reflection_CppField; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Reflection_CppField;

struct List1_Enumerator__Uno_Reflection_CppField__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppField __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Reflection_CppField__uType* List1_Enumerator__Uno_Reflection_CppField__typeof();

void List1_Enumerator__Uno_Reflection_CppField___ObjInit(List1_Enumerator__Uno_Reflection_CppField* __this, ::app::Uno::Collections::List__Uno_Reflection_CppField* source);
void List1_Enumerator__Uno_Reflection_CppField__Dispose(List1_Enumerator__Uno_Reflection_CppField* __this);
::uField* List1_Enumerator__Uno_Reflection_CppField__get_Current(List1_Enumerator__Uno_Reflection_CppField* __this);
bool List1_Enumerator__Uno_Reflection_CppField__MoveNext(List1_Enumerator__Uno_Reflection_CppField* __this);
List1_Enumerator__Uno_Reflection_CppField List1_Enumerator__Uno_Reflection_CppField__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Reflection_CppField* source);
void List1_Enumerator__Uno_Reflection_CppField__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Reflection_CppField* __this);

struct List1_Enumerator__Uno_Reflection_CppField
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Reflection_CppField*> _source;
    int _version;
    int _iterator;
    ::uField* _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Reflection_CppField* source) { List1_Enumerator__Uno_Reflection_CppField___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Reflection_CppField__Dispose(this); }
    ::uField* Current() { return List1_Enumerator__Uno_Reflection_CppField__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Reflection_CppField__MoveNext(this); }
};

}}}


#endif

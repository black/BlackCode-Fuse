// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__INT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__INT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__int.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__int;

struct List1_Enumerator__int__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__int __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__int__uType* List1_Enumerator__int__typeof();

void List1_Enumerator__int___ObjInit(List1_Enumerator__int* __this, ::app::Uno::Collections::List__int* source);
void List1_Enumerator__int__Dispose(List1_Enumerator__int* __this);
int List1_Enumerator__int__get_Current(List1_Enumerator__int* __this);
bool List1_Enumerator__int__MoveNext(List1_Enumerator__int* __this);
List1_Enumerator__int List1_Enumerator__int__New_1(::uStatic* __this, ::app::Uno::Collections::List__int* source);
void List1_Enumerator__int__Uno_Collections_IEnumerator_Reset(List1_Enumerator__int* __this);

struct List1_Enumerator__int
{
    ::uStrong< ::app::Uno::Collections::List__int*> _source;
    int _version;
    int _iterator;
    int _current;

    void _ObjInit(::app::Uno::Collections::List__int* source) { List1_Enumerator__int___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__int__Dispose(this); }
    int Current() { return List1_Enumerator__int__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__int__MoveNext(this); }
};

}}}


#endif

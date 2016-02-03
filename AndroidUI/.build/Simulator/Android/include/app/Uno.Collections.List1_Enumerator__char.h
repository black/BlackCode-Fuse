// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__CHAR_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__CHAR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__char.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__char; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__char;

struct List1_Enumerator__char__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__char __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__char__uType* List1_Enumerator__char__typeof();

void List1_Enumerator__char___ObjInit(List1_Enumerator__char* __this, ::app::Uno::Collections::List__char* source);
void List1_Enumerator__char__Dispose(List1_Enumerator__char* __this);
::uChar List1_Enumerator__char__get_Current(List1_Enumerator__char* __this);
bool List1_Enumerator__char__MoveNext(List1_Enumerator__char* __this);
List1_Enumerator__char List1_Enumerator__char__New_1(::uStatic* __this, ::app::Uno::Collections::List__char* source);
void List1_Enumerator__char__Uno_Collections_IEnumerator_Reset(List1_Enumerator__char* __this);

struct List1_Enumerator__char
{
    ::uStrong< ::app::Uno::Collections::List__char*> _source;
    int _version;
    int _iterator;
    ::uChar _current;

    void _ObjInit(::app::Uno::Collections::List__char* source) { List1_Enumerator__char___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__char__Dispose(this); }
    ::uChar Current() { return List1_Enumerator__char__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__char__MoveNext(this); }
};

}}}


#endif

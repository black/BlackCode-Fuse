// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__STRING_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__STRING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__string;

struct List1_Enumerator__string__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__string__uType* List1_Enumerator__string__typeof();

void List1_Enumerator__string___ObjInit(List1_Enumerator__string* __this, ::app::Uno::Collections::List__string* source);
void List1_Enumerator__string__Dispose(List1_Enumerator__string* __this);
::uString* List1_Enumerator__string__get_Current(List1_Enumerator__string* __this);
bool List1_Enumerator__string__MoveNext(List1_Enumerator__string* __this);
List1_Enumerator__string List1_Enumerator__string__New_1(::uStatic* __this, ::app::Uno::Collections::List__string* source);
void List1_Enumerator__string__Uno_Collections_IEnumerator_Reset(List1_Enumerator__string* __this);

struct List1_Enumerator__string
{
    ::uStrong< ::app::Uno::Collections::List__string*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uString*> _current;

    void _ObjInit(::app::Uno::Collections::List__string* source) { List1_Enumerator__string___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__string__Dispose(this); }
    ::uString* Current() { return List1_Enumerator__string__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__string__MoveNext(this); }
};

}}}


#endif

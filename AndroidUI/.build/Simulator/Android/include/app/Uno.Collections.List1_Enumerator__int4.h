// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__INT4_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__INT4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__int4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__int4; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__int4;

struct List1_Enumerator__int4__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__int4 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__int4__uType* List1_Enumerator__int4__typeof();

void List1_Enumerator__int4___ObjInit(List1_Enumerator__int4* __this, ::app::Uno::Collections::List__int4* source);
void List1_Enumerator__int4__Dispose(List1_Enumerator__int4* __this);
::app::Uno::Int4 List1_Enumerator__int4__get_Current(List1_Enumerator__int4* __this);
bool List1_Enumerator__int4__MoveNext(List1_Enumerator__int4* __this);
List1_Enumerator__int4 List1_Enumerator__int4__New_1(::uStatic* __this, ::app::Uno::Collections::List__int4* source);
void List1_Enumerator__int4__Uno_Collections_IEnumerator_Reset(List1_Enumerator__int4* __this);

struct List1_Enumerator__int4
{
    ::uStrong< ::app::Uno::Collections::List__int4*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Int4 _current;

    void _ObjInit(::app::Uno::Collections::List__int4* source) { List1_Enumerator__int4___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__int4__Dispose(this); }
    ::app::Uno::Int4 Current() { return List1_Enumerator__int4__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__int4__MoveNext(this); }
};

}}}


#endif

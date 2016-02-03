// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__BYTE___H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__BYTE___H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__byte__.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__byte__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__byte__;

struct List1_Enumerator__byte____uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__byte__ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__byte____uType* List1_Enumerator__byte____typeof();

void List1_Enumerator__byte_____ObjInit(List1_Enumerator__byte__* __this, ::app::Uno::Collections::List__byte__* source);
void List1_Enumerator__byte____Dispose(List1_Enumerator__byte__* __this);
::uArray* List1_Enumerator__byte____get_Current(List1_Enumerator__byte__* __this);
bool List1_Enumerator__byte____MoveNext(List1_Enumerator__byte__* __this);
List1_Enumerator__byte__ List1_Enumerator__byte____New_1(::uStatic* __this, ::app::Uno::Collections::List__byte__* source);
void List1_Enumerator__byte____Uno_Collections_IEnumerator_Reset(List1_Enumerator__byte__* __this);

struct List1_Enumerator__byte__
{
    ::uStrong< ::app::Uno::Collections::List__byte__*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uArray*> _current;

    void _ObjInit(::app::Uno::Collections::List__byte__* source) { List1_Enumerator__byte_____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__byte____Dispose(this); }
    ::uArray* Current() { return List1_Enumerator__byte____get_Current(this); }
    bool MoveNext() { return List1_Enumerator__byte____MoveNext(this); }
};

}}}


#endif

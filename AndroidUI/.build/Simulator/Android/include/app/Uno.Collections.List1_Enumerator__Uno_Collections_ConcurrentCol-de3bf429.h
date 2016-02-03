// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COL_DE3BF429_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COL_DE3BF429_H__

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Uno_EventHandler.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_ConcurrentCollecti-4e4ef92.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_;

struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType* List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof();

void List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* source);
void List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Dispose(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Current(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
bool List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___MoveNext(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* source);
void List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);

struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* source) { List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Dispose(this); }
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler Current() { return List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___MoveNext(this); }
};

}}}


#endif

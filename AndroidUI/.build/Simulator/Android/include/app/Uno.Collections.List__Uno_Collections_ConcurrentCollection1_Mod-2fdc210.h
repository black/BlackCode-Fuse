// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_COLLECTIONS_CONCURRENT_COLLECTION1_MOD_2FDC210_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_COLLECTIONS_CONCURRENT_COLLECTION1_MOD_2FDC210_H__

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Uno_EventHandler.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_ConcurrentCollecti-f5c5d4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_;

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ __interface_0;
};

List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof();

::uObject* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___GetEnumerator_boxed(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit_1(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int capacity);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Add(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___AddRange(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::uObject* items);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___BoundsCheck(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Clear(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
bool List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Contains(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___EnsureCapacity(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
int List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Count(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___GetEnumerator(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
int List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___IndexOf(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Insert(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___New_1(::uStatic* __this);
List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___New_2(::uStatic* __this, int capacity);
bool List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Remove(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___RemoveAt(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___set_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler value);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Sort(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::uDelegate* comparer);
::uArray* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___ToArray(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit_1(this, capacity); }
    void Add(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
    void AddRange(::uObject* items) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___BoundsCheck(this, index); }
    void Clear() { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Clear(this); }
    bool Contains(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
    void EnsureCapacity() { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___EnsureCapacity(this); }
    int Count() { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Count(this); }
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler Item(int index);
    ::app::Uno::Collections::List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ GetEnumerator();
    int IndexOf(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
    void Insert(int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
    bool Remove(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
    void RemoveAt(int index) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler value);
    void Sort(::uDelegate* comparer) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Collections_ConcurrentCol-de3bf429.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Add(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Add(this, item); }
inline bool List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Contains(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item) { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Contains(this, item); }
inline ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Item(int index) { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::GetEnumerator() { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___GetEnumerator(this); }
inline int List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::IndexOf(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item) { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___IndexOf(this, item); }
inline void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Insert(int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Insert(this, index, item); }
inline bool List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Remove(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item) { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Remove(this, item); }
inline void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Item(int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler value) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___set_Item(this, index, value); }

}}}


#endif

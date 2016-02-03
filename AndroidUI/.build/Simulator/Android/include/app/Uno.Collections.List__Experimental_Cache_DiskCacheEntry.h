// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Collections.IEnumerable__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IList__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Experimental_Cache_DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Experimental_Cache_DiskCacheEntry;

struct List__Experimental_Cache_DiskCacheEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Experimental_Cache_DiskCacheEntry __interface_0;
    ::app::Uno::Collections::IEnumerable__Experimental_Cache_DiskCacheEntry __interface_1;
};

List__Experimental_Cache_DiskCacheEntry__uType* List__Experimental_Cache_DiskCacheEntry__typeof();

::uObject* List__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(List__Experimental_Cache_DiskCacheEntry* __this);
void List__Experimental_Cache_DiskCacheEntry___ObjInit(List__Experimental_Cache_DiskCacheEntry* __this);
void List__Experimental_Cache_DiskCacheEntry___ObjInit_1(List__Experimental_Cache_DiskCacheEntry* __this, int capacity);
void List__Experimental_Cache_DiskCacheEntry__Add(List__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void List__Experimental_Cache_DiskCacheEntry__AddRange(List__Experimental_Cache_DiskCacheEntry* __this, ::uObject* items);
void List__Experimental_Cache_DiskCacheEntry__BoundsCheck(List__Experimental_Cache_DiskCacheEntry* __this, int index);
void List__Experimental_Cache_DiskCacheEntry__Clear(List__Experimental_Cache_DiskCacheEntry* __this);
bool List__Experimental_Cache_DiskCacheEntry__Contains(List__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void List__Experimental_Cache_DiskCacheEntry__EnsureCapacity(List__Experimental_Cache_DiskCacheEntry* __this);
int List__Experimental_Cache_DiskCacheEntry__get_Count(List__Experimental_Cache_DiskCacheEntry* __this);
::app::Experimental::Cache::DiskCacheEntry* List__Experimental_Cache_DiskCacheEntry__get_Item(List__Experimental_Cache_DiskCacheEntry* __this, int index);
::app::Uno::Collections::List1_Enumerator__Experimental_Cache_DiskCacheEntry List__Experimental_Cache_DiskCacheEntry__GetEnumerator(List__Experimental_Cache_DiskCacheEntry* __this);
int List__Experimental_Cache_DiskCacheEntry__IndexOf(List__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void List__Experimental_Cache_DiskCacheEntry__Insert(List__Experimental_Cache_DiskCacheEntry* __this, int index, ::app::Experimental::Cache::DiskCacheEntry* item);
List__Experimental_Cache_DiskCacheEntry* List__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this);
List__Experimental_Cache_DiskCacheEntry* List__Experimental_Cache_DiskCacheEntry__New_2(::uStatic* __this, int capacity);
bool List__Experimental_Cache_DiskCacheEntry__Remove(List__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void List__Experimental_Cache_DiskCacheEntry__RemoveAt(List__Experimental_Cache_DiskCacheEntry* __this, int index);
void List__Experimental_Cache_DiskCacheEntry__set_Item(List__Experimental_Cache_DiskCacheEntry* __this, int index, ::app::Experimental::Cache::DiskCacheEntry* value);
void List__Experimental_Cache_DiskCacheEntry__Sort(List__Experimental_Cache_DiskCacheEntry* __this, ::uDelegate* comparer);
::uArray* List__Experimental_Cache_DiskCacheEntry__ToArray(List__Experimental_Cache_DiskCacheEntry* __this);

struct List__Experimental_Cache_DiskCacheEntry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Experimental_Cache_DiskCacheEntry___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Experimental_Cache_DiskCacheEntry___ObjInit_1(this, capacity); }
    void Add(::app::Experimental::Cache::DiskCacheEntry* item) { List__Experimental_Cache_DiskCacheEntry__Add(this, item); }
    void AddRange(::uObject* items) { List__Experimental_Cache_DiskCacheEntry__AddRange(this, items); }
    void BoundsCheck(int index) { List__Experimental_Cache_DiskCacheEntry__BoundsCheck(this, index); }
    void Clear() { List__Experimental_Cache_DiskCacheEntry__Clear(this); }
    bool Contains(::app::Experimental::Cache::DiskCacheEntry* item) { return List__Experimental_Cache_DiskCacheEntry__Contains(this, item); }
    void EnsureCapacity() { List__Experimental_Cache_DiskCacheEntry__EnsureCapacity(this); }
    int Count() { return List__Experimental_Cache_DiskCacheEntry__get_Count(this); }
    ::app::Experimental::Cache::DiskCacheEntry* Item(int index) { return List__Experimental_Cache_DiskCacheEntry__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Experimental_Cache_DiskCacheEntry GetEnumerator();
    int IndexOf(::app::Experimental::Cache::DiskCacheEntry* item) { return List__Experimental_Cache_DiskCacheEntry__IndexOf(this, item); }
    void Insert(int index, ::app::Experimental::Cache::DiskCacheEntry* item) { List__Experimental_Cache_DiskCacheEntry__Insert(this, index, item); }
    bool Remove(::app::Experimental::Cache::DiskCacheEntry* item) { return List__Experimental_Cache_DiskCacheEntry__Remove(this, item); }
    void RemoveAt(int index) { List__Experimental_Cache_DiskCacheEntry__RemoveAt(this, index); }
    void Item(int index, ::app::Experimental::Cache::DiskCacheEntry* value) { List__Experimental_Cache_DiskCacheEntry__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Experimental_Cache_DiskCacheEntry__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Experimental_Cache_DiskCacheEntry__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Experimental_Cache_DiskCacheEntry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Experimental_Cache_DiskCacheEntry List__Experimental_Cache_DiskCacheEntry::GetEnumerator() { return List__Experimental_Cache_DiskCacheEntry__GetEnumerator(this); }

}}}


#endif

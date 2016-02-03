// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List__Experimental_Cache_DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Experimental_Cache_DiskCacheEntry;

struct List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Experimental_Cache_DiskCacheEntry __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType* List1_Enumerator__Experimental_Cache_DiskCacheEntry__typeof();

void List1_Enumerator__Experimental_Cache_DiskCacheEntry___ObjInit(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* source);
void List1_Enumerator__Experimental_Cache_DiskCacheEntry__Dispose(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this);
::app::Experimental::Cache::DiskCacheEntry* List1_Enumerator__Experimental_Cache_DiskCacheEntry__get_Current(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this);
bool List1_Enumerator__Experimental_Cache_DiskCacheEntry__MoveNext(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this);
List1_Enumerator__Experimental_Cache_DiskCacheEntry List1_Enumerator__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* source);
void List1_Enumerator__Experimental_Cache_DiskCacheEntry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this);

struct List1_Enumerator__Experimental_Cache_DiskCacheEntry
{
    ::uStrong< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> _current;

    void _ObjInit(::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* source) { List1_Enumerator__Experimental_Cache_DiskCacheEntry___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Experimental_Cache_DiskCacheEntry__Dispose(this); }
    ::app::Experimental::Cache::DiskCacheEntry* Current() { return List1_Enumerator__Experimental_Cache_DiskCacheEntry__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Experimental_Cache_DiskCacheEntry__MoveNext(this); }
};

}}}


#endif

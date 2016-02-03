// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Cache_-9e3d91e5.h>
#include <app/Uno.Collections.IDictionary__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-2f167bf1.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Experimental_Cache_DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Experimental_Cache_DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Experimental_Cache_DiskCacheEntry;

struct Dictionary__string__Experimental_Cache_DiskCacheEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Experimental_Cache_DiskCacheEntry __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Experimental_Cache_DiskCacheEntry_ __interface_1;
};

Dictionary__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary__string__Experimental_Cache_DiskCacheEntry__typeof();

::uObject* Dictionary__string__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
void Dictionary__string__Experimental_Cache_DiskCacheEntry___ObjInit(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
void Dictionary__string__Experimental_Cache_DiskCacheEntry___ObjInit_1(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uObject* dictionary);
void Dictionary__string__Experimental_Cache_DiskCacheEntry__Add(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value);
void Dictionary__string__Experimental_Cache_DiskCacheEntry__Clear(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
bool Dictionary__string__Experimental_Cache_DiskCacheEntry__ContainsKey(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key);
int Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Count(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
::app::Experimental::Cache::DiskCacheEntry* Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Item(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Experimental_Cache_DiskCacheEntry* Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Keys(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Values(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary__string__Experimental_Cache_DiskCacheEntry__GetEnumerator(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
Dictionary__string__Experimental_Cache_DiskCacheEntry* Dictionary__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this);
Dictionary__string__Experimental_Cache_DiskCacheEntry* Dictionary__string__Experimental_Cache_DiskCacheEntry__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Experimental_Cache_DiskCacheEntry__Rehash(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this);
bool Dictionary__string__Experimental_Cache_DiskCacheEntry__Remove(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key);
void Dictionary__string__Experimental_Cache_DiskCacheEntry__set_Item(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value);
bool Dictionary__string__Experimental_Cache_DiskCacheEntry__TryGetValue(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry** value);
void Dictionary__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Add(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry item);
bool Dictionary__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Contains(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry item);
bool Dictionary__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Remove(Dictionary__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry item);

struct Dictionary__string__Experimental_Cache_DiskCacheEntry : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Experimental_Cache_DiskCacheEntry___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Experimental_Cache_DiskCacheEntry___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value) { Dictionary__string__Experimental_Cache_DiskCacheEntry__Add(this, key, value); }
    void Clear() { Dictionary__string__Experimental_Cache_DiskCacheEntry__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Experimental_Cache_DiskCacheEntry__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Count(this); }
    ::app::Experimental::Cache::DiskCacheEntry* Item(::uString* key) { return Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Experimental_Cache_DiskCacheEntry* Keys() { return Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* Values() { return Dictionary__string__Experimental_Cache_DiskCacheEntry__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry GetEnumerator();
    void Rehash() { Dictionary__string__Experimental_Cache_DiskCacheEntry__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Experimental_Cache_DiskCacheEntry__Remove(this, key); }
    void Item(::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value) { Dictionary__string__Experimental_Cache_DiskCacheEntry__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Experimental::Cache::DiskCacheEntry** value) { return Dictionary__string__Experimental_Cache_DiskCacheEntry__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Experimental_Ca-75291c79.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Cache_DiskCacheEntry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary__string__Experimental_Cache_DiskCacheEntry::GetEnumerator() { return Dictionary__string__Experimental_Cache_DiskCacheEntry__GetEnumerator(this); }

}}}


#endif

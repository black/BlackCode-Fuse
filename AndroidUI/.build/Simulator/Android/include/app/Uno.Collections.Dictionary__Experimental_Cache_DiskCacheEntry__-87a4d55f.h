// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY___87A4D55F_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY___87A4D55F_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Experimental_Cache_DiskCach-ec0b9f49.h>
#include <app/Uno.Collections.IDictionary__Experimental_Cache_DiskCacheEntry_-82c34480.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Exper-d8a25931.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader;

struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader_ __interface_1;
};

Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof();

::uObject* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator_boxed(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit_1(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::uObject* dictionary);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Add(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Clear(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
bool Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__ContainsKey(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key);
int Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Count(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
::app::Experimental::Cache::RecordHeader* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Item(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Keys(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Values(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this);
Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Rehash(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
bool Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Remove(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__set_Item(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value);
bool Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__TryGetValue(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader** value);
void Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Add(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader item);
bool Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Contains(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader item);
bool Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Remove(Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader item);

struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit_1(this, dictionary); }
    void Add(::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value) { Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Add(this, key, value); }
    void Clear() { Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Clear(this); }
    bool ContainsKey(::app::Experimental::Cache::DiskCacheEntry* key) { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__ContainsKey(this, key); }
    int Count() { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Count(this); }
    ::app::Experimental::Cache::RecordHeader* Item(::app::Experimental::Cache::DiskCacheEntry* key) { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Keys() { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Values() { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader GetEnumerator();
    void Rehash() { Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Rehash(this); }
    bool Remove(::app::Experimental::Cache::DiskCacheEntry* key) { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Remove(this, key); }
    void Item(::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value) { Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__set_Item(this, key, value); }
    bool TryGetValue(::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader** value) { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Experimental_Cache_Disk-82636317.h>
#include <app/Uno.Collections.KeyValuePair__Experimental_Cache_DiskCacheEntry-bfbae3c6.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader::GetEnumerator() { return Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator(this); }

}}}


#endif

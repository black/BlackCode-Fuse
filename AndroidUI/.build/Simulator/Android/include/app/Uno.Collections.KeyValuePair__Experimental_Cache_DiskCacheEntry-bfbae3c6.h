// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_BFBAE3C6_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_BFBAE3C6_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader;

struct KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType : ::uStructType
{
};

KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof();

void KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value);
::app::Experimental::Cache::DiskCacheEntry* KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Key(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
::app::Experimental::Cache::RecordHeader* KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Value(KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value);

struct KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader
{
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> _key;
    ::uStrong< ::app::Experimental::Cache::RecordHeader*> _value;

    void _ObjInit(::app::Experimental::Cache::DiskCacheEntry* key, ::app::Experimental::Cache::RecordHeader* value) { KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(this, key, value); }
    ::app::Experimental::Cache::DiskCacheEntry* Key() { return KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Key(this); }
    ::app::Experimental::Cache::RecordHeader* Value() { return KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Value(this); }
};

}}}


#endif

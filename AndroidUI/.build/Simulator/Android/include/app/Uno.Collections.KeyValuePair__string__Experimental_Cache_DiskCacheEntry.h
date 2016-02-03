// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Experimental_Cache_DiskCacheEntry;

struct KeyValuePair__string__Experimental_Cache_DiskCacheEntry__uType : ::uStructType
{
};

KeyValuePair__string__Experimental_Cache_DiskCacheEntry__uType* KeyValuePair__string__Experimental_Cache_DiskCacheEntry__typeof();

void KeyValuePair__string__Experimental_Cache_DiskCacheEntry___ObjInit(KeyValuePair__string__Experimental_Cache_DiskCacheEntry* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value);
::uString* KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Key(KeyValuePair__string__Experimental_Cache_DiskCacheEntry* __this);
::app::Experimental::Cache::DiskCacheEntry* KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Value(KeyValuePair__string__Experimental_Cache_DiskCacheEntry* __this);
KeyValuePair__string__Experimental_Cache_DiskCacheEntry KeyValuePair__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value);

struct KeyValuePair__string__Experimental_Cache_DiskCacheEntry
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> _value;

    void _ObjInit(::uString* key, ::app::Experimental::Cache::DiskCacheEntry* value) { KeyValuePair__string__Experimental_Cache_DiskCacheEntry___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Key(this); }
    ::app::Experimental::Cache::DiskCacheEntry* Value() { return KeyValuePair__string__Experimental_Cache_DiskCacheEntry__get_Value(this); }
};

}}}


#endif

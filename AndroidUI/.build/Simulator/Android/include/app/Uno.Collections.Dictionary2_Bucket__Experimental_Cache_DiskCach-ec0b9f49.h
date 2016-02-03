// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__EXPERIMENTAL_CACHE_DISK_CACH_EC0B9F49_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__EXPERIMENTAL_CACHE_DISK_CACH_EC0B9F49_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader;

struct Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType : ::uStructType
{
};

Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof();

struct Dictionary2_Bucket__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader
{
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> Key;
    ::uStrong< ::app::Experimental::Cache::RecordHeader*> Value;
    int State;
};

}}}


#endif

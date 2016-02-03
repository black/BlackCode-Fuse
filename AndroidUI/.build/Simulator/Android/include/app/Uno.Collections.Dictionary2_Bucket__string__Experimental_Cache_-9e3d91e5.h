// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__EXPERIMENTAL_CACHE__9E3D91E5_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__EXPERIMENTAL_CACHE__9E3D91E5_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry;

struct Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__uType : ::uStructType
{
};

Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry__typeof();

struct Dictionary2_Bucket__string__Experimental_Cache_DiskCacheEntry
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> Value;
    int State;
};

}}}


#endif

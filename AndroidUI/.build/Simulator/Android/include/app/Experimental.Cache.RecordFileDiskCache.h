// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_RECORD_FILE_DISK_CACHE_H__
#define __APP_EXPERIMENTAL_CACHE_RECORD_FILE_DISK_CACHE_H__

#include <app/Experimental.Cache.RecordFile__Experimental_Cache_DiskCacheEntry.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct RecordFileDiskCache;

struct RecordFileDiskCache__uType : ::app::Experimental::Cache::RecordFile__Experimental_Cache_DiskCacheEntry__uType
{
};

RecordFileDiskCache__uType* RecordFileDiskCache__typeof();

void RecordFileDiskCache___ObjInit_1(RecordFileDiskCache* __this, ::uString* filename);
::app::Experimental::Cache::DiskCacheEntry* RecordFileDiskCache__LoadRecord(RecordFileDiskCache* __this, ::app::Uno::IO::BinaryReader* r);
RecordFileDiskCache* RecordFileDiskCache__New_1(::uStatic* __this, ::uString* filename);
void RecordFileDiskCache__SaveRecord(RecordFileDiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* record, ::app::Uno::IO::BinaryWriter* w);

struct RecordFileDiskCache : ::app::Experimental::Cache::RecordFile__Experimental_Cache_DiskCacheEntry
{
    void _ObjInit_1(::uString* filename) { RecordFileDiskCache___ObjInit_1(this, filename); }
};

}}}


#endif

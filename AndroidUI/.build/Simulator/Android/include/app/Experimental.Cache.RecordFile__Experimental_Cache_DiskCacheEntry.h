// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_RECORD_FILE__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_EXPERIMENTAL_CACHE_RECORD_FILE__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct RecordFile__Experimental_Cache_DiskCacheEntry;

struct RecordFile__Experimental_Cache_DiskCacheEntry__uType : ::uClassType
{
    ::app::Experimental::Cache::DiskCacheEntry*(*__fp_LoadRecord)(RecordFile__Experimental_Cache_DiskCacheEntry*, ::app::Uno::IO::BinaryReader*);
    void(*__fp_SaveRecord)(RecordFile__Experimental_Cache_DiskCacheEntry*, ::app::Experimental::Cache::DiskCacheEntry*, ::app::Uno::IO::BinaryWriter*);
};

RecordFile__Experimental_Cache_DiskCacheEntry__uType* RecordFile__Experimental_Cache_DiskCacheEntry__typeof();

void RecordFile__Experimental_Cache_DiskCacheEntry___ObjInit(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::uString* filename);
::app::Experimental::Cache::RecordHeader* RecordFile__Experimental_Cache_DiskCacheEntry__Alloc(RecordFile__Experimental_Cache_DiskCacheEntry* __this, int len);
void RecordFile__Experimental_Cache_DiskCacheEntry__Close(RecordFile__Experimental_Cache_DiskCacheEntry* __this);
void RecordFile__Experimental_Cache_DiskCacheEntry__Delete(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void RecordFile__Experimental_Cache_DiskCacheEntry__Free(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::RecordHeader* rh);
::uObject* RecordFile__Experimental_Cache_DiskCacheEntry__GetAllRecords(RecordFile__Experimental_Cache_DiskCacheEntry* __this);
void RecordFile__Experimental_Cache_DiskCacheEntry__LoadBlocks(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::IO::Stream* stream);
void RecordFile__Experimental_Cache_DiskCacheEntry__LoadCurrent(RecordFile__Experimental_Cache_DiskCacheEntry* __this);
void RecordFile__Experimental_Cache_DiskCacheEntry__Update(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void RecordFile__Experimental_Cache_DiskCacheEntry__Write(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::RecordHeader* rh);

struct RecordFile__Experimental_Cache_DiskCacheEntry : ::uObject
{
    ::uStrong< ::uString*> _filename;
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::app::Uno::IO::BinaryWriter*> _writer;
    ::uStrong< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*> _records;
    ::uStrong< ::app::Experimental::Cache::RecordHeader*> _firstRecord;

    void _ObjInit(::uString* filename) { RecordFile__Experimental_Cache_DiskCacheEntry___ObjInit(this, filename); }
    ::app::Experimental::Cache::RecordHeader* Alloc(int len) { return RecordFile__Experimental_Cache_DiskCacheEntry__Alloc(this, len); }
    void Close() { RecordFile__Experimental_Cache_DiskCacheEntry__Close(this); }
    void Delete(::app::Experimental::Cache::DiskCacheEntry* item) { RecordFile__Experimental_Cache_DiskCacheEntry__Delete(this, item); }
    void Free(::app::Experimental::Cache::RecordHeader* rh) { RecordFile__Experimental_Cache_DiskCacheEntry__Free(this, rh); }
    ::uObject* GetAllRecords() { return RecordFile__Experimental_Cache_DiskCacheEntry__GetAllRecords(this); }
    void LoadBlocks(::app::Uno::IO::Stream* stream) { RecordFile__Experimental_Cache_DiskCacheEntry__LoadBlocks(this, stream); }
    void LoadCurrent() { RecordFile__Experimental_Cache_DiskCacheEntry__LoadCurrent(this); }
    ::app::Experimental::Cache::DiskCacheEntry* LoadRecord(::app::Uno::IO::BinaryReader* r) { return (((RecordFile__Experimental_Cache_DiskCacheEntry__uType*)this->__obj_type)->__fp_LoadRecord)(this, r); }
    void SaveRecord(::app::Experimental::Cache::DiskCacheEntry* record, ::app::Uno::IO::BinaryWriter* w) { (((RecordFile__Experimental_Cache_DiskCacheEntry__uType*)this->__obj_type)->__fp_SaveRecord)(this, record, w); }
    void Update(::app::Experimental::Cache::DiskCacheEntry* item) { RecordFile__Experimental_Cache_DiskCacheEntry__Update(this, item); }
    void Write(::app::Experimental::Cache::RecordHeader* rh) { RecordFile__Experimental_Cache_DiskCacheEntry__Write(this, rh); }
};

}}}


#endif

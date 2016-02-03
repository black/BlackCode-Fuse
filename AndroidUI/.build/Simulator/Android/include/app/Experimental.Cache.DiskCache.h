// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_DISK_CACHE_H__
#define __APP_EXPERIMENTAL_CACHE_DISK_CACHE_H__

#include <app/Experimental.Cache.ICache.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct RecordFileDiskCache; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Cache_DiskCacheEntry; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct DiskCache;

struct DiskCache__uType : ::uClassType
{
    ::app::Experimental::Cache::ICache __interface_0;
};

DiskCache__uType* DiskCache__typeof();

void DiskCache___ObjInit(DiskCache* __this, ::uString* dirName, int dt);
::uString* DiskCache__BaseName(DiskCache* __this, ::uString* file);
void DiskCache__CleanDirectory(DiskCache* __this);
void DiskCache__Clear(DiskCache* __this);
::uObject* DiskCache__CreateRecord(DiskCache* __this, ::uString* id);
::uString* DiskCache__DataFile(DiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* _entry);
void DiskCache__DeleteRecord(DiskCache* __this, ::uString* id);
void DiskCache__Dispose(DiskCache* __this);
::uLong DiskCache__get_MaxSize(DiskCache* __this);
int DiskCache__get_RecordCount(DiskCache* __this);
::uString* DiskCache__get_StoreDirectory(DiskCache* __this);
int DiskCache__LastUsed(DiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* a, ::app::Experimental::Cache::DiskCacheEntry* b);
bool DiskCache__LoadRecord(DiskCache* __this, ::uString* id, ::uDelegate* onLoaded);
DiskCache* DiskCache__New_1(::uStatic* __this, ::uString* dirName, int dt);
void DiskCache__set_MaxSize(DiskCache* __this, ::uLong value);
void DiskCache__TrimCache(DiskCache* __this);
void DiskCache__Update(DiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* _entry);

struct DiskCache : ::uObject
{
    int _fileRef;
    ::uStrong< ::uString*> _storeDir;
    ::uLong _maxSize;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*> _entries;
    ::uStrong< ::app::Experimental::Cache::RecordFileDiskCache*> _index;
    ::uLong _estimateSize;

    void _ObjInit(::uString* dirName, int dt) { DiskCache___ObjInit(this, dirName, dt); }
    ::uString* BaseName(::uString* file) { return DiskCache__BaseName(this, file); }
    void CleanDirectory() { DiskCache__CleanDirectory(this); }
    void Clear() { DiskCache__Clear(this); }
    ::uObject* CreateRecord(::uString* id) { return DiskCache__CreateRecord(this, id); }
    ::uString* DataFile(::app::Experimental::Cache::DiskCacheEntry* _entry) { return DiskCache__DataFile(this, _entry); }
    void DeleteRecord(::uString* id) { DiskCache__DeleteRecord(this, id); }
    void Dispose() { DiskCache__Dispose(this); }
    ::uLong MaxSize() { return DiskCache__get_MaxSize(this); }
    int RecordCount() { return DiskCache__get_RecordCount(this); }
    ::uString* StoreDirectory() { return DiskCache__get_StoreDirectory(this); }
    int LastUsed(::app::Experimental::Cache::DiskCacheEntry* a, ::app::Experimental::Cache::DiskCacheEntry* b) { return DiskCache__LastUsed(this, a, b); }
    bool LoadRecord(::uString* id, ::uDelegate* onLoaded) { return DiskCache__LoadRecord(this, id, onLoaded); }
    void MaxSize(::uLong value) { DiskCache__set_MaxSize(this, value); }
    void TrimCache() { DiskCache__TrimCache(this); }
    void Update(::app::Experimental::Cache::DiskCacheEntry* _entry) { DiskCache__Update(this, _entry); }
};

}}}


#endif

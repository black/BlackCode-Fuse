// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_DISK_CACHE_READER_H__
#define __APP_EXPERIMENTAL_CACHE_DISK_CACHE_READER_H__

#include <app/Experimental.Cache.ICacheReader.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCache; } } }
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct DiskCacheReaderStream; } } }
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct DiskCacheReader;

struct DiskCacheReader__uType : ::uClassType
{
    ::app::Experimental::Cache::ICacheReader __interface_0;
};

DiskCacheReader__uType* DiskCacheReader__typeof();

void DiskCacheReader___ObjInit(DiskCacheReader* __this);
void DiskCacheReader__Delete(DiskCacheReader* __this);
::uLong DiskCacheReader__get_DataSize(DiskCacheReader* __this);
::app::Uno::IO::Stream* DiskCacheReader__get_Stream(DiskCacheReader* __this);
::uString* DiskCacheReader__GetMeta(DiskCacheReader* __this, ::uString* key);
DiskCacheReader* DiskCacheReader__New_1(::uStatic* __this);

struct DiskCacheReader : ::uObject
{
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> _entry;
    ::uStrong< ::app::Experimental::Cache::DiskCache*> _cache;
    ::uStrong< ::app::Experimental::Cache::DiskCacheReaderStream*> _stream;

    void _ObjInit() { DiskCacheReader___ObjInit(this); }
    void Delete() { DiskCacheReader__Delete(this); }
    ::uLong DataSize() { return DiskCacheReader__get_DataSize(this); }
    ::app::Uno::IO::Stream* Stream() { return DiskCacheReader__get_Stream(this); }
    ::uString* GetMeta(::uString* key) { return DiskCacheReader__GetMeta(this, key); }
};

}}}


#endif

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_DISK_CACHE_WRITER_H__
#define __APP_EXPERIMENTAL_CACHE_DISK_CACHE_WRITER_H__

#include <app/Experimental.Cache.ICacheWriter.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCache; } } }
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Experimental { namespace Cache { struct DiskCacheWriterStream; } } }
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct DiskCacheWriter;

struct DiskCacheWriter__uType : ::uClassType
{
    ::app::Experimental::Cache::ICacheWriter __interface_0;
};

DiskCacheWriter__uType* DiskCacheWriter__typeof();

void DiskCacheWriter___ObjInit(DiskCacheWriter* __this);
void DiskCacheWriter__Abort(DiskCacheWriter* __this);
void DiskCacheWriter__AddMeta(DiskCacheWriter* __this, ::uString* key, ::uString* value);
void DiskCacheWriter__Close(DiskCacheWriter* __this);
::app::Uno::IO::Stream* DiskCacheWriter__get_Stream(DiskCacheWriter* __this);
DiskCacheWriter* DiskCacheWriter__New_1(::uStatic* __this);

struct DiskCacheWriter : ::uObject
{
    ::uStrong< ::app::Experimental::Cache::DiskCacheEntry*> _entry;
    ::uStrong< ::app::Experimental::Cache::DiskCache*> _cache;
    ::uStrong< ::app::Experimental::Cache::DiskCacheWriterStream*> _stream;

    void _ObjInit() { DiskCacheWriter___ObjInit(this); }
    void Abort() { DiskCacheWriter__Abort(this); }
    void AddMeta(::uString* key, ::uString* value) { DiskCacheWriter__AddMeta(this, key, value); }
    void Close() { DiskCacheWriter__Close(this); }
    ::app::Uno::IO::Stream* Stream() { return DiskCacheWriter__get_Stream(this); }
};

}}}


#endif

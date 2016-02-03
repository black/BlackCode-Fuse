// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_DISK_CACHE_WRITER_STREAM_H__
#define __APP_EXPERIMENTAL_CACHE_DISK_CACHE_WRITER_STREAM_H__

#include <app/Experimental.Cache.ProxyStream.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace Cache {

struct DiskCacheWriterStream;

struct DiskCacheWriterStream__uType : ::app::Experimental::Cache::ProxyStream__uType
{
};

DiskCacheWriterStream__uType* DiskCacheWriterStream__typeof();

void DiskCacheWriterStream___ObjInit_2(DiskCacheWriterStream* __this);
bool DiskCacheWriterStream__get_CanRead(DiskCacheWriterStream* __this);
DiskCacheWriterStream* DiskCacheWriterStream__New_2(::uStatic* __this);

struct DiskCacheWriterStream : ::app::Experimental::Cache::ProxyStream
{
    void _ObjInit_2() { DiskCacheWriterStream___ObjInit_2(this); }
};

}}}


#endif

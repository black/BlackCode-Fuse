// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_DISK_CACHE_READER_STREAM_H__
#define __APP_EXPERIMENTAL_CACHE_DISK_CACHE_READER_STREAM_H__

#include <app/Experimental.Cache.ProxyStream.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace Cache {

struct DiskCacheReaderStream;

struct DiskCacheReaderStream__uType : ::app::Experimental::Cache::ProxyStream__uType
{
};

DiskCacheReaderStream__uType* DiskCacheReaderStream__typeof();

void DiskCacheReaderStream___ObjInit_2(DiskCacheReaderStream* __this);
bool DiskCacheReaderStream__get_CanWrite(DiskCacheReaderStream* __this);
DiskCacheReaderStream* DiskCacheReaderStream__New_2(::uStatic* __this);

struct DiskCacheReaderStream : ::app::Experimental::Cache::ProxyStream
{
    void _ObjInit_2() { DiskCacheReaderStream___ObjInit_2(this); }
};

}}}


#endif

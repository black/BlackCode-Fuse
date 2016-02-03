// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_PROXY_STREAM_H__
#define __APP_EXPERIMENTAL_CACHE_PROXY_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace Cache {

struct ProxyStream;

struct ProxyStream__uType : ::app::Uno::IO::Stream__uType
{
};

ProxyStream__uType* ProxyStream__typeof();

void ProxyStream___ObjInit_1(ProxyStream* __this);
void ProxyStream__Close(ProxyStream* __this);
void ProxyStream__Dispose_1(ProxyStream* __this, bool disposing);
void ProxyStream__Flush(ProxyStream* __this);
bool ProxyStream__get_CanRead(ProxyStream* __this);
bool ProxyStream__get_CanSeek(ProxyStream* __this);
bool ProxyStream__get_CanTimeout(ProxyStream* __this);
bool ProxyStream__get_CanWrite(ProxyStream* __this);
::uLong ProxyStream__get_Length(ProxyStream* __this);
::uLong ProxyStream__get_Position(ProxyStream* __this);
int ProxyStream__get_ReadTimeout(ProxyStream* __this);
int ProxyStream__get_WriteTimeout(ProxyStream* __this);
ProxyStream* ProxyStream__New_1(::uStatic* __this);
int ProxyStream__Read(ProxyStream* __this, ::uArray* dst, int byteOffset, int byteCount);
::uLong ProxyStream__Seek(ProxyStream* __this, ::uLong byteOffset, int origin);
void ProxyStream__set_Position(ProxyStream* __this, ::uLong value);
void ProxyStream__set_ReadTimeout(ProxyStream* __this, int value);
void ProxyStream__set_WriteTimeout(ProxyStream* __this, int value);
void ProxyStream__SetLength(ProxyStream* __this, ::uLong value);
void ProxyStream__Write(ProxyStream* __this, ::uArray* src, int byteOffset, int byteCount);

struct ProxyStream : ::app::Uno::IO::Stream
{
    ::uStrong< ::app::Uno::IO::Stream*> Backing;

    void _ObjInit_1() { ProxyStream___ObjInit_1(this); }
};

}}}


#endif

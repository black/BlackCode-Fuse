// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_SOCKETS_NETWORK_STREAM_H__
#define __APP_UNO_NET_SOCKETS_NETWORK_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Sockets { struct Socket; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {

struct NetworkStream;

struct NetworkStream__uType : ::app::Uno::IO::Stream__uType
{
};

NetworkStream__uType* NetworkStream__typeof();

void NetworkStream___ObjInit_1(NetworkStream* __this, ::app::Uno::Net::Sockets::Socket* socket);
void NetworkStream__Flush(NetworkStream* __this);
bool NetworkStream__get_CanRead(NetworkStream* __this);
bool NetworkStream__get_CanSeek(NetworkStream* __this);
bool NetworkStream__get_CanWrite(NetworkStream* __this);
::uLong NetworkStream__get_Length(NetworkStream* __this);
::uLong NetworkStream__get_Position(NetworkStream* __this);
NetworkStream* NetworkStream__New_1(::uStatic* __this, ::app::Uno::Net::Sockets::Socket* socket);
int NetworkStream__Read(NetworkStream* __this, ::uArray* dst, int byteOffset, int byteCount);
::uLong NetworkStream__Seek(NetworkStream* __this, ::uLong byteOffset, int origin);
void NetworkStream__set_Position(NetworkStream* __this, ::uLong value);
void NetworkStream__SetLength(NetworkStream* __this, ::uLong value);
void NetworkStream__Write(NetworkStream* __this, ::uArray* src, int byteOffset, int byteCount);

struct NetworkStream : ::app::Uno::IO::Stream
{
    ::uStrong< ::app::Uno::Net::Sockets::Socket*> _socket;

    void _ObjInit_1(::app::Uno::Net::Sockets::Socket* socket) { NetworkStream___ObjInit_1(this, socket); }
};

}}}}


#endif

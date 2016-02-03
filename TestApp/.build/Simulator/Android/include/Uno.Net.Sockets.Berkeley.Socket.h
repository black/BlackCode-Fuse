// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.19.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Net.Sockets.Socket.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{namespace Berkeley{struct Socket;}}}}}
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// internal sealed extern class Socket :202
// {
::g::Uno::Net::Sockets::Socket_type* Socket_typeof();
void Socket__ctor_1_fn(Socket* __this, int* handle);
void Socket__Accept_fn(Socket* __this, ::g::Uno::Net::Sockets::Socket** __retval);
void Socket__Bind_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint);
void Socket__Close_fn(Socket* __this);
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint);
void Socket__Create1_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval);
void Socket__Listen_fn(Socket* __this, int* backlog);
void Socket__New1_fn(int* handle, Socket** __retval);
void Socket__Poll_fn(Socket* __this, int* milliseconds, int* mode, bool* __retval);
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);
void Socket__Shutdown_fn(Socket* __this, int* how);

struct Socket : ::g::Uno::Net::Sockets::Socket
{
    int _handle;

    void ctor_1(int handle);
    static Socket* Create1(int addressFamily, int socketType, int protocolType);
    static Socket* New1(int handle);
};
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley

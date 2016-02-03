// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_SOCKETS_BERKELEY_BSD_SOCKET_H__
#define __APP_UNO_NET_SOCKETS_BERKELEY_BSD_SOCKET_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {
namespace Berkeley {

struct bsd_socket__uType : ::uClassType
{
};

bsd_socket__uType* bsd_socket__typeof();

int bsd_socket__Accept(::uStatic* __this, int socketHandle_);
int bsd_socket__Bind(::uStatic* __this, int socketHandle_, ::uUInt address_, int port_);
int bsd_socket__Close(::uStatic* __this, int socketHandle);
int bsd_socket__Connect(::uStatic* __this, int socketHandle_, ::uUInt address_, int port_);
::uString* bsd_socket__GetError(::uStatic* __this);
int bsd_socket__GetFamily(::uStatic* __this, int addressFamily);
::uUInt bsd_socket__GetLocalAddress(::uStatic* __this, int socketHandle_);
int bsd_socket__GetLocalPort(::uStatic* __this, int socketHandle_);
int bsd_socket__GetProtocol(::uStatic* __this, int protocolType);
::uUInt bsd_socket__GetRemoteAddress(::uStatic* __this, int socketHandle_);
int bsd_socket__GetRemotePort(::uStatic* __this, int socketHandle_);
::uShort bsd_socket__GetSelectMode(::uStatic* __this, int mode);
int bsd_socket__GetSocketShudown(::uStatic* __this, int how);
int bsd_socket__GetType(::uStatic* __this, int socketType);
int bsd_socket__Listen(::uStatic* __this, int socketHandle, int backlog);
int bsd_socket__Poll(::uStatic* __this, int socketHandle_, ::uShort selectMode_, int milliseconds_);
int bsd_socket__Receive(::uStatic* __this, int socketHandle_, ::uArray* buffer_, int offset_, int length_);
int bsd_socket__Send(::uStatic* __this, int socketHandle_, ::uArray* buffer_, int length_);
int bsd_socket__Send_1(::uStatic* __this, int socketHandle_, ::uArray* buffer_, int offset_, int length_);
int bsd_socket__Shutdown(::uStatic* __this, int socketHandle, int how);
int bsd_socket__socket(::uStatic* __this, int family, int type, int protocol);

}}}}}


#endif

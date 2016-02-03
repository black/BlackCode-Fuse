// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_SOCKETS_BERKELEY_SOCKET_H__
#define __APP_UNO_NET_SOCKETS_BERKELEY_SOCKET_H__

#include <app/Uno.Net.Sockets.Socket.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct EndPoint; } } }

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {
namespace Berkeley {

struct Socket;

struct Socket__uType : ::app::Uno::Net::Sockets::Socket__uType
{
};

Socket__uType* Socket__typeof();

void Socket___ObjInit_1(Socket* __this, int handle);
::app::Uno::Net::Sockets::Socket* Socket__Accept(Socket* __this);
void Socket__Bind(Socket* __this, ::app::Uno::Net::EndPoint* endPoint);
void Socket__Close(Socket* __this);
void Socket__Connect(Socket* __this, ::app::Uno::Net::EndPoint* endPoint);
Socket* Socket__Create_1(::uStatic* __this, int addressFamily, int socketType, int protocolType);
::app::Uno::Net::EndPoint* Socket__get_LocalEndPoint(Socket* __this);
::app::Uno::Net::EndPoint* Socket__get_RemoteEndPoint(Socket* __this);
void Socket__Listen(Socket* __this, int backlog);
Socket* Socket__New_1(::uStatic* __this, int handle);
bool Socket__Poll(Socket* __this, int milliseconds, int mode);
int Socket__Receive(Socket* __this, ::uArray* buffer);
int Socket__Receive_1(Socket* __this, ::uArray* buffer, int offset, int length);
int Socket__Send(Socket* __this, ::uArray* buffer);
int Socket__Send_1(Socket* __this, ::uArray* buffer, int offset, int length);
void Socket__Shutdown(Socket* __this, int how);

struct Socket : ::app::Uno::Net::Sockets::Socket
{
    int _handle;

    void _ObjInit_1(int handle) { Socket___ObjInit_1(this, handle); }
};

}}}}}


#endif

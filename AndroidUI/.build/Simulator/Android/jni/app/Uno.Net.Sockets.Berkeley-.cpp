#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.EndPoint.h>
#include <app/Uno.Net.IPAddress.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Net.Sockets.AddressFamily.h>
#include <app/Uno.Net.Sockets.Berkeley.bsd_socket.h>
#include <app/Uno.Net.Sockets.Berkeley.Socket.h>
#include <app/Uno.Net.Sockets.ProtocolType.h>
#include <app/Uno.Net.Sockets.SelectMode.h>
#include <app/Uno.Net.Sockets.SocketException.h>
#include <app/Uno.Net.Sockets.SocketShutdown.h>
#include <app/Uno.Net.Sockets.SocketType.h>
#include <app/Uno.Object.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <arpa/inet.h>
#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <poll.h>
#include <Socket.android.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {
namespace Berkeley {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bsd_socket__uType* bsd_socket__typeof()
{
    static ::uStaticStrong<bsd_socket__uType*> type;
    if (type != NULL) return type;

    type = (bsd_socket__uType*)::uAllocClassType(sizeof(bsd_socket__uType), "Uno.Net.Sockets.Berkeley.bsd_socket");

    type->SetFunctions(21,
        ::uNewFunction("Accept", bsd_socket__Accept, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Bind", bsd_socket__Bind, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Close", bsd_socket__Close, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Connect", bsd_socket__Connect, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetError", bsd_socket__GetError, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("GetFamily", bsd_socket__GetFamily, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Net::Sockets::AddressFamily__typeof()),
        ::uNewFunction("GetLocalAddress", bsd_socket__GetLocalAddress, 0, true, ::app::Uno::UInt__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetLocalPort", bsd_socket__GetLocalPort, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetProtocol", bsd_socket__GetProtocol, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Net::Sockets::ProtocolType__typeof()),
        ::uNewFunction("GetRemoteAddress", bsd_socket__GetRemoteAddress, 0, true, ::app::Uno::UInt__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetRemotePort", bsd_socket__GetRemotePort, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetSelectMode", bsd_socket__GetSelectMode, 0, true, ::app::Uno::Short__typeof(), ::app::Uno::Net::Sockets::SelectMode__typeof()),
        ::uNewFunction("GetSocketShudown", bsd_socket__GetSocketShudown, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Net::Sockets::SocketShutdown__typeof()),
        ::uNewFunction("GetType", bsd_socket__GetType, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Net::Sockets::SocketType__typeof()),
        ::uNewFunction("Listen", bsd_socket__Listen, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Poll", bsd_socket__Poll, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Short__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Receive", bsd_socket__Receive, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Send", bsd_socket__Send, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof()),
        ::uNewFunction("Send", bsd_socket__Send_1, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Shutdown", bsd_socket__Shutdown, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("socket", bsd_socket__socket, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int bsd_socket__Accept(::uStatic* __this, int socketHandle_)
{
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    socklen_t len = sizeof(struct sockaddr_in);
    return accept(socketHandle_, (struct sockaddr*)&sockAddr, &len);
}

int bsd_socket__Bind(::uStatic* __this, int socketHandle_, ::uUInt address_, int port_)
{
    int socketFD = socketHandle_;
    in_addr_t address = address_;
    int port = port_;
    
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_addr.s_addr = address;
    sockAddr.sin_port = htons(port);
    
    return bind(socketFD, (struct sockaddr*)&sockAddr, sizeof(sockAddr));
}

int bsd_socket__Close(::uStatic* __this, int socketHandle)
{
    return close(socketHandle);
}

int bsd_socket__Connect(::uStatic* __this, int socketHandle_, ::uUInt address_, int port_)
{
    int socketFD = socketHandle_;
    in_addr_t address = address_;
    int port = port_;
    
    struct sockaddr_in sockAddr;
    
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_addr.s_addr = address;
    sockAddr.sin_port = htons(port);
    
    return connect(socketFD, (struct sockaddr*)&sockAddr, sizeof(sockAddr));
}

::uString* bsd_socket__GetError(::uStatic* __this)
{
    char * error = strerror(errno);
    return ::uNewStringUtf8(error);
}

int bsd_socket__GetFamily(::uStatic* __this, int addressFamily)
{
    switch (addressFamily)
    {
        case 2:
        {
            return AF_INET;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Invalid value for AddressFamily")));
}

::uUInt bsd_socket__GetLocalAddress(::uStatic* __this, int socketHandle_)
{
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    socklen_t addrLen = sizeof(sockAddr);
    int result = getsockname(socketHandle_, (struct sockaddr*)&sockAddr, &addrLen);
    return sockAddr.sin_addr.s_addr;
}

int bsd_socket__GetLocalPort(::uStatic* __this, int socketHandle_)
{
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    socklen_t addrLen = sizeof(sockAddr);
    int result = getsockname(socketHandle_, (struct sockaddr*)&sockAddr, &addrLen);
    return ntohs(sockAddr.sin_port);
}

int bsd_socket__GetProtocol(::uStatic* __this, int protocolType)
{
    switch (protocolType)
    {
        case 6:
        {
            return PF_UNSPEC;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Invalid value for ProtocolType")));
}

::uUInt bsd_socket__GetRemoteAddress(::uStatic* __this, int socketHandle_)
{
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    socklen_t addrLen = sizeof(sockAddr);
    int result = getpeername(socketHandle_, (struct sockaddr*)&sockAddr, &addrLen);
    return sockAddr.sin_addr.s_addr;
}

int bsd_socket__GetRemotePort(::uStatic* __this, int socketHandle_)
{
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    socklen_t addrLen = sizeof(sockAddr);
    int result = getpeername(socketHandle_, (struct sockaddr*)&sockAddr, &addrLen);
    return ntohs(sockAddr.sin_port);
}

::uShort bsd_socket__GetSelectMode(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 2:
        {
            return POLLERR;
        }
        case 0:
        {
            return POLLIN;
        }
        case 1:
        {
            return POLLOUT;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Invalid value for SelectMode")));
}

int bsd_socket__GetSocketShudown(::uStatic* __this, int how)
{
    switch (how)
    {
        case 2:
        {
            return SHUT_RDWR;
        }
        case 0:
        {
            return SHUT_RD;
        }
        case 1:
        {
            return SHUT_WR;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Invalid value for SocketShutdown")));
}

int bsd_socket__GetType(::uStatic* __this, int socketType)
{
    switch (socketType)
    {
        case 1:
        {
            return SOCK_STREAM;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Invalid value for SocketType")));
}

int bsd_socket__Listen(::uStatic* __this, int socketHandle, int backlog)
{
    return listen(socketHandle, backlog);
}

int bsd_socket__Poll(::uStatic* __this, int socketHandle_, ::uShort selectMode_, int milliseconds_)
{
    int socketFD = socketHandle_;
    short selectMode = selectMode_;
    int millis = milliseconds_;
    
    struct pollfd pf;
    memset(&pf, 0, sizeof(struct pollfd));
    
    pf.fd = socketFD;
    pf.events |= selectMode;
    
    int result = poll(&pf, 1, millis);
    
    if (0 == result)
    	return 0;
    
    if (-1 == result)
    	return -1;
    
    return ((pf.revents & selectMode) == selectMode);
}

int bsd_socket__Receive(::uStatic* __this, int socketHandle_, ::uArray* buffer_, int offset_, int length_)
{
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
                        int offset = offset_;
    int length = length_;
    
    return recv(socketFD, (void*)(buf + offset), length, 0);
}

int bsd_socket__Send(::uStatic* __this, int socketHandle_, ::uArray* buffer_, int length_)
{
    int socketFD = socketHandle_;
    void * buf = (void*)(buffer_->Ptr());
    int length = length_;
    
    return send(socketFD, buf, length, 0);
}

int bsd_socket__Send_1(::uStatic* __this, int socketHandle_, ::uArray* buffer_, int offset_, int length_)
{
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
    int offset = offset_;
    int length = length_;
    
    return send(socketFD, (void*)(buf + offset), length, 0);
}

int bsd_socket__Shutdown(::uStatic* __this, int socketHandle, int how)
{
    return shutdown(socketHandle, how);
}

int bsd_socket__socket(::uStatic* __this, int family, int type, int protocol)
{
    return socket(family, type, protocol);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Socket__uType* Socket__typeof()
{
    static ::uStaticStrong<Socket__uType*> type;
    if (type != NULL) return type;

    type = (Socket__uType*)::uAllocClassType(sizeof(Socket__uType), "Uno.Net.Sockets.Berkeley.Socket", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Net::Sockets::Socket__typeof());
    type->__fp_Accept = (::app::Uno::Net::Sockets::Socket*(*)(::app::Uno::Net::Sockets::Socket*))Socket__Accept;
    type->__fp_Bind = (void(*)(::app::Uno::Net::Sockets::Socket*, ::app::Uno::Net::EndPoint*))Socket__Bind;
    type->__fp_Close = (void(*)(::app::Uno::Net::Sockets::Socket*))Socket__Close;
    type->__fp_Connect = (void(*)(::app::Uno::Net::Sockets::Socket*, ::app::Uno::Net::EndPoint*))Socket__Connect;
    type->__fp_get_LocalEndPoint = (::app::Uno::Net::EndPoint*(*)(::app::Uno::Net::Sockets::Socket*))Socket__get_LocalEndPoint;
    type->__fp_get_RemoteEndPoint = (::app::Uno::Net::EndPoint*(*)(::app::Uno::Net::Sockets::Socket*))Socket__get_RemoteEndPoint;
    type->__fp_Listen = (void(*)(::app::Uno::Net::Sockets::Socket*, int))Socket__Listen;
    type->__fp_Poll = (bool(*)(::app::Uno::Net::Sockets::Socket*, int, int))Socket__Poll;
    type->__fp_Receive = (int(*)(::app::Uno::Net::Sockets::Socket*, ::uArray*))Socket__Receive;
    type->__fp_Receive_1 = (int(*)(::app::Uno::Net::Sockets::Socket*, ::uArray*, int, int))Socket__Receive_1;
    type->__fp_Send = (int(*)(::app::Uno::Net::Sockets::Socket*, ::uArray*))Socket__Send;
    type->__fp_Send_1 = (int(*)(::app::Uno::Net::Sockets::Socket*, ::uArray*, int, int))Socket__Send_1;
    type->__fp_Shutdown = (void(*)(::app::Uno::Net::Sockets::Socket*, int))Socket__Shutdown;

    type->SetFields(1,
        ::uNewField("_handle", NULL, offsetof(Socket, _handle), ::app::Uno::Int__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("Create", Socket__Create_1, 0, true, Socket__typeof(), ::app::Uno::Net::Sockets::AddressFamily__typeof(), ::app::Uno::Net::Sockets::SocketType__typeof(), ::app::Uno::Net::Sockets::ProtocolType__typeof()));

    ::uRegisterType(type);
    return type;
}

void Socket___ObjInit_1(Socket* __this, int handle)
{
    ::app::Uno::Net::Sockets::Socket___ObjInit(__this);
    __this->_handle = handle;
}

::app::Uno::Net::Sockets::Socket* Socket__Accept(Socket* __this)
{
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Accept(NULL, __this->_handle);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }

    return (::app::Uno::Net::Sockets::Socket*)Socket__New_1(NULL, result);
}

void Socket__Bind(Socket* __this, ::app::Uno::Net::EndPoint* endPoint)
{
    ::app::Uno::Net::IPEndPoint* ip = ::uAs< ::app::Uno::Net::IPEndPoint*>(endPoint, ::app::Uno::Net::IPEndPoint__typeof());

    if (ip != NULL)
    {
        int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Bind(NULL, __this->_handle, ::uPtr< ::app::Uno::Net::IPAddress*>(::uPtr< ::app::Uno::Net::IPEndPoint*>(ip)->Address())->Address(), ::uPtr< ::app::Uno::Net::IPEndPoint*>(ip)->Port());

        if (-1 == result)
        {
            U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
        }
    }
    else
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("EndPoint not supported: "), (::uObject*)endPoint)));
    }
}

void Socket__Close(Socket* __this)
{
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Close(NULL, __this->_handle);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }
}

void Socket__Connect(Socket* __this, ::app::Uno::Net::EndPoint* endPoint)
{
    ::app::Uno::Net::IPEndPoint* ip = ::uAs< ::app::Uno::Net::IPEndPoint*>(endPoint, ::app::Uno::Net::IPEndPoint__typeof());

    if (ip != NULL)
    {
        int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Connect(NULL, __this->_handle, ::uPtr< ::app::Uno::Net::IPAddress*>(::uPtr< ::app::Uno::Net::IPEndPoint*>(ip)->Address())->Address(), ::uPtr< ::app::Uno::Net::IPEndPoint*>(ip)->Port());

        if (-1 == result)
        {
            U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
        }
    }
    else
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("EndPoint not supported: "), (::uObject*)endPoint)));
    }
}

Socket* Socket__Create_1(::uStatic* __this, int addressFamily, int socketType, int protocolType)
{
    int family = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetFamily(NULL, addressFamily);
    int type = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetType(NULL, socketType);
    int protocol = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetProtocol(NULL, protocolType);
    int handle = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__socket(NULL, family, type, protocol);

    if (-1 == handle)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }

    return Socket__New_1(NULL, handle);
}

::app::Uno::Net::EndPoint* Socket__get_LocalEndPoint(Socket* __this)
{
    ::uUInt address = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetLocalAddress(NULL, __this->_handle);
    int port = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetLocalPort(NULL, __this->_handle);
    return (::app::Uno::Net::EndPoint*)::app::Uno::Net::IPEndPoint__New_1(NULL, ::app::Uno::Net::IPAddress__New_2(NULL, address), port);
}

::app::Uno::Net::EndPoint* Socket__get_RemoteEndPoint(Socket* __this)
{
    ::uUInt address = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetRemoteAddress(NULL, __this->_handle);
    int port = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetRemotePort(NULL, __this->_handle);
    return (::app::Uno::Net::EndPoint*)::app::Uno::Net::IPEndPoint__New_1(NULL, ::app::Uno::Net::IPAddress__New_2(NULL, address), port);
}

void Socket__Listen(Socket* __this, int backlog)
{
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Listen(NULL, __this->_handle, backlog);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }
}

Socket* Socket__New_1(::uStatic* __this, int handle)
{
    Socket* inst = (Socket*)::uAllocObject(sizeof(Socket), Socket__typeof());
    inst->_ObjInit_1(handle);
    return inst;
}

bool Socket__Poll(Socket* __this, int milliseconds, int mode)
{
    ::uShort selectMode = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetSelectMode(NULL, mode);
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Poll(NULL, __this->_handle, selectMode, milliseconds);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }

    return result > 0;
}

int Socket__Receive(Socket* __this, ::uArray* buffer)
{
    return __this->Receive_1(buffer, 0, ::uPtr< ::uArray*>(buffer)->Length());
}

int Socket__Receive_1(Socket* __this, ::uArray* buffer, int offset, int length)
{
    if ((offset + length) > ::uPtr< ::uArray*>(buffer)->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Offset and length out of range")));
    }

    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Receive(NULL, __this->_handle, buffer, offset, length);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }

    return result;
}

int Socket__Send(Socket* __this, ::uArray* buffer)
{
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Send(NULL, __this->_handle, buffer, ::uPtr< ::uArray*>(buffer)->Length());

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }

    return result;
}

int Socket__Send_1(Socket* __this, ::uArray* buffer, int offset, int length)
{
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Send_1(NULL, __this->_handle, buffer, offset, length);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }

    return result;
}

void Socket__Shutdown(Socket* __this, int how)
{
    int shutdownHow = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetSocketShudown(NULL, how);
    int result = ::app::Uno::Net::Sockets::Berkeley::bsd_socket__Shutdown(NULL, __this->_handle, shutdownHow);

    if (-1 == result)
    {
        U_THROW(::app::Uno::Net::Sockets::SocketException__New_3(NULL, ::app::Uno::Net::Sockets::Berkeley::bsd_socket__GetError(NULL)));
    }
}

}}}}}

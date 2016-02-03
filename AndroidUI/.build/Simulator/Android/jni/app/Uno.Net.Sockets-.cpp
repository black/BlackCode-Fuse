#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.SeekOrigin.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.EndPoint.h>
#include <app/Uno.Net.IPAddress.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Net.Sockets.AddressFamily.h>
#include <app/Uno.Net.Sockets.Berkeley.Socket.h>
#include <app/Uno.Net.Sockets.NetworkStream.h>
#include <app/Uno.Net.Sockets.ProtocolType.h>
#include <app/Uno.Net.Sockets.SelectMode.h>
#include <app/Uno.Net.Sockets.Socket.h>
#include <app/Uno.Net.Sockets.SocketException.h>
#include <app/Uno.Net.Sockets.SocketShutdown.h>
#include <app/Uno.Net.Sockets.SocketType.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* AddressFamily__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Sockets.AddressFamily", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "InterNetwork", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NetworkStream__uType* NetworkStream__typeof()
{
    static ::uStaticStrong<NetworkStream__uType*> type;
    if (type != NULL) return type;

    type = (NetworkStream__uType*)::uAllocClassType(sizeof(NetworkStream__uType), "Uno.Net.Sockets.NetworkStream", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))NetworkStream__Flush;
    type->__fp_get_CanRead = (bool(*)(::app::Uno::IO::Stream*))NetworkStream__get_CanRead;
    type->__fp_get_CanSeek = (bool(*)(::app::Uno::IO::Stream*))NetworkStream__get_CanSeek;
    type->__fp_get_CanWrite = (bool(*)(::app::Uno::IO::Stream*))NetworkStream__get_CanWrite;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))NetworkStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))NetworkStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))NetworkStream__Read;
    type->__fp_Seek = (::uLong(*)(::app::Uno::IO::Stream*, ::uLong, int))NetworkStream__Seek;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))NetworkStream__set_Position;
    type->__fp_SetLength = (void(*)(::app::Uno::IO::Stream*, ::uLong))NetworkStream__SetLength;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))NetworkStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(NetworkStream__uType, __interface_0));

    type->SetStrongRefs(
        "_socket", offsetof(NetworkStream, _socket));

    type->SetFields(1,
        ::uNewField("_socket", NULL, offsetof(NetworkStream, _socket), ::app::Uno::Net::Sockets::Socket__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NetworkStream__New_1, 0, true, NetworkStream__typeof(), ::app::Uno::Net::Sockets::Socket__typeof()));

    ::uRegisterType(type);
    return type;
}

void NetworkStream___ObjInit_1(NetworkStream* __this, ::app::Uno::Net::Sockets::Socket* socket)
{
    ::app::Uno::IO::Stream___ObjInit(__this);
    __this->_socket = socket;
}

void NetworkStream__Flush(NetworkStream* __this)
{
}

bool NetworkStream__get_CanRead(NetworkStream* __this)
{
    return true;
}

bool NetworkStream__get_CanSeek(NetworkStream* __this)
{
    return false;
}

bool NetworkStream__get_CanWrite(NetworkStream* __this)
{
    return true;
}

::uLong NetworkStream__get_Length(NetworkStream* __this)
{
    return 0ll;
}

::uLong NetworkStream__get_Position(NetworkStream* __this)
{
    return 0ll;
}

NetworkStream* NetworkStream__New_1(::uStatic* __this, ::app::Uno::Net::Sockets::Socket* socket)
{
    NetworkStream* inst = (NetworkStream*)::uAllocObject(sizeof(NetworkStream), NetworkStream__typeof());
    inst->_ObjInit_1(socket);
    return inst;
}

int NetworkStream__Read(NetworkStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    return ::uPtr< ::app::Uno::Net::Sockets::Socket*>(__this->_socket)->Receive_1(dst, byteOffset, byteCount);
}

::uLong NetworkStream__Seek(NetworkStream* __this, ::uLong byteOffset, int origin)
{
    return 0ll;
}

void NetworkStream__set_Position(NetworkStream* __this, ::uLong value)
{
}

void NetworkStream__SetLength(NetworkStream* __this, ::uLong value)
{
}

void NetworkStream__Write(NetworkStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    int sent = ::uPtr< ::app::Uno::Net::Sockets::Socket*>(__this->_socket)->Send_1(src, byteOffset, byteCount);

    if (sent != byteCount)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("sent != byteCount")));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ProtocolType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Sockets.ProtocolType", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "Tcp", 6LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SelectMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Sockets.SelectMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Read", 0LL,
        "Write", 1LL,
        "Error", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Socket__uType* Socket__typeof()
{
    static ::uStaticStrong<Socket__uType*> type;
    if (type != NULL) return type;

    type = (Socket__uType*)::uAllocClassType(sizeof(Socket__uType), "Uno.Net.Sockets.Socket", false, 0, 0, 0);

    type->SetFunctions(15,
        ::uNewFunction("Accept", type->__fp_Accept, offsetof(Socket__uType, __fp_Accept), false, Socket__typeof()),
        ::uNewFunctionVoid("Bind", type->__fp_Bind, offsetof(Socket__uType, __fp_Bind), false, ::app::Uno::Net::EndPoint__typeof()),
        ::uNewFunctionVoid("Close", type->__fp_Close, offsetof(Socket__uType, __fp_Close), false),
        ::uNewFunctionVoid("Connect", type->__fp_Connect, offsetof(Socket__uType, __fp_Connect), false, ::app::Uno::Net::EndPoint__typeof()),
        ::uNewFunctionVoid("Connect", Socket__Connect_1, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Create", Socket__Create, 0, true, Socket__typeof(), ::app::Uno::Net::Sockets::AddressFamily__typeof(), ::app::Uno::Net::Sockets::SocketType__typeof(), ::app::Uno::Net::Sockets::ProtocolType__typeof()),
        ::uNewFunction("get_LocalEndPoint", type->__fp_get_LocalEndPoint, offsetof(Socket__uType, __fp_get_LocalEndPoint), false, ::app::Uno::Net::EndPoint__typeof()),
        ::uNewFunction("get_RemoteEndPoint", type->__fp_get_RemoteEndPoint, offsetof(Socket__uType, __fp_get_RemoteEndPoint), false, ::app::Uno::Net::EndPoint__typeof()),
        ::uNewFunctionVoid("Listen", type->__fp_Listen, offsetof(Socket__uType, __fp_Listen), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Poll", type->__fp_Poll, offsetof(Socket__uType, __fp_Poll), false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Net::Sockets::SelectMode__typeof()),
        ::uNewFunction("Receive", type->__fp_Receive, offsetof(Socket__uType, __fp_Receive), false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("Receive", type->__fp_Receive_1, offsetof(Socket__uType, __fp_Receive_1), false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Send", type->__fp_Send, offsetof(Socket__uType, __fp_Send), false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("Send", type->__fp_Send_1, offsetof(Socket__uType, __fp_Send_1), false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Shutdown", type->__fp_Shutdown, offsetof(Socket__uType, __fp_Shutdown), false, ::app::Uno::Net::Sockets::SocketShutdown__typeof()));

    ::uRegisterType(type);
    return type;
}

void Socket___ObjInit(Socket* __this)
{
}

void Socket__Connect_1(Socket* __this, ::uString* address, int port)
{
    ::app::Uno::Net::IPEndPoint* endPoint = ::app::Uno::Net::IPEndPoint__New_1(NULL, ::app::Uno::Net::IPAddress__Parse(NULL, address), port);
    __this->Connect((::app::Uno::Net::EndPoint*)endPoint);
}

Socket* Socket__Create(::uStatic* __this, int addressFamily, int socketType, int protocolType)
{
    {
        return (Socket*)::app::Uno::Net::Sockets::Berkeley::Socket__Create_1(NULL, addressFamily, socketType, protocolType);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Platform not supported")));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SocketException__uType* SocketException__typeof()
{
    static ::uStaticStrong<SocketException__uType*> type;
    if (type != NULL) return type;

    type = (SocketException__uType*)::uAllocClassType(sizeof(SocketException__uType), "Uno.Net.Sockets.SocketException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", SocketException__New_3, 0, true, SocketException__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void SocketException___ObjInit_2(SocketException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

SocketException* SocketException__New_3(::uStatic* __this, ::uString* message)
{
    SocketException* inst = (SocketException*)::uAllocObject(sizeof(SocketException), SocketException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SocketShutdown__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Sockets.SocketShutdown", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Receive", 0LL,
        "Send", 1LL,
        "Both", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SocketType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Sockets.SocketType", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "Stream", 1LL);

    ::uRegisterType(type);
    return type;
}

}}}}

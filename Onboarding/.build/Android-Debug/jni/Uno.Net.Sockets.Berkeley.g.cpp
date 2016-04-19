// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

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
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.Net.Sockets.Berkeley.bsd_socket.h>
#include <Uno.Net.Sockets.Berkeley.Socket.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.20.1\$.uno(384)
// -------------------------------------------------------------

// internal static extern class bsd_socket :384
// {
uClassType* bsd_socket_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Sockets.Berkeley.bsd_socket", options);
    return type;
}

// public static extern string GetError() :440
void bsd_socket__GetError_fn(uString** __retval)
{
    *__retval = bsd_socket::GetError();
}

// public static extern int Receive(int socketHandle, byte[] buffer, int offset, int length) :422
void bsd_socket__Receive_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval)
{
    *__retval = bsd_socket::Receive(*socketHandle_, buffer_, *offset_, *length_);
}

// public static extern int Send(int socketHandle, byte[] buffer, int offset, int length) :419
void bsd_socket__Send1_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval)
{
    *__retval = bsd_socket::Send1(*socketHandle_, buffer_, *offset_, *length_);
}

// public static extern string GetError() [static] :440
uString* bsd_socket::GetError()
{
    char * error = strerror(errno);
    return ::uNewStringUtf8(error);
}

// public static extern int Receive(int socketHandle, byte[] buffer, int offset, int length) [static] :422
int bsd_socket::Receive(int socketHandle_, uArray* buffer_, int offset_, int length_)
{
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
                        int offset = offset_;
    int length = length_;
    
    return recv(socketFD, (void*)(buf + offset), length, 0);
}

// public static extern int Send(int socketHandle, byte[] buffer, int offset, int length) [static] :419
int bsd_socket::Send1(int socketHandle_, uArray* buffer_, int offset_, int length_)
{
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
    int offset = offset_;
    int length = length_;
    
    return send(socketFD, (void*)(buf + offset), length, 0);
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.20.1\$.uno(202)
// -------------------------------------------------------------

// internal sealed extern class Socket :202
// {
::g::Uno::Net::Sockets::Socket_type* Socket_typeof()
{
    static uSStrong< ::g::Uno::Net::Sockets::Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(::g::Uno::Net::Sockets::Socket_type);
    type = (::g::Uno::Net::Sockets::Socket_type*)uClassType::New("Uno.Net.Sockets.Berkeley.Socket", options);
    type->SetBase(::g::Uno::Net::Sockets::Socket_typeof());
    type->fp_Receive1 = (void(*)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*))Socket__Receive1_fn;
    type->fp_Send1 = (void(*)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*))Socket__Send1_fn;
    ::STRINGS[0] = uString::Const("Offset and length out of range");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Sockets::Berkeley::Socket, _handle), 0);
    return type;
}

// public override sealed int Receive(byte[] buffer, int offset, int length) :296
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    int offset_ = *offset;
    int length_ = *length;

    if ((offset_ + length_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"Offset and ...*/]));

    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Receive(__this->_handle, buffer, offset_, length_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result, void();
}

// public override sealed int Send(byte[] buffer, int offset, int length) :279
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    int offset_ = *offset;
    int length_ = *length;
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Send1(__this->_handle, buffer, offset_, length_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result, void();
}
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley

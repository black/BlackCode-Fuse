// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.20.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public abstract class Socket :636
// {
struct Socket_type : uType
{
    void(*fp_Accept)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::Sockets::Socket**);
    void(*fp_Bind)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::EndPoint*);
    void(*fp_Close)(::g::Uno::Net::Sockets::Socket*);
    void(*fp_Connect1)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::EndPoint*);
    void(*fp_Listen)(::g::Uno::Net::Sockets::Socket*, int*);
    void(*fp_Poll)(::g::Uno::Net::Sockets::Socket*, int*, int*, bool*);
    void(*fp_Receive1)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*);
    void(*fp_Send1)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*);
    void(*fp_Shutdown)(::g::Uno::Net::Sockets::Socket*, int*);
};

Socket_type* Socket_typeof();
void Socket__ctor__fn(Socket* __this);
void Socket__Create_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval);

struct Socket : uObject
{
    void ctor_();
    Socket* Accept() { Socket* __retval; return (((Socket_type*)__type)->fp_Accept)(this, &__retval), __retval; }
    void Bind(::g::Uno::Net::EndPoint* endPoint) { (((Socket_type*)__type)->fp_Bind)(this, endPoint); }
    void Close() { (((Socket_type*)__type)->fp_Close)(this); }
    void Connect1(::g::Uno::Net::EndPoint* endPoint) { (((Socket_type*)__type)->fp_Connect1)(this, endPoint); }
    void Listen(int backlog) { (((Socket_type*)__type)->fp_Listen)(this, &backlog); }
    bool Poll(int milliseconds, int mode) { bool __retval; return (((Socket_type*)__type)->fp_Poll)(this, &milliseconds, &mode, &__retval), __retval; }
    int Receive1(uArray* buffer, int offset, int length) { int __retval; return (((Socket_type*)__type)->fp_Receive1)(this, buffer, &offset, &length, &__retval), __retval; }
    int Send1(uArray* buffer, int offset, int length) { int __retval; return (((Socket_type*)__type)->fp_Send1)(this, buffer, &offset, &length, &__retval), __retval; }
    void Shutdown(int how) { (((Socket_type*)__type)->fp_Shutdown)(this, &how); }
    static Socket* Create(int addressFamily, int socketType, int protocolType);
};
// }

}}}} // ::g::Uno::Net::Sockets

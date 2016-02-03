// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_SOCKETS_SOCKET_H__
#define __APP_UNO_NET_SOCKETS_SOCKET_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct EndPoint; } } }

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {

struct Socket;

struct Socket__uType : ::uClassType
{
    Socket*(*__fp_Accept)(Socket*);
    void(*__fp_Bind)(Socket*, ::app::Uno::Net::EndPoint*);
    void(*__fp_Close)(Socket*);
    void(*__fp_Connect)(Socket*, ::app::Uno::Net::EndPoint*);
    ::app::Uno::Net::EndPoint*(*__fp_get_LocalEndPoint)(Socket*);
    ::app::Uno::Net::EndPoint*(*__fp_get_RemoteEndPoint)(Socket*);
    void(*__fp_Listen)(Socket*, int);
    bool(*__fp_Poll)(Socket*, int, int);
    int(*__fp_Receive)(Socket*, ::uArray*);
    int(*__fp_Receive_1)(Socket*, ::uArray*, int, int);
    int(*__fp_Send)(Socket*, ::uArray*);
    int(*__fp_Send_1)(Socket*, ::uArray*, int, int);
    void(*__fp_Shutdown)(Socket*, int);
};

Socket__uType* Socket__typeof();

void Socket___ObjInit(Socket* __this);
void Socket__Connect_1(Socket* __this, ::uString* address, int port);
Socket* Socket__Create(::uStatic* __this, int addressFamily, int socketType, int protocolType);

struct Socket : ::uObject
{
    void _ObjInit() { Socket___ObjInit(this); }
    Socket* Accept() { return (((Socket__uType*)this->__obj_type)->__fp_Accept)(this); }
    void Bind(::app::Uno::Net::EndPoint* endPoint) { (((Socket__uType*)this->__obj_type)->__fp_Bind)(this, endPoint); }
    void Close() { (((Socket__uType*)this->__obj_type)->__fp_Close)(this); }
    void Connect(::app::Uno::Net::EndPoint* endPoint) { (((Socket__uType*)this->__obj_type)->__fp_Connect)(this, endPoint); }
    void Connect_1(::uString* address, int port) { Socket__Connect_1(this, address, port); }
    ::app::Uno::Net::EndPoint* LocalEndPoint() { return (((Socket__uType*)this->__obj_type)->__fp_get_LocalEndPoint)(this); }
    ::app::Uno::Net::EndPoint* RemoteEndPoint() { return (((Socket__uType*)this->__obj_type)->__fp_get_RemoteEndPoint)(this); }
    void Listen(int backlog) { (((Socket__uType*)this->__obj_type)->__fp_Listen)(this, backlog); }
    bool Poll(int milliseconds, int mode) { return (((Socket__uType*)this->__obj_type)->__fp_Poll)(this, milliseconds, mode); }
    int Receive(::uArray* buffer) { return (((Socket__uType*)this->__obj_type)->__fp_Receive)(this, buffer); }
    int Receive_1(::uArray* buffer, int offset, int length) { return (((Socket__uType*)this->__obj_type)->__fp_Receive_1)(this, buffer, offset, length); }
    int Send(::uArray* buffer) { return (((Socket__uType*)this->__obj_type)->__fp_Send)(this, buffer); }
    int Send_1(::uArray* buffer, int offset, int length) { return (((Socket__uType*)this->__obj_type)->__fp_Send_1)(this, buffer, offset, length); }
    void Shutdown(int how) { (((Socket__uType*)this->__obj_type)->__fp_Shutdown)(this, how); }
};

}}}}


#endif

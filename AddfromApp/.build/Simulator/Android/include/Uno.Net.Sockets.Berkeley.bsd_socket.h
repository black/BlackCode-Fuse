// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.20.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// internal static extern class bsd_socket :384
// {
uClassType* bsd_socket_typeof();
void bsd_socket__Accept_fn(int* socketHandle_, int* __retval);
void bsd_socket__Bind_fn(int* socketHandle_, uint32_t* address_, int* port_, int* __retval);
void bsd_socket__Close_fn(int* socketHandle, int* __retval);
void bsd_socket__Connect_fn(int* socketHandle_, uint32_t* address_, int* port_, int* __retval);
void bsd_socket__GetError_fn(uString** __retval);
void bsd_socket__GetFamily_fn(int* addressFamily, int* __retval);
void bsd_socket__GetProtocol_fn(int* protocolType, int* __retval);
void bsd_socket__GetSelectMode_fn(int* mode, int16_t* __retval);
void bsd_socket__GetSocketShudown_fn(int* how, int* __retval);
void bsd_socket__GetType_fn(int* socketType, int* __retval);
void bsd_socket__Listen_fn(int* socketHandle, int* backlog, int* __retval);
void bsd_socket__Poll_fn(int* socketHandle_, int16_t* selectMode_, int* milliseconds_, int* __retval);
void bsd_socket__Receive_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval);
void bsd_socket__Send1_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval);
void bsd_socket__Shutdown_fn(int* socketHandle, int* how, int* __retval);
void bsd_socket__socket_fn(int* family, int* type, int* protocol, int* __retval);

struct bsd_socket : uObject
{
    static int Accept(int socketHandle_);
    static int Bind(int socketHandle_, uint32_t address_, int port_);
    static int Close(int socketHandle);
    static int Connect(int socketHandle_, uint32_t address_, int port_);
    static uString* GetError();
    static int GetFamily(int addressFamily);
    static int GetProtocol(int protocolType);
    static int16_t GetSelectMode(int mode);
    static int GetSocketShudown(int how);
    static int GetType(int socketType);
    static int Listen(int socketHandle, int backlog);
    static int Poll(int socketHandle_, int16_t selectMode_, int milliseconds_);
    static int Receive(int socketHandle_, uArray* buffer_, int offset_, int length_);
    static int Send1(int socketHandle_, uArray* buffer_, int offset_, int length_);
    static int Shutdown(int socketHandle, int how);
    static int socket(int family, int type, int protocol);
};
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley

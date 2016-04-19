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
void bsd_socket__GetError_fn(uString** __retval);
void bsd_socket__Receive_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval);
void bsd_socket__Send1_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval);

struct bsd_socket : uObject
{
    static uString* GetError();
    static int Receive(int socketHandle_, uArray* buffer_, int offset_, int length_);
    static int Send1(int socketHandle_, uArray* buffer_, int offset_, int length_);
};
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley

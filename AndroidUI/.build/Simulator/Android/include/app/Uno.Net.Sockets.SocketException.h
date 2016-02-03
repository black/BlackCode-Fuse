// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_SOCKETS_SOCKET_EXCEPTION_H__
#define __APP_UNO_NET_SOCKETS_SOCKET_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Sockets {

struct SocketException;

struct SocketException__uType : ::app::Uno::Exception__uType
{
};

SocketException__uType* SocketException__typeof();

void SocketException___ObjInit_2(SocketException* __this, ::uString* message);
SocketException* SocketException__New_3(::uStatic* __this, ::uString* message);

struct SocketException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { SocketException___ObjInit_2(this, message); }
};

}}}}


#endif

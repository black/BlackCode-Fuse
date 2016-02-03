// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_I_P_END_POINT_H__
#define __APP_UNO_NET_I_P_END_POINT_H__

#include <app/Uno.Net.EndPoint.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPAddress; } } }

namespace app {
namespace Uno {
namespace Net {

struct IPEndPoint;

struct IPEndPoint__uType : ::app::Uno::Net::EndPoint__uType
{
};

IPEndPoint__uType* IPEndPoint__typeof();

void IPEndPoint___ObjInit_1(IPEndPoint* __this, ::app::Uno::Net::IPAddress* address, int port);
::app::Uno::Net::IPAddress* IPEndPoint__get_Address(IPEndPoint* __this);
int IPEndPoint__get_Port(IPEndPoint* __this);
IPEndPoint* IPEndPoint__New_1(::uStatic* __this, ::app::Uno::Net::IPAddress* address, int port);
void IPEndPoint__set_Address(IPEndPoint* __this, ::app::Uno::Net::IPAddress* value);
void IPEndPoint__set_Port(IPEndPoint* __this, int value);
::uString* IPEndPoint__ToString(IPEndPoint* __this);

struct IPEndPoint : ::app::Uno::Net::EndPoint
{
    int _Port;
    ::uStrong< ::app::Uno::Net::IPAddress*> _Address;

    void _ObjInit_1(::app::Uno::Net::IPAddress* address, int port) { IPEndPoint___ObjInit_1(this, address, port); }
    ::app::Uno::Net::IPAddress* Address() { return IPEndPoint__get_Address(this); }
    int Port() { return IPEndPoint__get_Port(this); }
    void Address(::app::Uno::Net::IPAddress* value) { IPEndPoint__set_Address(this, value); }
    void Port(int value) { IPEndPoint__set_Port(this, value); }
};

}}}


#endif

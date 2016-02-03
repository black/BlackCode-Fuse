// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_I_P_ADDRESS_H__
#define __APP_UNO_NET_I_P_ADDRESS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Net {

struct IPAddress;

extern ::uStaticStrong< IPAddress*> IPAddress__Any;
extern ::uStaticStrong< IPAddress*> IPAddress__Broadcast;
extern ::uStaticStrong< IPAddress*> IPAddress__Loopback;

struct IPAddress__uType : ::uClassType
{
};

IPAddress__uType* IPAddress__typeof();

void IPAddress___ObjInit(IPAddress* __this, ::uArray* octets);
void IPAddress___ObjInit_1(IPAddress* __this, ::uUInt address);
void IPAddress___TypeInit(::uStatic* __this);
::uUInt IPAddress__get_Address(IPAddress* __this);
::uArray* IPAddress__GetAddressBytes(IPAddress* __this);
IPAddress* IPAddress__New_1(::uStatic* __this, ::uArray* octets);
IPAddress* IPAddress__New_2(::uStatic* __this, ::uUInt address);
IPAddress* IPAddress__Parse(::uStatic* __this, ::uString* address);
::uString* IPAddress__ToString(IPAddress* __this);

struct IPAddress : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _address;

    void _ObjInit(::uArray* octets) { IPAddress___ObjInit(this, octets); }
    void _ObjInit_1(::uUInt address) { IPAddress___ObjInit_1(this, address); }
    ::uUInt Address() { return IPAddress__get_Address(this); }
    ::uArray* GetAddressBytes() { return IPAddress__GetAddressBytes(this); }
};

}}}


#endif
